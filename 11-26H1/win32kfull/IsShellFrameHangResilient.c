/*
 * XREFs of IsShellFrameHangResilient @ 0x1400598D4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 * Callees:
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x140059968 (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r8

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1360) & 0x40000) != 0 && tagQ::AreMultipleThreadsAttached(*(tagQ **)(a1 + 464)) )
    return (unsigned int)IsAdaptiveQueueDetachExempted(v3) == 0;
  return v1;
}
