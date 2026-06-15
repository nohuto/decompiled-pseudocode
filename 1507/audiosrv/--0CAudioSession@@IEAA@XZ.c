/*
 * XREFs of ??0CAudioSession@@IEAA@XZ @ 0x180010090
 * Callers:
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x1800137F0 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x18007EBE0 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BC48 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x1800178C8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??0?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAA@IMMMI@Z @ 0x18003AFEC (--0-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

CAudioSession *__fastcall CAudioSession::CAudioSession(CAudioSession *this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d

  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 48));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 128));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_WORD *)this + 112) = 0;
  *((_BYTE *)this + 226) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 59) = 180000;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 240, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 248, &ATL::g_strmgr);
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 272));
  *(_QWORD *)((char *)this + 316) = 0LL;
  *((_DWORD *)this + 81) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 344));
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>(
    (_DWORD)this + 384,
    v2,
    v3,
    v4,
    LODWORD(FLOAT_2_25));
  *((_DWORD *)this + 114) = 0;
  *((_BYTE *)this + 460) = 0;
  *((_QWORD *)this + 58) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 472));
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 142) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 576));
  *((_QWORD *)this + 77) = 0LL;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSession *)((char *)this + 632));
  *((_QWORD *)this + 89) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 720));
  *((_QWORD *)this + 95) = 1065353216LL;
  *((_DWORD *)this + 193) = 0;
  *((_QWORD *)this + 97) = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      68LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this);
  }
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 82) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)this + 41);
  GetSystemTimeAsFileTime((LPFILETIME)this + 42);
  *((_DWORD *)this + 78) = GetTickCount();
  return this;
}
