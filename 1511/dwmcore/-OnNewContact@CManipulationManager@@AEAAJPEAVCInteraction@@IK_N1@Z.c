/*
 * XREFs of ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004BE0 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18013FBB4 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800019A4 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180001A7C (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180001CE4 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ?Add@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z @ 0x1800023BC (-Add@-$CMap@IKV-$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1800024EC (-Add@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VC.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003C34 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000424C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x180005370 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1800055A4 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180005608 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180005738 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x180027708 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        CManipulationManager *this,
        HMONITOR *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        bool a6)
{
  __int64 v6; // rax
  HMONITOR v8; // rsi
  CManipulationContext *v9; // rbx
  CMonitorTreeAssociation *v11; // rdi
  int TreeNoLock; // esi
  int v14; // edx
  CManipulationContext *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  void *v18; // rax
  void *v19; // rcx
  void *v20; // rax
  int v21; // edx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // r9d
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
  v8 = a2[111];
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeNoLock, 0x4D0u);
    goto LABEL_15;
  }
  CManipulationContext::BuildInteractionChainAndUpdateTree(v29, v33, a4, a5, (struct CInteractionChain *)v31, &v32);
  if ( !v31[1] )
    goto LABEL_15;
  v14 = 0;
  if ( *((int *)this + 40) > 0 )
  {
    v23 = *((_QWORD *)this + 19);
    v24 = 0LL;
    while ( v31[0] != *(_QWORD *)(*(_QWORD *)v23 + 48LL) )
    {
      ++v14;
      ++v24;
      v23 += 8LL;
      if ( v24 >= *((int *)this + 40) )
        goto LABEL_4;
    }
    Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(
      (__int64 *)&v28,
      (__int64 *)(*((_QWORD *)this + 19) + 8LL * v14));
    v9 = v28;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v25, &MANIPULATION_CONTEXT_NEW_CONTACT, v28, a3);
    if ( v9 )
    {
LABEL_11:
      v18 = ReallocHeap(*((void **)this + 16), 4LL * (*((_DWORD *)this + 36) + 1));
      if ( v18
        && (v19 = (void *)*((_QWORD *)this + 17),
            *((_QWORD *)this + 16) = v18,
            (v20 = ReallocHeap(v19, 8LL * (*((_DWORD *)this + 36) + 1))) != 0LL) )
      {
        v21 = *((_DWORD *)this + 36);
        *((_QWORD *)this + 17) = v20;
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::InternalSetAtIndex(
          (_QWORD *)this + 16,
          v21,
          &v34,
          &v28);
        ++*((_DWORD *)this + 36);
        if ( (unsigned int)CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::Add(
                             (__int64)this + 168,
                             &v34,
                             &v35) )
        {
          v16 = CManipulationContext::OnNewContact(v9, (struct CInteractionChain *)v31, a3, a4, a6);
          TreeNoLock = v16;
          if ( v16 >= 0 )
            goto LABEL_15;
          v27 = 1283;
          goto LABEL_32;
        }
        v27 = 1280;
      }
      else
      {
        v27 = 1275;
      }
LABEL_36:
      v26 = -2147024882;
      TreeNoLock = -2147024882;
      goto LABEL_37;
    }
  }
LABEL_4:
  v15 = (CManipulationContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                  WPF::g_pProcessHeap,
                                  144LL);
  if ( v15 )
    v15 = CManipulationContext::CManipulationContext(v15, *((struct CComposition **)this + 2));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v28, v15);
  v9 = v28;
  if ( !v28 )
  {
    v27 = 1264;
    goto LABEL_36;
  }
  v16 = CManipulationContext::Initialize(v28, v32, v30);
  TreeNoLock = v16;
  if ( v16 >= 0 )
  {
    if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
                          (char **)this + 19,
                          &v28) )
    {
      v27 = 1268;
      goto LABEL_36;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v17, &MANIPULATION_CONTEXT_CREATED, v9, a3);
    goto LABEL_11;
  }
  v27 = 1265;
LABEL_32:
  v26 = v16;
LABEL_37:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v27);
LABEL_15:
  if ( v29 )
    CMILRefCountBase::Release(v29);
  if ( TreeNoLock < 0 )
    CManipulationManager::OnUp((RTL_SRWLOCK **)this, v33, a3, a4, v9, 0, 0);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v31[1]);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v31);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v28);
  return (unsigned int)TreeNoLock;
}
