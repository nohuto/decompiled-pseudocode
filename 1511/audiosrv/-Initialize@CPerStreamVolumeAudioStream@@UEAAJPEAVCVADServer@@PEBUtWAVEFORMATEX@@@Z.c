/*
 * XREFs of ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x18001CED0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x180020730 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::Initialize(
        CPerStreamVolumeAudioStream *this,
        struct CVADServer *a2,
        const struct tWAVEFORMATEX *a3)
{
  SIZE_T v5; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v7; // rax
  unsigned __int64 i; // rcx
  HANDLE EventW; // rax
  unsigned int nChannels; // esi
  __int64 (__fastcall *v11)(CAudioStream *__hidden, unsigned int); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  TraceLoggingHProvider v14; // rcx
  signed int LastError; // eax

  v5 = 4LL * a3->nChannels;
  if ( !is_mul_ok(a3->nChannels, 4uLL) )
    v5 = -1LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, v5);
  *((_QWORD *)this + 40) = v7;
  if ( v7 )
  {
    for ( i = 0LL; i < a3->nChannels; *(_DWORD *)(*((_QWORD *)this + 40) + 4 * i++) = 1065353216 )
      ;
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    *((_QWORD *)this + 36) = EventW;
    if ( EventW )
    {
      nChannels = a3->nChannels;
      v11 = *(__int64 (__fastcall **)(CAudioStream *__hidden, unsigned int))(*(_QWORD *)this + 152LL);
      if ( v11 == CAudioStream::InitializeVolumeCoefficientCount )
        v12 = CAudioStream::InitializeVolumeCoefficientCount(this, nChannels);
      else
        v12 = v11(this, nChannels);
      v13 = v12;
      if ( v12 >= 0 )
        goto LABEL_10;
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          (unsigned int)v12);
LABEL_10:
        v14 = WPP_GLOBAL_Control;
      }
    }
    else
    {
      LastError = GetLastError();
      v14 = WPP_GLOBAL_Control;
      v13 = LastError;
      if ( LastError > 0 )
        v13 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( (v13 & 0x80000000) == 0 )
      return v13;
    goto LABEL_14;
  }
  v13 = -2147024882;
  v14 = WPP_GLOBAL_Control;
LABEL_14:
  if ( v14 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v14 + 28) & 0x40) != 0
    && *((_BYTE *)v14 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v14 + 2), 76LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v13);
  }
  return v13;
}
