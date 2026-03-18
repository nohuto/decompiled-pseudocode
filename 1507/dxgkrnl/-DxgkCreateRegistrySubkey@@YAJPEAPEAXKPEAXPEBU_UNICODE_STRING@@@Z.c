/*
 * XREFs of ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00D661C
 * Callers:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00C95E8 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00CAE44 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     MonitorInitializeGlobal @ 0x1C00D6108 (MonitorInitializeGlobal.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

NTSTATUS __fastcall DxgkCreateRegistrySubkey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        void *a3,
        struct _UNICODE_STRING *a4)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+8h] BYREF

  if ( !KeyHandle )
    return -1073741811;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, &Disposition);
}
