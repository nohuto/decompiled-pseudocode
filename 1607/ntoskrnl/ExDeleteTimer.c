/*
 * XREFs of ExDeleteTimer @ 0x140130FE8
 * Callers:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14023CC48 (CancelTimerCallbacksAndDeleteTimer.c)
 * Callees:
 *     KeDisableTimer2 @ 0x1400F583C (KeDisableTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1400F7B2C (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall ExDeleteTimer(__int64 a1, char a2, char a3, unsigned int *a4)
{
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  ExpCheckForFreedEnhancedTimer(a1);
  if ( a4 )
  {
    if ( *a4 )
      KeBugCheckEx(0xC7u, 9uLL, 1uLL, *a4, 0LL);
    *(_QWORD *)(a1 + 136) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 1)),
                                            KiWaitNever);
    *(_QWORD *)(a1 + 144) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 2)),
                                            KiWaitNever);
  }
  v9[1] = a1;
  v9[0] = (__int64)ExpFinalizeTimerDeletion;
  return KeDisableTimer2(a1, a2, a3, v9);
}
