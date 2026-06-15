/*
 * XREFs of ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002F0A0
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x18000E858 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001D4B0 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dg @ 0x18007118C (WPP_SF_dg.c)
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
  __int64 (__fastcall *v12)(CAudioStream *); // rdi
  int v13; // eax
  float v15; // xmm6_4
  __int64 v16; // rcx
  __int64 v17; // rdi

  v7 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    *(float *)(*((_QWORD *)this + 40) + 4 * i) = a2;
  v10 = *((_DWORD *)this + 20);
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
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_dg(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            86LL,
            &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
            (unsigned int)v17,
            *(float *)(*((_QWORD *)this + 40) + 4 * v17));
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
        *(float *)(*((_QWORD *)this + 40) + 4 * v11) = a4[v11] * *(float *)(*((_QWORD *)this + 40) + 4 * v11);
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_dg(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            85LL,
            &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
            (unsigned int)v11,
            *(float *)(*((_QWORD *)this + 40) + 4 * v11));
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *((_DWORD *)this + 20) );
    }
  }
  *((_QWORD *)this + 41) = a5;
  if ( a6 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 120LL);
    if ( v12 == CAudioStream::RecalculateVolume )
      v13 = CAudioStream::RecalculateVolume(this);
    else
      v13 = v12(this);
    v7 = v13;
    if ( v13 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        87LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        (unsigned int)v13);
    }
  }
  return v7;
}
