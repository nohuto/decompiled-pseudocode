/*
 * XREFs of ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x1800A6A60
 * Callers:
 *     <none>
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180006254 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800068B0 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CManipulationContext::GetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  int Key; // eax
  __int64 v6; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *(_DWORD *)a3 = 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)a3 + 1);
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 80,
          &v8);
  if ( Key != -1 )
  {
    v6 = *((_QWORD *)this + 11) + 16LL * Key;
    *(_DWORD *)a3 = *(_DWORD *)v6;
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)a3 + 1, (__int64 *)(v6 + 8));
  }
  return 0LL;
}
