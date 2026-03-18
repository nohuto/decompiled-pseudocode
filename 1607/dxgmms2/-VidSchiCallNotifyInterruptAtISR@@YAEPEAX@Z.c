/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C00272A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B8C0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000BB40 (VidSchiLogInterrupt.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(unsigned int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 4016);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 48), a1[1], 0LL, a4);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a1[1], 0LL, v5);
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerExit, v7, 4016);
  return 1;
}
