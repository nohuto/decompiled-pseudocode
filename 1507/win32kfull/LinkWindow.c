/*
 * XREFs of LinkWindow @ 0x1C006616C
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     ImeSetTopmost @ 0x1C004FED8 (ImeSetTopmost.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 * Callees:
 *     TrackLayeredZorder @ 0x1C000F54C (TrackLayeredZorder.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     IsPseudoPwnd @ 0x1C005E740 (IsPseudoPwnd.c)
 *     GetBandOrdinal @ 0x1C00664B0 (GetBandOrdinal.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C00664CC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 *     HWInsertAfter @ 0x1C0085358 (HWInsertAfter.c)
 *     DwmAsyncChildLink @ 0x1C00E482C (DwmAsyncChildLink.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned int BandOrdinal; // esi
  __int64 *v4; // r14
  __int64 LastTopMostWindow; // rbx
  __int64 v8; // rcx
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 j; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 i; // r8
  __int64 v21; // r8
  _DWORD *v22; // rdx
  unsigned int k; // ecx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  char v29; // al
  struct tagWND *v30; // rcx
  bool v31; // zf
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // rax
  __int64 m; // rsi
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // rax

  BandOrdinal = 0;
  v4 = (__int64 *)(a3 + 96);
  LastTopMostWindow = a2;
  if ( *(struct tagWND **)(a3 + 96) == a1 )
    return;
  if ( !IsPseudoPwnd(a2) )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v10 )
    {
      v11 = GetDesktopWindow(a1);
      if ( v12 == v11 )
        LastTopMostWindow = GetLastTopMostWindow(a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(v8, a1, LastTopMostWindow, a3);
  if ( a3 == GetDesktopWindow(a3) )
    BandOrdinal = GetBandOrdinal(*((unsigned int *)a1 + 76), v13, v14, 1LL);
  else
    v15 = 0LL;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow != 1 )
    {
      if ( (_DWORD)v15 )
      {
        if ( BandOrdinal > (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v13, v14, v15) )
        {
          while ( 1 )
          {
            LastTopMostWindow = *(_QWORD *)(LastTopMostWindow + 80);
            if ( !LastTopMostWindow )
              goto LABEL_24;
            if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v13, v19, v15) )
              goto LABEL_44;
          }
        }
        for ( i = *(_QWORD *)(LastTopMostWindow + 72);
              i && (unsigned int)GetBandOrdinal(*(unsigned int *)(i + 304), v13, i, v15) > BandOrdinal;
              i = *(_QWORD *)(v21 + 72) )
        {
          LastTopMostWindow = v21;
        }
      }
LABEL_44:
      v24 = *(_QWORD *)(LastTopMostWindow + 72);
      if ( v24 )
      {
        HMAssignmentLock(v24 + 80, a1);
        HMAssignmentLock((char *)a1 + 72, *(_QWORD *)(LastTopMostWindow + 72));
      }
      HMAssignmentLock((char *)a1 + 80, LastTopMostWindow);
      v25 = (__int64 *)(LastTopMostWindow + 72);
      goto LABEL_49;
    }
    LastTopMostWindow = *v4;
    if ( *v4 && (*(_BYTE *)(LastTopMostWindow + 44) & 0x20) == 0 )
    {
      for ( j = *(_QWORD *)(LastTopMostWindow + 72);
            j
         && (!(_DWORD)v15 || (unsigned int)GetBandOrdinal(*(unsigned int *)(j + 304), v13, j, v15) >= BandOrdinal)
         && (*(_BYTE *)(j + 44) & 0x20) == 0;
            j = *(_QWORD *)(j + 72) )
      {
        LastTopMostWindow = j;
      }
      if ( !(_DWORD)v15
        || (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v13, j, v15) >= BandOrdinal )
      {
        goto LABEL_44;
      }
    }
  }
LABEL_24:
  v17 = *v4;
  if ( *v4 )
  {
    if ( (_DWORD)v15 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v17 + 304), v13, v17, v15) > BandOrdinal )
    {
      v18 = *(_QWORD *)(v17 + 72);
      LastTopMostWindow = v17;
      while ( v18 )
      {
        v22 = &gazbidOrder;
        for ( k = 0; k < 0x12; ++k )
        {
          if ( *v22 == *(_DWORD *)(v18 + 304) )
            break;
          ++v22;
        }
        if ( k <= BandOrdinal )
          break;
        LastTopMostWindow = v18;
        v18 = *(_QWORD *)(v18 + 72);
      }
      goto LABEL_44;
    }
    HMAssignmentLock(v17 + 80, a1);
    HMAssignmentLock((char *)a1 + 72, *v4);
  }
  v25 = v4;
LABEL_49:
  HMAssignmentLock(v25, a1);
  *((_DWORD *)a1 + 72) |= 8u;
  v28 = *((unsigned int *)a1 + 72);
  v29 = 0;
  v30 = (struct tagWND *)*v4;
  while ( v30 )
  {
    v31 = v30 == a1;
    v30 = (struct tagWND *)*((_QWORD *)v30 + 9);
    if ( v31 )
      v29 = 1;
  }
  v32 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(16 * v29)) & 0x10;
  *((_DWORD *)a1 + 72) = v32;
  if ( (v32 & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1)
    && a1 != (struct tagWND *)GetMessageWindow((__int64)a1)
    && a3 != *((_QWORD *)&gTermIO + 1) )
  {
    HWInsertAfter(LastTopMostWindow);
    v37 = (void *)ReferenceDwmApiPort(v34, v33, v35, v36);
    DwmAsyncChildLink(v37, *((_DWORD *)a1 + 76));
    for ( m = *((_QWORD *)a1 + 9); m; m = *(_QWORD *)(m + 72) )
    {
      v39 = *(_DWORD *)(m + 288);
      if ( (v39 & 0x10) == 0 )
      {
        v40 = *(_QWORD *)(m + 80);
        *(_DWORD *)(m + 288) = v39 | 0x10;
        HWInsertAfter(v40);
        v45 = (void *)ReferenceDwmApiPort(v42, v41, v43, v44);
        DwmAsyncChildLink(v45, *(_DWORD *)(m + 304));
      }
    }
  }
  if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
    TrackLayeredZorder(a1, v28, v26, v27);
}
