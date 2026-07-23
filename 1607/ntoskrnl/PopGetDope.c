/*
 * XREFs of PopGetDope @ 0x1401455C4
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x14007F458 (PoRegisterDeviceForIdleDetection.c)
 *     PoVolumeDevice @ 0x14056C9A4 (PoVolumeDevice.c)
 *     PopAssociateThermalRequest @ 0x14056CB00 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BD0C (PopOrphanCoolingExtension.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rbx
  KIRQL v5; // al

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x45504F44u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x60uLL);
      v4[13] = 0;
      v4[14] = 0;
      *((_QWORD *)v4 + 3) = a1;
      *((_QWORD *)v4 + 5) = v4 + 8;
      *((_QWORD *)v4 + 4) = v4 + 8;
      v5 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KeReleaseSpinLock(&PopDopeGlobalLock, v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
