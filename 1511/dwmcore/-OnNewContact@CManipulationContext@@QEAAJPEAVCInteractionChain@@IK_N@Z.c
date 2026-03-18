/*
 * XREFs of ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180005738
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180001DE4 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CManipulationContext::OnNewContact(
        CManipulationContext *this,
        struct CInteractionChain *a2,
        int a3,
        unsigned int a4,
        bool a5)
{
  unsigned int v8; // r12d
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE *v12; // rdi
  bool v13; // r15
  _QWORD *i; // r14
  char v16; // bl
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v17 = *((_QWORD *)a2 + 1);
  v8 = 0;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
  v9 = (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                       (__int64)this + 56,
                       &v18,
                       &v17) == 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v17);
  if ( v9 )
  {
    v8 = -2147024882;
  }
  else
  {
    v12 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (v12[156] & 2) != 0
      && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 80LL))(
           *((_QWORD *)a2 + 1),
           a4,
           0LL,
           0LL) )
    {
      *((_BYTE *)this + 28) |= 2u;
    }
    NtDCompositionUpdatePointerCapture();
    if ( !*((_QWORD *)this + 6) )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)this + 6, *(_QWORD *)a2);
  }
  v13 = a5;
  if ( !a5 || (*((_BYTE *)this + 28) & 1) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a2 + 1); ; i = (_QWORD *)i[21] )
    {
      v16 = *((_BYTE *)this + 28);
      if ( !i )
        break;
      LOBYTE(v11) = v16 & 1;
      LOBYTE(v10) = !v13;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*i + 40LL))(i, v10, v11);
    }
    LOBYTE(v11) = v16 & 1;
    LOBYTE(v10) = !v13;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 17) + 40LL))(
      *((_QWORD *)this + 17),
      v10,
      v11);
  }
  return v8;
}
