/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x180007CAC
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000691C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180006254 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180008A30 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180008B0C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationContext::OnContactDepart(
        CManipulationContext *this,
        unsigned int a2,
        unsigned int a3,
        struct CInteraction *a4,
        bool a5,
        bool a6)
{
  struct CInteraction *v6; // rbx
  int Key; // eax
  __int64 v11; // r15
  struct CInteraction *v12; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+38h] BYREF
  struct CInteraction *v14; // [rsp+78h] [rbp+48h] BYREF

  v13 = a2;
  v6 = a4;
  v14 = a4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
  if ( !v6 )
  {
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v14);
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            (__int64)this + 56,
            (int *)&v13);
    if ( Key == -1 )
    {
      v6 = 0LL;
      v12 = 0LL;
    }
    else
    {
      v6 = *(struct CInteraction **)(*((_QWORD *)this + 8) + 8LL * Key);
      v12 = v6;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v12);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v12);
    v14 = v6;
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v12);
  }
  if ( a5 )
  {
    v11 = (__int64)v6;
    if ( v6 )
    {
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, a3);
        v11 = (*(__int64 (__fastcall **)(CManipulationContext *, __int64))(*(_QWORD *)this + 48LL))(this, v11);
      }
      while ( v11 );
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 56LL))(*((_QWORD *)this + 17), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    (char *)this + 56,
    &v13);
  if ( !a5
    && (*(unsigned __int8 (__fastcall **)(struct CInteraction *, _QWORD))(*(_QWORD *)v6 + 208LL))(v6, 0LL)
    && (*(unsigned __int8 (__fastcall **)(struct CInteraction *, _QWORD, _QWORD))(*(_QWORD *)v6 + 216LL))(v6, a2, 0LL) )
  {
    (*(void (__fastcall **)(struct CInteraction *, _QWORD))(*(_QWORD *)v6 + 224LL))(v6, a2);
  }
  else
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, a2, 0LL);
  CManipulationContext::CleanTreeState(v6, this, *((struct CComposition **)this + 5), a6, a3);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v14);
}
