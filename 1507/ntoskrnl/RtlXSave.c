/*
 * XREFs of RtlXSave @ 0x14012527C
 * Callers:
 *     KeContextFromKframes @ 0x14001F72C (KeContextFromKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140124FE8 (KeSaveExtendedAndSupervisorState.c)
 *     KiSaveNpxState @ 0x14020AE58 (KiSaveNpxState.c)
 *     PspGetContext @ 0x14044E260 (PspGetContext.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x14069B398 (KiCaptureUmsThreadContext.c)
 *     ViCtxCaptureInitialIsrState @ 0x14074E9A0 (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x14074EA4C (ViCtxCheckAndReleaseIsrState.c)
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
