/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18013FBB4
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180001C1C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003C34 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000424C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800FF2B8 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(CManipulationManager *this, unsigned int a2, HMONITOR *a3)
{
  char *v3; // r15
  int Key; // eax
  char v8; // di
  __int64 *v9; // rax
  struct CManipulationContext *v10; // rbx
  int v11; // eax
  struct CInteraction *v12; // r10
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  struct CManipulationContext *v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+58h] BYREF

  v19 = a2;
  LODWORD(v18) = 0;
  v3 = (char *)this + 128;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 128,
          (int *)&v19);
  if ( Key == -1 )
  {
    v15 = 0LL;
    v8 = 1;
    v9 = &v15;
  }
  else
  {
    v8 = 2;
    v18 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * Key);
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
    v9 = &v18;
  }
  v10 = (struct CManipulationContext *)*v9;
  *v9 = 0LL;
  v17 = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
  }
  if ( (v8 & 1) != 0 )
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v15);
  if ( v10 )
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, a2);
  v11 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 168,
          (int *)&v19);
  if ( v11 == -1 )
    v13 = 1;
  else
    v13 = *(_DWORD *)(*((_QWORD *)this + 22) + 4LL * v11);
  CManipulationManager::OnUp((RTL_SRWLOCK **)this, v12, a2, v13, v10, 1, 1);
  CManipulationManager::OnNewContact(this, a3, a2, v13, 1, 0);
  v20 = 0LL;
  v14 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)v3,
          (int *)&v19);
  if ( v14 != -1
    && *Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(&v20, (__int64 *)(*((_QWORD *)this + 17) + 8LL * v14)) )
  {
    v16 = 0LL;
    LODWORD(v15) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 72LL))(v20, a2, &v15);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v16, (__int64)a3);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 88LL))(v20, &v15);
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v17);
}
