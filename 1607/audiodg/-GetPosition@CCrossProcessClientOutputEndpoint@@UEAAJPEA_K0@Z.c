/*
 * XREFs of ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14003A890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140038518 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  float v5; // xmm8_4
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  int v9; // ebp
  char v10; // cl
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r12
  int v19; // r9d
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  unsigned __int64 v25; // r8
  double LowPart; // xmm0_8
  double v27; // xmm0_8
  double v28; // xmm1_8
  signed __int64 v29; // rax
  int v30; // eax
  float v31; // xmm0_4
  __int64 v32; // rsi
  double v33; // xmm1_8
  double v34; // xmm0_8
  unsigned __int64 v35; // rax
  double v36; // xmm1_8
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+E0h] [rbp+8h] BYREF
  unsigned __int64 v44; // [rsp+E8h] [rbp+10h]
  __int64 v45; // [rsp+F0h] [rbp+18h]
  __int64 v46; // [rsp+F8h] [rbp+20h]

  v5 = 0.0;
  PerformanceCount.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_18;
  }
  if ( a3 )
    *a3 = 0LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 40) + 156LL), 0, 0);
  v9 = 0;
  v11 = (_QWORD *)*((_QWORD *)this - 40);
  if ( (v10 & 4) == 0 )
  {
    v12 = v11[18];
LABEL_7:
    *a2 = v12;
    goto LABEL_18;
  }
  if ( (v10 & 2) == 0 )
  {
    v12 = v11[2];
    goto LABEL_7;
  }
  v13 = v11[13];
  v14 = 3;
  v15 = *((_QWORD *)this - 40);
  v46 = v13;
  v16 = *(_QWORD *)(v15 + 120);
  v45 = v16;
  while ( 1 )
  {
    v17 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 40) + 152LL), 0, 0);
    v44 = *(_QWORD *)(*((_QWORD *)this - 40) + 40 * v17 + 24);
    v18 = *(_QWORD *)(*((_QWORD *)this - 40) + 40 * v17 + 48);
    v5 = *(float *)(*((_QWORD *)this - 40) + 40 * v17 + 56);
    v19 = *(_DWORD *)(*((_QWORD *)this - 40) + 40 * v17 + 60);
    if ( (_DWORD)v17 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 40) + 152LL), 0, 0) )
      break;
    if ( !--v14 )
    {
      v9 = -2005139393;
      *a2 = *((_QWORD *)this - 28);
      goto LABEL_18;
    }
  }
  if ( v19 )
  {
    v20 = *((_QWORD *)this - 40);
    v8 = *(_QWORD *)(v20 + 144) / (unsigned __int64)*((unsigned int *)this - 76);
    v21 = *(_QWORD *)(v20 + 16) / (unsigned __int64)*((unsigned int *)this - 76);
    if ( v44 >= v16 + v13 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      LowPart = (double)(int)PerformanceCount.LowPart;
      if ( PerformanceCount.QuadPart < 0 )
        LowPart = LowPart + 1.844674407370955e19;
      v27 = LowPart * 10000000.0;
      v28 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v28 = v28 + 1.844674407370955e19;
      v29 = (unsigned int)(int)(v27 / v28);
      if ( a3 )
        *a3 = v29;
      if ( v29 < v18 )
        v30 = 0;
      else
        v30 = v29 - v18;
      v31 = *((float *)this - 63);
      v32 = v44 + (unsigned int)(int)((double)v30 * v5 / 10000000.0 + 0.5) - v45 - v46;
      if ( v31 != v5 )
      {
        v33 = v31;
        v34 = (double)(int)v32;
        if ( v32 < 0 )
          v34 = v34 + 1.844674407370955e19;
        v35 = 0LL;
        v36 = v33 * v34 / v5 + 0.5;
        if ( v36 >= 9.223372036854776e18 )
        {
          v36 = v36 - 9.223372036854776e18;
          if ( v36 < 9.223372036854776e18 )
            v35 = 0x8000000000000000uLL;
        }
        v32 = v35 + (unsigned int)(int)v36;
      }
      v7 = v8 + v32;
      if ( v7 < v21 )
        v21 = v7;
      v37 = v21 * *((unsigned int *)this - 76);
      *a2 = v37;
      v38 = *((_QWORD *)this - 28);
      if ( v37 < v38 )
      {
        AEWMILOG_GENERIC(
          *((unsigned int *)this - 76),
          (char *)this - 384,
          v37,
          8u,
          v37,
          v38,
          (v38 - v37) / *((unsigned int *)this - 76),
          0LL,
          0.0,
          0.0,
          0.0,
          0.0);
        *a2 = *((_QWORD *)this - 28);
      }
    }
    else
    {
      *a2 = v8 * *((unsigned int *)this - 76);
    }
  }
  else
  {
    v9 = -2005139375;
    *a2 = *((_QWORD *)this - 28);
  }
LABEL_18:
  if ( a3 )
  {
    if ( !*a3 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v22 = (double)(int)PerformanceCount.LowPart;
      if ( PerformanceCount.QuadPart < 0 )
        v22 = v22 + 1.844674407370955e19;
      v23 = v22 * 10000000.0;
      v24 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v24 = v24 + 1.844674407370955e19;
      *a3 = (unsigned int)(int)(v23 / v24);
    }
    v25 = *a3;
  }
  else
  {
    v25 = 0LL;
  }
  v39 = 0LL;
  if ( a2 )
    v39 = *a2;
  AEWMILOG_GENERIC(
    *(_QWORD *)(*((_QWORD *)this - 40) + 16LL),
    (char *)this - 384,
    v25,
    6u,
    v39,
    v25,
    v7,
    v8,
    (double)(int)*(_QWORD *)(*((_QWORD *)this - 40) + 16LL),
    (double)(int)*(_QWORD *)(*((_QWORD *)this - 40) + 8LL),
    v5,
    *((float *)this - 63));
  if ( a2 )
  {
    v41 = *((_QWORD *)this - 28);
    if ( *a2 < v41 )
      AEWMILOG_GENERIC(
        v41,
        (char *)this - 384,
        v40,
        8u,
        *a2,
        v41,
        *((unsigned int *)this - 76),
        0LL,
        0.0,
        0.0,
        0.0,
        0.0);
    *((_QWORD *)this - 28) = *a2;
  }
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_18bcff24aefe30010f0feed95000f45d_Traceguids, v9);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition", 304, v9);
  }
  return (unsigned int)v9;
}
