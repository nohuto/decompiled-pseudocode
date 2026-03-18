/*
 * XREFs of PspGetBaseTrapFrame @ 0x1400F32E0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     PsGetBaseTrapFrame @ 0x14020F0A8 (PsGetBaseTrapFrame.c)
 *     PspInitializeThunkContext @ 0x140459784 (PspInitializeThunkContext.c)
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetBaseTrapFrame(__int64 a1)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  return i - 400;
}
