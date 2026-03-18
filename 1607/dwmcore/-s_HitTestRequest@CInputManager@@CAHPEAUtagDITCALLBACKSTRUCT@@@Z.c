/*
 * XREFs of ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180009E90
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180172690 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z @ 0x180009E24 (-FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18000A2CC (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000AF70 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PE.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001FF70 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRunningOnDesktop@CInputManager@@AEAAHXZ @ 0x1800A81FC (-IsRunningOnDesktop@CInputManager@@AEAAHXZ.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800B2AF0 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z @ 0x18011A084 (-HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z.c)
 *     Template_xqq @ 0x18011CBCC (Template_xqq.c)
 *     Template_xqqxxffffffffffffffff @ 0x18016A3EC (Template_xqqxxffffffffffffffff.c)
 */

__int64 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1, int a2)
{
  struct CInputManager *v2; // r15
  unsigned int v3; // esi
  int TreeNoLock; // ebx
  int v6; // edi
  __int64 v7; // rax
  HMONITOR v8; // rbx
  CMonitorTreeAssociation *v9; // rdi
  CoRenderHost *v10; // r12
  struct CVisualTree *v11; // rdi
  CInputManager *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  struct CVisual *v19; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-78h] BYREF
  struct CVisualTree *v21; // [rsp+D0h] [rbp-70h] BYREF
  void *v22; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  int v24; // [rsp+F0h] [rbp-50h] BYREF
  int v25; // [rsp+F4h] [rbp-4Ch]
  int v26; // [rsp+F8h] [rbp-48h]
  int v27; // [rsp+FCh] [rbp-44h]
  int v28; // [rsp+100h] [rbp-40h]
  int v29; // [rsp+104h] [rbp-3Ch]
  int v30; // [rsp+108h] [rbp-38h]
  int v31; // [rsp+10Ch] [rbp-34h]
  int v32; // [rsp+110h] [rbp-30h]
  int v33; // [rsp+114h] [rbp-2Ch]
  int v34; // [rsp+118h] [rbp-28h]
  int v35; // [rsp+11Ch] [rbp-24h]
  int v36; // [rsp+120h] [rbp-20h]
  int v37; // [rsp+124h] [rbp-1Ch]
  int v38; // [rsp+128h] [rbp-18h]
  int v39; // [rsp+12Ch] [rbp-14h]
  int v40; // [rsp+130h] [rbp-10h]
  char v41; // [rsp+188h] [rbp+48h] BYREF
  int v42; // [rsp+190h] [rbp+50h] BYREF
  int v43; // [rsp+198h] [rbp+58h] BYREF

  v2 = CInputManager::s_pInputManager;
  v3 = 0;
  TreeNoLock = 1;
  v23 = 0LL;
  v6 = 0;
  v42 = 0;
  v22 = 0LL;
  v43 = 0;
  v41 = 0;
  v20 = 0LL;
  v40 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(
      (_DWORD)a1,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
  if ( v2 )
  {
    v7 = *((_QWORD *)v2 + 2);
    v8 = (HMONITOR)*((_QWORD *)a1 + 1);
    v19 = 0LL;
    v21 = 0LL;
    v9 = *(CMonitorTreeAssociation **)(v7 + 24);
    v10 = *(CoRenderHost **)(v7 + 520);
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 6) + 584LL));
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v9, v8, &v21);
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v9 + 6) + 576LL));
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B9C14, 1u, TreeNoLock, 0x53u);
      goto LABEL_24;
    }
    v11 = v21;
    if ( (*(_BYTE *)(*((_QWORD *)v21 + 3) + 152LL) & 0xF) != 0 )
    {
      CReadWriteLock::EnterWrite((CReadWriteLock *)(*((_QWORD *)v21 + 2) + 576LL));
      TreeNoLock = CVisualTree::PreCompute(v11);
      CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v11 + 2) + 576LL));
      if ( TreeNoLock < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801B9C14, 1u, TreeNoLock, 0x63u);
        goto LABEL_24;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v11 + 2) + 584LL));
    if ( v10 )
    {
      v13 = CoRenderHost::HitTest(
              v10,
              *((HMONITOR *)a1 + 1),
              *((_DWORD *)a1 + 4),
              *((_DWORD *)a1 + 5),
              *((_DWORD *)a1 + 34),
              &v22,
              &v19,
              (unsigned int *)a1 + 35);
      TreeNoLock = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801B9C14, 1u, v13, 0x77u);
    }
    else if ( (unsigned int)CInputManager::IsRunningOnDesktop(v12) )
    {
      CWindowManager::FindVisualFromHwnd(*(CWindowManager **)(*((_QWORD *)v2 + 2) + 48LL), *((_QWORD *)a1 + 3), &v19);
    }
    else
    {
      v19 = (struct CVisual *)*((_QWORD *)v11 + 3);
    }
    if ( v19 )
    {
      v14 = CHitTestContext::HitTestPoint(
              (char *)v2 + 24,
              v19,
              v11,
              *((unsigned int *)a1 + 4),
              *((_DWORD *)a1 + 5),
              *(_DWORD *)a1,
              *((_DWORD *)a1 + 33),
              *((_QWORD *)a1 + 1),
              *((_QWORD *)a1 + 5),
              (char *)a1 + 48,
              &v23,
              &v20,
              &v24,
              &v43,
              &v41,
              &v42);
      TreeNoLock = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801B9C14, 1u, v14, 0x99u);
    }
    else
    {
      *((_DWORD *)a1 + 12) = 0;
    }
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v11 + 2) + 576LL));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v21 + 16LL))(v21, 1LL);
    v6 = v42;
    if ( !v42 )
      v6 = (int)v22;
  }
  v15 = v43;
  *((_DWORD *)a1 + 32) &= ~1u;
  v16 = v23;
  *((_DWORD *)a1 + 30) = v15;
  v17 = v41 & 1;
  *((_QWORD *)a1 + 4) = v16;
  *((_DWORD *)a1 + 32) |= v17;
  *((_DWORD *)a1 + 31) = v6;
  if ( v16 )
    CInputManager::CopyTransform((const struct CMILMatrix *)&v24, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 56));
LABEL_24:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqqxxffffffffffffffff(
      *((_DWORD *)a1 + 5),
      a2,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      *((_QWORD *)a1 + 4),
      v20,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  LOBYTE(v3) = TreeNoLock >= 0;
  return v3;
}
