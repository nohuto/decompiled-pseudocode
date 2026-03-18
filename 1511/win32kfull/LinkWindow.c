/*
 * XREFs of LinkWindow @ 0x1C00564E4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetWindowGroupBand @ 0x1C0076224 (SetWindowGroupBand.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     ImeSetTopmost @ 0x1C0090288 (ImeSetTopmost.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 * Callees:
 *     IsPseudoPwnd @ 0x1C004C468 (IsPseudoPwnd.c)
 *     GetBandOrdinal @ 0x1C0056824 (GetBandOrdinal.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0056840 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     HWInsertAfter @ 0x1C0075224 (HWInsertAfter.c)
 *     TrackLayeredZorder @ 0x1C007A464 (TrackLayeredZorder.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     GetLastTopMostWindow @ 0x1C00C7B04 (GetLastTopMostWindow.c)
 *     DwmAsyncChildLink @ 0x1C00D2918 (DwmAsyncChildLink.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned int BandOrdinal; // esi
  __int64 *v4; // r14
  __int64 LastTopMostWindow; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DesktopWindow; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 j; // r8
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 i; // r8
  __int64 v22; // r8
  _DWORD *v23; // rdx
  unsigned int k; // ecx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  char v27; // al
  struct tagWND *v28; // rcx
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // rax
  __int64 m; // rsi
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // rax

  BandOrdinal = 0;
  v4 = (__int64 *)(a3 + 96);
  LastTopMostWindow = a2;
  if ( *(struct tagWND **)(a3 + 96) == a1 )
    return;
  if ( !IsPseudoPwnd(a2) )
  {
    DesktopWindow = GetDesktopWindow(a1, v8);
    v11 = GetDesktopWindow(LastTopMostWindow, DesktopWindow);
    if ( v11 != v8 )
    {
      v12 = GetDesktopWindow(a1, v8);
      if ( v13 == v12 )
        LastTopMostWindow = GetLastTopMostWindow(a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(v9, a1, LastTopMostWindow, a3);
  if ( a3 == GetDesktopWindow(a3, v8) )
    BandOrdinal = GetBandOrdinal(*((unsigned int *)a1 + 76), v14, v15, 1LL);
  else
    v16 = 0LL;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow != 1 )
    {
      if ( (_DWORD)v16 )
      {
        if ( BandOrdinal > (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v14, v15, v16) )
        {
          while ( 1 )
          {
            LastTopMostWindow = *(_QWORD *)(LastTopMostWindow + 80);
            if ( !LastTopMostWindow )
              goto LABEL_24;
            if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v14, v20, v16) )
              goto LABEL_44;
          }
        }
        for ( i = *(_QWORD *)(LastTopMostWindow + 72);
              i && (unsigned int)GetBandOrdinal(*(unsigned int *)(i + 304), v14, i, v16) > BandOrdinal;
              i = *(_QWORD *)(v22 + 72) )
        {
          LastTopMostWindow = v22;
        }
      }
LABEL_44:
      v25 = *(_QWORD *)(LastTopMostWindow + 72);
      if ( v25 )
      {
        HMAssignmentLock(v25 + 80, a1);
        HMAssignmentLock((char *)a1 + 72, *(_QWORD *)(LastTopMostWindow + 72));
      }
      HMAssignmentLock((char *)a1 + 80, LastTopMostWindow);
      v26 = (__int64 *)(LastTopMostWindow + 72);
      goto LABEL_49;
    }
    LastTopMostWindow = *v4;
    if ( *v4 && (*(_BYTE *)(LastTopMostWindow + 44) & 0x20) == 0 )
    {
      for ( j = *(_QWORD *)(LastTopMostWindow + 72);
            j
         && (!(_DWORD)v16 || (unsigned int)GetBandOrdinal(*(unsigned int *)(j + 304), v14, j, v16) >= BandOrdinal)
         && (*(_BYTE *)(j + 44) & 0x20) == 0;
            j = *(_QWORD *)(j + 72) )
      {
        LastTopMostWindow = j;
      }
      if ( !(_DWORD)v16
        || (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v14, j, v16) >= BandOrdinal )
      {
        goto LABEL_44;
      }
    }
  }
LABEL_24:
  v18 = *v4;
  if ( *v4 )
  {
    if ( (_DWORD)v16 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v18 + 304), v14, v18, v16) > BandOrdinal )
    {
      v19 = *(_QWORD *)(v18 + 72);
      LastTopMostWindow = v18;
      while ( v19 )
      {
        v23 = &gazbidOrder;
        for ( k = 0; k < 0x12; ++k )
        {
          if ( *v23 == *(_DWORD *)(v19 + 304) )
            break;
          ++v23;
        }
        if ( k <= BandOrdinal )
          break;
        LastTopMostWindow = v19;
        v19 = *(_QWORD *)(v19 + 72);
      }
      goto LABEL_44;
    }
    HMAssignmentLock(v18 + 80, a1);
    HMAssignmentLock((char *)a1 + 72, *v4);
  }
  v26 = v4;
LABEL_49:
  HMAssignmentLock(v26, a1);
  *((_DWORD *)a1 + 72) |= 8u;
  v27 = 0;
  v28 = (struct tagWND *)*v4;
  while ( v28 )
  {
    v29 = v28 == a1;
    v28 = (struct tagWND *)*((_QWORD *)v28 + 9);
    if ( v29 )
      v27 = 1;
  }
  v30 = *((_DWORD *)a1 + 72) ^ ((unsigned __int8)*((_DWORD *)a1 + 72) ^ (unsigned __int8)(16 * v27)) & 0x10;
  *((_DWORD *)a1 + 72) = v30;
  if ( (v30 & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && !(unsigned int)IsDesktopWindow(a1)
    && a1 != (struct tagWND *)GetMessageWindow(v31)
    && a3 != *((_QWORD *)&gTermIO + 1) )
  {
    HWInsertAfter(LastTopMostWindow);
    v36 = (void *)ReferenceDwmApiPort(v33, v32, v34, v35);
    DwmAsyncChildLink(v36, *((_DWORD *)a1 + 76));
    for ( m = *((_QWORD *)a1 + 9); m; m = *(_QWORD *)(m + 72) )
    {
      v38 = *(_DWORD *)(m + 288);
      if ( (v38 & 0x10) == 0 )
      {
        v39 = *(_QWORD *)(m + 80);
        *(_DWORD *)(m + 288) = v38 | 0x10;
        HWInsertAfter(v39);
        v44 = (void *)ReferenceDwmApiPort(v41, v40, v42, v43);
        DwmAsyncChildLink(v44, *(_DWORD *)(m + 304));
      }
    }
  }
  if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
    TrackLayeredZorder(a1);
}
