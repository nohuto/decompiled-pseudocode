/*
 * XREFs of ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18001CD00
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001FB90 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CalculateAPOVolume(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2,
        unsigned __int64 a3,
        bool *a4,
        __int64 *a5)
{
  TraceLoggingHProvider v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r11
  __int64 v12; // rax
  float *v13; // r10
  float *v14; // r9
  __m128 v15; // xmm1
  float *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  bool v21; // al
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r14
  float v25; // xmm0_4

  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 77LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, this);
    v9 = WPP_GLOBAL_Control;
  }
  if ( a2 == *((_DWORD *)this + 18) )
  {
    v10 = 0LL;
    if ( a2 )
    {
      if ( a2 >= 8 )
      {
        v11 = *((_QWORD *)this + 12);
        v12 = a2 - 1;
        v13 = (float *)((char *)this + 96);
        v14 = (float *)((char *)this + 80);
        v15 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 20), (__m128)*((unsigned int *)this + 20), 0);
        v16 = (float *)(a3 + 4 * v12);
        if ( (a3 > v11 + 4 * v12 || (unsigned __int64)v16 < v11)
          && (a3 > (unsigned __int64)v14 || v16 < v14)
          && (a3 > (unsigned __int64)v13 || v16 < v13) )
        {
          do
          {
            v17 = (unsigned int)(v10 + 4);
            *(__m128 *)(a3 + 4 * v10) = _mm_mul_ps(*(__m128 *)(v11 + 4 * v10), v15);
            v10 = (unsigned int)(v10 + 8);
            *(__m128 *)(a3 + 4 * v17) = _mm_mul_ps(*(__m128 *)(v11 + 4 * v17), v15);
          }
          while ( (unsigned int)v10 < a2 - (a2 & 7) );
        }
      }
      if ( (unsigned int)v10 < a2 )
      {
        v18 = 4 * v10;
        v19 = a2 - (unsigned int)v10;
        do
        {
          v18 += 4LL;
          *(float *)(v18 + a3 - 4) = *(float *)(*((_QWORD *)this + 12) + v18 - 4) * *((float *)this + 20);
          --v19;
        }
        while ( v19 );
      }
    }
    v20 = *((_QWORD *)this + 11);
    v21 = *((_BYTE *)this + 84) || *((_BYTE *)this + 336);
    *a4 = v21;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 78LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, this, v21);
    }
    v22 = *((_QWORD *)this + 41);
    if ( v20 >= v22 )
      v22 = v20;
    v23 = 0;
    *a5 = v22;
    if ( a2 )
    {
      v24 = -(__int64)a3;
      do
      {
        v25 = *(float *)(v24 + a3 + *((_QWORD *)this + 40)) * *(float *)a3;
        *(float *)a3 = v25;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qdg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            79LL,
            &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
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
    if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)v9 + 2), 71LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, 2147942487LL);
        v9 = WPP_GLOBAL_Control;
      }
      if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v9 + 28) & 0x40) != 0
        && *((_BYTE *)v9 + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)v9 + 2), 80LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, 2147942487LL);
      }
    }
    return 2147942487LL;
  }
}
