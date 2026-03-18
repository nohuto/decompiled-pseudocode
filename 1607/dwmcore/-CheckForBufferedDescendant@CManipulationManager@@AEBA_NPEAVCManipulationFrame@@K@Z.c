/*
 * XREFs of ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180006E34
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A70E0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180008250 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CManipulationManager::CheckForBufferedDescendant(
        CManipulationManager *this,
        struct CManipulationFrame *a2,
        unsigned int a3)
{
  unsigned int v4; // r13d
  int v5; // ebx
  bool v6; // r15
  unsigned int v7; // edi
  CManipulationManager *v8; // rdx
  __int64 v9; // rcx
  char *v10; // r12
  char v11; // si
  __int64 *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v19[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 i; // [rsp+30h] [rbp-18h]
  __int64 v22; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+58h]
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v23 = a3;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  LODWORD(v22) = 0;
  v7 = 0;
  v8 = this;
  for ( i = *((_QWORD *)a2 + 19 * a3 + 7); v7 < *((_DWORD *)a2 + 4); ++v7 )
  {
    if ( v6 )
      break;
    v22 = 0LL;
    v24 = 0LL;
    v9 = 152LL * v7;
    v10 = (char *)a2 + v9;
    if ( v7 == v4 || *(_QWORD *)((char *)a2 + v9 + 56) != -1LL )
      goto LABEL_4;
    v5 |= 1u;
    v13 = (__int64 *)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
                       (char *)v8 + 128,
                       v19,
                       v10 + 36);
    v14 = 0LL;
    if ( &v18 != v13 )
    {
      v14 = *v13;
      *v13 = 0LL;
    }
    v18 = 0LL;
    v24 = v14;
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v18);
    if ( v14
      && (v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, *((unsigned int *)v10 + 9)),
          *(_QWORD *)Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v22, v15)) )
    {
      v11 = 0;
    }
    else
    {
LABEL_4:
      v11 = 1;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v19);
    }
    if ( v11 )
    {
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v22);
    }
    else
    {
      v16 = i;
      while ( v22 && !v6 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, CManipulationManager *))(*(_QWORD *)v22 + 64LL))(v22, v8) == v16;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 88LL))(v22);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v22, v17);
      }
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v22);
      v4 = v23;
    }
    v8 = this;
  }
  return v6;
}
