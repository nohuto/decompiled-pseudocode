/*
 * XREFs of PiDevCfgConfigureDeviceLocation @ 0x140589984
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     IopReplaceSeperatorWithPound @ 0x140541174 (IopReplaceSeperatorWithPound.c)
 *     PnpOpenFirstMatchingSubKey @ 0x14067E628 (PnpOpenFirstMatchingSubKey.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140683C20 (PiDevCfgConfigureDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  wchar_t *Buffer; // rsi
  int CachedContextBaseKey; // ebx
  NTSTATUS v10; // eax
  int v11; // eax
  unsigned int v12; // r14d
  unsigned __int16 *v13; // rdi
  wchar_t *StringRoutine; // rax
  int v15; // eax
  int v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  HANDLE v19; // [rsp+30h] [rbp-A9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-91h] BYREF
  int v22; // [rsp+50h] [rbp-89h] BYREF
  const wchar_t *v23; // [rsp+58h] [rbp-81h]
  HANDLE Handle; // [rsp+60h] [rbp-79h] BYREF
  HANDLE v25; // [rsp+68h] [rbp-71h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-69h] BYREF
  void *v27; // [rsp+A0h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp-31h] BYREF
  int v29[2]; // [rsp+B0h] [rbp-29h]
  _BYTE KeyInformation[12]; // [rsp+B8h] [rbp-21h] BYREF
  int v31; // [rsp+C4h] [rbp-15h]

  *(_QWORD *)v29 = a1;
  KeyHandle = 0LL;
  v25 = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_6;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v27);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_7;
  v22 = 3145774;
  v23 = L"Control\\DeviceLocations";
  ObjectAttributes.RootDirectory = v27;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
  KeyHandle = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v10;
  if ( v10 == -1073741772 )
    goto LABEL_6;
  if ( v10 < 0 )
    goto LABEL_7;
  CachedContextBaseKey = NtQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_7;
  if ( !v31 )
    goto LABEL_6;
  v11 = PnpOpenFirstMatchingSubKey(*(PCWSTR *)(a2 + 64), &v25);
  CachedContextBaseKey = v11;
  if ( v11 == -1073741772 )
    goto LABEL_6;
  if ( v11 < 0 )
    goto LABEL_7;
  v12 = 0;
  v13 = (unsigned __int16 *)(a2 + 26);
  while ( 1 )
  {
    if ( !*(_QWORD *)(v13 + 3) )
      goto LABEL_37;
    if ( Buffer )
      RtlFreeAnsiString(&UnicodeString);
    if ( *(_QWORD *)(v13 + 3) )
      break;
    UnicodeString.Buffer = 0LL;
LABEL_31:
    UnicodeString.Length = *(v13 - 1);
    UnicodeString.MaximumLength = *v13;
    v15 = IopReplaceSeperatorWithPound((__int64)&UnicodeString, (__int64)&UnicodeString);
    Buffer = UnicodeString.Buffer;
    if ( v15 >= 0 )
    {
      v16 = PnpOpenFirstMatchingSubKey(UnicodeString.Buffer, &v19);
      CachedContextBaseKey = v16;
      if ( v16 == -1073741772 )
      {
        CachedContextBaseKey = 0;
      }
      else if ( v16 < 0 )
      {
        goto LABEL_7;
      }
      if ( v19 )
        goto LABEL_40;
    }
    else
    {
      CachedContextBaseKey = 0;
    }
LABEL_37:
    ++v12;
    v13 += 8;
    if ( v12 >= 2 )
      goto LABEL_40;
  }
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(*v13);
  UnicodeString.Buffer = StringRoutine;
  if ( StringRoutine )
  {
    memmove(StringRoutine, *(const void **)(v13 + 3), *v13);
    goto LABEL_31;
  }
  CachedContextBaseKey = -1073741670;
LABEL_40:
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v19 )
      goto LABEL_44;
    v22 = 262146;
    v23 = L"*";
    ObjectAttributes.RootDirectory = v25;
    v19 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&v19, 0x20019u, &ObjectAttributes);
    CachedContextBaseKey = v17;
    if ( v17 != -1073741772 )
    {
      if ( v17 < 0 )
        goto LABEL_7;
LABEL_44:
      v22 = 1835034;
      v23 = L"Configuration";
      ObjectAttributes.RootDirectory = v19;
      Handle = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      CachedContextBaseKey = v18;
      if ( v18 != -1073741772 )
      {
        if ( v18 >= 0 )
          CachedContextBaseKey = PiDevCfgConfigureDeviceKeys(v29[0], a2, (int)Handle, -1, a3, (__int64)a4);
        goto LABEL_7;
      }
    }
LABEL_6:
    CachedContextBaseKey = 0;
  }
LABEL_7:
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    ZwClose(v19);
  if ( v25 )
    ZwClose(v25);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)CachedContextBaseKey;
}
