/*
 * XREFs of ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180007390 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18016AF50 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?Add@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z @ 0x18000627C (-Add@-$CMap@IKV-$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180006440 (-Add@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VC.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000691C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x180007950 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180007B24 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x180007C48 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180007D78 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180008148 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180008E5C (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A2CC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18009ED18 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180106C20 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        CManipulationManager *this,
        HMONITOR *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5,
        bool a6)
{
  __int64 v6; // rax
  HMONITOR v8; // rsi
  CManipulationContext *v9; // rbx
  CMonitorTreeAssociation *v11; // rdi
  int TreeNoLock; // esi
  bool v14; // r9
  struct CVisualTree *v15; // r14
  int v16; // edx
  CManipulationContext *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  void *v20; // rax
  void *v21; // rcx
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // r9d
  unsigned int v30; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+20h] [rbp-58h]
  CManipulationContext *v32; // [rsp+40h] [rbp-38h] BYREF
  struct CVisualTree *v33; // [rsp+48h] [rbp-30h] BYREF
  HMONITOR v34; // [rsp+50h] [rbp-28h]
  _OWORD v35[2]; // [rsp+58h] [rbp-20h] BYREF
  bool v36; // [rsp+C0h] [rbp+48h] BYREF
  struct CInteraction *v37; // [rsp+C8h] [rbp+50h]
  unsigned int v38; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v39; // [rsp+D8h] [rbp+60h] BYREF

  v39 = a4;
  v38 = a3;
  v37 = (struct CInteraction *)a2;
  v6 = *((_QWORD *)this + 2);
  v8 = a2[170];
  v9 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v11 = *(CMonitorTreeAssociation **)(v6 + 24);
  v35[0] = 0LL;
  v36 = 0;
  v34 = v8;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v11 + 6) + 584LL));
  TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v11, v8, &v33);
  CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v11 + 6) + 576LL));
  v15 = v33;
  if ( TreeNoLock < 0 )
  {
    v31 = 1428;
    v29 = TreeNoLock;
    goto LABEL_40;
  }
  if ( !a5 )
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v33 + 2) + 584LL));
  CManipulationContext::BuildInteractionChainAndUpdateTree(v15, v37, a4, v14, (struct CInteractionChain *)v35, &v36);
  if ( !*((_QWORD *)&v35[0] + 1) )
  {
LABEL_41:
    if ( TreeNoLock >= 0 )
      goto LABEL_17;
    goto LABEL_42;
  }
  v16 = 0;
  if ( *((int *)this + 40) <= 0 )
    goto LABEL_6;
  v25 = *((_QWORD *)this + 19);
  v26 = 0LL;
  v27 = *((int *)this + 40);
  while ( *(_QWORD *)&v35[0] != *(_QWORD *)(*(_QWORD *)v25 + 48LL) )
  {
    ++v16;
    ++v26;
    v25 += 8LL;
    if ( v26 >= v27 )
      goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(&v32, *((_QWORD *)this + 19) + 8LL * v16, v26, v27);
  v9 = v32;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xd(v28, &MANIPULATION_CONTEXT_NEW_CONTACT, v32, a3);
  if ( !v9 )
  {
LABEL_6:
    v17 = (CManipulationContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                    WPF::g_pProcessHeap,
                                    144LL);
    if ( v17 )
      v17 = CManipulationContext::CManipulationContext(v17, *((struct CComposition **)this + 2));
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v32, v17);
    v9 = v32;
    if ( !v32 )
    {
      v30 = 1465;
      goto LABEL_33;
    }
    v18 = CManipulationContext::Initialize(v32, v36, v34);
    TreeNoLock = v18;
    if ( v18 < 0 )
    {
      v31 = 1466;
LABEL_38:
      v29 = v18;
LABEL_40:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, v31);
      goto LABEL_41;
    }
    if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
                          (char **)this + 19,
                          &v32) )
    {
      v30 = 1469;
      goto LABEL_33;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v19, &MANIPULATION_CONTEXT_CREATED, v9, a3);
  }
  v20 = ReallocHeap(*((void **)this + 16), 4LL * (*((_DWORD *)this + 36) + 1));
  if ( v20
    && (v21 = (void *)*((_QWORD *)this + 17),
        *((_QWORD *)this + 16) = v20,
        (v22 = ReallocHeap(v21, 8LL * (*((_DWORD *)this + 36) + 1))) != 0LL) )
  {
    v23 = *((unsigned int *)this + 36);
    *((_QWORD *)this + 17) = v22;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::InternalSetAtIndex(
      (char *)this + 128,
      v23,
      &v38,
      &v32);
    ++*((_DWORD *)this + 36);
    if ( (unsigned int)CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::Add(
                         (__int64)this + 168,
                         &v38,
                         &v39) )
    {
      v18 = CManipulationContext::OnNewContact(v9, (struct CInteractionChain *)v35, a3, a4, a6);
      TreeNoLock = v18;
      if ( v18 >= 0 )
        goto LABEL_17;
      v31 = 1484;
      goto LABEL_38;
    }
    v30 = 1481;
  }
  else
  {
    v30 = 1476;
  }
LABEL_33:
  TreeNoLock = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v30);
LABEL_42:
  CManipulationManager::OnUp((struct CComposition **)this, v37, a3, a4, v9, 0, 0);
LABEL_17:
  if ( !a5 )
  {
    if ( !v15 )
      goto LABEL_22;
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v15 + 2) + 576LL));
  }
  if ( v15 )
    CMILRefCountBase::Release(v15);
LABEL_22:
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)v35 + 8);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v35);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v32);
  return (unsigned int)TreeNoLock;
}
