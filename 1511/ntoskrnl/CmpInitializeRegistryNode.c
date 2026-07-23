/*
 * XREFs of CmpInitializeRegistryNode @ 0x14051E0D8
 * Callers:
 *     CmLogMcUpdateStatus @ 0x1401AA1EC (CmLogMcUpdateStatus.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14051DCB4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetupConfigurationTree @ 0x140743B30 (CmpSetupConfigurationTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1403E18C4 (RtlIntegerToChar.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 */

NTSTATUS __fastcall CmpInitializeRegistryNode(__int64 a1, void *a2, HANDLE *a3, int a4, int a5, __int64 a6)
{
  ULONG v9; // esi
  UNICODE_STRING *v10; // rax
  NTSTATUS result; // eax
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  HANDLE v14; // rbx
  NTSTATUS v15; // r14d
  NTSTATUS v16; // ebx
  const void *v17; // rdx
  _QWORD *PoolWithTag; // rbx
  unsigned int v19; // eax
  size_t v20; // r8
  HANDLE KeyHandle; // [rsp+40h] [rbp-A1h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-99h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-91h] BYREF
  UNICODE_STRING v24; // [rsp+60h] [rbp-81h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-71h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-61h] BYREF
  _STRING DestinationString; // [rsp+B0h] [rbp-31h] BYREF
  CHAR String[16]; // [rsp+C0h] [rbp-21h] BYREF
  char v29; // [rsp+D0h] [rbp-11h] BYREF

  v9 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
    *(_DWORD *)(a1 + 28) = 0;
  v10 = &CmTypeName + *(int *)(a1 + 28);
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = v10;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v12 = *(int *)(a1 + 28);
      if ( (unsigned int)v12 >= 0x2A )
      {
        v13 = 0;
      }
      else
      {
        v13 = *(_WORD *)(a6 + 2 * v12);
        *(_WORD *)(a6 + 2LL * *(int *)(a1 + 28)) = v13 + 1;
      }
      RtlIntegerToChar(v13, 0xAu, 0xCu, String);
      RtlInitAnsiString(&DestinationString, String);
      *(_DWORD *)&v24.Length = 1572864;
      v24.Buffer = (wchar_t *)&v29;
      RtlAnsiStringToUnicodeString(&v24, &DestinationString, 0);
      v14 = KeyHandle;
      ObjectAttributes.ObjectName = &v24;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = KeyHandle;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 64;
      v15 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      NtClose(v14);
      if ( v15 < 0 )
        return v15;
    }
    RtlInitUnicodeString(&ValueName, L"Component Information");
    v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, (PVOID)(a1 + 32), 0x10u);
    if ( v16 < 0
      || *(_DWORD *)(a1 + 52)
      && ((RtlInitUnicodeString(&ValueName, L"Identifier"),
           RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 56)),
           v16 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u),
           v16 < 0)
       || (v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2),
           RtlFreeAnsiString(&UnicodeString),
           v16 < 0)) )
    {
      NtClose(KeyHandle);
      return v16;
    }
    RtlInitUnicodeString(&ValueName, L"Configuration Data");
    v17 = *(const void **)(a1 + 64);
    if ( !v17 )
      goto LABEL_13;
    v19 = *(_DWORD *)(a1 + 48);
    v9 = v19 + 8;
    if ( v19 + 8 > (unsigned int)CmpConfigurationAreaSize )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
      if ( !PoolWithTag )
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
LABEL_13:
        PoolWithTag = CmpConfigurationData;
LABEL_14:
        if ( !*(_QWORD *)(a1 + 64) )
        {
          PoolWithTag[1] = 0LL;
          v9 = 16;
        }
        *((_DWORD *)PoolWithTag + 1) = a5;
        *(_DWORD *)PoolWithTag = a4;
        v16 = ZwSetValueKey(KeyHandle, &ValueName, 0, 9u, PoolWithTag, v9);
        if ( v16 >= 0 )
        {
          *a3 = KeyHandle;
          return 0;
        }
        ZwClose(KeyHandle);
        return v16;
      }
      LODWORD(CmpConfigurationAreaSize) = v9;
      ExFreePoolWithTag(CmpConfigurationData, 0);
      v20 = *(unsigned int *)(a1 + 48);
      v17 = *(const void **)(a1 + 64);
      CmpConfigurationData = PoolWithTag;
    }
    else
    {
      PoolWithTag = CmpConfigurationData;
      v20 = v19;
    }
    memmove(PoolWithTag + 1, v17, v20);
    goto LABEL_14;
  }
  return result;
}
