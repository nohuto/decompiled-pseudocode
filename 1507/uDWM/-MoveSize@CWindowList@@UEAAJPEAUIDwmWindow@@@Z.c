/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DB70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000BA74 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180017DE8 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800188DC (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180018A14 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002CFC0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x180097938 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x180097A2C (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x180097AD0 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 */

__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *v3; // r15
  struct CWindowData *v4; // rbx
  int v5; // esi
  struct CWindowData *v6; // r14
  int v7; // r12d
  char v8; // r13
  struct tagRECT *v9; // r14
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rdx
  int v13; // esi
  unsigned int v14; // r8d
  LONG v15; // edi
  LONG v16; // esi
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r8d
  struct tagPOINT v20; // rax
  int y; // ecx
  __int64 v22; // rax
  char v23; // cl
  char v24; // al
  __int64 i; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  char v28; // cl
  char v29; // al
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned int v32; // r8d
  RECT v33; // xmm0
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // r8
  RECT v38; // xmm0
  __int64 v39; // rax
  __int64 v41; // rsi
  CAnimationScheduler *v42; // rcx
  char v43; // di
  __int64 j; // r14
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rdi
  char v48; // r13
  CWindowList *v49; // rcx
  int updated; // eax
  __int64 v51; // r13
  bool v52; // zf
  __int64 v53; // r8
  __int64 v54; // rcx
  unsigned int v55; // edx
  CWindowData *v56; // rax
  CWindowData *v57; // rax
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r15d
  char v62; // r14
  __int64 v63; // r9
  __int64 v64; // rcx
  struct tagPOINT *v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // r15d
  struct tagPOINT v68; // r14
  __int64 v69; // rdx
  __int64 v70; // rdx
  const struct CStoryboard *v71; // r15
  char v72; // [rsp+30h] [rbp-69h]
  struct tagPOINT v73; // [rsp+38h] [rbp-61h] BYREF
  struct tagPOINT v74; // [rsp+40h] [rbp-59h]
  CAnimationScheduler *v75; // [rsp+48h] [rbp-51h]
  CWindowList *v76; // [rsp+50h] [rbp-49h]
  struct IDwmWindow *v77; // [rsp+58h] [rbp-41h]
  struct tagPOINT v78; // [rsp+60h] [rbp-39h] BYREF
  int v79; // [rsp+68h] [rbp-31h]
  int v80; // [rsp+6Ch] [rbp-2Dh]
  RECT rc1; // [rsp+70h] [rbp-29h] BYREF
  RECT v82; // [rsp+80h] [rbp-19h] BYREF
  RECT rc2; // [rsp+90h] [rbp-9h] BYREF
  RECT v84; // [rsp+A0h] [rbp+7h] BYREF

  v76 = this;
  v77 = a2;
  v74 = (struct tagPOINT)&CDesktopManager::s_csDwmInstance;
  v3 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 16LL))(v3) )
    goto LABEL_2;
  v56 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1216LL);
  if ( !v56 || (v57 = CWindowData::CWindowData(v56), (v6 = v57) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x603u);
    v7 = -2147024882;
    goto LABEL_78;
  }
  *((_QWORD *)v57 + 3) = v3;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v3)(v3, v57);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 24LL))(v3);
  v58 = CWindowList::SyncWindowData(this, v3, v6);
  v5 = v58;
  if ( v58 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v58, 0x607u);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_78:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x8D2u);
    goto LABEL_37;
  }
  if ( !v4 )
    goto LABEL_37;
  v8 = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, struct tagPOINT *))(*(_QWORD *)v3 + 88LL))(v3, &v78);
  v9 = (struct tagRECT *)((char *)v4 + 188);
  v10 = 0LL;
  v11 = v78.x - *((_DWORD *)v4 + 47);
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v13 = v78.y - *((_DWORD *)v4 + 48);
  v14 = *(_DWORD *)(v12 + 72);
  if ( v14 )
  {
    while ( **(_QWORD **)(*(_QWORD *)(v12 + 48) + 8 * v10) != *((_QWORD *)v4 + 5) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v14 )
        goto LABEL_6;
    }
    if ( (int)v10 >= 0 )
    {
      _mm_lfence();
      v59 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8 * v10);
      if ( (*(_BYTE *)(v59 + 40) & 4) != 0 )
      {
        v60 = *(_QWORD *)(v59 + 100);
        v11 = v78.x - v60;
        v13 = v78.y - HIDWORD(v60);
      }
    }
  }
LABEL_6:
  if ( v11 || v13 )
  {
    v74 = v78;
    v51 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v52 = *(_DWORD *)(v51 + 40) == 0;
    v72 = 0;
    LODWORD(v75) = 0;
    if ( !v52 )
    {
      v61 = (unsigned int)v75;
      v62 = 0;
      do
      {
        v75 = *(CAnimationScheduler **)(*(_QWORD *)(v51 + 16) + 8LL * v61);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v61, (HWND *)v4, v75, 0) )
          v62 |= (int)CWindowPropertyTracker::OnWindowPositionChange((CWindowPropertyTracker *)(v51 + 48), v75, v4, v74) >= 0;
        ++v61;
      }
      while ( v61 < *(_DWORD *)(v51 + 40) );
      v3 = v77;
      v72 = v62;
      v9 = (struct tagRECT *)((char *)v4 + 188);
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v8 = v72;
    if ( !v72 )
    {
      OffsetRect(v9, v11, v13);
      v53 = 0LL;
      v54 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v55 = *(_DWORD *)(v54 + 48);
      if ( v55 )
      {
        v63 = *(_QWORD *)(v54 + 24);
        while ( 1 )
        {
          v64 = v63 + 24 * v53;
          if ( *(_BYTE *)(v64 + 16) )
          {
            if ( *((_QWORD *)v4 + 46) == *(_QWORD *)v64 )
              break;
          }
          v53 = (unsigned int)(v53 + 1);
          if ( (unsigned int)v53 >= v55 )
            goto LABEL_54;
        }
        v65 = *(struct tagPOINT **)(v64 + 8);
        v73.x = v9->left;
        v73.y = *((_DWORD *)v4 + 48);
        CVisual::SetOffset(v65, &v73);
      }
LABEL_54:
      CWindowList::OnPositionChange(v76, v4, 1);
    }
  }
  v15 = v79 - v78.x;
  if ( v79 - v78.x < 0 )
    v15 = 0;
  v16 = v80 - v78.y;
  if ( v80 - v78.y < 0 )
    v16 = 0;
  v17 = 0LL;
  v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v19 = *(_DWORD *)(v18 + 72);
  if ( !v19 )
    goto LABEL_13;
  while ( **(_QWORD **)(*(_QWORD *)(v18 + 48) + 8 * v17) != *((_QWORD *)v4 + 5) )
  {
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= v19 )
      goto LABEL_13;
  }
  if ( (int)v17 >= 0
    && (_mm_lfence(), v66 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8 * v17), (*(_BYTE *)(v66 + 40) & 2) != 0) )
  {
    v20 = *(struct tagPOINT *)(v66 + 108);
    v73 = v20;
    y = v20.y;
  }
  else
  {
LABEL_13:
    v20.x = v9->right - v9->left;
    if ( v20.x < 0 )
      v20.x = 0;
    y = v9->bottom - v9->top;
    if ( y < 0 )
      y = 0;
  }
  if ( v15 == v20.x && v16 == y )
  {
    if ( v8 )
      goto LABEL_31;
    goto LABEL_20;
  }
  v74.x = v15;
  v74.y = v16;
  v73 = (struct tagPOINT)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v48 = 0;
  LODWORD(v75) = 0;
  if ( *(_DWORD *)(*(_QWORD *)&v73 + 40LL) )
  {
    v67 = (unsigned int)v75;
    v68 = v73;
    do
    {
      v73 = *(struct tagPOINT *)(*(_QWORD *)(*(_QWORD *)&v68 + 16LL) + 8LL * v67);
      if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v67, (HWND *)v4, *(struct CStoryboard **)&v73, 0) )
        v48 |= (int)CWindowPropertyTracker::OnWindowSizeChange(
                      (CWindowPropertyTracker *)(*(_QWORD *)&v68 + 48LL),
                      *(const struct CStoryboard **)&v73,
                      v4,
                      (struct tagSIZE)v74) >= 0;
      ++v67;
    }
    while ( v67 < *(_DWORD *)(*(_QWORD *)&v68 + 40LL) );
    v3 = v77;
    v9 = (struct tagRECT *)((char *)v4 + 188);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !v48 )
  {
    v49 = v76;
    *((_DWORD *)v4 + 49) = v15 + v9->left;
    *((_DWORD *)v4 + 50) = v16 + *((_DWORD *)v4 + 48);
    updated = CWindowList::UpdateWindowScale(v49, (struct tagPOINT *)v4, 0);
    v7 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xA76u);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x910u);
      goto LABEL_37;
    }
LABEL_20:
    v22 = *((_QWORD *)v4 + 63);
    v23 = v22 && (*(_BYTE *)(v22 + 553) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
    v24 = *((_BYTE *)v4 + 553) >> 7;
    if ( v24 != v23 )
      CWindowData::UpdateOwnerLists(v4, v24 == 0);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 134); i = (unsigned int)(i + 1) )
    {
      v26 = *(_QWORD *)(*((_QWORD *)v4 + 64) + 8 * i);
      v27 = *(_QWORD *)(v26 + 504);
      v28 = v27
         && (*(_BYTE *)(v27 + 553) & 0x40) != 0
         && CWindowData::ShouldBeIncludedInOwnerSWR(*(CWindowData **)(*((_QWORD *)v4 + 64) + 8 * i));
      v29 = *(_BYTE *)(v26 + 553) >> 7;
      if ( v29 != v28 )
        CWindowData::UpdateOwnerLists((CWindowData *)v26, v29 == 0);
    }
  }
LABEL_31:
  v30 = 0LL;
  v31 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v32 = *(_DWORD *)(v31 + 72);
  if ( !v32 )
    goto LABEL_32;
  while ( **(_QWORD **)(*(_QWORD *)(v31 + 48) + 8 * v30) != *((_QWORD *)v4 + 5) )
  {
    v30 = (unsigned int)(v30 + 1);
    if ( (unsigned int)v30 >= v32 )
      goto LABEL_32;
  }
  if ( (int)v30 >= 0
    && (_mm_lfence(), v69 = *(_QWORD *)(*(_QWORD *)(v31 + 48) + 8 * v30), (*(_BYTE *)(v69 + 40) & 8) != 0) )
  {
    v33 = *(RECT *)(v69 + 116);
  }
  else
  {
LABEL_32:
    v33 = *(RECT *)((char *)v4 + 204);
  }
  v34 = 0LL;
  v35 = *((_QWORD *)v4 + 5);
  rc2 = v33;
  v36 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v37 = *(unsigned int *)(v36 + 72);
  if ( !(_DWORD)v37 )
    goto LABEL_34;
  while ( **(_QWORD **)(*(_QWORD *)(v36 + 48) + 8 * v34) != v35 )
  {
    v34 = (unsigned int)(v34 + 1);
    if ( (unsigned int)v34 >= (unsigned int)v37 )
      goto LABEL_34;
  }
  if ( (int)v34 >= 0
    && (_mm_lfence(), v70 = *(_QWORD *)(*(_QWORD *)(v36 + 48) + 8 * v34), (*(_BYTE *)(v70 + 40) & 0x10) != 0) )
  {
    v38 = *(RECT *)(v70 + 132);
  }
  else
  {
LABEL_34:
    v38 = *(RECT *)((char *)v4 + 220);
  }
  v39 = *(_QWORD *)v3;
  v84 = v38;
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *, __int64, __int64))(v39 + 96))(v3, &rc1, v37, v34);
  (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v3 + 104LL))(v3, &v82);
  if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v82, &v84) )
  {
    v41 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v43 = 0;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v41 + 40); j = (unsigned int)(j + 1) )
    {
      v71 = *(const struct CStoryboard **)(*(_QWORD *)(v41 + 16) + 8 * j);
      if ( CAnimationScheduler::_ShouldTrack(v42, (HWND *)v4, v71, 0) )
      {
        LOBYTE(v42) = (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                             (CWindowPropertyTracker *)(v41 + 48),
                             v71,
                             v4,
                             &rc1,
                             &v82) >= 0;
        v43 |= (unsigned __int8)v42;
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v43 )
    {
      v45 = *((_QWORD *)v4 + 46);
      *(RECT *)((char *)v4 + 204) = rc1;
      *(RECT *)((char *)v4 + 220) = v82;
      if ( v45 )
      {
        v46 = *(_DWORD *)(v45 + 80);
        if ( (v46 & 0x4000000) == 0 )
        {
          v47 = *(_QWORD *)(v45 + 24);
          for ( *(_DWORD *)(v45 + 80) = v46 | 0x4000000; v47; v47 = *(_QWORD *)(v47 + 24) )
          {
            if ( (*(_BYTE *)(v47 + 80) & 1) != 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
          }
        }
      }
    }
  }
LABEL_37:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v7;
}
