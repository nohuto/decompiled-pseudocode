/*
 * XREFs of ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18002F1A0
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001D4B0 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CalculateAPOVolume(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2,
        unsigned __int64 a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v9; // rcx
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

  v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      81LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      this);
    v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( a2 == *((_DWORD *)this + 20) )
  {
    v10 = 0LL;
    if ( a2 )
    {
      if ( a2 >= 8 )
      {
        v11 = *((_QWORD *)this + 13);
        v12 = a2 - 1;
        v13 = (float *)((char *)this + 104);
        v14 = (float *)((char *)this + 88);
        v15 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 22), (__m128)*((unsigned int *)this + 22), 0);
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
          *(float *)(v18 + a3 - 4) = *(float *)(*((_QWORD *)this + 13) + v18 - 4) * *((float *)this + 22);
          --v19;
        }
        while ( v19 );
      }
    }
    v20 = *((_QWORD *)this + 12);
    v21 = *((_BYTE *)this + 92) || *((_BYTE *)this + 336);
    *a4 = v21;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        82LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        this,
        v21);
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
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_qdg(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            83LL,
            &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
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
    if ( (struct _GUID *)v9 != &WPP_GLOBAL_Control )
    {
      if ( (*(_BYTE *)(v9 + 28) & 0x40) != 0 && *(_BYTE *)(v9 + 25) >= 2u )
      {
        WPP_SF_D(*(_QWORD *)(v9 + 16), 75LL, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, 2147942487LL);
        v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( (struct _GUID *)v9 != &WPP_GLOBAL_Control && (*(_BYTE *)(v9 + 28) & 0x40) != 0 && *(_BYTE *)(v9 + 25) >= 2u )
        WPP_SF_D(*(_QWORD *)(v9 + 16), 84LL, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, 2147942487LL);
    }
    return 2147942487LL;
  }
}
