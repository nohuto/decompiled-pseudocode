/*
 * XREFs of PiDevCfgConfigureDeviceLocation @ 0x140635B98
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641444 (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     IopReplaceSeperatorWithPound @ 0x14050DE08 (IopReplaceSeperatorWithPound.c)
 *     PnpOpenFirstMatchingSubKey @ 0x14062DC6C (PnpOpenFirstMatchingSubKey.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // rsi
  int CachedContextBaseKey; // ebx
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // eax
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  HANDLE v22; // [rsp+30h] [rbp-A9h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-A1h] BYREF
  int v24; // [rsp+40h] [rbp-99h] BYREF
  const wchar_t *v25; // [rsp+48h] [rbp-91h]
  HANDLE Handle; // [rsp+50h] [rbp-89h] BYREF
  HANDLE v27; // [rsp+58h] [rbp-81h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-39h] BYREF
  void *v31; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-29h]
  _BYTE KeyInformation[12]; // [rsp+B8h] [rbp-21h] BYREF
  int v34; // [rsp+C4h] [rbp-15h]

  v4 = 0;
  v32 = a1;
  KeyHandle = 0LL;
  v27 = 0LL;
  v22 = 0LL;
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
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 4, (__int64 *)&v31);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_35;
  v24 = 3145774;
  v25 = L"Control\\DeviceLocations";
  ObjectAttributes.RootDirectory = v31;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  KeyHandle = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v10;
  if ( v10 == -1073741772 )
    goto LABEL_6;
  if ( v10 < 0 )
    goto LABEL_35;
  CachedContextBaseKey = NtQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_35;
  if ( !v34 )
    goto LABEL_6;
  v13 = PnpOpenFirstMatchingSubKey(*(PCWSTR *)(a2 + 64), KeyHandle, v11, v12, &v27);
  CachedContextBaseKey = v13;
  if ( v13 == -1073741772 )
    goto LABEL_6;
  if ( v13 < 0 )
    goto LABEL_35;
  v14 = (_QWORD *)(a2 + 32);
  while ( 1 )
  {
    if ( !*v14 )
      goto LABEL_25;
    if ( Buffer )
      RtlFreeAnsiString(&UnicodeString);
    if ( !PnpDuplicateUnicodeString((__int64)&UnicodeString, 16LL * v4 + a2 + 24) )
      break;
    v15 = IopReplaceSeperatorWithPound((__int64)&UnicodeString, (__int64)&UnicodeString);
    Buffer = UnicodeString.Buffer;
    if ( v15 >= 0 )
    {
      v18 = PnpOpenFirstMatchingSubKey(UnicodeString.Buffer, v27, v16, v17, &v22);
      CachedContextBaseKey = v18;
      if ( v18 == -1073741772 )
      {
        CachedContextBaseKey = 0;
      }
      else if ( v18 < 0 )
      {
        goto LABEL_35;
      }
      if ( v22 )
        goto LABEL_28;
    }
    else
    {
      CachedContextBaseKey = 0;
    }
LABEL_25:
    ++v4;
    v14 += 2;
    if ( v4 >= 2 )
      goto LABEL_28;
  }
  CachedContextBaseKey = -1073741670;
LABEL_28:
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v22 )
      goto LABEL_32;
    v24 = 262146;
    v25 = L"*";
    ObjectAttributes.RootDirectory = v27;
    v22 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = ZwOpenKey(&v22, 0x20019u, &ObjectAttributes);
    CachedContextBaseKey = v19;
    if ( v19 != -1073741772 )
    {
      if ( v19 < 0 )
        goto LABEL_35;
LABEL_32:
      v24 = 1835034;
      v25 = L"Configuration";
      ObjectAttributes.RootDirectory = v22;
      Handle = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v20 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      CachedContextBaseKey = v20;
      if ( v20 != -1073741772 )
      {
        if ( v20 >= 0 )
          CachedContextBaseKey = PiDevCfgConfigureDeviceKeys(v32, a2, Handle, -1, a3, a4);
        goto LABEL_35;
      }
    }
LABEL_6:
    CachedContextBaseKey = 0;
  }
LABEL_35:
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v22 )
    ZwClose(v22);
  if ( v27 )
    ZwClose(v27);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)CachedContextBaseKey;
}
