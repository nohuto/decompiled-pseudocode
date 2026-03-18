/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012C014
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18012A874 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BC24 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801298EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18012A318 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z @ 0x18012BF38 (-TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x18012C120 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  int *v6; // r14
  CManipulationManager *v7; // rcx
  void *v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  struct CManipulationContext *v11; // [rsp+70h] [rbp+18h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v5 = 152LL * i;
    v6 = (int *)((char *)a2 + v5);
    if ( (*((_BYTE *)a2 + 28) & 2) == 0 || *(_QWORD *)((char *)a2 + v5 + 56) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 128,
        &v11,
        v6 + 9);
      if ( (((*(_DWORD *)((_BYTE *)a2 + v5 + 44) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)&v11, (__int64 *)this + 34);
      v8 = 0LL;
      v9 = 0;
      v12 = 0LL;
      v10 = 0;
      if ( v11 )
      {
        CManipulationManager::TargetPointer(v7, v11, a2, i, &v12, &v10);
        v8 = v12;
        v9 = v10;
      }
      *(_QWORD *)((char *)a2 + v5 + 56) = v8;
      *(_DWORD *)((char *)a2 + v5 + 176) = v9;
      if ( v8 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 28) |= 1u;
        if ( (*((_BYTE *)a2 + 28) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, v6[9], v8, v9, i);
      }
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v11);
    }
  }
}
