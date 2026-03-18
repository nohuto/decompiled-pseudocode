/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x18013065C
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18012AEB4 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180129F2C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x18012FDBC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180130E10 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactDepart(
        CManipulationContext *this,
        unsigned int a2,
        unsigned int a3,
        struct CInteraction *a4,
        bool a5,
        char a6)
{
  struct CInteraction *v6; // rbx
  int Key; // eax
  __int64 v11; // rsi
  struct CInteraction *v12; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+48h] BYREF
  struct CInteraction *v14; // [rsp+88h] [rbp+58h] BYREF

  v13 = a2;
  v6 = a4;
  v14 = a4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
  if ( !v6 )
  {
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v14);
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            (__int64)this + 56,
            (int *)&v13);
    if ( Key == -1 )
    {
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
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v12);
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
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 56LL))(*((_QWORD *)this + 15), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    (char *)this + 56,
    &v13);
  NtDCompositionUpdatePointerCapture();
  (*(void (__fastcall **)(CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, a2, 0LL);
  CManipulationContext::CleanTreeState(v6, this, *((RTL_SRWLOCK **)this + 5), a6, a3);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v14);
}
