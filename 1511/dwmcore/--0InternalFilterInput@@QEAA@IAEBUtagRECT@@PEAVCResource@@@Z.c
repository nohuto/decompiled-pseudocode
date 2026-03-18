/*
 * XREFs of ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x1801374A0
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1800F66E0 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

InternalFilterInput *__fastcall InternalFilterInput::InternalFilterInput(
        InternalFilterInput *this,
        int a2,
        const struct tagRECT *a3,
        struct CResource *a4)
{
  __int128 v5; // xmm0

  *(_DWORD *)this = a2;
  v5 = (__int128)*a3;
  *((_QWORD *)this + 3) = a4;
  *(_OWORD *)((char *)this + 4) = v5;
  if ( a4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
