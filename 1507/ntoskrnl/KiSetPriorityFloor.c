/*
 * XREFs of KiSetPriorityFloor @ 0x1400F125C
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1400F4204 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400F475C (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall KiSetPriorityFloor(ULONG_PTR BugCheckParameter1, _QWORD *a2, char a3)
{
  char v3; // si
  unsigned int v5; // edi
  char v8; // cl
  char result; // al

  v3 = 0;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v8 = *(_BYTE *)(a3 + BugCheckParameter1 + 1392);
  if ( v8 == -1 )
    KeBugCheckEx(0x157u, BugCheckParameter1, a3, 1uLL, 0LL);
  *(_BYTE *)(a3 + BugCheckParameter1 + 1392) = v8 + 1;
  *(_DWORD *)(BugCheckParameter1 + 1408) |= 1 << a3;
  if ( *(char *)(BugCheckParameter1 + 195) < a3 )
  {
    KiSetPriorityThread(BugCheckParameter1, a2, a3);
    v3 = 1;
  }
  result = v3;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return result;
}
