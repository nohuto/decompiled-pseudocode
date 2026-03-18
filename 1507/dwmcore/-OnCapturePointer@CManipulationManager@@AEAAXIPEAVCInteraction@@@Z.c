/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18012A684
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801298EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180129F2C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18012AB28 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18012AEB4 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  char *v3; // r15
  int Key; // eax
  char v8; // di
  struct CManipulationContext **v9; // rax
  struct CManipulationContext *v10; // rbx
  int v11; // eax
  struct CInteraction *v12; // r10
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  struct CInteraction *v16; // [rsp+48h] [rbp-18h] BYREF
  struct CManipulationContext *v17; // [rsp+50h] [rbp-10h] BYREF
  struct CInteraction *v18; // [rsp+A0h] [rbp+40h] BYREF
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
    v9 = (struct CManipulationContext **)&v15;
  }
  else
  {
    v8 = 2;
    v18 = *(struct CInteraction **)(*((_QWORD *)this + 17) + 8LL * Key);
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
    v9 = &v18;
  }
  v10 = *v9;
  *v9 = 0LL;
  v17 = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v18);
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
  CManipulationManager::OnUp(this, v12, a2, v13, v10, 1, 1);
  CManipulationManager::OnNewContact(this, a3, a2, v13, 1, 0);
  v20 = 0LL;
  v14 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)v3,
          (int *)&v19);
  if ( v14 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v20, (__int64 *)(*((_QWORD *)this + 17) + 8LL * v14)) )
  {
    v16 = 0LL;
    LODWORD(v15) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 72LL))(v20, a2, &v15);
    v18 = a3;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
    v18 = v16;
    v16 = a3;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v18);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 88LL))(v20, &v15);
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v16);
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v17);
}
