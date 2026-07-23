/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x140632930
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14013C4F0 (RtlUnicodeStringPrintf.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     PnpValidateRegistryString @ 0x1401CF3F4 (PnpValidateRegistryString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401CF540 (RtlUnicodeStringPrintfEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140539704 (PnpRegSzToString.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int16 v4; // ax
  NTSTATUS v9; // ebx
  unsigned int *v10; // rdi
  _WORD *v11; // rcx
  unsigned __int16 Length; // bx
  wchar_t *StringRoutine; // rax
  const WCHAR *v14; // rsi
  NTSTATUS RegistryValue; // ebx
  unsigned int v16; // edx
  unsigned __int16 v17; // r15
  int v18; // esi
  __int64 v19; // rsi
  UNICODE_STRING v20; // xmm0
  HANDLE KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-41h] BYREF
  int v24; // [rsp+50h] [rbp-31h] BYREF
  char *v25; // [rsp+58h] [rbp-29h]
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  v4 = *a2;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( v4 > 4u && (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 == 37) && v11[((unsigned __int64)v4 >> 1) - 1] == 37 )
  {
    v24 = 0;
    RemainingString.Buffer = L"Strings";
    ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
    v25 = 0LL;
    ObjectAttributes.ObjectName = &RemainingString;
    *(_DWORD *)&RemainingString.Length = 1048590;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      UnicodeString.Length = *a2 - 4;
      Length = UnicodeString.Length;
      UnicodeString.MaximumLength = UnicodeString.Length + 2;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(UnicodeString.Length + 2));
      UnicodeString.Buffer = StringRoutine;
      v14 = StringRoutine;
      if ( !StringRoutine )
      {
LABEL_6:
        v9 = -1073741670;
        goto LABEL_26;
      }
      memmove(StringRoutine, (const void *)(*((_QWORD *)a2 + 1) + 2LL), Length);
      v14[(unsigned __int64)Length >> 1] = 0;
      RegistryValue = IopGetRegistryValue(KeyHandle, v14, 0, &P);
      RtlFreeAnsiString(&UnicodeString);
      if ( RegistryValue >= 0 )
      {
        v10 = (unsigned int *)P;
        if ( PnpValidateRegistryString(P) )
        {
          PnpRegSzToString((unsigned int *)((char *)v10 + v10[2]), v10[3], &P);
          LOWORD(v24) = (_WORD)P;
          HIWORD(v24) = *((_WORD *)v10 + 6);
          v25 = (char *)v10 + v10[2];
        }
        else
        {
          ExFreePoolWithTag(v10, 0);
          v10 = 0LL;
        }
      }
    }
    v16 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
    if ( v25 )
      v16 += (unsigned __int16)v24 + 2;
    if ( (unsigned __int64)v16 + 2 > 0xFFFE )
    {
      v9 = -1073741562;
      goto LABEL_26;
    }
    DestinationString.Length = v16;
    DestinationString.MaximumLength = v16 + 2;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v16 + 2));
    if ( !DestinationString.Buffer )
      goto LABEL_6;
    v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
    if ( v9 >= 0 )
    {
      v17 = DestinationString.Length;
      v18 = DestinationString.Length >> 1;
      if ( v25 )
      {
        v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v24);
        if ( v9 < 0 )
          goto LABEL_26;
        DestinationString.Length = RemainingString.Length + v17;
        v19 = (unsigned int)(v18 + 1);
      }
      else
      {
        v19 = v18 - (*a2 >> 1);
      }
      v20 = DestinationString;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      *(UNICODE_STRING *)a3 = v20;
      if ( a4 )
        RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v19));
    }
  }
  else
  {
    if ( !PnpDuplicateUnicodeString(a3, (__int64)a2) )
      goto LABEL_6;
    if ( a4 )
      *a4 = *(UNICODE_STRING *)a3;
  }
LABEL_26:
  RtlFreeAnsiString(&DestinationString);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
