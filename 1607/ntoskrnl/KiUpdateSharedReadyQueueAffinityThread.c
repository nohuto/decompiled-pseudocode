/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1400F2E14
 * Callers:
 *     KeUpdateThreadSchedulingProperties @ 0x1400C8E18 (KeUpdateThreadSchedulingProperties.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400CA3A4 (KeSetIdealProcessorThreadEx.c)
 *     KiSetAffinityThread @ 0x1400CA9BC (KiSetAffinityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400CAD5C (KiApplyForegroundBoostThread.c)
 *     KiSetSystemAffinityThread @ 0x1400CCBB4 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400F2060 (KiComputeThreadAffinity.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  bool v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a1 )
  {
    result = *(unsigned int *)(a2 + 588);
    a1 = KiProcessorBlock[result];
  }
  v3 = *(_QWORD *)(a1 + 24896);
  if ( v3 )
  {
    result = v3 & *(_QWORD *)(a2 + 576);
    v2 = result == v3;
  }
  if ( v2 != ((*(_DWORD *)(a2 + 120) & 0x1000) != 0) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x1000u);
  return result;
}
