/*
 * XREFs of PiDevCfgConfigureDeviceInterface @ 0x140515990
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaceCallback @ 0x1401C0298 (PiDevCfgConfigureDeviceInterfaceCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140442160 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140514894 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140515030 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140608220 (PiDevCfgCopyDeviceProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterface(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // r9
  int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Device");
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 != -1073741772 )
  {
    if ( v6 < 0 )
      goto LABEL_4;
    v8 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x32u, v7, 983103, 1, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_4;
    v8 = PiDevCfgCopyDeviceKeys(KeyHandle, Handle, 1, a3);
    if ( v8 < 0 )
      goto LABEL_4;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"Properties");
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v9;
  if ( v9 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v9 >= 0 )
  {
    v8 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x30u, v10, 983103, 0, (__int64)&Handle, 0LL);
    if ( v8 >= 0 )
    {
      v8 = PiDevCfgCopyObjectProperties(v13, v12, v14, (__int64)a2, a1, 3u, Handle);
      if ( v8 >= 0 )
        v8 = PiDevCfgCopyDeviceProperties((_DWORD)KeyHandle, (_DWORD)Handle, a1, 3, 1, a3);
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
