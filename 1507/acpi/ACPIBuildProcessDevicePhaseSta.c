/*
 * XREFs of ACPIBuildProcessDevicePhaseSta @ 0x1C000B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000B7A4 (ACPIBuildCompleteCommon.c)
 *     ACPIDetectDuplicateHID @ 0x1C0015864 (ACPIDetectDuplicateHID.c)
 *     LinkNodeAddLinkNode @ 0x1C002299C (LinkNodeAddLinkNode.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C003FF38 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSta(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  __int64 v3; // rdx

  v1 = *(KSPIN_LOCK **)(a1 + 40);
  if ( (*(_DWORD *)v1 & 0x2000LL) != 0 )
  {
    KeInitializeSpinLock(v1 + 22);
    *((_DWORD *)v1 + 47) = 0;
    ACPIRegisterForDeviceNotificationsByDeviceExtension(v1, ACPICMButtonNotifyByDeviceExtension, v1);
  }
  *(_DWORD *)(a1 + 32) = 14;
  ACPIDetectDuplicateHID((ULONG_PTR)v1);
  if ( (*(_DWORD *)v1 & 0x10000000) != 0 )
    LinkNodeAddLinkNode(v1);
  v3 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v3);
  return 0LL;
}
