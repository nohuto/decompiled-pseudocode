/*
 * XREFs of ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00A6ECC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C0050350 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0050760 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00A6A80 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpGetLastInputProcessTime(struct tagQ *const a1, int a2, unsigned int *a3, unsigned int *a4)
{
  if ( !a1 )
  {
    *a3 = 0;
LABEL_3:
    *a4 = 0;
    return;
  }
  *a3 = a2 - *((_DWORD *)a1 + 90);
  if ( !*((_DWORD *)a1 + 4) )
    goto LABEL_3;
  *a4 = a2 - *(_DWORD *)(*(_QWORD *)a1 + 48LL);
}
