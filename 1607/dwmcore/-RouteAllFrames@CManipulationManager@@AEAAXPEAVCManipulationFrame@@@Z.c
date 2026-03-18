/*
 * XREFs of ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006DA0
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1800074A8 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A70E0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180106A50 (-Remove@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@V.c)
 */

void __fastcall CManipulationManager::RouteAllFrames(CManipulationManager *this, struct CManipulationFrame *a2)
{
  int v2; // ebx
  struct CManipulationFrame **v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // r15

  v2 = 0;
  if ( *((int *)this + 50) > 0 )
  {
    v7 = (_QWORD *)((char *)this + 192);
    v6 = 0LL;
    do
    {
      v5 = (struct CManipulationFrame **)(v6 + *v7);
      if ( *v5 == a2 )
        break;
      CManipulationManager::RouteFrameInput(this, *v5);
      if ( *((_DWORD *)*v5 + 5) == *((_DWORD *)*v5 + 4) )
      {
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
          v7,
          v5);
      }
      else
      {
        ++v2;
        v6 += 8LL;
      }
    }
    while ( v2 < *((_DWORD *)this + 50) );
  }
  CManipulationManager::RouteFrameInput(this, a2);
}
