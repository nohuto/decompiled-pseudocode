/*
 * XREFs of LinkWindow @ 0x14012DC64
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14012C99C (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     IsPseudoPwnd @ 0x14012E280 (IsPseudoPwnd.c)
 *     TrackLayeredZorder @ 0x14012E298 (TrackLayeredZorder.c)
 *     GetBandOrdinal @ 0x14012E344 (GetBandOrdinal.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x14012EA44 (IsMessageParentWindow.c)
 *     HWInsertAfter @ 0x14012EC8C (HWInsertAfter.c)
 *     DwmAsyncChildLink @ 0x14012ECB4 (DwmAsyncChildLink.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, struct tagWND **a2, __int64 a3)
{
  struct tagWND **LastTopMostWindow; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // r10d
  int v12; // ecx
  _DWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  struct tagWND *v18; // rax
  bool v19; // zf
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rax
  __int64 j; // r12
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  struct tagWND *v33; // rcx
  __int64 v34; // rax
  struct tagWND *v35; // r8
  struct tagWND **v36; // r8
  struct tagWND **v37; // rdi
  struct tagWND *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct tagWND *v41; // rcx
  __int64 v42; // rax
  struct tagWND *v43; // rax
  __int64 v44; // rcx
  struct tagWND *v45; // rcx
  __int64 v46; // rax
  struct tagWND *v47; // rax
  _DWORD *v48; // rcx
  int v49; // edx
  unsigned int i; // eax
  struct tagWND *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rcx
  struct tagWND **v58; // r9
  int v59; // r14d
  __int64 v60; // rdx
  __int64 v61; // rcx
  void *v62; // rax
  char *v63; // [rsp+30h] [rbp-10h] BYREF
  struct tagWND *v64; // [rsp+38h] [rbp-8h]

  LastTopMostWindow = a2;
  v6 = 0;
  if ( *(struct tagWND **)(a3 + 112) == a1 )
    return;
  if ( !(unsigned int)IsPseudoPwnd(a2) )
  {
    v51 = LastTopMostWindow[3];
    v52 = 0LL;
    if ( v51 )
    {
      v53 = *((_QWORD *)v51 + 1);
      if ( v53 )
        v52 = *(_QWORD *)(v53 + 24);
    }
    v54 = *((_QWORD *)a1 + 3);
    v55 = 0LL;
    if ( v54 )
    {
      v56 = *(_QWORD *)(v54 + 8);
      if ( v56 )
        v55 = *(_QWORD *)(v56 + 24);
    }
    if ( v52 != v55 )
    {
      if ( a3 == GetDesktopWindow((__int64)a1) )
        LastTopMostWindow = (struct tagWND **)GetLastTopMostWindow(v57);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3138LL);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3139LL);
  v7 = *((_QWORD *)a1 + 5);
  if ( *(__int16 *)(v7 + 42) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3140LL);
    v7 = *((_QWORD *)a1 + 5);
  }
  v8 = *(_QWORD *)(a3 + 24);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      v9 = *(_QWORD *)(v10 + 24);
  }
  if ( a3 == v9 )
  {
    v12 = *(_DWORD *)(v7 + 236);
    v11 = 1;
    v13 = &unk_140360D20;
    do
    {
      if ( *v13 == v12 )
        break;
      ++v6;
      ++v13;
    }
    while ( v6 < 0x12 );
  }
  else
  {
    v11 = 0;
  }
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (struct tagWND **)1 )
    {
      LastTopMostWindow = *(struct tagWND ***)(a3 + 112);
      if ( LastTopMostWindow && (*((_BYTE *)LastTopMostWindow[5] + 20) & 0x20) == 0 )
      {
        while ( 1 )
        {
          v58 = (struct tagWND **)LastTopMostWindow[11];
          if ( !v58 )
            break;
          if ( v11 && (unsigned int)GetBandOrdinal(*((unsigned int *)v58[5] + 59)) < v6 )
            goto LABEL_81;
          if ( (*((_BYTE *)v58[5] + 20) & 0x20) != 0 )
            break;
          LastTopMostWindow = v58;
        }
        if ( !v11 )
          goto LABEL_48;
LABEL_81:
        if ( (unsigned int)GetBandOrdinal(*((unsigned int *)LastTopMostWindow[5] + 59)) >= v6 )
          goto LABEL_48;
      }
    }
    else
    {
      if ( !v11 )
        goto LABEL_48;
      if ( v6 <= (unsigned int)GetBandOrdinal(*((unsigned int *)LastTopMostWindow[5] + 59)) )
      {
        while ( 1 )
        {
          v35 = LastTopMostWindow[11];
          if ( !v35 || (unsigned int)GetBandOrdinal(*(unsigned int *)(*((_QWORD *)v35 + 5) + 236LL)) <= v6 )
            break;
          LastTopMostWindow = v36;
        }
        goto LABEL_48;
      }
      while ( 1 )
      {
        LastTopMostWindow = (struct tagWND **)LastTopMostWindow[12];
        if ( !LastTopMostWindow )
          break;
        if ( v6 <= (unsigned int)GetBandOrdinal(*((unsigned int *)LastTopMostWindow[5] + 59)) )
          goto LABEL_48;
      }
    }
  }
  v14 = *(_QWORD *)(a3 + 112);
  if ( v14 )
  {
    if ( !v11 )
    {
LABEL_40:
      v31 = *((_QWORD *)a1 + 6);
      v32 = *(_QWORD *)(v14 + 40);
      v63 = (char *)(v14 + 96);
      v64 = a1;
      *(_QWORD *)(v32 + 80) = v31;
      HMAssignmentLock(&v63, 0LL);
      v33 = *(struct tagWND **)(a3 + 112);
      if ( v33 )
        v34 = *((_QWORD *)v33 + 6);
      else
        v34 = 0LL;
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = v34;
      v63 = (char *)a1 + 88;
      v64 = v33;
      HMAssignmentLock(&v63, 0LL);
      goto LABEL_19;
    }
    if ( (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v14 + 40) + 236LL)) <= v6 )
    {
      LastTopMostWindow = 0LL;
      goto LABEL_40;
    }
    for ( LastTopMostWindow = (struct tagWND **)v14; ; LastTopMostWindow = (struct tagWND **)LastTopMostWindow[11] )
    {
      v47 = LastTopMostWindow[11];
      if ( !v47 )
        break;
      v48 = &unk_140360D20;
      v49 = *(_DWORD *)(*((_QWORD *)v47 + 5) + 236LL);
      for ( i = 0; i < 0x12; ++i )
      {
        if ( *v48 == v49 )
          break;
        ++v48;
      }
      if ( i <= v6 )
        break;
    }
LABEL_48:
    if ( *((char *)LastTopMostWindow[5] + 19) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3338LL);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3339LL);
    v37 = LastTopMostWindow + 11;
    v38 = LastTopMostWindow[11];
    if ( v38 )
    {
      v39 = *((_QWORD *)v38 + 5);
      v40 = *((_QWORD *)a1 + 6);
      v63 = (char *)v38 + 96;
      v64 = a1;
      *(_QWORD *)(v39 + 80) = v40;
      HMAssignmentLock(&v63, 0LL);
      v41 = *v37;
      if ( *v37 )
        v42 = *((_QWORD *)v41 + 6);
      else
        v42 = 0LL;
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = v42;
      v63 = (char *)a1 + 88;
      v64 = v41;
      HMAssignmentLock(&v63, 0LL);
    }
    v43 = LastTopMostWindow[6];
    v44 = *((_QWORD *)a1 + 5);
    v63 = (char *)a1 + 96;
    v64 = (struct tagWND *)LastTopMostWindow;
    *(_QWORD *)(v44 + 80) = v43;
    HMAssignmentLock(&v63, 0LL);
    v45 = LastTopMostWindow[5];
    v46 = *((_QWORD *)a1 + 6);
    v63 = (char *)(LastTopMostWindow + 11);
    *((_QWORD *)v45 + 9) = v46;
    goto LABEL_20;
  }
LABEL_19:
  v15 = *((_QWORD *)a1 + 6);
  v16 = *(_QWORD *)(a3 + 40);
  v63 = (char *)(a3 + 112);
  *(_QWORD *)(v16 + 56) = v15;
LABEL_20:
  v64 = a1;
  HMAssignmentLock(&v63, 0LL);
  *((_DWORD *)a1 + 95) |= 0x1000000u;
  v17 = 0;
  v18 = *(struct tagWND **)(a3 + 112);
  while ( v18 )
  {
    v19 = v18 == a1;
    v18 = (struct tagWND *)*((_QWORD *)v18 + 11);
    if ( v19 )
      v17 = 1;
  }
  v20 = *((_DWORD *)a1 + 95);
  v21 = v20 | 0x2000000;
  v22 = v20 & 0xFDFFFFFF;
  if ( !v17 )
    v21 = v22;
  *((_DWORD *)a1 + 95) = v21;
  if ( (v21 & 0x2000000) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && !(unsigned int)IsDesktopWindow(a1)
    && !(unsigned int)IsMessageParentWindow()
    && a3 != *(_QWORD *)(W32GetUserSessionState(v24, v23) + 68464) )
  {
    DirtyVisRgnTrackers(a1);
    v25 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
    HWInsertAfter(LastTopMostWindow);
    v28 = (void *)ReferenceDwmApiPort(v27, v26);
    DwmAsyncChildLink(v28, v25);
    for ( j = *((_QWORD *)a1 + 11); j; j = *(_QWORD *)(j + 88) )
    {
      v30 = *(_DWORD *)(j + 380);
      if ( (v30 & 0x2000000) == 0 )
      {
        *(_DWORD *)(j + 380) = v30 | 0x2000000;
        DirtyVisRgnTrackers((struct tagWND *)j);
        v59 = *(_DWORD *)(*(_QWORD *)(j + 40) + 236LL);
        HWInsertAfter(*(_QWORD *)(j + 96));
        v62 = (void *)ReferenceDwmApiPort(v61, v60);
        DwmAsyncChildLink(v62, v59);
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
}
