/*
 * XREFs of VidSchiCancelDelayTimerDevice @ 0x1C0076534
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00780D0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C000354C (VidSchiCancelDelayTimerContext.c)
 */

void __fastcall VidSchiCancelDelayTimerDevice(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); i != v1; i = (_QWORD *)*i )
    VidSchiCancelDelayTimerContext((struct _KTIMER *)(i - 3));
}
