/*
 * XREFs of GetNewMonitor @ 0x1C006DEC0
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0069CF0 (NtUserUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     GetInheritedMonitor @ 0x1C006E21C (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C006E670 (HasMaximizedState.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E4614 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z @ 0x1C01E4700 (-TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z.c)
 *     GetMonitorTransform @ 0x1C01E57AC (GetMonitorTransform.c)
 *     TransformRectAroundPoint @ 0x1C01E6678 (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C022D854 (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(__m128i *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 InheritedMonitor; // rbx
  struct tagRECT si128; // xmm7
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // r8
  int v11; // r9d
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  __m128i v15; // xmm6
  BOOL v16; // r13d
  __int64 v17; // rax
  __int64 MonitorTransform; // rax
  int v19; // r9d
  int v20; // r11d
  __int64 v21; // rax
  int v23; // [rsp+28h] [rbp-49h]
  struct tagRECT v24; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v25; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v26; // [rsp+58h] [rbp-19h] BYREF

  InheritedMonitor = 0LL;
  si128 = 0LL;
  v8 = ValidateHmonitorNoRip(a1[22].m128i_i64[0]);
  v24 = 0LL;
  v9 = 1;
  v11 = HasMaximizedState(a1);
  if ( !v10 || *(__m128i **)v10 != a1 || (v12 = *(_DWORD *)(v10 + 180), v12 < 0) )
  {
    v13 = 0;
LABEL_8:
    v14 = 0;
    goto LABEL_9;
  }
  v13 = 1;
  if ( (v12 & 8) == 0 || !v11 )
    goto LABEL_8;
  v14 = 1;
LABEL_9:
  v15 = a1[7];
  v26 = (struct tagRECT)v15;
  if ( a2 && (!v13 || *(_QWORD *)(v10 + 8) != a1[7].m128i_i64[0] || *(_QWORD *)(v10 + 16) != a1[7].m128i_i64[1]) )
  {
    v15 = *(__m128i *)a2;
    v26 = *a2;
  }
  v16 = !v14 && v13 && (unsigned int)(*(_DWORD *)(v10 + 160) - 9) <= 1;
  if ( v13 || v11 )
  {
    v9 = 0;
    if ( v13 )
    {
      if ( *(_QWORD *)(v10 + 8) == v15.m128i_i64[0] && *(_QWORD *)(v10 + 16) == _mm_srli_si128(v15, 8).m128i_u64[0] )
      {
        InheritedMonitor = *(_QWORD *)(v10 + 184);
        if ( (*(_DWORD *)(v10 + 180) & 8) != 0 )
        {
          si128 = *(struct tagRECT *)(v10 + 8);
          v24 = si128;
          if ( a2 )
            *a2 = si128;
        }
      }
      else
      {
        *(_DWORD *)(v10 + 180) |= 0x20000000u;
      }
    }
  }
  if ( a3 )
    *a3 = (struct tagRECT)v15;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor((struct tagWND *)a1);
    if ( !InheritedMonitor )
    {
      v17 = MonitorFromWindow(a1, 32LL);
      InheritedMonitor = v17;
      if ( !v17 )
        goto LABEL_42;
      if ( v8 && v17 != v8 && v16 )
      {
        v25 = (struct tagRECT)v15;
        MonitorTransform = GetMonitorTransform(v8, a1);
        if ( MonitorTransform )
        {
          TransformVector(MonitorTransform, (unsigned int)&v25, (unsigned int)&v25.top, 0, 0);
          TransformVector(v20, (unsigned int)&v25.right, (unsigned int)&v25.bottom, v19, v19 & v23);
        }
        TransformRectAroundCursor(&v25, *(_WORD *)(v8 + 152), a2, &v24, *(_WORD *)(InheritedMonitor + 152));
        if ( (unsigned int)IsNewMonitorRectMostOccupied(
                             &v24,
                             (const struct tagRECT *)(InheritedMonitor + 28),
                             (const struct tagRECT *)(v8 + 28)) )
        {
          si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&v24);
        }
        else
        {
          si128 = (struct tagRECT)v15;
          InheritedMonitor = 0LL;
          v24 = (struct tagRECT)v15;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_42:
        if ( a1[21].m128i_i32[2] == 2 )
          v21 = MonitorFromRect(&v26, 2LL);
        else
          v21 = MonitorFromWindow(a1, 34LL);
        InheritedMonitor = v21;
        if ( !v21 )
          InheritedMonitor = MonitorFromWindow(a1, 34LL);
      }
    }
  }
  if ( a3
    && a1[21].m128i_i32[2] == 2
    && (*(_DWORD *)(a1[1].m128i_i64[0] + 568) & 0x2000000) == 0
    && v8
    && InheritedMonitor
    && v8 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( IsRectEmptyInl(&v24) )
    {
      if ( v16 )
      {
        TransformRectAroundCursor(&v26, *(_WORD *)(v8 + 152), a2, a3, *(_WORD *)(InheritedMonitor + 152));
      }
      else if ( v9 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v26,
          *(unsigned __int16 *)(v8 + 152),
          (_DWORD)a2,
          (_DWORD)a3,
          *(_WORD *)(InheritedMonitor + 152),
          a1[7].m128i_i64[0]);
      }
    }
    else
    {
      *a3 = si128;
    }
  }
  return InheritedMonitor;
}
