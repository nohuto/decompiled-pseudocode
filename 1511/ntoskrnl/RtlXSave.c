/*
 * XREFs of RtlXSave @ 0x140022854
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x140022478 (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x140023314 (KeContextFromKframes.c)
 *     KiSaveNpxState @ 0x1401CBF04 (KiSaveNpxState.c)
 *     PspGetContext @ 0x1403EEB58 (PspGetContext.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x14061C814 (KiCaptureUmsThreadContext.c)
 *     ViCtxCaptureInitialIsrState @ 0x1406CB30C (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1406CB3B8 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlXSave(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // ecx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveCHelper(a1, a2, a3, a1);
  result = a2;
  if ( (a2 & 6) == 4 )
  {
    v5 = a1[6];
    v6 = a1[7];
    _xsave(a1, a2);
    a1[6] = v5;
    a1[7] = v6;
  }
  else
  {
    _xsave(a1, a2);
  }
  return result;
}
