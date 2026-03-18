/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x1403F23C8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F22F0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x1403F2428 (PipNotifyDeviceDependencyList.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F41C4 (PnpReleaseDependencyRelationsLock.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1404EB7A0 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 */

__int64 __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = a1;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(v1 + 32));
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue(v2);
  PiPnpRtlBeginOperation(&P);
  PipNotifyDeviceDependencyList(v1, 0LL);
  result = PipNotifyDeviceDependencyList(v1, 1LL);
  if ( P )
    return PiPnpRtlEndOperation(P);
  return result;
}
