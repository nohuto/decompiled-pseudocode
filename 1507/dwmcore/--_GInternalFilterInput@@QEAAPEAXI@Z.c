/*
 * XREFs of ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801118C0
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180002C40 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ @ 0x18011259C (-EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ.c)
 *     ?ProcessUpdateTemplate@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATETEMPLATE@@@Z @ 0x180113778 (-ProcessUpdateTemplate@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDAT.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

InternalFilterInput *__fastcall InternalFilterInput::`scalar deleting destructor'(InternalFilterInput *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, InternalFilterInput *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
