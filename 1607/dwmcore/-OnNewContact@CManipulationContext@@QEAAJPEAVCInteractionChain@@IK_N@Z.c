/*
 * XREFs of ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180007D78
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180008878 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1800089A8 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationContext::OnNewContact(
        CManipulationContext *this,
        struct CInteractionChain *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5)
{
  unsigned int v9; // r14d
  bool v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  _BYTE *v13; // rcx
  bool v14; // bp
  _QWORD *i; // rbx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v17 = *((_QWORD *)a2 + 1);
  v9 = 0;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
  v10 = (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                        (char *)this + 56,
                        &v18,
                        &v17) == 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v17);
  if ( v10 )
  {
    v9 = -2147024882;
  }
  else
  {
    v13 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (v13[256] & 4) != 0
      && (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, a4, 0LL, 0LL) )
    {
      *((_BYTE *)this + 28) |= 2u;
    }
    NtDCompositionUpdatePointerCapture(*(unsigned int *)(*((_QWORD *)a2 + 1) + 252LL), a3);
    if ( !*((_QWORD *)this + 6) )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((char *)this + 48, *(_QWORD *)a2);
    *((_BYTE *)this + 28) ^= (*((_BYTE *)this + 28) ^ (8
                                                     * CManipulationContext::CheckForSingleTarget(
                                                         *((const struct CInteraction **)this + 6),
                                                         (const struct InputSinkAndEndpoints *)(*((_QWORD *)this + 6)
                                                                                              + 120LL)))) & 8;
  }
  v14 = a5;
  if ( !a5 || (*((_BYTE *)this + 28) & 1) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a2 + 1); ; i = (_QWORD *)i[35] )
    {
      LOBYTE(v12) = *((_BYTE *)this + 28);
      if ( !i )
        break;
      LOBYTE(v11) = !v14;
      LOBYTE(v12) = v12 & 1;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*i + 40LL))(i, v11, v12, a4);
    }
    LOBYTE(v11) = !v14;
    LOBYTE(v12) = v12 & 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 17) + 40LL))(
      *((_QWORD *)this + 17),
      v11,
      v12,
      a4);
  }
  return v9;
}
