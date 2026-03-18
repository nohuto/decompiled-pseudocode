/*
 * XREFs of KiSetSpecCtrlNmi @ 0x140161C00
 * Callers:
 *     KiNmiInterruptStart @ 0x140169880 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14016D140 (KiMcheckAbort.c)
 * Callees:
 *     sub_140161D62 @ 0x140161D62 (sub_140161D62.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !KeGetPcr()->Prcb.BpbKernelSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_DWORD *)(v0 + 192) = v1,
        LOWORD(v1) = KeGetPcr()->Prcb.BpbKernelSpecCtrl,
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int16)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures & 2) == 0 )
      JUMPOUT(0x140161D74LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_140161D62(v2, 0LL);
  return sub_140161C54();
}
