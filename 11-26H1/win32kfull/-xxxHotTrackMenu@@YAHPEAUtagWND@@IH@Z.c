/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14020D1E0
 * Callers:
 *     xxxHotTrack @ 0x14020D1B8 (xxxHotTrack.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  Gre::Base *DCEx; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 *DpiMetricsForDpi; // rax
  int TextAlign; // r14d
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  struct tagMENU **v29[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) == 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 21);
  if ( !v6 )
    return 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v29, v6);
  if ( v30 )
    v7 = v30;
  else
    v7 = (__int64)*v29[0];
  v8 = MNGetpItemFromIndex(v7, a2);
  if ( !v8 )
  {
LABEL_39:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v29);
    return 0LL;
  }
  if ( !v9 )
    v9 = (__int64)*v29[0];
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v9);
  xxxMNRecomputeBarIfNeeded(a1, v29);
  v10 = v30;
  if ( !v30 )
    v10 = (__int64)*v29[0];
  if ( !MNIspItemValid(v10, v8) )
  {
LABEL_38:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    goto LABEL_39;
  }
  v11 = *(_DWORD *)(*(_QWORD *)v8 + 4LL);
  if ( a3 )
  {
    if ( (v11 & 1) == 0 )
    {
      v12 = v11 | 0x100;
      goto LABEL_13;
    }
    goto LABEL_38;
  }
  v12 = v11 & 0xFFFFFEFF;
LABEL_13:
  *(_DWORD *)(*(_QWORD *)v8 + 4LL) = v12;
  DCEx = (Gre::Base *)_GetDCEx(a1, 0LL, 65539LL);
  UserSessionState = W32GetUserSessionState(v15, v14);
  GreSelectBrush(DCEx, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4752LL));
  v17 = *((_QWORD *)a1 + 5);
  v18 = *(_DWORD *)(v17 + 288) & 0xF;
  if ( v18 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v17 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v17 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( !v18
         && (v26 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
  }
  DpiMetricsForDpi = (__int64 *)GetDpiMetricsForDpi(WindowDpiLastNotify);
  GreSelectFont(DCEx, *DpiMetricsForDpi);
  TextAlign = GreGetTextAlign((HDC)DCEx);
  if ( *((_QWORD *)*v29[0] + 11) && (***((_DWORD ***)*v29[0] + 11) & 0x2000) != 0 )
    GreSetTextAlign((HDC)DCEx, TextAlign | 0x100);
  v22 = *((_QWORD *)a1 + 5);
  v23 = *(_DWORD *)(v22 + 288) & 0xF;
  if ( v23 == 3 )
  {
    v24 = (*(_DWORD *)(v22 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v22 + 232) & 0x400) != 0 )
  {
    v24 = GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( !v23
         && (v27 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 64LL) & 1) != 0 )
  {
    v24 = 96;
  }
  else
  {
    v24 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
  }
  xxxDrawMenuItem((HDC)DCEx, v24, v29, v8, 0, 0LL);
  GreSetTextAlign((HDC)DCEx, TextAlign);
  _ReleaseDC(DCEx);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v29);
  return 1LL;
}
