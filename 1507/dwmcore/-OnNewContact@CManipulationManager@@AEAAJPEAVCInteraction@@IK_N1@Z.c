/*
 * XREFs of ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18012AB28
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18012A684 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012B110 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A634 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18001596C (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18012989C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801298EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180129A74 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Add@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z @ 0x180129B84 (-Add@-$CMap@IKV-$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18012AEB4 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x18012F75C (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x18012FA78 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x1801302E8 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180130434 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x1801308E8 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
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
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  CManipulationContext *v18; // rax
  int v19; // eax
  int v20; // r9d
  __int64 v21; // rcx
  void *v22; // rax
  void *v23; // rcx
  void *v24; // rax
  __int64 v25; // rdx
  unsigned int v27; // [rsp+20h] [rbp-50h]
  CManipulationContext *v28; // [rsp+40h] [rbp-30h] BYREF
  struct CVisualTree *v29; // [rsp+48h] [rbp-28h] BYREF
  HMONITOR v30; // [rsp+50h] [rbp-20h]
  __int64 v31[3]; // [rsp+58h] [rbp-18h] BYREF
  bool v32; // [rsp+B0h] [rbp+40h] BYREF
  struct CInteraction *v33; // [rsp+B8h] [rbp+48h]
  unsigned int v34; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v35; // [rsp+C8h] [rbp+58h] BYREF

  v35 = a4;
  v34 = a3;
  v33 = (struct CInteraction *)a2;
  v6 = *((_QWORD *)this + 2);
  v8 = a2[78];
  v9 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v11 = *(CMonitorTreeAssociation **)(v6 + 24);
  *(_OWORD *)v31 = 0LL;
  v32 = 0;
  v30 = v8;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v11 + 6) + 576LL));
  TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v11, v8, &v29);
  CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v11 + 6) + 568LL));
  if ( TreeNoLock < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0x4CCu);
    goto LABEL_32;
  }
  CManipulationContext::BuildInteractionChainAndUpdateTree(v29, v33, a4, a5, (struct CInteractionChain *)v31, &v32);
  if ( v31[1] )
  {
    v14 = 0;
    if ( *((int *)this + 40) <= 0 )
      goto LABEL_12;
    v15 = *((_QWORD *)this + 19);
    v16 = 0LL;
    while ( v31[0] != *(_QWORD *)(*(_QWORD *)v15 + 48LL) )
    {
      ++v14;
      ++v16;
      v15 += 8LL;
      if ( v16 >= *((int *)this + 40) )
        goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 *)&v28,
      (__int64 *)(*((_QWORD *)this + 19) + 8LL * v14));
    v9 = v28;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v17, &MANIPULATION_CONTEXT_NEW_CONTACT, (__int64)v28, a3);
    if ( !v9 )
    {
LABEL_12:
      v18 = (CManipulationContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      128LL);
      if ( v18 )
        v18 = CManipulationContext::CManipulationContext(v18, *((struct CComposition **)this + 2));
      Microsoft::WRL::ComPtr<CManipulationContext>::operator=((__int64 *)&v28, (__int64)v18);
      v9 = v28;
      if ( !v28 )
      {
        v27 = 1260;
LABEL_30:
        v20 = -2147024882;
        TreeNoLock = -2147024882;
        goto LABEL_31;
      }
      v19 = CManipulationContext::Initialize(v28, v32, v30);
      TreeNoLock = v19;
      if ( v19 < 0 )
      {
        v27 = 1261;
        goto LABEL_18;
      }
      if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                            (char **)this + 19,
                            &v28) )
      {
        v27 = 1264;
        goto LABEL_30;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xd(v21, &MANIPULATION_CONTEXT_CREATED, (__int64)v9, a3);
    }
    v22 = ReallocHeap(*((void **)this + 16), 4LL * (*((_DWORD *)this + 36) + 1));
    if ( !v22
      || (v23 = (void *)*((_QWORD *)this + 17),
          *((_QWORD *)this + 16) = v22,
          (v24 = ReallocHeap(v23, 8LL * (*((_DWORD *)this + 36) + 1))) == 0LL) )
    {
      v27 = 1271;
      goto LABEL_30;
    }
    v25 = *((unsigned int *)this + 36);
    *((_QWORD *)this + 17) = v24;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::InternalSetAtIndex(
      (char *)this + 128,
      v25,
      &v34,
      &v28);
    ++*((_DWORD *)this + 36);
    if ( !(unsigned int)CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::Add(
                          (__int64)this + 168,
                          &v34,
                          &v35) )
    {
      v27 = 1276;
      goto LABEL_30;
    }
    v19 = CManipulationContext::OnNewContact(v9, (struct CInteractionChain *)v31, a3, a4, a6);
    TreeNoLock = v19;
    if ( v19 >= 0 )
      goto LABEL_32;
    v27 = 1279;
LABEL_18:
    v20 = v19;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v27);
  }
LABEL_32:
  if ( v29 )
    CMILRefCountBase::Release(v29);
  if ( TreeNoLock < 0 )
    CManipulationManager::OnUp(this, v33, a3, a4, v9, 0, 0);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v31[1]);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v31);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v28);
  return (unsigned int)TreeNoLock;
}
