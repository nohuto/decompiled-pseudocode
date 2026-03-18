/*
 * XREFs of IsShellFrameHangResilient @ 0x1C000344C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00034B8 (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  if ( !gfShellFrameHangResilient )
    return 0;
  if ( (*(_DWORD *)(a1 + 1080) & 0x40000) == 0 )
    return 0;
  v1 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 392) + 336LL) <= 1u )
    return 0;
  v3 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v3 + 40) || *(_QWORD *)(v3 + 48) || (unsigned int)IsAdaptiveQueueDetachExempted(a1) )
    return 0;
  return v1;
}
