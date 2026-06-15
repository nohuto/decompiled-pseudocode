/*
 * XREFs of ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x1800163A0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180008CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013044 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x180058F50 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionVolume(
        CPerStreamVolumeAudioStream *this,
        float a2,
        unsigned int a3,
        float *const a4,
        __int64 a5,
        bool a6)
{
  unsigned int v7; // edi
  __int64 i; // rcx
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(CAudioStream *__hidden); // rax
  int v13; // eax
  float v15; // xmm6_4
  __int64 v16; // rcx
  __int64 v17; // rsi

  v7 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    *(float *)(*((_QWORD *)this + 62) + 4 * i) = a2;
  v10 = *((_DWORD *)this + 20);
  if ( a3 < v10 )
  {
    v15 = 0.0;
    if ( a3 )
    {
      v16 = a3;
      do
      {
        v15 = fmaxf(v15, *a4++);
        --v16;
      }
      while ( v16 );
    }
    v17 = 0LL;
    if ( v10 )
    {
      do
      {
        *(float *)(*((_QWORD *)this + 62) + 4 * v17) = v15 * *(float *)(*((_QWORD *)this + 62) + 4 * v17);
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            53LL,
            &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
            (unsigned int)v17,
            *(float *)(*((_QWORD *)this + 62) + 4 * v17));
        }
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < *((_DWORD *)this + 20) );
    }
  }
  else
  {
    v11 = 0LL;
    if ( v10 )
    {
      do
      {
        *(float *)(*((_QWORD *)this + 62) + 4 * v11) = a4[v11] * *(float *)(*((_QWORD *)this + 62) + 4 * v11);
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            52LL,
            &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
            (unsigned int)v11,
            *(float *)(*((_QWORD *)this + 62) + 4 * v11));
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *((_DWORD *)this + 20) );
    }
  }
  *((_QWORD *)this + 63) = a5;
  if ( a6 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 128LL);
    if ( v12 == CAudioStream::RecalculateVolume )
      v13 = CAudioStream::RecalculateVolume(this);
    else
      v13 = v12(this);
    v7 = v13;
    if ( v13 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::SetSessionVolume", 0x990u, v13);
  }
  return v7;
}
