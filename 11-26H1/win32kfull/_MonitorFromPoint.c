/*
 * XREFs of _MonitorFromPoint @ 0x14008A650
 * Callers:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140089BA0 (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     GetDPITransformationMonitor @ 0x14008BDAC (GetDPITransformationMonitor.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     zzzResetSharedDesktops @ 0x1401ED3F0 (zzzResetSharedDesktops.c)
 *     zzzStartSonar @ 0x1402A46E0 (zzzStartSonar.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1402AFF30 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1402B3840 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1402EF498 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  INT v5; // ebx
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DispInfo; // rdi
  INT v11; // esi
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // rcx
  INT v15; // r14d
  INT v16; // edx
  INT v17; // edi
  INT v18; // r15d
  INT v19; // esi
  __m128i v20; // xmm6
  INT v21; // ebp
  INT v22; // edx
  int v23; // esi
  INT v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rbp
  unsigned __int64 v30; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v33; // rax
  __int64 v34; // rbp
  INT v35; // r14d
  int v36; // edx
  int v37; // eax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  INT a[4]; // [rsp+30h] [rbp-78h] BYREF
  int v41; // [rsp+40h] [rbp-68h]
  __int64 v42; // [rsp+48h] [rbp-60h]
  __int64 v43; // [rsp+50h] [rbp-58h]

  v42 = a1;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  DispInfo = GetDispInfo(a1, a2);
  if ( **(_DWORD **)DispInfo == 1 && v4 )
    return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  if ( !a3 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
    v8 = CurrentThreadDpiAwarenessContext;
    a3 = CurrentThreadDpiAwarenessContext;
    LOBYTE(v8) = CurrentThreadDpiAwarenessContext & 0xF;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v8);
      v8 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
      if ( !*(_QWORD *)(v8 + 488) )
        goto LABEL_41;
      v33 = (_QWORD *)PsGetCurrentThreadWin32Thread(v8);
      if ( v33 )
        v33 = (_QWORD *)*v33;
      v8 = *(unsigned int *)(**(_QWORD **)(v33[61] + 8LL) + 64LL);
      if ( (v8 & 1) == 0 )
LABEL_41:
        a3 = 18;
    }
  }
  if ( v4 == 2 )
  {
    v11 = HIDWORD(v42);
    if ( (unsigned int)(v5 + 0x8000) > 0xFFFF || (unsigned int)(HIDWORD(v42) + 0x8000) > 0xFFFF )
    {
      v29 = *(_QWORD *)(DispInfo + 104);
      v30 = -1LL;
      while ( v29 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v29 + 40) + 24LL) & 1) != 0 )
        {
          GetMonitorRectForDpi((__m128i *)a, v29, (a3 >> 8) & 0x1FF);
          if ( v5 < a[0] )
            v36 = a[0] - v5;
          else
            v36 = v5 < a[2] ? 0 : v5 - a[2] + 1;
          if ( v36 < v30 )
          {
            if ( v11 < a[1] )
            {
              v37 = a[1] - v11;
            }
            else if ( v11 < a[3] )
            {
              if ( !v36 )
                return v29;
              v37 = 0;
            }
            else
            {
              v37 = v11 - a[3] + 1;
            }
            v38 = v36 * (__int64)v36;
            if ( v38 < v30 && v37 + v38 < v30 )
            {
              v39 = v37 * (__int64)v37 + v38;
              if ( v39 < v30 )
              {
                v30 = v39;
                v6 = v29;
              }
            }
          }
        }
        v29 = *(_QWORD *)(v29 + 56);
      }
    }
    else
    {
      v12 = *(_QWORD *)(DispInfo + 104);
      v13 = -1;
      v41 = -1;
      while ( 1 )
      {
        v43 = v12;
        if ( !v12 )
          break;
        v14 = *(_QWORD *)(v12 + 40);
        if ( (*(_DWORD *)(v14 + 24) & 1) != 0 )
        {
          v15 = *(unsigned __int16 *)(v14 + 60);
          v16 = *(unsigned __int16 *)(v14 + 62);
          *(_OWORD *)a = *(_OWORD *)(v14 + 28);
          if ( ((a3 >> 8) & 0x1FF) != 0 )
          {
            v17 = v16;
            v18 = (a3 >> 8) & 0x1FF;
            v19 = EngMulDiv(a[0], v18, v16);
            v20 = *(__m128i *)a;
            v21 = EngMulDiv(a[1], v18, v17);
            v22 = EngMulDiv(0, v18, v15) + v19;
            v23 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a, 4));
            a[0] = v22;
            a[1] = EngMulDiv(v23 - a[1], v18, v15) + v21;
            a[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v20, 8)) - _mm_cvtsi128_si32(v20), v18, v15) + a[0];
            v24 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v20, 12)) - v23, v18, v15);
            v12 = v43;
            v11 = HIDWORD(v42);
            v13 = v41;
            a[3] = v24 + a[1];
          }
          if ( v5 < a[0] )
            v25 = a[0] - v5;
          else
            v25 = v5 >= a[2] ? v5 - a[2] + 1 : 0;
          if ( v25 < v13 )
          {
            if ( v11 < a[1] )
            {
              v26 = a[1] - v11;
            }
            else if ( v11 >= a[3] )
            {
              v26 = v11 - a[3] + 1;
            }
            else
            {
              if ( !v25 )
                return v12;
              v26 = 0;
            }
            v27 = v25 * v25;
            if ( v27 < v13 && v27 + v26 < v13 )
            {
              v28 = v26 * v26 + v27;
              if ( v28 < v13 )
              {
                v13 = v28;
                v41 = v28;
                v6 = v12;
              }
            }
          }
        }
        v12 = *(_QWORD *)(v12 + 56);
      }
    }
    return v6;
  }
  else
  {
    if ( v4 >= 2 )
      return 0LL;
    v34 = *(_QWORD *)(DispInfo + 104);
    v35 = HIDWORD(v42);
    while ( v34 )
    {
      v8 = *(unsigned int *)(*(_QWORD *)(v34 + 40) + 24LL);
      if ( (v8 & 1) != 0 )
      {
        GetMonitorRectForDpi((__m128i *)a, v34, (a3 >> 8) & 0x1FF);
        v8 = *(_QWORD *)a;
        if ( v5 >= a[0] && v5 < a[2] )
        {
          v8 = (unsigned int)a[1];
          if ( v35 >= a[1] && v35 < a[3] )
            return v34;
        }
      }
      v34 = *(_QWORD *)(v34 + 56);
    }
    if ( v4 == 1 )
      return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
    else
      return 0LL;
  }
}
