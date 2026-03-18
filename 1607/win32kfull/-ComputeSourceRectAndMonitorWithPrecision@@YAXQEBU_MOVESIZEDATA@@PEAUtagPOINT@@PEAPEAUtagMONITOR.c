/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01FC3B0
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FCBA0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall ComputeSourceRectAndMonitorWithPrecision(
        const struct _MOVESIZEDATA *const a1,
        struct tagPOINT *a2,
        struct tagMONITOR **a3,
        struct tagRECT *a4)
{
  int v5; // edx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagRECT v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // rax
  __m128i *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  struct tagRECT *v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // [rsp+20h] [rbp-20h] BYREF
  __m128i v31; // [rsp+28h] [rbp-18h] BYREF

  v30 = 0LL;
  v5 = *((_DWORD *)a1 + 45);
  if ( (v5 & 0x38000) == 0x30000 )
  {
    v24 = MonitorFromPoint((unsigned __int64)*a2, 2u);
    v25 = *(_QWORD *)a1;
    v10 = v24;
    v30 = v24;
    if ( (*(_DWORD *)(v25 + 352) & 0xF) == 0
      && (v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v26 + 8) + 244LL) & 1) != 0 )
    {
      v27 = (struct tagRECT *)(v10 + 92);
    }
    else if ( (*(_DWORD *)(v25 + 352) & 0xF) != 1
           || (v28 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 408LL)) == 0
           || (v29 = *(_DWORD *)(*(_QWORD *)(v28 + 8) + 244LL), v27 = (struct tagRECT *)(v10 + 108), (v29 & 1) == 0) )
    {
      v27 = (struct tagRECT *)(v10 + 76);
    }
    v11 = *v27;
  }
  else if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u || (*(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF) == 2 )
  {
    if ( (v5 & 0x20) != 0 )
      v12 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)a1 + 344LL));
    else
      v12 = *((_QWORD *)a1 + 23);
    v30 = v12;
    LogicalToPhysicalDPIPoint(a2, a2, 0LL, &v30);
    v13 = MonitorFromPoint((unsigned __int64)*a2, 0x22u);
    v30 = v13;
    v14 = *(_QWORD *)a1;
    if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
    {
      v19 = *(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF;
      if ( !v19
        && (v20 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v20 + 8) + 244LL) & 1) != 0 )
      {
        v17 = (__m128i *)(v13 + 92);
      }
      else if ( v19 != 1
             || (v21 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) == 0
             || (v22 = *(_DWORD *)(*(_QWORD *)(v21 + 8) + 244LL), v17 = (__m128i *)(v13 + 108), (v22 & 1) == 0) )
      {
        v17 = (__m128i *)(v13 + 76);
      }
    }
    else
    {
      v15 = *(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF;
      if ( !v15
        && (v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v16 + 8) + 244LL) & 1) != 0 )
      {
        v17 = (__m128i *)(v13 + 44);
      }
      else if ( v15 == 1
             && (v18 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v18 + 8) + 244LL) & 1) != 0 )
      {
        v17 = (__m128i *)(v13 + 60);
      }
      else
      {
        v17 = (__m128i *)(v13 + 28);
      }
    }
    v31 = *v17;
    v23 = v31;
    --v31.m128i_i32[3];
    v31.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8)) - 1;
    LogicalToPhysicalDPIRect(&v31, &v31, 0LL, &v30);
    ++v31.m128i_i32[2];
    ++v31.m128i_i32[3];
    v11 = (struct tagRECT)v31;
    v10 = v30;
  }
  else
  {
    v9 = *(_QWORD *)((char *)a1 + 284);
    *a2 = (struct tagPOINT)v9;
    v10 = MonitorFromPoint(v9, 0x22u);
    v11 = *(struct tagRECT *)(v10 + 28);
  }
  *a3 = (struct tagMONITOR *)v10;
  *a4 = v11;
}
