/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x140617840
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140617474 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KeWakeWaitChain @ 0x1400A5CEC (KeWakeWaitChain.c)
 */

__int64 __fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((_QWORD **)(a1 + 48), 0, 0);
  KeAbPostRelease(v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
