/*
 * XREFs of ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180001520
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1801449C0 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800019A4 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z @ 0x1800019EC (-FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x180001A50 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRunningOnDesktop@CInputManager@@AEAAHXZ @ 0x1800A6EE4 (-IsRunningOnDesktop@CInputManager@@AEAAHXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z @ 0x180103F98 (-HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z.c)
 *     Template_xqq @ 0x18010671C (Template_xqq.c)
 *     Template_xqqxxffffffffffffffff @ 0x18013F230 (Template_xqqxxffffffffffffffff.c)
 */

__int64 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1, int a2)
{
  struct CInputManager *v2; // rax
  unsigned int v3; // r14d
  int TreeNoLock; // r15d
  void *v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // edi
  bool v9; // r12
  bool v10; // r13
  HMONITOR v11; // rbx
  CHitTestContext *v12; // rcx
  __int64 v13; // rax
  CMonitorTreeAssociation *v14; // rdi
  CoRenderHost *v15; // r12
  struct CVisualTree *v16; // rbx
  CInputManager *v17; // rcx
  int v18; // eax
  int v19; // eax
  bool v21; // [rsp+C8h] [rbp-80h] BYREF
  unsigned int v22; // [rsp+CCh] [rbp-7Ch] BYREF
  struct CVisual *v23; // [rsp+D0h] [rbp-78h] BYREF
  unsigned int v24; // [rsp+D8h] [rbp-70h] BYREF
  struct _LUID v25; // [rsp+E0h] [rbp-68h] BYREF
  struct CVisualTree *v26; // [rsp+E8h] [rbp-60h] BYREF
  void *v27; // [rsp+F0h] [rbp-58h] BYREF
  void *v28; // [rsp+F8h] [rbp-50h] BYREF
  struct CInputManager *v29; // [rsp+100h] [rbp-48h]
  CHitTestContext *v30; // [rsp+108h] [rbp-40h]
  int v31; // [rsp+118h] [rbp-30h] BYREF
  int v32; // [rsp+11Ch] [rbp-2Ch]
  int v33; // [rsp+120h] [rbp-28h]
  int v34; // [rsp+124h] [rbp-24h]
  int v35; // [rsp+128h] [rbp-20h]
  int v36; // [rsp+12Ch] [rbp-1Ch]
  int v37; // [rsp+130h] [rbp-18h]
  int v38; // [rsp+134h] [rbp-14h]
  int v39; // [rsp+138h] [rbp-10h]
  int v40; // [rsp+13Ch] [rbp-Ch]
  int v41; // [rsp+140h] [rbp-8h]
  int v42; // [rsp+144h] [rbp-4h]
  int v43; // [rsp+148h] [rbp+0h]
  int v44; // [rsp+14Ch] [rbp+4h]
  int v45; // [rsp+150h] [rbp+8h]
  int v46; // [rsp+154h] [rbp+Ch]

  v2 = CInputManager::s_pInputManager;
  v3 = 0;
  v28 = 0LL;
  TreeNoLock = 1;
  v22 = 0;
  v6 = 0LL;
  v21 = 0;
  v7 = 0;
  v27 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = (*((_BYTE *)a1 + 128) & 2) != 0;
  v24 = 0;
  v25 = 0LL;
  v29 = CInputManager::s_pInputManager;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xqq(
      0,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
    v6 = v27;
    v2 = v29;
  }
  if ( v2 )
  {
    v11 = (HMONITOR)*((_QWORD *)a1 + 1);
    v12 = (struct CInputManager *)((char *)v2 + 24);
    v13 = *((_QWORD *)v2 + 2);
    v30 = v12;
    v23 = 0LL;
    v26 = 0LL;
    v14 = *(CMonitorTreeAssociation **)(v13 + 24);
    v15 = *(CoRenderHost **)(v13 + 512);
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v14 + 6) + 576LL));
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(v14, v11, &v26);
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v14 + 6) + 568LL));
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180179C10, 1u, TreeNoLock, 0x54u);
      goto LABEL_27;
    }
    v16 = v26;
    if ( (*(_BYTE *)(*((_QWORD *)v26 + 3) + 72LL) & 0xF) != 0 )
    {
      CReadWriteLock::EnterWrite((CReadWriteLock *)(*((_QWORD *)v26 + 2) + 568LL));
      TreeNoLock = CVisualTree::PreCompute(v16);
      CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v16 + 2) + 568LL));
      if ( TreeNoLock < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_180179C10, 1u, TreeNoLock, 0x64u);
        goto LABEL_27;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v16 + 2) + 576LL));
    if ( v15 )
    {
      v18 = CoRenderHost::HitTest(
              v15,
              *((HMONITOR *)a1 + 1),
              *((_DWORD *)a1 + 4),
              *((_DWORD *)a1 + 5),
              *((_DWORD *)a1 + 33),
              &v28,
              &v23,
              (unsigned int *)a1 + 34);
      TreeNoLock = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180179C10, 1u, v18, 0x78u);
    }
    else if ( (unsigned int)CInputManager::IsRunningOnDesktop(v17) )
    {
      CWindowManager::FindVisualFromHwnd(*(CWindowManager **)(*((_QWORD *)v29 + 2) + 48LL), *((HWND *)a1 + 3), &v23);
    }
    else
    {
      v23 = (struct CVisual *)*((_QWORD *)v16 + 3);
    }
    if ( v23 )
    {
      v19 = CHitTestContext::HitTestPoint(
              v30,
              v23,
              v16,
              *((_DWORD *)a1 + 4),
              *((_DWORD *)a1 + 5),
              *(_DWORD *)a1,
              v10,
              *((HMONITOR *)a1 + 1),
              *((void ***)a1 + 5),
              (unsigned int *)a1 + 12,
              &v27,
              &v25,
              (struct CMILMatrix *)&v31,
              &v22,
              &v21,
              &v24);
      TreeNoLock = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180179C10, 1u, v19, 0x9Au);
    }
    else
    {
      *((_DWORD *)a1 + 12) = 0;
    }
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)v16 + 2) + 568LL));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v26 + 16LL))(v26, 1LL);
    v7 = v24;
    v6 = v27;
    if ( !v24 )
      v7 = (unsigned int)v28;
    v8 = v22;
    v9 = v21;
  }
  *((_DWORD *)a1 + 32) &= ~1u;
  *((_QWORD *)a1 + 4) = v6;
  *((_DWORD *)a1 + 32) |= v9;
  *((_DWORD *)a1 + 30) = v8;
  *((_DWORD *)a1 + 31) = v7;
  if ( v6 )
    CInputManager::CopyTransform((const struct CMILMatrix *)&v31, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 56));
LABEL_27:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqqxxffffffffffffffff(
      *((_DWORD *)a1 + 5),
      a2,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      *((_QWORD *)a1 + 4),
      v25.LowPart,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  LOBYTE(v3) = TreeNoLock >= 0;
  return v3;
}
