/*
 * XREFs of ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180004748
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A6560 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1800040C4 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CManipulationManager::CheckForBufferedDescendant(
        CManipulationManager *this,
        struct CManipulationFrame *a2,
        unsigned int a3)
{
  struct CManipulationFrame *v3; // r15
  int v4; // esi
  bool v5; // r12
  unsigned int v6; // r14d
  CManipulationManager *v7; // rdx
  __int64 v8; // rcx
  int *v9; // r13
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // bl
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 i; // [rsp+38h] [rbp-10h]
  unsigned int v23; // [rsp+A0h] [rbp+58h]
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v23 = a3;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  LODWORD(v24) = 0;
  v6 = 0;
  v7 = this;
  for ( i = *((_QWORD *)v3 + 19 * a3 + 7); v6 < *((_DWORD *)v3 + 4); v7 = this )
  {
    if ( v5 )
      break;
    v24 = 0LL;
    v17 = 0LL;
    v8 = 152LL * v6;
    v9 = (int *)((char *)v3 + v8);
    if ( v6 == a3 || *(_QWORD *)((char *)v3 + v8 + 56) != -1LL )
      goto LABEL_10;
    v4 |= 1u;
    v10 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
            (__int64)v7 + 128,
            &v19,
            v9 + 9);
    v11 = 0LL;
    if ( &v18 != v10 )
    {
      v11 = *v10;
      *v10 = 0LL;
    }
    v18 = 0LL;
    v17 = v11;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
    if ( v11
      && (v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, (unsigned int)v9[9]),
          *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v24, v12)) )
    {
      v13 = 0;
    }
    else
    {
LABEL_10:
      v13 = 1;
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v19);
    }
    if ( v13 )
    {
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
    }
    else
    {
      v14 = i;
      while ( v24 && !v5 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24) == v14;
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 88LL))(v24);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v24, v15);
      }
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v24);
      v3 = a2;
    }
    a3 = v23;
    ++v6;
  }
  return v5;
}
