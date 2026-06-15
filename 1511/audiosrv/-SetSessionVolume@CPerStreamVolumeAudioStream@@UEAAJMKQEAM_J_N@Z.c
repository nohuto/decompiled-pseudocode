/*
 * XREFs of ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18001CBA0
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180025AA8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001FB90 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionVolume(
        CPerStreamVolumeAudioStream *this,
        float a2,
        unsigned int a3,
        float *const a4,
        __int64 a5,
        bool a6)
{
  unsigned int v7; // esi
  __int64 i; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(CAudioStream *__hidden); // rdi
  int v13; // eax
  float v15; // xmm6_4
  __int64 v16; // rcx
  __int64 v17; // rdi

  v7 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
    *(float *)(*((_QWORD *)this + 40) + 4 * i) = a2;
  v10 = *((_DWORD *)this + 18);
  if ( a3 < v10 )
  {
    v15 = 0.0;
    if ( a3 )
    {
      v16 = a3;
      do
      {
        if ( v15 <= *a4 )
          v15 = *a4;
        ++a4;
        --v16;
      }
      while ( v16 );
    }
    v17 = 0LL;
    if ( v10 )
    {
      do
      {
        *(float *)(*((_QWORD *)this + 40) + 4 * v17) = v15 * *(float *)(*((_QWORD *)this + 40) + 4 * v17);
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            82LL,
            &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
            (unsigned int)v17,
            *(float *)(*((_QWORD *)this + 40) + 4 * v17));
        }
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < *((_DWORD *)this + 18) );
    }
  }
  else
  {
    v11 = 0LL;
    if ( v10 )
    {
      do
      {
        *(float *)(*((_QWORD *)this + 40) + 4 * v11) = a4[v11] * *(float *)(*((_QWORD *)this + 40) + 4 * v11);
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            81LL,
            &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
            (unsigned int)v11,
            *(float *)(*((_QWORD *)this + 40) + 4 * v11));
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *((_DWORD *)this + 18) );
    }
  }
  *((_QWORD *)this + 41) = a5;
  if ( a6 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 128LL);
    if ( v12 == CAudioStream::RecalculateVolume )
      v13 = CAudioStream::RecalculateVolume(this);
    else
      v13 = v12(this);
    v7 = v13;
    if ( v13 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        83LL,
        &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        (unsigned int)v13);
    }
  }
  return v7;
}
