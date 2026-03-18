/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C000DE9C
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000B800 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C0035600 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0036438 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpQueryPower @ 0x1C00368F0 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C003BA00 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C003DA98 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C003DBC0 (OSNotifyDeviceEnum.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00796D0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000E5B4 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

char ACPIDockIsDockDevice()
{
  size_t v0; // rbx
  _BYTE *PoolWithTag; // rdi
  char v2; // si
  KIRQL v3; // bl
  int v4; // ebp
  _BYTE P[128]; // [rsp+30h] [rbp-98h] BYREF

  v0 = -1LL;
  do
    ++v0;
  while ( aDck[v0] );
  if ( v0 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 0;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, "_DCK", v0);
  PoolWithTag[v0] = 0;
  v2 = 1;
  v3 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v4 = AMLIGetNameSpaceObjectNoLock(PoolWithTag);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v4 < 0 )
    return 0;
  return v2;
}
