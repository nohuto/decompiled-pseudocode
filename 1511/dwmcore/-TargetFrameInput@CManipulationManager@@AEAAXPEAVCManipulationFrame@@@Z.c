/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800048FC
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180004D7C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A6560 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003C34 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1800040C4 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z @ 0x180004B04 (-TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800A685C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  int *v6; // r14
  void *v7; // r8
  unsigned int v8; // r9d
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  struct CManipulationContext *v10; // [rsp+70h] [rbp+18h] BYREF
  void *v11; // [rsp+78h] [rbp+20h] BYREF

  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v5 = 152LL * i;
    v6 = (int *)((char *)a2 + v5);
    if ( (*((_BYTE *)a2 + 28) & 2) == 0 || *(_QWORD *)((char *)a2 + v5 + 56) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 128,
        &v10,
        v6 + 9);
      if ( (((*(_DWORD *)((_BYTE *)a2 + v5 + 44) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<CManipulationFrame>::operator=((__int64 *)&v10, (__int64 *)this + 34);
      v7 = 0LL;
      v8 = 0;
      v11 = 0LL;
      v9 = 0;
      if ( v10 )
      {
        CManipulationManager::TargetPointer(this, v10, a2, i, &v11, &v9);
        v7 = v11;
        v8 = v9;
      }
      *(_QWORD *)((char *)a2 + v5 + 56) = v7;
      *(_DWORD *)((char *)a2 + v5 + 176) = v8;
      if ( v7 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 28) |= 1u;
        if ( (*((_BYTE *)a2 + 28) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, v6[9], v7, v8, i);
      }
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v10);
    }
  }
}
