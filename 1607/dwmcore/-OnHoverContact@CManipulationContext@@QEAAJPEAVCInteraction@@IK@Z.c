/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801711BC
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180007390 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180006254 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800068B0 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1800089A8 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A2CC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18016AB90 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180172414 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(
        CManipulationContext *this,
        struct CInteraction *a2,
        int a3,
        unsigned int a4)
{
  __int64 v4; // rax
  struct CVisualTree *v8; // rbx
  CInteraction *v9; // rdi
  unsigned int (__fastcall *v10)(struct CInteraction *, _QWORD, _QWORD, _QWORD); // rax
  int TreeNoLock; // r14d
  __int64 v12; // rax
  HMONITOR v13; // rbx
  CMonitorTreeAssociation *v14; // rsi
  struct CVisual *Visual; // rax
  CVisual *i; // rsi
  struct CInteraction *InteractionInternal; // rax
  unsigned int Key; // eax
  __int64 v19; // r11
  __int64 v20; // rax
  HMONITOR v21; // rbx
  CMonitorTreeAssociation *v22; // rsi
  struct CVisual *v23; // rax
  CInteraction *v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  struct CVisualTree *v27; // [rsp+88h] [rbp+48h] BYREF
  int v28; // [rsp+90h] [rbp+50h] BYREF

  v28 = a3;
  v4 = *(_QWORD *)a2;
  v8 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v10 = *(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD, _QWORD))(v4 + 80);
  v25 = 0LL;
  TreeNoLock = 0;
  if ( v10(a2, a4, 0LL, 0LL) )
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)&v25, (__int64)a2);
    v9 = v25;
  }
  else
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v27);
    v12 = *((_QWORD *)this + 5);
    v13 = (HMONITOR)*((_QWORD *)a2 + 170);
    v27 = 0LL;
    v14 = *(CMonitorTreeAssociation **)(v12 + 24);
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v14 + 6) + 584LL));
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v14, v13, &v27);
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v14 + 6) + 576LL));
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0x89u);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v26);
      goto LABEL_25;
    }
    v8 = v27;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v27 + 2) + 584LL));
    Visual = CInteraction::GetVisual(a2);
    if ( Visual )
    {
      for ( i = (CVisual *)*((_QWORD *)Visual + 18); i; i = (CVisual *)*((_QWORD *)i + 18) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(i);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v26, (__int64)InteractionInternal);
        if ( v26
          && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v26 + 80LL))(
               v26,
               a4,
               0LL,
               0LL) )
        {
          Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v25, &v26);
          v9 = v25;
          break;
        }
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v26);
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 56,
          &v28);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v19,
                          &v28,
                          &v25) )
    {
      TreeNoLock = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB0u);
      goto LABEL_26;
    }
  }
  else
  {
    if ( *(CInteraction **)(*((_QWORD *)this + 8) + 8LL * (int)Key) == v9 )
      goto LABEL_26;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v19,
      Key,
      &v28,
      &v25);
  }
  if ( !v9 )
    goto LABEL_26;
  if ( v8 )
    goto LABEL_20;
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v27);
  v20 = *((_QWORD *)this + 5);
  v21 = (HMONITOR)*((_QWORD *)v9 + 170);
  v27 = 0LL;
  v22 = *(CMonitorTreeAssociation **)(v20 + 24);
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v22 + 6) + 584LL));
  TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v22, v21, &v27);
  CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v22 + 6) + 576LL));
  if ( TreeNoLock >= 0 )
  {
    v8 = v27;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v27 + 2) + 584LL));
LABEL_20:
    v23 = CInteraction::GetVisual(v9);
    CManipulationContext::OnVisualPropertyChange(v23, v8);
    goto LABEL_26;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0xBFu);
LABEL_25:
  v8 = v27;
LABEL_26:
  if ( v8 )
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v8 + 2) + 576LL));
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v25);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v27);
  return (unsigned int)TreeNoLock;
}
