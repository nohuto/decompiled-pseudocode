/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160
 * Callers:
 *     KeUpdateThreadSchedulingProperties @ 0x14000B9FC (KeUpdateThreadSchedulingProperties.c)
 *     KeStartThread @ 0x14000F67C (KeStartThread.c)
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KiSetSystemAffinityThread @ 0x1400D50B8 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x140118AF4 (KeSetIdealProcessorThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  char v4; // r8

  v2 = *(_QWORD *)(a2 + 104);
  if ( v2 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v2 + 4);
      if ( (result & 2) == 0 )
        break;
      v2 = *(_QWORD *)(v2 + 80);
      if ( !v2 )
        goto LABEL_2;
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x100) == 0 && *(char *)(a2 + 195) < 16 )
    {
LABEL_15:
      v4 = 0;
      goto LABEL_7;
    }
  }
LABEL_2:
  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  result = *(_QWORD *)(a1 + 24768);
  v4 = 0;
  if ( result )
  {
    if ( (result & *(_QWORD *)(a2 + 576)) == result )
    {
      v4 = 1;
      goto LABEL_7;
    }
    goto LABEL_15;
  }
LABEL_7:
  if ( v4 != ((*(_DWORD *)(a2 + 120) & 0x1000) != 0) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x1000u);
  return result;
}
