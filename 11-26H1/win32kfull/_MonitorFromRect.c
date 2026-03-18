/*
 * XREFs of _MonitorFromRect @ 0x14002FC00
 * Callers:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _GetWindowPlacement @ 0x140030188 (_GetWindowPlacement.c)
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1400312B0 (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1401608B0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x14022B82C (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x14022BF44 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     CitGetWindowInfo @ 0x14025D590 (CitGetWindowInfo.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402613D0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402638F4 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14026F0F4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x1402C3D40 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402C47F0 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxSetInternalWindowPos @ 0x1402C8BFC (xxxSetInternalWindowPos.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DBD50 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402EDDD0 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(__int32 *a1, __int64 a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  int v3; // r15d
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 DispInfo; // r12
  unsigned __int16 v12; // di
  __int64 *v13; // rsi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 i; // rsi
  __int32 v17; // r10d
  __int32 v18; // r9d
  __int32 v19; // eax
  __int32 v20; // eax
  __int32 v21; // eax
  __int64 v22; // r8
  __int64 v23; // rsi
  __m128i v24; // xmm2
  int v25; // r14d
  int v26; // r15d
  __m128i *MonitorRectForDpi; // rax
  __int32 v28; // r9d
  int v29; // r8d
  __m128i v30; // xmm0
  __int64 v31; // rax
  unsigned __int64 v32; // xmm0_8
  unsigned int v33; // r14d
  __int64 v34; // rsi
  unsigned int v35; // r14d
  __int64 v36; // rax
  __int32 v37; // ecx
  unsigned int v38; // ecx
  __int32 v39; // r8d
  __int32 v40; // edx
  __int32 v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  __int32 v44; // r8d
  __int32 v45; // edx
  __int64 v46; // rsi
  unsigned __int64 v47; // r14
  __int32 v48; // edx
  __int32 v49; // eax
  __int32 v50; // eax
  __int64 v51; // rdx
  __int32 v52; // eax
  __int32 v53; // ecx
  __int32 v54; // ecx
  __int32 v55; // ecx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  int v58; // [rsp+28h] [rbp-39h]
  __m128i v59; // [rsp+38h] [rbp-29h] BYREF
  __m128i v60; // [rsp+48h] [rbp-19h] BYREF
  int v61; // [rsp+58h] [rbp-9h]
  int v62; // [rsp+68h] [rbp+7h]
  unsigned int v63; // [rsp+70h] [rbp+Fh]
  __m128i v64; // [rsp+78h] [rbp+17h] BYREF

  v63 = a2;
  v3 = 0;
  v5 = 0LL;
  v6 = a2;
  v60 = 0LL;
  DispInfo = GetDispInfo(a1, a2);
  if ( **(_DWORD **)DispInfo == 1 && v6 )
    return *(_QWORD *)(GetDispInfo(v9, v8) + 96);
  if ( *a1 >= a1[2] || a1[1] >= a1[3] )
    return MonitorFromPoint(*(_QWORD *)a1, v6, CurrentThreadDpiAwarenessContext);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      if ( !*((_QWORD *)PtiCurrent() + 61)
        || (v9 = **(_QWORD **)(*((_QWORD *)PtiCurrent() + 61) + 8LL), (*(_DWORD *)(v9 + 64) & 1) == 0) )
      {
        CurrentThreadDpiAwarenessContext = 18;
      }
    }
  }
  v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  v13 = (__int64 *)GetDispInfo(v9, v8);
  v14 = *v13;
  if ( v12 )
  {
    if ( *(_DWORD *)v14 != 1 )
    {
      v23 = v13[13];
      v24 = 0LL;
      v59 = 0LL;
      if ( v23 )
      {
        v61 = _mm_cvtsi128_si32((__m128i)0LL);
        v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
        v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
        v62 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
        do
        {
          v58 = v26;
          v9 = *(unsigned int *)(*(_QWORD *)(v23 + 40) + 24LL);
          if ( (v9 & 1) != 0 )
          {
            MonitorRectForDpi = GetMonitorRectForDpi(&v64, v23, v12);
            v28 = v61;
            v29 = v62;
            v30 = *MonitorRectForDpi;
            v31 = MonitorRectForDpi->m128i_i64[0];
            v32 = _mm_srli_si128(v30, 8).m128i_u64[0];
            if ( v61 >= (int)v31 )
              v28 = v31;
            v26 = HIDWORD(v31);
            v61 = v28;
            if ( v58 < SHIDWORD(v31) )
              v26 = v58;
            v59.m128i_i32[0] = v28;
            if ( v62 <= (int)v32 )
              v29 = v32;
            *(__int64 *)((char *)v59.m128i_i64 + 4) = __PAIR64__(v29, v26);
            v8 = HIDWORD(v32);
            v62 = v29;
            if ( v25 <= SHIDWORD(v32) )
            {
              v25 = HIDWORD(v32);
              v59.m128i_i32[3] = HIDWORD(v32);
              v59.m128i_i32[1] = v26;
            }
            v24 = _mm_load_si128(&v59);
          }
          v23 = *(_QWORD *)(v23 + 56);
        }
        while ( v23 );
        v6 = v63;
        v3 = 0;
      }
      v59 = v24;
      goto LABEL_10;
    }
    v36 = GetDispInfo(v9, v8);
    v15 = *GetMonitorRectForDpi(&v59, *(_QWORD *)(v36 + 96), v12);
  }
  else
  {
    v15 = *(__m128i *)(v14 + 24);
  }
  v59 = v15;
LABEL_10:
  if ( *a1 <= v59.m128i_i32[0] && a1[1] <= v59.m128i_i32[1] && a1[2] >= v59.m128i_i32[2] && a1[3] >= v59.m128i_i32[3] )
    return *(_QWORD *)(GetDispInfo(v9, v8) + 96);
  for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
  {
    v9 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
    if ( (v9 & 1) != 0 )
    {
      GetMonitorRectForDpi(&v59, i, v12);
      v9 = v59.m128i_u64[1];
      v8 = v59.m128i_i64[0];
      v17 = v59.m128i_i32[0];
      v18 = v59.m128i_i32[2];
      if ( *a1 > v59.m128i_i32[0] )
        v17 = *a1;
      v19 = a1[2];
      v60.m128i_i32[0] = v17;
      if ( v19 < v59.m128i_i32[2] )
        v18 = v19;
      v60.m128i_i32[2] = v18;
      if ( v17 >= v18 )
        goto LABEL_24;
      v20 = a1[1];
      v8 = HIDWORD(v59.m128i_i64[0]);
      if ( v20 > v59.m128i_i32[1] )
        v8 = (unsigned int)v20;
      v21 = a1[3];
      v9 = HIDWORD(v59.m128i_i64[1]);
      v60.m128i_i32[1] = v8;
      if ( v21 < v59.m128i_i32[3] )
        v9 = (unsigned int)v21;
      v60.m128i_i32[3] = v9;
      if ( (int)v8 < (int)v9 )
      {
        v22 = v60.m128i_i64[0] - *(_QWORD *)a1;
        if ( v60.m128i_i64[0] == *(_QWORD *)a1 )
          v22 = v60.m128i_i64[1] - *((_QWORD *)a1 + 1);
        if ( !v22 )
          return i;
        v9 = (unsigned int)((v18 - v17) * (v9 - v8));
        if ( (int)v9 > v3 )
        {
          v3 = v9;
          v5 = i;
        }
      }
      else
      {
LABEL_24:
        v60 = 0LL;
      }
    }
  }
  if ( v3 > 0 )
    return v5;
  if ( !v6 )
    return 0LL;
  v33 = v6 - 1;
  if ( !v33 )
    return *(_QWORD *)(GetDispInfo(v9, v8) + 96);
  if ( v33 == 1 )
  {
    if ( (unsigned int)(*a1 + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[1] + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[2] + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[3] + 0x8000) <= 0xFFFF )
    {
      v34 = *(_QWORD *)(DispInfo + 104);
      v35 = -1;
      while ( 1 )
      {
        if ( !v34 )
          return v5;
        if ( (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_78:
        v34 = *(_QWORD *)(v34 + 56);
      }
      GetMonitorRectForDpi(&v60, v34, v12);
      v44 = a1[2];
      if ( v44 <= v60.m128i_i32[0] )
      {
        v37 = v60.m128i_i32[0] - v44;
      }
      else
      {
        if ( *a1 < v60.m128i_i32[2] )
        {
          v38 = 0;
LABEL_70:
          if ( v38 >= v35 )
            goto LABEL_78;
          v39 = a1[3];
          if ( v39 > v60.m128i_i32[1] )
          {
            v45 = a1[1];
            if ( v45 < v60.m128i_i32[3] )
            {
              v41 = 0;
              goto LABEL_74;
            }
            v40 = v45 - v60.m128i_i32[3];
          }
          else
          {
            v40 = v60.m128i_i32[1] - v39;
          }
          v41 = v40 + 1;
LABEL_74:
          v42 = v38 * v38;
          if ( v42 < v35 && v42 + v41 < v35 )
          {
            v43 = v41 * v41 + v42;
            if ( v43 < v35 )
            {
              v35 = v43;
              v5 = v34;
            }
          }
          goto LABEL_78;
        }
        v37 = *a1 - v60.m128i_i32[2];
      }
      v38 = v37 + 1;
      goto LABEL_70;
    }
    v46 = *(_QWORD *)(DispInfo + 104);
    v47 = -1LL;
    while ( 1 )
    {
      if ( !v46 )
        return v5;
      if ( (*(_DWORD *)(*(_QWORD *)(v46 + 40) + 24LL) & 1) != 0 )
        break;
LABEL_104:
      v46 = *(_QWORD *)(v46 + 56);
    }
    GetMonitorRectForDpi(&v60, v46, v12);
    v48 = a1[2];
    if ( v48 <= v60.m128i_i32[0] )
    {
      v49 = v60.m128i_i32[0] - v48;
    }
    else
    {
      if ( *a1 < v60.m128i_i32[2] )
      {
        v50 = 0;
LABEL_95:
        v51 = v50;
        if ( v50 >= v47 )
          goto LABEL_104;
        v52 = a1[3];
        if ( v52 <= v60.m128i_i32[1] )
        {
          v54 = v60.m128i_i32[1] - v52;
        }
        else
        {
          v53 = a1[1];
          if ( v53 < v60.m128i_i32[3] )
          {
            v55 = 0;
            goto LABEL_100;
          }
          v54 = v53 - v60.m128i_i32[3];
        }
        v55 = v54 + 1;
LABEL_100:
        v56 = v51 * v51;
        if ( v56 < v47 && v55 + v56 < v47 )
        {
          v57 = v55 * (__int64)v55 + v56;
          if ( v57 < v47 )
          {
            v47 = v57;
            v5 = v46;
          }
        }
        goto LABEL_104;
      }
      v49 = *a1 - v60.m128i_i32[2];
    }
    v50 = v49 + 1;
    goto LABEL_95;
  }
  return 0LL;
}
