/*
 * XREFs of GetNewMonitor @ 0x1C0070AA8
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0053B90 (NtUserUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetInheritedMonitor @ 0x1C0070E64 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C00712A4 (HasMaximizedState.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01DAEF8 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01DAFE4 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetMonitorTransform @ 0x1C01DC094 (GetMonitorTransform.c)
 *     TransformRectAroundPoint @ 0x1C01DCE14 (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(__m128i *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 InheritedMonitor; // rbx
  struct tagRECT si128; // xmm7
  __int64 v8; // r14
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r9d
  BOOL v12; // ecx
  int v13; // edx
  BOOL v14; // r8d
  __m128i v15; // xmm6
  BOOL v16; // r13d
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  struct tagKE *v19; // rcx
  unsigned int v20; // r8d
  __int64 MonitorTransform; // rax
  int v22; // r9d
  int v23; // r11d
  __int64 v24; // rax
  int v26; // [rsp+28h] [rbp-59h]
  BOOL v27; // [rsp+38h] [rbp-49h]
  struct tagRECT v28; // [rsp+48h] [rbp-39h] BYREF
  struct tagRECT v29; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp-19h] BYREF

  InheritedMonitor = 0LL;
  si128 = 0LL;
  v8 = ValidateHmonitorNoRip(a1[21].m128i_i64[1]);
  v28 = 0LL;
  v9 = *(_QWORD *)(a1[1].m128i_i64[0] + 592);
  v10 = HasMaximizedState(a1);
  if ( !v9 || *(__m128i **)v9 != a1 )
  {
    v11 = 0;
    v12 = 0;
    goto LABEL_6;
  }
  v11 = 1;
  v12 = *(_DWORD *)(v9 + 180) >> 31 == 0;
  if ( *(int *)(v9 + 180) >= 0 )
  {
LABEL_6:
    v13 = 0;
    goto LABEL_7;
  }
  v13 = 1;
LABEL_7:
  v14 = v12 && (*(_DWORD *)(v9 + 180) & 8) != 0 && v10;
  v15 = a1[7];
  v30 = (struct tagRECT)v15;
  if ( a2 && (!v12 || *(_QWORD *)(v9 + 8) != a1[7].m128i_i64[0] || *(_QWORD *)(v9 + 16) != a1[7].m128i_i64[1]) )
  {
    v15 = *(__m128i *)a2;
    v30 = *a2;
  }
  v16 = !v14 && v12 && (unsigned int)(*(_DWORD *)(v9 + 160) - 9) <= 1;
  v27 = !v12 && !v10;
  if ( v11 && (v12 || a2) )
  {
    if ( *(_QWORD *)(v9 + 8) == v15.m128i_i64[0] && *(_QWORD *)(v9 + 16) == _mm_srli_si128(v15, 8).m128i_u64[0] )
    {
      InheritedMonitor = *(_QWORD *)(v9 + 184);
      v13 = (*(_DWORD *)(v9 + 180) >> 3) & 1;
    }
    else
    {
      *(_DWORD *)(v9 + 180) |= 0x20000000u;
    }
  }
  if ( v13 )
  {
    si128 = *(struct tagRECT *)(v9 + 8);
    v28 = si128;
    if ( a2 )
      *a2 = si128;
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
        goto LABEL_51;
      if ( v8 && v17 != v8 && v16 && (unsigned int)NlsNullProc(v19, v18, v20) )
      {
        v29 = (struct tagRECT)v15;
        MonitorTransform = GetMonitorTransform(v8, a1);
        if ( MonitorTransform )
        {
          TransformVector(MonitorTransform, (unsigned int)&v29, (unsigned int)&v29.top, 0, 0);
          TransformVector(v23, (unsigned int)&v29.right, (unsigned int)&v29.bottom, v22, v22 & v26);
        }
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v9,
          &v29,
          *(_WORD *)(v8 + 154),
          a2,
          &v28,
          *(_WORD *)(InheritedMonitor + 154));
        if ( (unsigned int)IsNewMonitorRectMostOccupied(
                             &v28,
                             (const struct tagRECT *)(InheritedMonitor + 28),
                             (const struct tagRECT *)(v8 + 28)) )
        {
          si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&v28);
        }
        else
        {
          si128 = (struct tagRECT)v15;
          InheritedMonitor = 0LL;
          v28 = (struct tagRECT)v15;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_51:
        if ( (a1[22].m128i_i32[0] & 0xF) == 2 )
          v24 = MonitorFromRect(&v30, 2LL);
        else
          v24 = MonitorFromWindow(a1, 34LL);
        InheritedMonitor = v24;
        if ( !v24 )
          InheritedMonitor = MonitorFromWindow(a1, 34LL);
      }
    }
  }
  if ( a3
    && (a1[22].m128i_i32[0] & 0xF) == 2
    && (*(_DWORD *)(a1[1].m128i_i64[0] + 568) & 0x2000000) == 0
    && v8
    && InheritedMonitor
    && v8 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow(a1) )
  {
    if ( IsRectEmptyInl(&v28) )
    {
      if ( v16 )
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v9,
          &v30,
          *(_WORD *)(v8 + 154),
          a2,
          a3,
          *(_WORD *)(InheritedMonitor + 154));
      }
      else if ( v27 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v30,
          *(unsigned __int16 *)(v8 + 154),
          (_DWORD)a2,
          (_DWORD)a3,
          *(_WORD *)(InheritedMonitor + 154),
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
