/*
 * XREFs of ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x1800054E4
 * Callers:
 *     ??_ECManipulationContext@@W7EAAPEAXI@Z @ 0x1800BDAD0 (--_ECManipulationContext@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180001D20 (-RemoveAll@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXXZ @ 0x180005088 (-RemoveAll@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CManipulationContext *__fastcall CManipulationContext::`scalar deleting destructor'(
        CManipulationContext *this,
        char a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 14);
  CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::RemoveAll((__int64)this + 80);
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll((__int64)this + 56);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CManipulationContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
