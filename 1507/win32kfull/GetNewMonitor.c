/*
 * XREFs of GetNewMonitor @ 0x1C005C238
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C000A564 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0058BB0 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetInheritedMonitor @ 0x1C005C590 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C005C9DC (HasMaximizedState.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E4184 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z @ 0x1C01E4270 (-TransformRectAroundCursor@@YAXPEBUtagRECT@@GPEAU1@1G@Z.c)
 *     GetMonitorTransform @ 0x1C01E531C (GetMonitorTransform.c)
 *     TransformRectAroundPoint @ 0x1C01E61E8 (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C022D550 (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(__m128i *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 InheritedMonitor; // rbx
  struct tagRECT si128; // xmm7
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // r8
  int v11; // r9d
  int v12; // ecx
  int v13; // edx
  __m128i v14; // xmm6
  BOOL v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r8
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
  if ( !v10 || *(__m128i **)v10 != a1 )
  {
    v12 = 0;
LABEL_7:
    v13 = 0;
    goto LABEL_8;
  }
  v12 = 1;
  if ( (*(_DWORD *)(v10 + 180) & 8) == 0 || !v11 )
    goto LABEL_7;
  v13 = 1;
LABEL_8:
  v14 = a1[7];
  v26 = (struct tagRECT)v14;
  if ( a2 && (!v12 || *(_QWORD *)(v10 + 8) != a1[7].m128i_i64[0] || *(_QWORD *)(v10 + 16) != a1[7].m128i_i64[1]) )
  {
    v14 = *(__m128i *)a2;
    v26 = *a2;
  }
  v15 = !v13 && v12 && (unsigned int)(*(_DWORD *)(v10 + 160) - 9) <= 1;
  if ( v12 || v11 )
  {
    v9 = 0;
    if ( v12 )
    {
      if ( *(_QWORD *)(v10 + 8) == v14.m128i_i64[0] && *(_QWORD *)(v10 + 16) == _mm_srli_si128(v14, 8).m128i_u64[0] )
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
    *a3 = (struct tagRECT)v14;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor((struct tagWND *)a1);
    if ( !InheritedMonitor )
    {
      v16 = MonitorFromWindow(a1, 32LL);
      InheritedMonitor = v16;
      if ( !v16 )
        goto LABEL_41;
      if ( v8 && v16 != v8 && v15 )
      {
        v25 = (struct tagRECT)v14;
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
          si128 = (struct tagRECT)v14;
          InheritedMonitor = 0LL;
          v24 = (struct tagRECT)v14;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_41:
        if ( a1[21].m128i_i32[2] == 2 )
          v21 = MonitorFromRect(&v26, 2LL, v17);
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
    && (*(_DWORD *)(a1[1].m128i_i64[0] + 576) & 0x2000000) == 0
    && v8
    && InheritedMonitor
    && v8 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow(a1) )
  {
    if ( (unsigned int)IsRectEmptyInl(&v24) )
    {
      if ( v15 )
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
