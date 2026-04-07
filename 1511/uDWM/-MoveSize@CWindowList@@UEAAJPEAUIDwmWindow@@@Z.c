/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180003610 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800039DC (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180005EA8 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001D5D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001E15C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001E294 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032060 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *v3; // r12
  struct CWindowData *v4; // rdi
  int v5; // esi
  struct CWindowData *v6; // r14
  struct tagRECT *v7; // r15
  LONG x; // edx
  __int64 v9; // r10
  LONG y; // r8d
  int v11; // esi
  __int64 v12; // r13
  int v13; // r14d
  __int64 v14; // r11
  unsigned int v15; // r9d
  char v16; // bl
  unsigned int v17; // esi
  int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // r13
  unsigned int v21; // edx
  struct tagPOINT v22; // rax
  int v23; // ecx
  int v24; // r14d
  __int64 v25; // rax
  char v26; // cl
  char v27; // al
  __int64 i; // rbx
  __int64 v29; // rsi
  __int64 v30; // rax
  char v31; // cl
  char v32; // al
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rax
  unsigned int v36; // r8d
  RECT v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // r8
  unsigned int v40; // edx
  RECT v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rsi
  CAnimationScheduler *v44; // rcx
  char v45; // bl
  __int64 j; // r15
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rdi
  bool v51; // zf
  CWindowList *v52; // rcx
  int updated; // eax
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  const struct CStoryboard *v61; // r12
  CAnimationScheduler *v62; // rbx
  unsigned int v63; // r12d
  char v64; // r15
  struct tagPOINT v65; // rbx
  unsigned int v66; // r12d
  char v67; // r15
  __int64 v68; // rax
  LONG v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // r9
  __int64 v74; // rcx
  CWindowData *v75; // rax
  CWindowData *v76; // rax
  int v77; // eax
  struct tagPOINT *v78; // rcx
  char v79; // [rsp+30h] [rbp-79h]
  char v80; // [rsp+30h] [rbp-79h]
  struct tagPOINT v81; // [rsp+38h] [rbp-71h] BYREF
  int v82; // [rsp+40h] [rbp-69h]
  int v83; // [rsp+44h] [rbp-65h]
  CAnimationScheduler *v84; // [rsp+48h] [rbp-61h] BYREF
  struct CStoryboard *v85; // [rsp+50h] [rbp-59h] BYREF
  CWindowList *v86; // [rsp+58h] [rbp-51h]
  struct IDwmWindow *v87; // [rsp+60h] [rbp-49h]
  struct _RTL_CRITICAL_SECTION *v88; // [rsp+68h] [rbp-41h] BYREF
  struct tagPOINT v89; // [rsp+70h] [rbp-39h] BYREF
  int v90; // [rsp+78h] [rbp-31h]
  int v91; // [rsp+7Ch] [rbp-2Dh]
  RECT rc1; // [rsp+80h] [rbp-29h] BYREF
  RECT v93; // [rsp+90h] [rbp-19h] BYREF
  RECT rc2; // [rsp+A0h] [rbp-9h] BYREF
  RECT v95; // [rsp+B0h] [rbp+7h] BYREF

  v86 = this;
  v87 = a2;
  v3 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 16LL))(v3) )
    goto LABEL_2;
  v75 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1224LL);
  if ( !v75 || (v76 = CWindowData::CWindowData(v75), (v6 = v76) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x5F8u);
    goto LABEL_118;
  }
  *((_QWORD *)v76 + 3) = v3;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v3)(v3, v76);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 24LL))(v3);
  v77 = CWindowList::SyncWindowData(this, v3, v6);
  v5 = v77;
  if ( v77 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v77, 0x5FCu);
  v83 = v5;
  if ( v5 < 0 )
  {
LABEL_118:
    v24 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x8C6u);
    goto LABEL_45;
  }
  if ( !v4 )
  {
    v24 = v5;
    goto LABEL_45;
  }
  (*(void (__fastcall **)(struct IDwmWindow *, struct tagPOINT *))(*(_QWORD *)v3 + 88LL))(v3, &v89);
  v7 = (struct tagRECT *)((char *)v4 + 188);
  x = v89.x;
  v9 = 0LL;
  y = v89.y;
  v11 = v89.x - *((_DWORD *)v4 + 47);
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v13 = v89.y - *((_DWORD *)v4 + 48);
  v14 = *((_QWORD *)v4 + 5);
  v82 = v11;
  v15 = *(_DWORD *)(v12 + 72);
  if ( v15 )
  {
    while ( 1 )
    {
      v57 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8 * v9);
      if ( *(_QWORD *)v57 == v14 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v15 )
        goto LABEL_6;
    }
    if ( (int)v9 >= 0 && (*(_BYTE *)(v57 + 40) & 4) != 0 )
    {
      v68 = *(_QWORD *)(v57 + 104);
      v11 = v89.x - v68;
      v13 = v89.y - HIDWORD(v68);
      v82 = v89.x - v68;
    }
  }
LABEL_6:
  if ( v11 || v13 )
  {
    v81 = v89;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = 0;
    LODWORD(v84) = 0;
    if ( *(_DWORD *)(v12 + 40) )
    {
      v65 = v81;
      v66 = (unsigned int)v84;
      v67 = 0;
      do
      {
        v81 = *(struct tagPOINT *)(*(_QWORD *)(v12 + 16) + 8LL * v66);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v66, (HWND *)v4, *(struct CStoryboard **)&v81, 0) )
        {
          v85 = (struct CStoryboard *)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v69 = CWindowPropertyTracker::_EnsureRecordExists(
                  (CWindowPropertyTracker *)(v12 + 48),
                  *(const struct CStoryboard **)&v81,
                  v4,
                  (int *)&v84);
          v81.x = v69;
          if ( v69 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v69, 0x35u);
          }
          else
          {
            v70 = 8LL * (unsigned int)v84;
            *(struct tagPOINT *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + v70) + 104LL) = v65;
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + v70) + 40LL) |= 4u;
          }
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v85);
          v67 |= v81.x >= 0;
        }
        ++v66;
      }
      while ( v66 < *(_DWORD *)(v12 + 40) );
      v3 = v87;
      v11 = v82;
      v80 = v67;
      v7 = (struct tagRECT *)((char *)v4 + 188);
      v16 = v80;
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v16 )
    {
      OffsetRect(v7, v11, v13);
      v54 = 0LL;
      v55 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v56 = *(_DWORD *)(v55 + 48);
      if ( v56 )
      {
        v73 = *(_QWORD *)(v55 + 24);
        while ( 1 )
        {
          v74 = v73 + 24 * v54;
          if ( *(_BYTE *)(v74 + 16) )
          {
            if ( *((_QWORD *)v4 + 48) == *(_QWORD *)v74 )
              break;
          }
          v54 = (unsigned int)(v54 + 1);
          if ( (unsigned int)v54 >= v56 )
            goto LABEL_55;
        }
        v78 = *(struct tagPOINT **)(v74 + 8);
        v81.x = v7->left;
        v81.y = *((_DWORD *)v4 + 48);
        CVisual::SetOffset(v78, &v81);
      }
LABEL_55:
      CWindowList::OnPositionChange(v86, v4, 1);
    }
    y = v89.y;
    x = v89.x;
  }
  else
  {
    v16 = 0;
  }
  v17 = v90 - x;
  if ( v90 - x < 0 )
    v17 = 0;
  v18 = v91 - y;
  v82 = v91 - y;
  if ( v91 - y < 0 )
  {
    v18 = 0;
    v82 = 0;
  }
  v19 = 0LL;
  v20 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v21 = *(_DWORD *)(v20 + 72);
  if ( !v21 )
    goto LABEL_14;
  while ( 1 )
  {
    v58 = *(_QWORD *)(*(_QWORD *)(v20 + 48) + 8 * v19);
    if ( *(_QWORD *)v58 == *((_QWORD *)v4 + 5) )
      break;
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v21 )
      goto LABEL_14;
  }
  if ( (int)v19 >= 0 && (*(_BYTE *)(v58 + 40) & 2) != 0 )
  {
    v22 = *(struct tagPOINT *)(v58 + 112);
    v81 = v22;
    v23 = v22.y;
  }
  else
  {
LABEL_14:
    v22.x = v7->right - v7->left;
    if ( v22.x < 0 )
      v22.x = 0;
    v23 = v7->bottom - v7->top;
    if ( v23 < 0 )
      v23 = 0;
  }
  if ( v17 == v22.x && v18 == v23 )
  {
    v24 = v83;
    if ( v16 )
      goto LABEL_32;
  }
  else
  {
    v84 = (CAnimationScheduler *)__PAIR64__(v18, v17);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v51 = *(_DWORD *)(v20 + 40) == 0;
    v79 = 0;
    v81.x = 0;
    if ( !v51 )
    {
      v62 = v84;
      v63 = v81.x;
      v64 = 0;
      do
      {
        v85 = *(struct CStoryboard **)(*(_QWORD *)(v20 + 16) + 8LL * v63);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v63, (HWND *)v4, v85, 0) )
        {
          v88 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v71 = CWindowPropertyTracker::_EnsureRecordExists((CWindowPropertyTracker *)(v20 + 48), v85, v4, (int *)&v81);
          LODWORD(v84) = v71;
          if ( v71 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v71, 0x25u);
          }
          else
          {
            v72 = 8LL * (unsigned int)v81.x;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 48) + v72) + 112LL) = v62;
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 48) + v72) + 40LL) |= 2u;
          }
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v88);
          v64 |= (int)v84 >= 0;
        }
        ++v63;
      }
      while ( v63 < *(_DWORD *)(v20 + 40) );
      v18 = v82;
      v3 = v87;
      v79 = v64;
      v7 = (struct tagRECT *)((char *)v4 + 188);
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v79 )
    {
      v24 = v83;
      goto LABEL_32;
    }
    v52 = v86;
    *((_DWORD *)v4 + 49) = v17 + v7->left;
    *((_DWORD *)v4 + 50) = v18 + *((_DWORD *)v4 + 48);
    updated = CWindowList::UpdateWindowScale(v52, (struct tagPOINT *)v4, 0);
    v24 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xA6Au);
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x904u);
      goto LABEL_45;
    }
  }
  v25 = *((_QWORD *)v4 + 65);
  v26 = v25 && (*(_BYTE *)(v25 + 569) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
  v27 = *((_BYTE *)v4 + 569) >> 7;
  if ( v27 != v26 )
    CWindowData::UpdateOwnerLists(v4, v27 == 0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 138); i = (unsigned int)(i + 1) )
  {
    v29 = *(_QWORD *)(*((_QWORD *)v4 + 66) + 8 * i);
    v30 = *(_QWORD *)(v29 + 520);
    v31 = v30
       && (*(_BYTE *)(v30 + 569) & 0x40) != 0
       && CWindowData::ShouldBeIncludedInOwnerSWR(*(CWindowData **)(*((_QWORD *)v4 + 66) + 8 * i));
    v32 = *(_BYTE *)(v29 + 569) >> 7;
    if ( v32 != v31 )
      CWindowData::UpdateOwnerLists((CWindowData *)v29, v32 == 0);
  }
LABEL_32:
  v33 = 0LL;
  v34 = *((_QWORD *)v4 + 5);
  v35 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v36 = *(_DWORD *)(v35 + 72);
  if ( !v36 )
    goto LABEL_33;
  while ( 1 )
  {
    v59 = *(_QWORD *)(*(_QWORD *)(v35 + 48) + 8 * v33);
    if ( *(_QWORD *)v59 == v34 )
      break;
    v33 = (unsigned int)(v33 + 1);
    if ( (unsigned int)v33 >= v36 )
      goto LABEL_33;
  }
  if ( (int)v33 >= 0 && (*(_BYTE *)(v59 + 40) & 8) != 0 )
    v37 = *(RECT *)(v59 + 120);
  else
LABEL_33:
    v37 = *(RECT *)((char *)v4 + 204);
  rc2 = v37;
  v38 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v39 = 0LL;
  v40 = *(_DWORD *)(v38 + 72);
  if ( !v40 )
    goto LABEL_35;
  v33 = *(_QWORD *)(v38 + 48);
  while ( 1 )
  {
    v60 = *(_QWORD *)(v33 + 8 * v39);
    if ( *(_QWORD *)v60 == v34 )
      break;
    v39 = (unsigned int)(v39 + 1);
    if ( (unsigned int)v39 >= v40 )
      goto LABEL_35;
  }
  if ( (int)v39 >= 0 && (*(_BYTE *)(v60 + 40) & 0x10) != 0 )
    v41 = *(RECT *)(v60 + 136);
  else
LABEL_35:
    v41 = *(RECT *)((char *)v4 + 220);
  v42 = *(_QWORD *)v3;
  v95 = v41;
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *, __int64, __int64))(v42 + 96))(v3, &rc1, v39, v33);
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v3 + 104LL))(v3, &v93);
  if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v93, &v95) )
  {
    v43 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v45 = 0;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v43 + 40); j = (unsigned int)(j + 1) )
    {
      v61 = *(const struct CStoryboard **)(*(_QWORD *)(v43 + 16) + 8 * j);
      if ( CAnimationScheduler::_ShouldTrack(v44, (HWND *)v4, v61, 0) )
        v45 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                      (CWindowPropertyTracker *)(v43 + 48),
                      v61,
                      v4,
                      &rc1,
                      &v93) >= 0;
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v45 )
    {
      v47 = *((_QWORD *)v4 + 48);
      *(RECT *)((char *)v4 + 204) = rc1;
      *(RECT *)((char *)v4 + 220) = v93;
      if ( v47 )
      {
        v48 = *(_DWORD *)(v47 + 80);
        if ( (v48 & 0x4000000) == 0 )
        {
          v49 = *(_QWORD *)(v47 + 24);
          for ( *(_DWORD *)(v47 + 80) = v48 | 0x4000000; v49; v49 = *(_QWORD *)(v49 + 24) )
          {
            if ( (*(_BYTE *)(v49 + 80) & 1) != 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
          }
        }
      }
    }
  }
LABEL_45:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v24;
}
