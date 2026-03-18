/*
 * XREFs of PiDevCfgOpenDeviceMigrationKey @ 0x140688120
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgOpenDeviceMigrationKey(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  int CachedContextBaseKey; // ebx
  HANDLE v6; // rax
  void *v8; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v8 = 0LL;
  KeyHandle = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v8);
  if ( CachedContextBaseKey >= 0 )
  {
    KeyHandle = 0LL;
    DestinationString.Buffer = L"Control\\DeviceMigration\\Devices";
    ObjectAttributes.RootDirectory = v8;
    *(_DWORD *)&DestinationString.Length = 4194366;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( CachedContextBaseKey >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v6 = KeyHandle;
      *a3 = 0LL;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      CachedContextBaseKey = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)CachedContextBaseKey;
}
