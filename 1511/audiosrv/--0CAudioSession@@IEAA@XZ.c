/*
 * XREFs of ??0CAudioSession@@IEAA@XZ @ 0x180027C70
 * Callers:
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x1800357E0 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x180079E00 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180018850 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAA@IMMMI@Z @ 0x18003B3C4 (--0-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
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
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 5);
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 272));
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_WORD *)this + 184) = 0;
  *((_BYTE *)this + 370) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 95) = 180000;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 48,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 49,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 416));
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 496));
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>(
    (_DWORD)this + 536,
    v2,
    v3,
    v4,
    LODWORD(FLOAT_2_25));
  *((_DWORD *)this + 152) = 0;
  *((_BYTE *)this + 612) = 0;
  *((_QWORD *)this + 77) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 624));
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_DWORD *)this + 172) = 0;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_DWORD *)this + 180) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 728));
  *((_QWORD *)this + 96) = 0LL;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 98,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 99,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 100,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 103,
    (volatile signed __int32 *)&ATL::g_strmgr);
  *((_DWORD *)this + 208) = 0;
  *(GUID *)((char *)this + 808) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 211) = -1;
  *((_DWORD *)this + 210) = 0;
  *((_DWORD *)this + 212) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    (_QWORD *)this + 107,
    (volatile signed __int32 *)&ATL::g_strmgr);
  *((_QWORD *)this + 108) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  *((_QWORD *)this + 114) = 1065353216LL;
  *((_DWORD *)this + 231) = 0;
  *((_QWORD *)this + 116) = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this);
  }
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 119) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 476));
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 484));
  *((_QWORD *)this + 57) = GetTickCount64();
  return this;
}
