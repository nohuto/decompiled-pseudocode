/*
 * XREFs of ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x1800DCEC8
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Remove@?$CQueue@PEAVCResource@@@@AEAAPEAVCResource@@_NPEAI@Z @ 0x1800E089C (-Remove@-$CQueue@PEAVCResource@@@@AEAAPEAVCResource@@_NPEAI@Z.c)
 */

void __fastcall CManipulationManager::ReleasePendingReferences(CManipulationManager *this)
{
  char *v1; // rsi
  __int64 v2; // rax

  v1 = (char *)this + 208;
  while ( 1 )
  {
    v2 = CQueue<CResource *>::Remove(v1);
    if ( !v2 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
