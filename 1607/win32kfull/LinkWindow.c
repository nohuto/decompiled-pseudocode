/*
 * XREFs of LinkWindow @ 0x1C007B12C
 * Callers:
 *     ImeSetTopmost @ 0x1C0063C38 (ImeSetTopmost.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     SetWindowGroupBand @ 0x1C00A4DA4 (SetWindowGroupBand.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     TrackLayeredZorder @ 0x1C0062A4C (TrackLayeredZorder.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     GetBandOrdinal @ 0x1C007B43C (GetBandOrdinal.c)
 *     DwmAsyncChildLink @ 0x1C0093730 (DwmAsyncChildLink.c)
 *     HWInsertAfter @ 0x1C00A67E4 (HWInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C00A8B9C (GetLastTopMostWindow.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01F65B0 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned int BandOrdinal; // esi
  __int64 *v4; // r14
  __int64 LastTopMostWindow; // rbx
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 i; // r8
  __int64 v13; // r8
  __int64 v14; // rcx
  char v15; // al
  struct tagWND *v16; // rcx
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  __int64 m; // rsi
  int v25; // eax
  __int64 DesktopWindow; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  _DWORD *v29; // rdx
  unsigned int k; // ecx
  __int64 j; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rax

  BandOrdinal = 0;
  v4 = (__int64 *)(a3 + 96);
  LastTopMostWindow = a2;
  if ( *(struct tagWND **)(a3 + 96) == a1 )
    return;
  if ( (unsigned __int64)(a2 - 2) <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v27 )
    {
      v32 = GetDesktopWindow(a1);
      if ( v33 == v32 )
        LastTopMostWindow = GetLastTopMostWindow(a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, LastTopMostWindow, a3);
  if ( a3 == GetDesktopWindow(a3) )
    BandOrdinal = GetBandOrdinal(*((unsigned int *)a1 + 76), v8);
  else
    v9 = 0;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow != 1 )
    {
      if ( v9 )
      {
        if ( BandOrdinal > (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v8) )
        {
          while ( 1 )
          {
            LastTopMostWindow = *(_QWORD *)(LastTopMostWindow + 80);
            if ( !LastTopMostWindow )
              goto LABEL_8;
            if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v8) )
              goto LABEL_18;
          }
        }
        for ( i = *(_QWORD *)(LastTopMostWindow + 72);
              i && (unsigned int)GetBandOrdinal(*(unsigned int *)(i + 304), v8) > BandOrdinal;
              i = *(_QWORD *)(v13 + 72) )
        {
          LastTopMostWindow = v13;
        }
      }
LABEL_18:
      v14 = *(_QWORD *)(LastTopMostWindow + 72);
      if ( v14 )
      {
        HMAssignmentLock(v14 + 80, a1);
        HMAssignmentLock((char *)a1 + 72, *(_QWORD *)(LastTopMostWindow + 72));
      }
      HMAssignmentLock((char *)a1 + 80, LastTopMostWindow);
      v11 = (__int64 *)(LastTopMostWindow + 72);
      goto LABEL_21;
    }
    LastTopMostWindow = *v4;
    if ( *v4 && (*(_BYTE *)(LastTopMostWindow + 44) & 0x20) == 0 )
    {
      for ( j = *(_QWORD *)(LastTopMostWindow + 72);
            j
         && (!v9 || (unsigned int)GetBandOrdinal(*(unsigned int *)(j + 304), v8) >= BandOrdinal)
         && (*(_BYTE *)(j + 44) & 0x20) == 0;
            j = *(_QWORD *)(j + 72) )
      {
        LastTopMostWindow = j;
      }
      if ( !v9 || (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 304), v8) >= BandOrdinal )
        goto LABEL_18;
    }
  }
LABEL_8:
  v10 = *v4;
  if ( *v4 )
  {
    if ( v9 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v10 + 304), v8) > BandOrdinal )
    {
      v28 = *(_QWORD *)(v10 + 72);
      LastTopMostWindow = v10;
      while ( v28 )
      {
        v29 = &gazbidOrder;
        for ( k = 0; k < 0x12; ++k )
        {
          if ( *v29 == *(_DWORD *)(v28 + 304) )
            break;
          ++v29;
        }
        if ( k <= BandOrdinal )
          break;
        LastTopMostWindow = v28;
        v28 = *(_QWORD *)(v28 + 72);
      }
      goto LABEL_18;
    }
    HMAssignmentLock(v10 + 80, a1);
    HMAssignmentLock((char *)a1 + 72, *v4);
  }
  v11 = v4;
LABEL_21:
  HMAssignmentLock(v11, a1);
  *((_DWORD *)a1 + 72) |= 8u;
  v15 = 0;
  v16 = (struct tagWND *)*v4;
  while ( v16 )
  {
    v17 = v16 == a1;
    v16 = (struct tagWND *)*((_QWORD *)v16 + 9);
    if ( v17 )
      v15 = 1;
  }
  v18 = *((_DWORD *)a1 + 72) ^ ((unsigned __int8)*((_DWORD *)a1 + 72) ^ (unsigned __int8)(16 * v15)) & 0x10;
  *((_DWORD *)a1 + 72) = v18;
  if ( (v18 & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1)
    && a1 != (struct tagWND *)GetMessageWindow((__int64)a1)
    && a3 != *((_QWORD *)&gTermIO + 1) )
  {
    HWInsertAfter(LastTopMostWindow);
    v23 = (void *)ReferenceDwmApiPort(v20, v19, v21, v22);
    DwmAsyncChildLink(v23, *((_DWORD *)a1 + 76));
    for ( m = *((_QWORD *)a1 + 9); m; m = *(_QWORD *)(m + 72) )
    {
      v25 = *(_DWORD *)(m + 288);
      if ( (v25 & 0x10) == 0 )
      {
        v34 = *(_QWORD *)(m + 80);
        *(_DWORD *)(m + 288) = v25 | 0x10;
        HWInsertAfter(v34);
        v39 = (void *)ReferenceDwmApiPort(v36, v35, v37, v38);
        DwmAsyncChildLink(v39, *(_DWORD *)(m + 304));
      }
    }
  }
  if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
