/*
 * XREFs of ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BB8C
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18012A874 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18012B624 (-Remove@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@V.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BC24 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteAllFrames(CManipulationManager *this, struct CManipulationFrame *a2)
{
  int v2; // ebx
  _QWORD *v5; // r15
  __int64 v6; // rsi
  struct CManipulationFrame **v7; // r14

  v2 = 0;
  if ( *((int *)this + 50) > 0 )
  {
    v5 = (_QWORD *)((char *)this + 192);
    v6 = 0LL;
    do
    {
      v7 = (struct CManipulationFrame **)(v6 + *v5);
      if ( *v7 == a2 )
        break;
      CManipulationManager::RouteFrameInput(this, *v7);
      if ( *((_DWORD *)*v7 + 5) == *((_DWORD *)*v7 + 4) )
      {
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
          (__int64)v5,
          v7);
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
