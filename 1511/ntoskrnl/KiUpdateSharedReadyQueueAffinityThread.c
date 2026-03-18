/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x140028BD0
 * Callers:
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x14002A7B4 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400956F8 (KeSetIdealProcessorThreadEx.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140095C70 (KeUpdateThreadSchedulingProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  bool v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a2 + 104);
  v3 = 0;
  while ( v2 )
  {
    result = *(unsigned int *)(v2 + 4);
    if ( (result & 2) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 120) & 0x100) == 0 && *(char *)(a2 + 195) < 16 )
        goto LABEL_7;
      break;
    }
    v2 = *(_QWORD *)(v2 + 80);
  }
  if ( !a1 )
  {
    result = *(unsigned int *)(a2 + 588);
    a1 = KiProcessorBlock[result];
  }
  v5 = *(_QWORD *)(a1 + 24768);
  if ( v5 )
  {
    result = v5 & *(_QWORD *)(a2 + 576);
    v3 = result == v5;
  }
LABEL_7:
  if ( v3 != ((*(_DWORD *)(a2 + 120) & 0x1000) != 0) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x1000u);
  return result;
}
