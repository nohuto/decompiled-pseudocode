/*
 * XREFs of xxxMenuDraw @ 0x14000A708
 * Callers:
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402D8E4C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x14000AE70 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreSetViewportOrg @ 0x14012045C (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     DrawEdge @ 0x1401266B0 (DrawEdge.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxSendUAHMenuMessage @ 0x14020C3E0 (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x14020C434 (xxxSendUAHInitMenuMessage.c)
 *     ?CalcbfExtra@@YAIXZ @ 0x140259D54 (-CalcbfExtra@@YAIXZ.c)
 *     GetDpiMetricsForWindow @ 0x140302474 (GetDpiMetricsForWindow.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, struct tagMENU *a2, __int64 a3)
{
  char v3; // r14
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  int v9; // r12d
  int v10; // r15d
  _QWORD *DpiMetricsForWindow; // rax
  int TextAlign; // eax
  _DWORD **v13; // rcx
  struct tagTHREADINFO *v14; // rax
  struct tagITEM *v15; // r14
  unsigned int v16; // r15d
  unsigned int v17; // r13d
  int v18; // r12d
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // ecx
  bool v24; // r15
  int *v25; // r8
  int v26; // ecx
  int v27; // ecx
  struct _POINTL v28; // [rsp+30h] [rbp-49h] BYREF
  __int128 v29; // [rsp+38h] [rbp-41h]
  int v30; // [rsp+48h] [rbp-31h]
  int v31; // [rsp+4Ch] [rbp-2Dh]
  int v32; // [rsp+50h] [rbp-29h] BYREF
  int v33; // [rsp+54h] [rbp-25h]
  int v34; // [rsp+58h] [rbp-21h]
  int v35; // [rsp+5Ch] [rbp-1Dh]
  struct tagTHREADINFO *v36; // [rsp+68h] [rbp-11h]
  __int64 v37; // [rsp+70h] [rbp-9h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v39[72]; // [rsp+88h] [rbp+Fh] BYREF
  int v40; // [rsp+E8h] [rbp+6Fh]

  v3 = 0;
  v29 = 0LL;
  v7 = PtiCurrent();
  v8 = *((_QWORD *)a2 + 5);
  v9 = 0;
  v36 = v7;
  v28 = 0LL;
  v40 = 0;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v30 = v10;
  if ( !(unsigned int)IsInsideUserApiHook() || !a3 )
    a3 = *((_QWORD *)a2 + 10);
  GreGetDCPoint(a1, 4u, &v28);
  DpiMetricsForWindow = (_QWORD *)GetDpiMetricsForWindow(a3);
  v37 = GreSelectFont(a1, *DpiMetricsForWindow);
  TextAlign = GreGetTextAlign(a1);
  v13 = (_DWORD **)*((_QWORD *)a2 + 11);
  v31 = TextAlign;
  if ( v13 && (**v13 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  CalcbfExtra();
  v14 = PtiCurrent();
  Win32HM_LockIntoThread<1>(v14, a3, BugCheckParameter3);
  if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 24LL) )
  {
LABEL_7:
    v9 = GreSetBkMode(a1);
    v40 = v9;
    goto LABEL_8;
  }
  if ( (unsigned int)IsInsideUserApiHook() && v10 )
  {
    v24 = 0;
    if ( a3 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&v32, a2);
      v3 = 1;
      if ( (unsigned int)xxxSendUAHInitMenuMessage(a3, &v32, a1) )
        v24 = 1;
    }
    if ( (v3 & 1) != 0 )
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v32);
    if ( !v24 )
    {
      a3 = *((_QWORD *)a2 + 10);
      Win32HM_ExchangeThreadLock<1>(a3, BugCheckParameter3);
      goto LABEL_8;
    }
    xxxSendUAHMenuMessage(a3, 145LL, a2, a1);
    goto LABEL_7;
  }
LABEL_8:
  if ( (*((_DWORD *)a2 + 31) & 3) != 0 )
  {
    v15 = (struct tagITEM *)MNGetpItemFromIndex(a2, *((unsigned int *)a2 + 29));
    GreSetViewportOrg(a1);
    v16 = *((_DWORD *)a2 + 29);
  }
  else
  {
    v15 = (struct tagITEM *)*((_QWORD *)a2 + 11);
    v16 = 0;
  }
  v17 = 0;
  if ( v16 >= *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL) )
    goto LABEL_25;
  v18 = v30;
  while ( v15 )
  {
    v19 = **(_DWORD **)v15;
    if ( (v19 & 0x20) != 0 && v18 )
    {
      if ( (v19 & 0x2000) != 0 && v16 )
        v27 = *(_DWORD *)(*((_QWORD *)v15 - 12) + 64LL);
      else
        v27 = *(_DWORD *)(*(_QWORD *)v15 + 64LL);
      *(_QWORD *)&v29 = (unsigned int)(v27 - 3);
      DWORD2(v29) = v27 - 1;
      HIDWORD(v29) = *((_DWORD *)a2 + 17);
      DrawEdge(a1);
    }
    v20 = **(_DWORD **)v15;
    if ( (v20 & 0x800) == 0 || (v20 & 0x100) != 0 && *((_WORD *)v36 + 332) >= 0x400u || (unsigned int)MNIsUAHMenu(a2) )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v39, a2);
      if ( a3 )
      {
        v21 = *(_QWORD *)(a3 + 40);
        v22 = *(_DWORD *)(v21 + 288) & 0xF;
        if ( v22 != 3 && (*(_DWORD *)(v21 + 232) & 0x400) != 0 )
          GetWindowDpiLastNotify(a3);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      {
        PsGetCurrentProcessWin32Process();
      }
      xxxDrawMenuItem(a1, 0, a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v39);
      if ( !(unsigned __int8)MNIspItemValid(a2, v15) )
        goto LABEL_23;
    }
    else
    {
      v25 = *(int **)v15;
      v26 = *(_DWORD *)(*(_QWORD *)v15 + 64LL);
      v33 = (*(_DWORD *)(*(_QWORD *)v15 + 76LL) >> 1) - 1 + *(_DWORD *)(*(_QWORD *)v15 + 68LL);
      v32 = v26 + 1;
      v34 = v25[18] - 1 + v26;
      v35 = v33 + 2;
      DrawEdge(a1);
      MNDrawInsertionBar(a1, v15);
    }
    if ( (*((_DWORD *)a2 + 31) & 3) != 0 )
    {
      v17 += *(_DWORD *)(*(_QWORD *)v15 + 76LL);
      if ( v17 > *((_DWORD *)a2 + 17) )
        break;
    }
LABEL_23:
    v15 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v16);
    if ( v16 >= *(_DWORD *)(*((_QWORD *)a2 + 5) + 44LL) )
      break;
  }
  v9 = v40;
LABEL_25:
  Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3);
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  GreSelectFont(a1, v37);
  return Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>((ULONG_PTR)BugCheckParameter3);
}
