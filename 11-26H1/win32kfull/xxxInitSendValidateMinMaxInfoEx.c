/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x14003144C
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxAdjustSize @ 0x1401C5D84 (xxxAdjustSize.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1402596DC (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1402F0A94 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetMaxTrackSizeForWindow @ 0x14003289C (GetMaxTrackSizeForWindow.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401E0304 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     _GetClientRect @ 0x1401E6B9C (_GetClientRect.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r15d
  struct tagMONITOR *v19; // r13
  bool v20; // dl
  int WindowBordersWithDpiAwareness; // esi
  __int32 v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rcx
  int DpiDependentMetric; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  struct tagTHREADINFO *v35; // rax
  __int64 v36; // rdx
  int v37; // r14d
  int v38; // eax
  __int64 result; // rax
  struct tagWND *v40; // rax
  const struct tagWND *v41; // rcx
  unsigned int v42; // eax
  int v43; // r15d
  signed int v44; // r12d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r8d
  __int64 v50; // rdx
  _DWORD *v51; // r14
  int v52; // ecx
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  int v57; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v59; // rdx
  int v60; // ecx
  unsigned int v61; // eax
  int v62; // ecx
  unsigned int v63; // eax
  int v64; // eax
  __int64 v65; // rcx
  char v66; // dl
  int v67; // edx
  unsigned int v68; // eax
  int v69; // eax
  __int64 v70; // rdx
  int v71; // ecx
  unsigned int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // edx
  unsigned int v76; // eax
  __int64 v77; // rax
  int v78; // edx
  unsigned int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rax
  __m128i v85; // [rsp+20h] [rbp-50h] BYREF
  __int128 v86; // [rsp+30h] [rbp-40h]
  ULONG_PTR v87[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-20h] BYREF
  struct tagTHREADINFO *v89; // [rsp+B8h] [rbp+48h]
  __int32 v90; // [rsp+C8h] [rbp+58h]
  int v91; // [rsp+C8h] [rbp+58h]

  v85 = 0LL;
  v89 = PtiCurrent();
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904);
  *(_DWORD *)a2 = *(_DWORD *)(v8 + 2124);
  v10 = *(_QWORD *)(W32GetUserSessionState(v8, v9) + 19904);
  v11 = *(unsigned int *)(v10 + 2128);
  *(_DWORD *)(a2 + 4) = v11;
  v12 = *(_QWORD *)(GetDispInfo(v10, v11) + 96);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
  GetMonitorRectForDpi((__m128i *)v87, v12, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v14 = *((_QWORD *)a1 + 3);
  v15 = 0LL;
  v86 = *(_OWORD *)v87;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    if ( v16 )
      v15 = *(_QWORD *)(v16 + 24);
  }
  v17 = *((_QWORD *)a1 + 13);
  if ( v17 == v15 )
  {
    v18 = 1;
    v85 = *(__m128i *)v87;
    v19 = _MonitorFromWindowInternal(a1, 1u, 1);
    if ( a3 )
      v19 = a3;
  }
  else
  {
    v18 = 0;
    v19 = 0LL;
    GetClientRect(v17, &v85);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v20, 0, 0);
  v22 = v85.m128i_i32[0] - WindowBordersWithDpiAwareness;
  v85.m128i_i32[0] = v22;
  v23 = (unsigned int)(WindowBordersWithDpiAwareness - v22 + v85.m128i_i32[2]);
  v85.m128i_i32[1] -= WindowBordersWithDpiAwareness;
  v90 = v85.m128i_i32[1];
  *(_DWORD *)(a2 + 8) = v23;
  v24 = (unsigned int)(WindowBordersWithDpiAwareness - v90);
  *(_DWORD *)(a2 + 12) = v24 + v85.m128i_i32[3];
  UserSessionState = W32GetUserSessionState(v24, v23);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41374), 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 16) & 0x20) != 0 )
    v27 = *(_QWORD *)(Prop + 8);
  else
    v27 = v85.m128i_i64[0];
  *(_QWORD *)(a2 + 16) = v27;
  v28 = 2 * WindowBordersWithDpiAwareness;
  v29 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v29 + 30) & 0xC0) != 0 && *(char *)(v29 + 24) >= 0 )
  {
    v57 = *(_DWORD *)(v29 + 288) & 0xF;
    if ( v57 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v29 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v29 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( !v57
           && (v74 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v74 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v59 = *((_QWORD *)a1 + 5);
    v60 = *(_DWORD *)(v59 + 288) & 0xF;
    if ( v60 == 3 )
    {
      v61 = (*(_DWORD *)(v59 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v59 + 232) & 0x400) != 0 )
    {
      v61 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v60
           && (v73 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v73 + 8) + 64LL) & 1) != 0 )
    {
      v61 = 96;
    }
    else
    {
      v61 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v61);
  }
  else
  {
    DpiDependentMetric = 2;
    if ( v28 >= 2 )
      DpiDependentMetric = v28;
    *(_DWORD *)(a2 + 24) = DpiDependentMetric;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(_QWORD *)(a2 + 32) = GetMaxTrackSizeForWindow(a1);
  Win32HM_LockIntoThread<1>(v89, v19, BugCheckParameter3);
  v87[1] = v12;
  v87[0] = *((_QWORD *)v89 + 56);
  *((_QWORD *)v89 + 56) = v87;
  HMLockObject(v12);
  xxxSendMessage(a1, 36LL, 0LL, a2);
  v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 19904);
  *(_DWORD *)a2 = *(_DWORD *)(v33 + 2124);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v34) + 19904) + 2128LL);
  if ( v18 )
  {
    v40 = _HungWindowFromGhostWindow(a1);
    v41 = a1;
    if ( v40 )
      v41 = v40;
    v42 = GetWindowCompositedDpiContext(v41);
    GetMonitorRectForDpi(&v85, (__int64)v19, (v42 >> 8) & 0x1FF);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v86) - (int)v86
      || (v43 = HIDWORD(v86), v44 = DWORD1(v86), *(_DWORD *)(a2 + 12) < HIDWORD(v86) - DWORD1(v86)) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      LODWORD(v55) = v85.m128i_i32[0];
      v51 = (_DWORD *)(a2 + 20);
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v47 = W32GetUserSessionState(v46, v45);
      v48 = GetProp(a1, *(unsigned __int16 *)(v47 + 41374), 1LL);
      if ( v48 )
      {
        v49 = *(_DWORD *)(v48 + 16);
        if ( (v49 & 0x20) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v82 = *(_DWORD *)(a2 + 16);
          if ( v82 != v22 && *(_DWORD *)(v48 + 8) == v82 )
          {
            *(_DWORD *)(v48 + 16) = v49 & 0xFFFFFFDF;
            *(_DWORD *)(a2 + 20) = v90;
            *(_DWORD *)(a2 + 16) = v22;
          }
        }
      }
      v50 = *((_QWORD *)a1 + 5);
      v51 = (_DWORD *)(a2 + 20);
      v91 = *(_DWORD *)(a2 + 20);
      v52 = *(_DWORD *)(v50 + 288) & 0xF;
      if ( v52 == 3 )
      {
        v54 = (*(_DWORD *)(v50 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v50 + 232) & 0x400) != 0 )
      {
        v54 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v52
             && (v53 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v53 + 8) + 64LL) & 1) != 0 )
      {
        v54 = 96;
      }
      else
      {
        v54 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
      }
      if ( (int)(v91 + GetDpiDependentMetric(2LL, v54)) <= v44 && *v51 + *(_DWORD *)(a2 + 12) >= v43 )
        v85 = *GetMonitorRectForWindow(&v85, (__int64)v19, a1);
      v55 = v85.m128i_i64[0];
      v56 = HIDWORD(v85.m128i_i64[1]);
      *(_DWORD *)(a2 + 8) += v86 + v85.m128i_i32[2] - v85.m128i_i32[0] - DWORD2(v86);
      *(_DWORD *)(a2 + 12) += v44 + v56 - HIDWORD(v55) - v43;
    }
    *(_DWORD *)(a2 + 16) += v55;
    *v51 += v85.m128i_i32[1];
  }
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v87);
  v35 = PtiCurrent();
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v35, (ULONG_PTR)BugCheckParameter3);
  v36 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v36 + 16) & 8) != 0 )
  {
    v62 = *(_DWORD *)(v36 + 288) & 0xF;
    if ( v62 == 3 )
    {
      v63 = (*(_DWORD *)(v36 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v36 + 232) & 0x400) != 0 )
    {
      v63 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v62
           && (v77 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v77 + 8) + 64LL) & 1) != 0 )
    {
      v63 = 96;
    }
    else
    {
      v63 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
    }
    v64 = GetDpiDependentMetric(17LL, v63);
    v65 = *((_QWORD *)a1 + 5);
    v37 = v64;
    v66 = *(_BYTE *)(v65 + 30);
    if ( *(char *)(v65 + 24) < 0 )
    {
      if ( (v66 & 8) != 0 )
      {
        v75 = *(_DWORD *)(v65 + 288) & 0xF;
        if ( v75 == 3 )
        {
          v76 = (*(_DWORD *)(v65 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v65 + 232) & 0x400) != 0 )
        {
          v76 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v75
               && (v83 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v83 + 8) + 64LL) & 1) != 0 )
        {
          v76 = 96;
        }
        else
        {
          v76 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
        }
        v28 += GetDpiDependentMetric(23LL, v76);
      }
    }
    else
    {
      if ( (v66 & 8) != 0 )
      {
        if ( (v66 & 3) != 0 )
        {
          v67 = *(_DWORD *)(v65 + 288) & 0xF;
          if ( v67 == 3 )
          {
            v68 = (*(_DWORD *)(v65 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v65 + 232) & 0x400) != 0 )
          {
            v68 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v67
                 && (v80 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v80 + 8) + 64LL) & 1) != 0 )
          {
            v68 = 96;
          }
          else
          {
            v68 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
          }
          v69 = GetDpiDependentMetric(12LL, v68);
          v28 += v69 + 2 * v69;
        }
        else if ( (*(_BYTE *)(v65 + 25) & 4) != 0 )
        {
          v78 = *(_DWORD *)(v65 + 288) & 0xF;
          if ( v78 == 3 )
          {
            v79 = (*(_DWORD *)(v65 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v65 + 232) & 0x400) != 0 )
          {
            v79 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v78
                 && (v84 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v84 + 8) + 64LL) & 1) != 0 )
          {
            v79 = 96;
          }
          else
          {
            v79 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
          }
          v28 += 2 * GetDpiDependentMetric(12LL, v79);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v70 = *((_QWORD *)a1 + 5);
          v71 = *(_DWORD *)(v70 + 288) & 0xF;
          if ( v71 == 3 )
          {
            v72 = (*(_DWORD *)(v70 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v70 + 232) & 0x400) != 0 )
          {
            v72 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v71
                 && (v81 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v81 + 8) + 64LL) & 1) != 0 )
          {
            v72 = 96;
          }
          else
          {
            v72 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
          }
          v28 += GetDpiDependentMetric(13LL, v72);
        }
      }
      v28 += 4 * *(_DWORD *)(GetDpiServerInfoForCurrentThread() + 16);
    }
    v28 += 4;
  }
  else
  {
    v37 = v28;
  }
  v38 = *(_DWORD *)(a2 + 24);
  if ( v38 <= v28 )
    v38 = v28;
  *(_DWORD *)(a2 + 24) = v38;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v37 )
    result = (unsigned int)v37;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
