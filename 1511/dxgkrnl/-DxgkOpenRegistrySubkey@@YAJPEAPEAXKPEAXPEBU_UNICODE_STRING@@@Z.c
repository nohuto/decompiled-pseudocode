/*
 * XREFs of ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E23E4
 * Callers:
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00DEC84 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0BFC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00E0D54 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0E80 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00E1010 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     MonitorInitializeGlobal @ 0x1C00E410C (MonitorInitializeGlobal.c)
 *     sub_1C018924C @ 0x1C018924C (sub_1C018924C.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

NTSTATUS __fastcall DxgkOpenRegistrySubkey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        void *a3,
        struct _UNICODE_STRING *a4)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  if ( !KeyHandle )
    return -1073741811;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
