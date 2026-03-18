/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x180143A38
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004BE0 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800019A4 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180001C1C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180001DE4 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1800026AC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18013F9DC (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180144864 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(
        CManipulationContext *this,
        struct CInteraction *a2,
        int a3,
        unsigned int a4)
{
  __int64 v4; // rax
  struct CVisualTree *v6; // rbx
  CInteraction *v7; // rdi
  int TreeNoLock; // r15d
  __int64 v10; // rax
  HMONITOR v11; // rbx
  CMonitorTreeAssociation *v12; // rsi
  __int64 i; // r13
  CInteraction *v14; // rsi
  unsigned int Key; // eax
  __int64 v16; // r11
  __int64 v17; // rax
  HMONITOR v18; // rbx
  CMonitorTreeAssociation *v19; // rsi
  struct CVisual *Visual; // rax
  CInteraction *v22; // [rsp+30h] [rbp-20h] BYREF
  CInteraction *v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-10h] BYREF
  struct CVisualTree *v25; // [rsp+98h] [rbp+48h] BYREF
  int v26; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+58h]

  v27 = a4;
  v26 = a3;
  v4 = *(_QWORD *)a2;
  v6 = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  TreeNoLock = 0;
  if ( (*(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD, _QWORD))(v4 + 80))(a2, a4, 0LL, 0LL) )
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)&v22, (__int64)a2);
    v7 = v22;
  }
  else
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
    v10 = *((_QWORD *)this + 5);
    v11 = (HMONITOR)*((_QWORD *)a2 + 111);
    v25 = 0LL;
    v12 = *(CMonitorTreeAssociation **)(v10 + 24);
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v12 + 6) + 576LL));
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v12, v11, &v25);
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v12 + 6) + 568LL));
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0x7Bu);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v23);
LABEL_5:
      v6 = v25;
      goto LABEL_25;
    }
    v6 = v25;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v25 + 2) + 576LL));
    for ( i = *((_QWORD *)CInteraction::GetVisual(a2) + 8); i; i = *(_QWORD *)(i + 64) )
    {
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)&v23, *(_QWORD *)(i + 400));
      v14 = v23;
      if ( v23
        && (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v23 + 80LL))(
             v23,
             v27,
             0LL,
             0LL) )
      {
        v24[0] = (__int64)v14;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v24);
        v24[0] = 0LL;
        v7 = v14;
        v22 = v14;
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v24);
        break;
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v23);
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 56,
          &v26);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v16,
                          &v26,
                          &v22) )
    {
      TreeNoLock = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9Du);
      goto LABEL_25;
    }
  }
  else
  {
    if ( *(CInteraction **)(*((_QWORD *)this + 8) + 8LL * (int)Key) == v7 )
      goto LABEL_25;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v16,
      Key,
      &v26,
      &v22);
  }
  if ( v7 )
  {
    if ( !v6 )
    {
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
      v17 = *((_QWORD *)this + 5);
      v18 = (HMONITOR)*((_QWORD *)v7 + 111);
      v25 = 0LL;
      v19 = *(CMonitorTreeAssociation **)(v17 + 24);
      AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v19 + 6) + 576LL));
      TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v19, v18, &v25);
      CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v19 + 6) + 568LL));
      if ( TreeNoLock < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0xACu);
        goto LABEL_5;
      }
      v6 = v25;
      AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v25 + 2) + 576LL));
    }
    Visual = CInteraction::GetVisual(v7);
    CManipulationContext::OnVisualPropertyChange(Visual, v6);
  }
LABEL_25:
  if ( v6 )
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v6 + 2) + 568LL));
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
  return (unsigned int)TreeNoLock;
}
