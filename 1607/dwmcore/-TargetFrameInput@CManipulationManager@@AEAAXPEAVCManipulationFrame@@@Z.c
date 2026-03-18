/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006FDC
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1800074A8 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A70E0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@@Z @ 0x1800065AC (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 *     ?TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z @ 0x1800072C0 (-TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180008250 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180020C40 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800A73BC (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180106C20 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 i; // r12
  __int64 v6; // rsi
  char *v7; // r15
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // r8
  unsigned int v12; // r9d
  int v13; // r15d
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // [rsp+80h] [rbp+48h] BYREF
  struct CManipulationContext *v19; // [rsp+88h] [rbp+50h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+58h] BYREF
  void *v21; // [rsp+98h] [rbp+60h] BYREF

  v2 = 0;
  for ( i = 0LL; v2 < *((_DWORD *)a2 + 4); ++v2 )
  {
    v6 = 152LL * v2;
    v7 = (char *)a2 + v6;
    if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                         (CManipulationManager *)((char *)this + 304),
                         *(_QWORD *)((char *)a2 + v6 + 112),
                         &v20) )
    {
      v8 = v20;
    }
    else
    {
      v8 = 1000LL * *(unsigned int *)((char *)a2 + v6 + 96);
      v20 = v8;
    }
    if ( i < v8 )
      i = v8;
    if ( (*((_BYTE *)a2 + 28) & 2) == 0 || *(_QWORD *)((char *)a2 + v6 + 56) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (char *)this + 128,
        &v19,
        v7 + 36);
      if ( (((*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(&v19, (char *)this + 272, v9, v10);
      v11 = 0LL;
      v12 = 0;
      v21 = 0LL;
      v18 = 0;
      if ( v19 )
      {
        CManipulationManager::TargetPointer(this, v19, a2, v2, &v21, &v18);
        v11 = v21;
        v12 = v18;
      }
      *(_QWORD *)((char *)a2 + v6 + 56) = v11;
      *(_DWORD *)((char *)a2 + v6 + 176) = v12;
      if ( v11 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 28) |= 1u;
        if ( (*((_BYTE *)a2 + 28) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, *((_DWORD *)v7 + 9), v11, v12, v2);
      }
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v19);
    }
  }
  v13 = 0;
  if ( *((int *)this + 40) > 0 )
  {
    v14 = 0LL;
    do
    {
      v15 = 0;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 11) & 0x800000) != 0 )
      {
        if ( *((_DWORD *)a2 + 26) == 571 )
        {
          v15 = 1;
        }
        else if ( *((_DWORD *)a2 + 26) == 572 )
        {
          v15 = 2;
        }
      }
      v16 = *(_QWORD *)(*((_QWORD *)this + 19) + v14);
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      CGestureTargetingManager::ProcessHandledInteractionsWalk(v16, v17, i, v15);
      ++v13;
      v14 += 8LL;
    }
    while ( v13 < *((_DWORD *)this + 40) );
  }
}
