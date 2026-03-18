/*
 * XREFs of ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x180121EF0
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180113574 (-ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEI.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall InternalFilterInput::Update(
        InternalFilterInput *this,
        int a2,
        const struct tagRECT *a3,
        struct CResource *a4)
{
  __int64 v4; // r14

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 6));
  *((_QWORD *)this + 6) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a4 + 8LL))(a4);
  *(_DWORD *)this = a2;
  *(struct tagRECT *)((char *)this + 4) = *a3;
}
