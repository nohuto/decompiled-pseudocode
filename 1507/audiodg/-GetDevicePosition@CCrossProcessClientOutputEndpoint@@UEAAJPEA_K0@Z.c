/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14003B470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x14003E200 (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetDevicePosition(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v6; // esi
  int v7; // r9d
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  int v10; // r11d
  double LowPart; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  PerformanceCount.QuadPart = 0LL;
  if ( a2 )
  {
    if ( a3 )
      *a3 = 0LL;
    _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 41) + 156LL), 0, 0);
    v6 = 0;
    v7 = 3;
    while ( 1 )
    {
      v8 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 41) + 152LL), 0, 0);
      v9 = *(_QWORD *)(*((_QWORD *)this - 41) + 40 * v8 + 24);
      v10 = *(_DWORD *)(*((_QWORD *)this - 41) + 40 * v8 + 60);
      if ( (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 41) + 152LL), 0, 0) )
        break;
      if ( !--v7 )
      {
        v6 = -2005139393;
        *a2 = *((_QWORD *)this - 28);
        goto LABEL_12;
      }
    }
    if ( v10 )
    {
      *a2 = v9;
    }
    else
    {
      v6 = -2005139375;
      *a2 = *((_QWORD *)this - 28);
    }
  }
  else
  {
    v6 = -2147467261;
  }
LABEL_12:
  if ( a3 )
  {
    if ( !*a3 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      LowPart = (double)(int)PerformanceCount.LowPart;
      if ( PerformanceCount.QuadPart < 0 )
        LowPart = LowPart + 1.844674407370955e19;
      v12 = LowPart * 10000000.0;
      v13 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v13 = v13 + 1.844674407370955e19;
      *a3 = (unsigned int)(int)(v12 / v13);
    }
    v14 = *a3;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 0LL;
  if ( a2 )
    v15 = *a2;
  AEWMILOG_POSITION(v14, 0LL, 7u, 0LL, v15, 0LL, v14);
  if ( a2 )
    *((_QWORD *)this - 28) = *a2;
  if ( v6 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xBu,
      (__int64)&WPP_bfec22a2cdc32d9f629e6959d910e384_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
