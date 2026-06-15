/*
 * XREFs of ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14003B960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXE_K111NNNN@Z @ 0x1400395E4 (-AEWMILOG_GENERIC@@YAXKPEAXE_K111NNNN@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v4; // rsi
  float v5; // xmm8_4
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  int v9; // ebp
  char v10; // cl
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // r8d
  __int64 v15; // r11
  __int64 v16; // r13
  int v17; // r9d
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r12
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm1_8
  __int64 v25; // r9
  void *v26; // rdx
  unsigned __int64 v27; // rcx
  double LowPart; // xmm0_8
  double v30; // xmm0_8
  double v31; // xmm1_8
  signed __int64 v32; // r15
  float v33; // xmm0_4
  __int64 v34; // rdi
  double v35; // xmm1_8
  double v36; // xmm0_8
  unsigned __int64 v37; // rax
  double v38; // xmm1_8
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  __int64 v41; // [rsp+60h] [rbp-88h]
  unsigned __int64 v42; // [rsp+F0h] [rbp+8h]
  LARGE_INTEGER PerformanceCount; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v44; // [rsp+100h] [rbp+18h]
  __int64 v45; // [rsp+108h] [rbp+20h]

  v4 = (__int64 *)a2;
  v5 = 0.0;
  PerformanceCount.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467261;
LABEL_17:
    v18 = 0LL;
    goto LABEL_20;
  }
  if ( a3 )
    *a3 = 0LL;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 40) + 156LL), 0, 0);
  v9 = 0;
  v11 = (_QWORD *)*((_QWORD *)this - 40);
  if ( (v10 & 4) == 0 )
  {
    v12 = v11[18];
LABEL_9:
    *(_QWORD *)a2 = v12;
    goto LABEL_17;
  }
  if ( (v10 & 2) == 0 )
  {
    v12 = v11[2];
    goto LABEL_9;
  }
  v13 = v11[13];
  v14 = 3;
  v41 = v13;
  v15 = *(_QWORD *)(*((_QWORD *)this - 40) + 120LL);
  v45 = v15;
  while ( 1 )
  {
    a2 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 40) + 152LL), 0, 0);
    v44 = *(_QWORD *)(*((_QWORD *)this - 40) + 40 * a2 + 24);
    v16 = *(_QWORD *)(*((_QWORD *)this - 40) + 40 * a2 + 48);
    v5 = *(float *)(*((_QWORD *)this - 40) + 40 * a2 + 56);
    v17 = *(_DWORD *)(*((_QWORD *)this - 40) + 40 * a2 + 60);
    if ( (_DWORD)a2 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 40) + 152LL), 0, 0) )
      break;
    if ( !--v14 )
    {
      v9 = -2005139393;
LABEL_16:
      *v4 = *((_QWORD *)this - 28);
      goto LABEL_17;
    }
  }
  if ( !v17 )
  {
    v9 = -2005139375;
    goto LABEL_16;
  }
  v19 = *((_QWORD *)this - 40);
  v20 = *((unsigned int *)this - 76);
  v42 = *(_QWORD *)(v19 + 144) / v20;
  a2 = *(_QWORD *)(v19 + 16) % v20;
  v21 = *(_QWORD *)(v19 + 16) / v20;
  if ( v44 >= v15 + v13 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    LowPart = (double)(int)PerformanceCount.LowPart;
    if ( PerformanceCount.QuadPart < 0 )
      LowPart = LowPart + 1.844674407370955e19;
    v30 = LowPart * 10000000.0;
    v31 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v31 = v31 + 1.844674407370955e19;
    v32 = (unsigned int)(int)(v30 / v31);
    if ( a3 )
      *a3 = v32;
    if ( v32 < v16 )
      v8 = 0LL;
    else
      v8 = v32 - v16;
    v33 = *((float *)this - 63);
    v34 = v44 + (unsigned int)(int)((double)(int)v8 * v5 / 10000000.0 + 0.5) - v45 - v41;
    if ( v33 != v5 )
    {
      v35 = v33;
      v36 = (double)(int)v34;
      if ( v34 < 0 )
        v36 = v36 + 1.844674407370955e19;
      v37 = 0LL;
      v38 = v35 * v36 / v5 + 0.5;
      if ( v38 >= 9.223372036854776e18 )
      {
        v38 = v38 - 9.223372036854776e18;
        if ( v38 < 9.223372036854776e18 )
          v37 = 0x8000000000000000uLL;
      }
      v34 = v37 + (unsigned int)(int)v38;
    }
    v18 = v42;
    v7 = v42 + v34;
    if ( v7 < v21 )
      v21 = v7;
    v39 = v21 * *((unsigned int *)this - 76);
    *v4 = v39;
    v40 = *((_QWORD *)this - 28);
    if ( v39 < v40 )
    {
      AEWMILOG_GENERIC(
        *((unsigned int *)this - 76),
        (void *)((v40 - v39) % *((unsigned int *)this - 76)),
        8u,
        v39,
        v40,
        (v40 - v39) / *((unsigned int *)this - 76),
        0LL,
        0.0,
        0.0,
        0.0,
        0.0);
      *v4 = *((_QWORD *)this - 28);
    }
  }
  else
  {
    v18 = *(_QWORD *)(v19 + 144) / (unsigned __int64)*((unsigned int *)this - 76);
    *v4 = v18 * v20;
  }
LABEL_20:
  if ( a3 && !*a3 )
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
  v25 = 0LL;
  if ( v4 )
    v25 = *v4;
  AEWMILOG_GENERIC(
    *(_QWORD *)(*((_QWORD *)this - 40) + 16LL),
    (void *)a2,
    6u,
    v25,
    v8,
    v7,
    v18,
    (double)(int)*(_QWORD *)(*((_QWORD *)this - 40) + 16LL),
    (double)(int)*(_QWORD *)(*((_QWORD *)this - 40) + 8LL),
    v5,
    *((float *)this - 63));
  if ( v4 )
  {
    v27 = *((_QWORD *)this - 28);
    if ( *v4 < v27 )
      AEWMILOG_GENERIC(v27, v26, 8u, *v4, v27, *((unsigned int *)this - 76), 0LL, 0.0, 0.0, 0.0, 0.0);
    *((_QWORD *)this - 28) = *v4;
  }
  if ( v9 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xAu,
      (__int64)&WPP_bfec22a2cdc32d9f629e6959d910e384_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
