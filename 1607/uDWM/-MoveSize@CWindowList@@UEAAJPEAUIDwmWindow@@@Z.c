/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C850
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18000AC8C (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000FFD0 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001ACF4 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001AE28 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x180042928 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *v3; // r15
  struct CWindowData *v4; // rdi
  int v5; // ebx
  struct CWindowData *v6; // rsi
  char v7; // bl
  struct tagRECT *v8; // r14
  __int64 v9; // r9
  int v10; // esi
  __int64 v11; // rdx
  int v12; // r12d
  unsigned int v13; // r8d
  int v14; // esi
  int v15; // r12d
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  char v22; // cl
  char v23; // al
  __int64 j; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  char v27; // cl
  char v28; // al
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned int v31; // r8d
  RECT v32; // xmm0
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // r8
  RECT v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rsi
  CAnimationScheduler *v40; // rcx
  char v41; // bl
  __int64 i; // r14
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rbx
  unsigned int v46; // edi
  struct CStoryboard *v48; // rbx
  char v49; // r13
  CWindowList *v50; // rcx
  int updated; // eax
  __int64 v52; // r13
  __int64 v53; // r8
  __int64 v54; // rcx
  unsigned int v55; // edx
  const struct CStoryboard *v56; // r15
  __int64 v57; // rbx
  struct CStoryboard *v58; // r14
  unsigned int v59; // r15d
  struct CStoryboard *v60; // rbx
  unsigned int v61; // r15d
  char v62; // r14
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  CWindowData *v73; // rax
  CWindowData *v74; // rax
  int v75; // eax
  __int64 v76; // rax
  struct tagPOINT *v77; // rcx
  char v78; // [rsp+30h] [rbp-79h]
  int v79; // [rsp+34h] [rbp-75h]
  int v80; // [rsp+38h] [rbp-71h]
  int v81; // [rsp+38h] [rbp-71h]
  int v82[3]; // [rsp+3Ch] [rbp-6Dh] BYREF
  struct CStoryboard *v83; // [rsp+48h] [rbp-61h] BYREF
  struct CStoryboard *v84; // [rsp+50h] [rbp-59h] BYREF
  CAnimationScheduler *v85; // [rsp+58h] [rbp-51h]
  int v86; // [rsp+60h] [rbp-49h] BYREF
  struct IDwmWindow *v87; // [rsp+68h] [rbp-41h]
  CWindowList *v88; // [rsp+70h] [rbp-39h]
  struct CStoryboard *v89; // [rsp+78h] [rbp-31h] BYREF
  int v90; // [rsp+80h] [rbp-29h]
  int v91; // [rsp+84h] [rbp-25h]
  RECT rc1; // [rsp+88h] [rbp-21h] BYREF
  RECT v93; // [rsp+98h] [rbp-11h] BYREF
  RECT rc2; // [rsp+A8h] [rbp-1h] BYREF
  RECT v95; // [rsp+B8h] [rbp+Fh] BYREF

  v88 = this;
  v87 = a2;
  v85 = (CAnimationScheduler *)&CDesktopManager::s_csDwmInstance;
  v3 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 16LL))(v3) )
    goto LABEL_2;
  v73 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1232LL);
  if ( !v73 || (v74 = CWindowData::CWindowData(v73), (v6 = v74) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
    goto LABEL_113;
  }
  *((_QWORD *)v74 + 3) = v3;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v3)(v3, v74);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 24LL))(v3);
  v75 = CWindowList::SyncWindowData(this, v3, v6);
  v5 = v75;
  if ( v75 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x56Eu);
  v79 = v5;
  if ( v5 < 0 )
  {
LABEL_113:
    v46 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x7DBu);
    goto LABEL_45;
  }
  if ( !v4 )
  {
    v46 = v5;
    goto LABEL_45;
  }
  v7 = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, struct CStoryboard **))(*(_QWORD *)v3 + 88LL))(v3, &v89);
  v8 = (struct tagRECT *)((char *)v4 + 188);
  v9 = 0LL;
  v10 = (_DWORD)v89 - *((_DWORD *)v4 + 47);
  v11 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v12 = HIDWORD(v89) - *((_DWORD *)v4 + 48);
  v80 = v10;
  v13 = *(_DWORD *)(v11 + 72);
  if ( v13 )
  {
    while ( **(_QWORD **)(*(_QWORD *)(v11 + 48) + 8 * v9) != *((_QWORD *)v4 + 5) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v13 )
        goto LABEL_6;
    }
    if ( (int)v9 >= 0 )
    {
      _mm_lfence();
      v63 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 8 * v9);
      if ( (*(_BYTE *)(v63 + 40) & 4) != 0 )
      {
        v76 = *(_QWORD *)(v63 + 104);
        v10 = (_DWORD)v89 - v76;
        v12 = HIDWORD(v89) - HIDWORD(v76);
        v80 = (_DWORD)v89 - v76;
      }
    }
  }
LABEL_6:
  if ( v10 || v12 )
  {
    v83 = v89;
    v52 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = 0;
    LODWORD(v85) = 0;
    if ( *(_DWORD *)(v52 + 40) )
    {
      v60 = v83;
      v61 = (unsigned int)v85;
      v62 = 0;
      do
      {
        v83 = *(struct CStoryboard **)(*(_QWORD *)(v52 + 16) + 8LL * v61);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v61, (HWND *)v4, v83, 0) )
        {
          v84 = (struct CStoryboard *)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v69 = CWindowPropertyTracker::_EnsureRecordExists((CWindowPropertyTracker *)(v52 + 48), v83, v4, v82);
          LODWORD(v85) = v69;
          if ( v69 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x35u);
          }
          else
          {
            v70 = 8LL * (unsigned int)v82[0];
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 48) + v70) + 104LL) = v60;
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 48) + v70) + 40LL) |= 4u;
          }
          CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v84);
          v62 |= (int)v85 >= 0;
        }
        ++v61;
      }
      while ( v61 < *(_DWORD *)(v52 + 40) );
      v3 = v87;
      v10 = v80;
      v78 = v62;
      v8 = (struct tagRECT *)((char *)v4 + 188);
      v7 = v78;
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v7 )
    {
      OffsetRect(v8, v10, v12);
      v53 = 0LL;
      v54 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      v55 = *(_DWORD *)(v54 + 48);
      if ( v55 )
      {
        v64 = *(_QWORD *)(v54 + 24);
        while ( 1 )
        {
          v65 = v64 + 24 * v53;
          if ( *(_BYTE *)(v65 + 16) )
          {
            if ( *((_QWORD *)v4 + 48) == *(_QWORD *)v65 )
              break;
          }
          v53 = (unsigned int)(v53 + 1);
          if ( (unsigned int)v53 >= v55 )
            goto LABEL_53;
        }
        v77 = *(struct tagPOINT **)(v65 + 8);
        v82[1] = v8->left;
        v82[2] = *((_DWORD *)v4 + 48);
        CVisual::SetOffset(v77, (const struct tagPOINT *)&v82[1]);
      }
LABEL_53:
      CWindowList::OnPositionChange(v88, v4, 1);
    }
  }
  v14 = v90 - (_DWORD)v89;
  if ( v90 - (int)v89 < 0 )
    v14 = 0;
  v15 = v91 - HIDWORD(v89);
  v81 = v91 - HIDWORD(v89);
  if ( v91 - HIDWORD(v89) < 0 )
  {
    v15 = 0;
    v81 = 0;
  }
  v16 = 0LL;
  v17 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v18 = *(_DWORD *)(v17 + 72);
  if ( !v18 )
    goto LABEL_13;
  while ( **(_QWORD **)(*(_QWORD *)(v17 + 48) + 8 * v16) != *((_QWORD *)v4 + 5) )
  {
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= v18 )
      goto LABEL_13;
  }
  if ( (int)v16 >= 0
    && (_mm_lfence(), v66 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8 * v16), (*(_BYTE *)(v66 + 40) & 2) != 0) )
  {
    v19 = *(_QWORD *)(v66 + 112);
    *(_QWORD *)&v82[1] = v19;
    v20 = HIDWORD(v19);
  }
  else
  {
LABEL_13:
    LODWORD(v19) = v8->right - v8->left;
    if ( (int)v19 < 0 )
      LODWORD(v19) = 0;
    v20 = v8->bottom - v8->top;
    if ( v20 < 0 )
      v20 = 0;
  }
  if ( v14 == (_DWORD)v19 && v15 == v20 )
  {
    if ( v7 )
      goto LABEL_31;
    goto LABEL_20;
  }
  v82[1] = v14;
  v82[2] = v15;
  v84 = (struct CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v48 = v84;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v49 = 0;
  v82[0] = 0;
  if ( *((_DWORD *)v48 + 10) )
  {
    v57 = *(_QWORD *)&v82[1];
    v58 = v84;
    v59 = v82[0];
    do
    {
      v84 = *(struct CStoryboard **)(*((_QWORD *)v58 + 2) + 8LL * v59);
      if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v59, (HWND *)v4, v84, 0) )
      {
        v83 = (struct CStoryboard *)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v71 = CWindowPropertyTracker::_EnsureRecordExists((struct CStoryboard *)((char *)v58 + 48), v84, v4, &v86);
        v82[0] = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v71, 0x25u);
        }
        else
        {
          v72 = 8LL * (unsigned int)v86;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v58 + 6) + v72) + 112LL) = v57;
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v58 + 6) + v72) + 40LL) |= 2u;
        }
        CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v83);
        v49 |= v82[0] >= 0;
      }
      ++v59;
    }
    while ( v59 < *((_DWORD *)v58 + 10) );
    v3 = v87;
    v8 = (struct tagRECT *)((char *)v4 + 188);
    v15 = v81;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( v49 )
  {
LABEL_31:
    v29 = 0LL;
    v30 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    v31 = *(_DWORD *)(v30 + 72);
    if ( !v31 )
      goto LABEL_32;
    while ( **(_QWORD **)(*(_QWORD *)(v30 + 48) + 8 * v29) != *((_QWORD *)v4 + 5) )
    {
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= v31 )
        goto LABEL_32;
    }
    if ( (int)v29 >= 0
      && (_mm_lfence(), v67 = *(_QWORD *)(*(_QWORD *)(v30 + 48) + 8 * v29), (*(_BYTE *)(v67 + 40) & 8) != 0) )
    {
      v32 = *(RECT *)(v67 + 120);
    }
    else
    {
LABEL_32:
      v32 = *(RECT *)((char *)v4 + 204);
    }
    v33 = 0LL;
    v34 = *((_QWORD *)v4 + 5);
    rc2 = v32;
    v35 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    v36 = *(unsigned int *)(v35 + 72);
    if ( !(_DWORD)v36 )
      goto LABEL_34;
    while ( **(_QWORD **)(*(_QWORD *)(v35 + 48) + 8 * v33) != v34 )
    {
      v33 = (unsigned int)(v33 + 1);
      if ( (unsigned int)v33 >= (unsigned int)v36 )
        goto LABEL_34;
    }
    if ( (int)v33 >= 0
      && (_mm_lfence(), v68 = *(_QWORD *)(*(_QWORD *)(v35 + 48) + 8 * v33), (*(_BYTE *)(v68 + 40) & 0x10) != 0) )
    {
      v37 = *(RECT *)(v68 + 136);
    }
    else
    {
LABEL_34:
      v37 = *(RECT *)((char *)v4 + 220);
    }
    v38 = *(_QWORD *)v3;
    v95 = v37;
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *, __int64, __int64))(v38 + 96))(v3, &rc1, v36, v33);
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v3 + 104LL))(v3, &v93);
    if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v93, &v95) )
    {
      v39 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v41 = 0;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v39 + 40); i = (unsigned int)(i + 1) )
      {
        v56 = *(const struct CStoryboard **)(*(_QWORD *)(v39 + 16) + 8 * i);
        if ( CAnimationScheduler::_ShouldTrack(v40, (HWND *)v4, v56, 0) )
          v41 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                        (CWindowPropertyTracker *)(v39 + 48),
                        v56,
                        v4,
                        &rc1,
                        &v93) >= 0;
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !v41 )
      {
        v43 = *((_QWORD *)v4 + 48);
        *(RECT *)((char *)v4 + 204) = rc1;
        *(RECT *)((char *)v4 + 220) = v93;
        if ( v43 )
        {
          v44 = *(_DWORD *)(v43 + 80);
          if ( (v44 & 0x4000000) == 0 )
          {
            v45 = *(_QWORD *)(v43 + 24);
            for ( *(_DWORD *)(v43 + 80) = v44 | 0x4000000; v45; v45 = *(_QWORD *)(v45 + 24) )
            {
              if ( (*(_BYTE *)(v45 + 80) & 1) != 0 )
                break;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
            }
          }
        }
      }
    }
    goto LABEL_44;
  }
  v50 = v88;
  *((_DWORD *)v4 + 49) = v14 + v8->left;
  *((_DWORD *)v4 + 50) = v15 + *((_DWORD *)v4 + 48);
  updated = CWindowList::UpdateWindowScale(v50, v4, 0);
  v79 = updated;
  if ( updated >= 0 )
  {
LABEL_20:
    v21 = *((_QWORD *)v4 + 66);
    v22 = v21 && (*(_BYTE *)(v21 + 577) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
    v23 = *((_BYTE *)v4 + 577) >> 7;
    if ( v23 != v22 )
      CWindowData::UpdateOwnerLists(v4, v23 == 0);
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v4 + 140); j = (unsigned int)(j + 1) )
    {
      v25 = *(_QWORD *)(*((_QWORD *)v4 + 67) + 8 * j);
      v26 = *(_QWORD *)(v25 + 528);
      v27 = v26
         && (*(_BYTE *)(v26 + 577) & 0x40) != 0
         && CWindowData::ShouldBeIncludedInOwnerSWR(*(CWindowData **)(*((_QWORD *)v4 + 67) + 8 * j));
      v28 = *(_BYTE *)(v25 + 577) >> 7;
      if ( v28 != v27 )
        CWindowData::UpdateOwnerLists((CWindowData *)v25, v28 == 0);
    }
    goto LABEL_31;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x814u);
LABEL_44:
  v46 = v79;
LABEL_45:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v46;
}
