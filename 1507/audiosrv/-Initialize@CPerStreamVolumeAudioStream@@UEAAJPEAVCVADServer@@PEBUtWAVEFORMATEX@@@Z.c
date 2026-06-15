/*
 * XREFs of ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x18002F370
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x18001E010 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
  unsigned int nChannels; // esi
  __int64 (__fastcall *v10)(CAudioStream *, int); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx

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
    nChannels = a3->nChannels;
    v10 = *(__int64 (__fastcall **)(CAudioStream *, int))(*(_QWORD *)this + 144LL);
    if ( v10 == CAudioStream::InitializeVolumeCoefficientCount )
      v11 = CAudioStream::InitializeVolumeCoefficientCount(this, nChannels);
    else
      v11 = v10(this, nChannels);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 2u )
      {
LABEL_10:
        if ( (v12 & 0x80000000) == 0 )
          return v12;
        goto LABEL_13;
      }
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        15LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        (unsigned int)v11);
    }
    v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_10;
  }
  v12 = -2147024882;
  v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_13:
  if ( (struct _GUID *)v13 != &WPP_GLOBAL_Control && (*(_BYTE *)(v13 + 28) & 0x40) != 0 && *(_BYTE *)(v13 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v13 + 16), 80LL, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, v12);
  return v12;
}
