/*
 * XREFs of ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x180121E80
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?ProcessUpdateTemplate@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATETEMPLATE@@@Z @ 0x180113778 (-ProcessUpdateTemplate@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDAT.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  *((_QWORD *)this + 6) = a4;
  *(_OWORD *)((char *)this + 4) = v5;
  *(_OWORD *)((char *)this + 20) = _xmm;
  *(_QWORD *)((char *)this + 36) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  if ( a4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
