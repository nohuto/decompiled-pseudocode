/*
 * XREFs of TppInitializeTimerQueue @ 0x1800732D0
 * Callers:
 *     TpAllocPoolInternal @ 0x180072E64 (TpAllocPoolInternal.c)
 * Callees:
 *     TppInitializeTimerSubQueue @ 0x180073340 (TppInitializeTimerSubQueue.c)
 *     TppDestroyTimerSubQueue @ 0x180083CB8 (TppDestroyTimerSubQueue.c)
 */

__int64 __fastcall TppInitializeTimerQueue(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  LOBYTE(a3) = 1;
  v5 = TppInitializeTimerSubQueue(a1 + 8, a2, a3);
  if ( v5 >= 0 )
  {
    v5 = TppInitializeTimerSubQueue(a1 + 128, a2, 0LL);
    if ( v5 < 0 )
      TppDestroyTimerSubQueue(a1 + 8);
  }
  return (unsigned int)v5;
}
