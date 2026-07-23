/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpValidateMultiSzData @ 0x1401CF37C (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryDword @ 0x1401CF3AC (PnpValidateRegistryDword.c)
 *     PnpValidateRegistryString @ 0x1401CF3F4 (PnpValidateRegistryString.c)
 *     PnpValidateStringData @ 0x1401CF488 (PnpValidateStringData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140539704 (PnpRegSzToString.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // ebx
  unsigned int *v7; // r15
  __int64 v8; // r8
  int ObjectProperty; // eax
  int v10; // r14d
  unsigned int v11; // esi
  _DWORD *p_Data1; // rdi
  int Data1_low; // ecx
  _DWORD *PoolWithTag; // rax
  PGUID v16; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-21h] BYREF
  __int64 v18; // [rsp+78h] [rbp-11h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-9h] BYREF
  GUID Guid; // [rsp+90h] [rbp+7h] BYREF
  int v21; // [rsp+A0h] [rbp+17h]

  *(_QWORD *)&GuidString.Length = 0LL;
  v16 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &GuidString);
  if ( RegistryValue < 0 )
    goto LABEL_52;
  v7 = *(unsigned int **)&GuidString.Length;
  if ( !PnpValidateRegistryString(*(_DWORD **)&GuidString.Length) )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_53;
  }
  PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], &GuidString);
  GuidString.MaximumLength = *((_WORD *)v7 + 6);
  GuidString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue < 0 )
    goto LABEL_53;
  ExFreePoolWithTag(v7, 0);
  *(_QWORD *)&GuidString.Length = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &GuidString);
  if ( RegistryValue < 0 )
  {
LABEL_52:
    v7 = *(unsigned int **)&GuidString.Length;
    goto LABEL_53;
  }
  v7 = *(unsigned int **)&GuidString.Length;
  if ( !PnpValidateRegistryDword(*(__int64 *)&GuidString.Length) )
    goto LABEL_3;
  v8 = *a1;
  v21 = *(unsigned int *)((char *)v7 + v7[2]);
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0LL,
                     *(_QWORD *)(v8 + 48),
                     1,
                     0LL,
                     0LL,
                     (__int64)&Guid,
                     (__int64)&v18,
                     (PVOID *)&v16,
                     &GuidString,
                     0);
  RegistryValue = ObjectProperty;
  if ( ObjectProperty < 0 )
  {
    if ( ObjectProperty != -1073741275 )
      goto LABEL_53;
    RegistryValue = 0;
    goto LABEL_50;
  }
  if ( (unsigned int)v18 > 0x2012 )
  {
LABEL_37:
    v11 = *(_DWORD *)&GuidString.Length;
    v10 = 3;
LABEL_38:
    p_Data1 = &v16->Data1;
    v16 = 0LL;
    goto LABEL_51;
  }
  if ( (_DWORD)v18 == 8210 )
  {
    v11 = *(_DWORD *)&GuidString.Length;
    if ( !(unsigned __int8)PnpValidateMultiSzData(v16, *(unsigned int *)&GuidString.Length) )
      goto LABEL_3;
    v10 = 7;
    goto LABEL_38;
  }
  if ( (unsigned int)v18 > 0xD )
  {
    if ( (_DWORD)v18 == 17 )
    {
      if ( *(_DWORD *)&GuidString.Length != 1 )
        goto LABEL_3;
      v10 = 4;
      v11 = 4;
      p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
      if ( p_Data1 )
      {
        Data1_low = LOBYTE(v16->Data1) == 0xFF;
        goto LABEL_19;
      }
LABEL_17:
      RegistryValue = -1073741670;
      goto LABEL_53;
    }
    if ( (_DWORD)v18 == 18 || (_DWORD)v18 == 20 )
      goto LABEL_41;
    if ( (unsigned int)v18 > 0x15 )
    {
      if ( (unsigned int)v18 <= 0x18 )
        goto LABEL_39;
      if ( (_DWORD)v18 == 25 )
      {
LABEL_41:
        v11 = *(_DWORD *)&GuidString.Length;
        if ( !PnpValidateStringData((__int64)v16, *(unsigned int *)&GuidString.Length) )
          goto LABEL_3;
        v10 = 1;
        goto LABEL_38;
      }
    }
    goto LABEL_37;
  }
  if ( (_DWORD)v18 != 13 )
  {
    if ( (unsigned int)v18 <= 5 )
    {
      if ( (unsigned int)v18 < 4 )
      {
        if ( (unsigned int)v18 > 1 )
        {
          if ( *(_DWORD *)&GuidString.Length != 1 )
            goto LABEL_3;
          v10 = 4;
          v11 = 4;
          p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( !p_Data1 )
            goto LABEL_17;
          Data1_low = LOBYTE(v16->Data1);
          goto LABEL_19;
        }
LABEL_50:
        p_Data1 = 0LL;
        v11 = 0;
        v10 = 0;
        goto LABEL_51;
      }
      if ( *(_DWORD *)&GuidString.Length != 2 )
        goto LABEL_3;
      v10 = 4;
      v11 = 4;
      p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
      if ( p_Data1 )
      {
        Data1_low = LOWORD(v16->Data1);
LABEL_19:
        *p_Data1 = Data1_low;
LABEL_51:
        *(_DWORD *)(a3 + 32) = v10;
        *(_DWORD *)(a3 + 36) = v11;
        *(_QWORD *)(a3 + 40) = p_Data1;
        goto LABEL_53;
      }
      goto LABEL_17;
    }
    if ( (unsigned int)v18 > 7 )
    {
      if ( (unsigned int)v18 <= 9 )
      {
        v11 = 8;
        if ( *(_DWORD *)&GuidString.Length != 8 )
          goto LABEL_3;
        v10 = 11;
        goto LABEL_38;
      }
      goto LABEL_37;
    }
LABEL_39:
    if ( *(_DWORD *)&GuidString.Length != 4 )
      goto LABEL_3;
    v10 = 4;
    v11 = 4;
    goto LABEL_38;
  }
  if ( *(_DWORD *)&GuidString.Length != 16 )
    goto LABEL_3;
  RegistryValue = RtlStringFromGUIDEx(v16, &UnicodeString, 1u);
  if ( RegistryValue >= 0 )
  {
    v11 = UnicodeString.Length + 2;
    v10 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x63647050u);
    p_Data1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, UnicodeString.Buffer, v11);
      goto LABEL_51;
    }
    goto LABEL_17;
  }
LABEL_53:
  RtlFreeAnsiString(&UnicodeString);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
