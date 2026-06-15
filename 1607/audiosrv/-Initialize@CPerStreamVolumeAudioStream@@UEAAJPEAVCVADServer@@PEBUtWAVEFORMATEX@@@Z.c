/*
 * XREFs of ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x1800166B0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x180019B50 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
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
  __int64 nChannels; // rdx
  __int64 (__fastcall *v11)(CAudioStream *__hidden, unsigned int); // rax
  int v12; // eax
  unsigned int v13; // ebx
  signed int LastError; // eax

  v5 = 4LL * a3->nChannels;
  if ( !is_mul_ok(a3->nChannels, 4uLL) )
    v5 = -1LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, v5);
  *((_QWORD *)this + 62) = v7;
  if ( !v7 )
  {
    v13 = -2147024882;
    goto LABEL_17;
  }
  for ( i = 0LL; i < a3->nChannels; *(_DWORD *)(*((_QWORD *)this + 62) + 4 * i++) = 1065353216 )
    ;
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 58) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v13 = LastError;
    if ( LastError > 0 )
      v13 = (unsigned __int16)LastError | 0x80070000;
LABEL_16:
    if ( (v13 & 0x80000000) == 0 )
      return v13;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::Initialize", 0x8D6u, v13);
    return v13;
  }
  nChannels = a3->nChannels;
  v11 = *(__int64 (__fastcall **)(CAudioStream *__hidden, unsigned int))(*(_QWORD *)this + 152LL);
  if ( v11 == CAudioStream::InitializeVolumeCoefficientCount )
    v12 = CAudioStream::InitializeVolumeCoefficientCount(this, nChannels);
  else
    v12 = v11(this, nChannels);
  v13 = v12;
  if ( v12 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::Initialize", 0x13Au, v12);
    goto LABEL_16;
  }
  return v13;
}
