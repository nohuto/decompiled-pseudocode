/*
 * XREFs of ?UpdateKeyStateFlag@@YAXXZ @ 0x1C0042860
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void UpdateKeyStateFlag(void)
{
  _QWORD *i; // rbx
  __int64 v1; // rcx

  if ( *(_QWORD *)(gptiCurrent + 416LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 160LL); i != (_QWORD *)(grpdeskRitInput + 160LL); i = (_QWORD *)*i )
    {
      v1 = *(i - 34);
      *(_DWORD *)(v1 + 332) |= 1u;
      memset((void *)(v1 + 152), 255, 0x20uLL);
    }
  }
}
