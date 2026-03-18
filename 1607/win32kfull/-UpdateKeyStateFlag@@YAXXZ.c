/*
 * XREFs of ?UpdateKeyStateFlag@@YAXXZ @ 0x1C010E710
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void UpdateKeyStateFlag(void)
{
  _QWORD *i; // rbx
  __int64 v1; // rcx

  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput )
  {
    for ( i = *(_QWORD **)(grpdeskRitInput + 160LL); i != (_QWORD *)(grpdeskRitInput + 160LL); i = (_QWORD *)*i )
    {
      v1 = *(i - 34);
      *(_DWORD *)(v1 + 340) |= 1u;
      memset((void *)(v1 + 160), 255, 0x20uLL);
    }
  }
}
