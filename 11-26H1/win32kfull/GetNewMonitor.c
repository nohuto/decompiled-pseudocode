/*
 * XREFs of GetNewMonitor @ 0x14004B044
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x140032694 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     GetInheritedMonitor @ 0x14011EDF0 (GetInheritedMonitor.c)
 *     TransformRectAroundPoint @ 0x14021C91C (TransformRectAroundPoint.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x14022908C (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 */

__int64 __fastcall GetNewMonitor(struct tagWND *a1, __int32 *a2, _OWORD *a3)
{
  __int64 InheritedMonitor; // rsi
  struct tagRECT si128; // xmm6
  __int64 v8; // r15
  char v9; // r13
  __m128i v10; // xmm7
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagMONITOR *v14; // rax
  struct tagMONITOR *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  LONG bottom; // eax
  LONG top; // ecx
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r8
  unsigned int v23; // eax
  struct tagRECT v24; // [rsp+30h] [rbp-40h] BYREF
  __m128i v25; // [rsp+40h] [rbp-30h] BYREF

  InheritedMonitor = 0LL;
  si128 = 0LL;
  v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v24 = 0LL;
  v9 = HasMaximizedState(a1);
  v10 = *(__m128i *)(*((_QWORD *)a1 + 5) + 88LL);
  v25 = v10;
  if ( a2 )
  {
    v10 = *(__m128i *)a2;
    v25 = *(__m128i *)a2;
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
    if ( (*((_DWORD *)a1 + 96) & 0x10) == 0 && v12 && *(struct tagWND **)(v12 + 16) == a1 )
    {
      LOBYTE(v11) = (*(_DWORD *)(v12 + 200) & 0x800000) != 0;
      if ( a2 )
      {
        v22 = *(_QWORD *)(v12 + 24) - v10.m128i_i64[0];
        if ( !v22 )
          v22 = *(_QWORD *)(v12 + 32) - _mm_srli_si128(v10, 8).m128i_u64[0];
        v23 = *(_DWORD *)(v12 + 200);
        if ( v22 )
        {
          *(_DWORD *)(v12 + 200) = v23 | 0x200000;
        }
        else
        {
          InheritedMonitor = *(_QWORD *)(v12 + 216);
          v11 = v23 >> 3;
          LOBYTE(v11) = (*(_DWORD *)(v12 + 200) & 8) != 0;
        }
      }
      if ( (_BYTE)v11 )
      {
        si128 = *(struct tagRECT *)(v12 + 24);
        v24 = si128;
        if ( a2 )
          *(struct tagRECT *)a2 = si128;
      }
    }
  }
  if ( a3 )
    *a3 = v10;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor(a1);
    if ( !InheritedMonitor )
    {
      v14 = a2
          ? (struct tagMONITOR *)MonitorFromRect(a2, 0LL, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL))
          : _MonitorFromWindowInternal(a1, 0, 1);
      InheritedMonitor = (__int64)v14;
      if ( !v14 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          v15 = (struct tagMONITOR *)MonitorFromRect(v25.m128i_i32, 2LL, 0);
          v10 = v25;
        }
        else
        {
          v15 = _MonitorFromWindowInternal(a1, 2u, 1);
        }
        InheritedMonitor = (__int64)v15;
      }
    }
  }
  if ( a3
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 680LL) & 0x2000000) == 0
    && v8
    && v8 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow(a1, v11) )
  {
    v17 = *(_QWORD *)&si128.left;
    bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)si128, 12));
    top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)si128, 4));
    v20 = _mm_srli_si128((__m128i)si128, 8).m128i_u64[0];
    v21 = v20;
    if ( top < bottom && si128.left < (int)v20 )
    {
LABEL_33:
      if ( (int)v17 < (int)v21 && SHIDWORD(v17) < SHIDWORD(v21) )
        *a3 = si128;
      return InheritedMonitor;
    }
    if ( !v9 )
    {
      TransformRectAroundPoint(
        (unsigned int)&v25,
        *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 60LL),
        (_DWORD)a2,
        (unsigned int)&v24,
        *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 60LL),
        *(_QWORD *)(v16 + 88));
      bottom = v24.bottom;
      top = v24.top;
      v21 = *(_QWORD *)&v24.right;
      v17 = *(_QWORD *)&v24.left;
      si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&v24);
    }
    if ( (int)v17 < (int)v21 )
    {
      if ( top < bottom
        && !(unsigned int)IsNewMonitorRectMostOccupied(
                            &v24,
                            (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                            (const struct tagRECT *)(*(_QWORD *)(v8 + 40) + 28LL)) )
      {
        InheritedMonitor = v8;
        si128 = (struct tagRECT)v10;
        v21 = _mm_srli_si128(v10, 8).m128i_u64[0];
        v17 = v10.m128i_i64[0];
      }
      goto LABEL_33;
    }
  }
  return InheritedMonitor;
}
