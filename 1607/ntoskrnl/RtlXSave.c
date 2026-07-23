/*
 * XREFs of RtlXSave @ 0x140083D0C
 * Callers:
 *     KiSaveNpxState @ 0x140083AAC (KiSaveNpxState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140083B40 (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x1400F22A0 (KeContextFromKframes.c)
 *     PspGetContext @ 0x1404FAA60 (PspGetContext.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140651BF0 (KiCaptureUmsThreadContext.c)
 *     ViCtxCaptureInitialIsrState @ 0x140719D1C (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140719DC8 (ViCtxCheckAndReleaseIsrState.c)
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
