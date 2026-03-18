/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C02050D0
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02058A4 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  __int64 v14; // r9
  int v15; // r10d
  __m128i *v16; // rax
  __int64 v17; // rdx
  int v18; // r9d
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // r9d
  struct tagRECT *v23; // rax
  __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  __m128i v25; // [rsp+28h] [rbp-18h] BYREF

  v24 = 0LL;
  v5 = *((_DWORD *)a1 + 45);
  if ( (v5 & 0x38000) == 0x30000 )
  {
    v20 = MonitorFromPoint((unsigned __int64)*a2, 2u);
    v21 = *(_QWORD *)a1;
    v10 = v20;
    v24 = v20;
    v22 = *(_DWORD *)(v21 + 344);
    if ( v22 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v22 != 1
        || (v23 = (struct tagRECT *)(v20 + 108),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
      {
        v23 = (struct tagRECT *)(v10 + 76);
      }
    }
    else
    {
      v23 = (struct tagRECT *)(v20 + 92);
    }
    v11 = *v23;
  }
  else if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u || *(_DWORD *)(*(_QWORD *)a1 + 344LL) == 2 )
  {
    if ( (v5 & 0x20) != 0 )
      v12 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)a1 + 352LL));
    else
      v12 = *((_QWORD *)a1 + 23);
    v24 = v12;
    LogicalToPhysicalDPIPoint(a2, a2, 0LL, &v24);
    v13 = MonitorFromPoint((unsigned __int64)*a2, 0x22u);
    v24 = v13;
    if ( *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
    {
      v17 = *(_QWORD *)a1;
      v18 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
      if ( v18 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
      {
        if ( v18 != 1
          || (v16 = (__m128i *)(v13 + 108),
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
        {
          v16 = (__m128i *)(v13 + 76);
        }
      }
      else
      {
        v16 = (__m128i *)(v13 + 92);
      }
    }
    else
    {
      v14 = *(_QWORD *)a1;
      v15 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
      if ( v15 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
      {
        if ( v15 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
          v16 = (__m128i *)(v13 + 60);
        else
          v16 = (__m128i *)(v13 + 28);
      }
      else
      {
        v16 = (__m128i *)(v13 + 44);
      }
    }
    v25 = *v16;
    v19 = v25;
    --v25.m128i_i32[3];
    v25.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v19, 8)) - 1;
    LogicalToPhysicalDPIRect(&v25, &v25, 0LL, &v24);
    ++v25.m128i_i32[2];
    ++v25.m128i_i32[3];
    v11 = (struct tagRECT)v25;
    v10 = v24;
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
