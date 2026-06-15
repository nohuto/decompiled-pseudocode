/*
 * XREFs of ??0CAudioSession@@IEAA@XZ @ 0x180014FD0
 * Callers:
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x180003050 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x180008B80 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180012C20 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXXZ @ 0x1800336FC (-UpdateRehashThresholds@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CEl.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

CAudioSession *__fastcall CAudioSession::CAudioSession(CAudioSession *this)
{
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
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 138) = 17;
  *((_QWORD *)this + 71) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 72) = 0LL;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 147) = 10;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 139) = 1061158912;
  *((_DWORD *)this + 140) = 1048576000;
  *((_DWORD *)this + 141) = 1074790400;
  ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::UpdateRehashThresholds();
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
  *((_QWORD *)this + 116) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_DWORD *)this + 244) = 0;
  *((_DWORD *)this + 246) = 0;
  *((_QWORD *)this + 124) = 0LL;
  *((_BYTE *)this + 1000) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, this);
  }
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 119) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 476));
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 484));
  *((_QWORD *)this + 57) = GetTickCount64();
  return this;
}
