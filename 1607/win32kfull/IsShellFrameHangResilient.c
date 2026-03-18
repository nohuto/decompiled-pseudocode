/*
 * XREFs of IsShellFrameHangResilient @ 0x1C0006E74
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006EE0 (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  if ( !gfShellFrameHangResilient )
    return 0;
  if ( (*(_DWORD *)(a1 + 1096) & 0x40000) == 0 )
    return 0;
  v1 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 384) + 344LL) <= 1u )
    return 0;
  v3 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_QWORD *)(v3 + 40) || *(_QWORD *)(v3 + 48) || (unsigned int)IsAdaptiveQueueDetachExempted(a1) )
    return 0;
  return v1;
}
