/*
 * XREFs of ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x1800F9AA4
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Remove@?$CQueue@PEAVCResource@@@@AEAAPEAVCResource@@_NPEAI@Z @ 0x1800FE6C0 (-Remove@-$CQueue@PEAVCResource@@@@AEAAPEAVCResource@@_NPEAI@Z.c)
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
