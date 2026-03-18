/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C001DB40
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C00042DC (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C0004758 (VidSchiLogInterrupt.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 4016);
  VidSchiLogInterrupt(*(_QWORD *)(*a1 + 384), a1[1], 0);
  VidSchDdiNotifyInterruptWorker(*a1, (int *)a1[1], 0);
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 4016);
  return 1;
}
