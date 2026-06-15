/*
 * XREFs of ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x1800164F0
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     WPP_SF_qdg @ 0x180058FD8 (WPP_SF_qdg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CalculateAPOVolume(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2,
        unsigned __int64 a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  float *v12; // r8
  float *v13; // r9
  __m128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  float v19; // xmm0_4
  __int64 v20; // rdi
  bool v21; // al
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r14
  float v25; // xmm0_4

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, this);
  }
  if ( a2 == *((_DWORD *)this + 20) )
  {
    v9 = 0LL;
    if ( a2 )
    {
      if ( a2 >= 8 )
      {
        v10 = *((_QWORD *)this + 13);
        v11 = a2 - 1;
        v12 = (float *)((char *)this + 88);
        v13 = (float *)(a3 + 4 * v11);
        v14 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 22), (__m128)*((unsigned int *)this + 22), 0);
        if ( (a3 > v10 + 4 * v11 || (unsigned __int64)v13 < v10) && (a3 > (unsigned __int64)v12 || v13 < v12) )
        {
          do
          {
            v15 = (unsigned int)(v9 + 4);
            *(__m128 *)(a3 + 4 * v9) = _mm_mul_ps(*(__m128 *)(v10 + 4 * v9), v14);
            v9 = (unsigned int)(v9 + 8);
            *(__m128 *)(a3 + 4 * v15) = _mm_mul_ps(*(__m128 *)(v10 + 4 * v15), v14);
          }
          while ( (unsigned int)v9 < a2 - (a2 & 7) );
        }
      }
      if ( (unsigned int)v9 < a2 )
      {
        v16 = *((_QWORD *)this + 13);
        v17 = 4 * v9;
        v18 = a2 - (unsigned int)v9;
        do
        {
          v19 = *(float *)(v17 + v16);
          v17 += 4LL;
          *(float *)(v17 + a3 - 4) = v19 * *((float *)this + 22);
          --v18;
        }
        while ( v18 );
      }
    }
    v20 = *((_QWORD *)this + 12);
    v21 = *((_BYTE *)this + 92) || *((_BYTE *)this + 512);
    *a4 = v21;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, this, v21);
    }
    v22 = *((_QWORD *)this + 63);
    if ( v20 >= v22 )
      v22 = v20;
    v23 = 0;
    *a5 = v22;
    if ( a2 )
    {
      v24 = -(__int64)a3;
      do
      {
        v25 = *(float *)(v24 + a3 + *((_QWORD *)this + 62)) * *(float *)a3;
        *(float *)a3 = v25;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qdg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            51LL,
            &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
            this,
            v23,
            v25);
        }
        ++v23;
        a3 += 4LL;
      }
      while ( v23 < a2 );
    }
    return 0LL;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::CalculateAPOVolume", 0x7BDu, -2147024809);
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::CalculateAPOVolume", 0x945u, -2147024809);
    return 2147942487LL;
  }
}
