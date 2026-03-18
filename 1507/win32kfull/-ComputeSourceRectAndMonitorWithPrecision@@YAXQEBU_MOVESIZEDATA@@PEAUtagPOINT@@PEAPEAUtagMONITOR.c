/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C0204D1C
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02054EC (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall ComputeSourceRectAndMonitorWithPrecision(
        const struct _MOVESIZEDATA *const a1,
        struct tagPOINT *a2,
        struct tagMONITOR **a3,
        struct tagRECT *a4)
{
  int v5; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagRECT v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  __m128i *v17; // rax
  __int64 v18; // rdx
  int v19; // r9d
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // r9d
  struct tagRECT *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  __m128i v26; // [rsp+28h] [rbp-18h] BYREF

  v25 = 0LL;
  v5 = *((_DWORD *)a1 + 45);
  if ( (v5 & 0x38000) == 0x30000 )
  {
    v21 = MonitorFromPoint((__int64)*a2, 2LL, (__int64)a3);
    v22 = *(_QWORD *)a1;
    v10 = v21;
    v25 = v21;
    v23 = *(_DWORD *)(v22 + 344);
    if ( v23 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v23 != 1
        || (v24 = (struct tagRECT *)(v21 + 108),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v24 = (struct tagRECT *)(v10 + 76);
      }
    }
    else
    {
      v24 = (struct tagRECT *)(v21 + 92);
    }
    v11 = *v24;
  }
  else if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u || *(_DWORD *)(*(_QWORD *)a1 + 344LL) == 2 )
  {
    if ( (v5 & 0x20) != 0 )
      v12 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)a1 + 352LL));
    else
      v12 = *((_QWORD *)a1 + 23);
    v25 = v12;
    LogicalToPhysicalDPIPoint(a2, a2, 0LL, &v25);
    v14 = MonitorFromPoint((__int64)*a2, 34LL, v13);
    v25 = v14;
    if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
    {
      v18 = *(_QWORD *)a1;
      v19 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
      if ( v19 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v19 != 1
          || (v17 = (__m128i *)(v14 + 108),
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
        {
          v17 = (__m128i *)(v14 + 76);
        }
      }
      else
      {
        v17 = (__m128i *)(v14 + 92);
      }
    }
    else
    {
      v15 = *(_QWORD *)a1;
      v16 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
      if ( v16 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v16 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
          v17 = (__m128i *)(v14 + 60);
        else
          v17 = (__m128i *)(v14 + 28);
      }
      else
      {
        v17 = (__m128i *)(v14 + 44);
      }
    }
    v26 = *v17;
    v20 = v26;
    --v26.m128i_i32[3];
    v26.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8)) - 1;
    LogicalToPhysicalDPIRect(&v26, &v26, 0LL, &v25);
    ++v26.m128i_i32[2];
    ++v26.m128i_i32[3];
    v11 = (struct tagRECT)v26;
    v10 = v25;
  }
  else
  {
    v9 = *(_QWORD *)((char *)a1 + 284);
    *a2 = (struct tagPOINT)v9;
    v10 = MonitorFromPoint(v9, 34LL, (__int64)a3);
    v11 = *(struct tagRECT *)(v10 + 28);
  }
  *a3 = (struct tagMONITOR *)v10;
  *a4 = v11;
}
