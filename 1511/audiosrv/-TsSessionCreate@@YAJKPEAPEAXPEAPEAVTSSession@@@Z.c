/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748
 * Callers:
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180027FF0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180028CB0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180028E00 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A6F0 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A940 (-UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002EDEC (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002F8C0 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18003D900 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180019040 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18003EAF8 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EBD4 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ??0TSSession@@QEAA@K@Z @ 0x18003ED54 (--0TSSession@@QEAA@K@Z.c)
 *     ?AddHead@?$TList@VTSSession@@@@QEAAPEAXPEAVTSSession@@@Z @ 0x18003EE74 (-AddHead@-$TList@VTSSession@@@@QEAAPEAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18003EEF4 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18003EF58 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18003F478 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009BE30 (--_GTSSession@@QEAAPEAXI@Z.c)
 *     WPP_SF_dii @ 0x18009D920 (WPP_SF_dii.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TsSessionCreate(DWORD SessionId, void **a2, struct TSSession **a3)
{
  void *v6; // rbx
  TSSession *v7; // rax
  unsigned int v8; // edx
  TSSession *v9; // rsi
  unsigned int refreshed; // edi
  __int64 v11; // r8
  TraceLoggingHProvider v12; // rcx
  void *v13; // rdi
  _DWORD *v14; // rax
  bool v15; // di
  _DWORD *v16; // rax
  bool v17; // di
  _DWORD *v18; // rax
  bool v19; // di
  _DWORD *v20; // rax
  bool v21; // di
  _DWORD *v22; // rax
  bool v23; // di
  TSSession *v25; // [rsp+90h] [rbp+50h] BYREF
  void *v26; // [rsp+98h] [rbp+58h] BYREF

  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
      SessionId);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  v7 = (TSSession *)operator new(0x170uLL);
  v25 = v7;
  if ( v7 )
    v9 = TSSession::TSSession(v7, SessionId);
  else
    v9 = 0LL;
  if ( !v9 || !SessionId && (int)CVolumeLimitTrackerFactory::CreateInstance((struct IVolumeLimitTracker **)v9 + 39) < 0 )
    goto LABEL_44;
  *((_DWORD *)v9 + 1) = GetTsAudioProtocol(SessionId);
  *((_DWORD *)v9 + 2) = ++dword_1800E6AEC;
  refreshed = TsSessionRefreshSessionInformation(v9);
  if ( refreshed )
    goto LABEL_40;
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dii(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *((_QWORD *)v9 + 5),
      v11,
      *(unsigned int *)v9,
      *(_QWORD *)(*((_QWORD *)v9 + 5) + 176LL),
      *(_QWORD *)(*((_QWORD *)v9 + 5) + 200LL),
      -2LL);
  }
  v13 = (void *)TList<TSSession>::AddHead(v12, v9);
  if ( !v13 )
    goto LABEL_44;
  TsSessionConsiderForPrimaryConsoleAudioSession(v9);
  if ( a2 )
    *a2 = v13;
  *a3 = v9;
  v14 = operator new(0x10uLL);
  v6 = v14;
  if ( v14 )
  {
    *v14 = -1042284544;
    *((_BYTE *)v14 + 4) = 1;
    *((_QWORD *)v14 + 1) = 400000LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_44;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (__int64 *)&v25,
    (__int64)L"Comm");
  v15 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((TSSession *)((char *)v25 - 24));
  if ( v15 )
    goto LABEL_44;
  v16 = operator new(0x10uLL);
  v6 = v16;
  if ( v16 )
  {
    *v16 = -1061158912;
    *((_BYTE *)v16 + 4) = 0;
    *((_QWORD *)v16 + 1) = 400000LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_44;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (__int64 *)&v25,
    (__int64)L"1");
  v17 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((TSSession *)((char *)v25 - 24));
  if ( v17 )
    goto LABEL_44;
  v18 = operator new(0x10uLL);
  v6 = v18;
  if ( v18 )
  {
    *v18 = -1042284544;
    *((_BYTE *)v18 + 4) = 0;
    *((_QWORD *)v18 + 1) = 400000LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_44;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (__int64 *)&v25,
    (__int64)L"2");
  v19 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((TSSession *)((char *)v25 - 24));
  if ( v19 )
    goto LABEL_44;
  v20 = operator new(0x10uLL);
  v6 = v20;
  v25 = (TSSession *)v20;
  if ( v20 )
  {
    *v20 = -8388608;
    *((_BYTE *)v20 + 4) = 0;
    *((_QWORD *)v20 + 1) = 400000LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_44;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (__int64 *)&v25,
    (__int64)L"3");
  v21 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((TSSession *)((char *)v25 - 24));
  if ( v21 )
    goto LABEL_44;
  v22 = operator new(0x10uLL);
  v6 = v22;
  if ( v22 )
  {
    *v22 = -1042284544;
    *((_BYTE *)v22 + 4) = 1;
    *((_QWORD *)v22 + 1) = 400000LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6
    && (v26 = v6,
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (__int64 *)&v25,
          (__int64)L"4"),
        v23 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              (char *)v9 + 336,
                              &v25,
                              &v26) == 0,
        ATL::CStringData::Release((TSSession *)((char *)v25 - 24)),
        !v23) )
  {
    v6 = 0LL;
    v9 = 0LL;
    refreshed = 0;
  }
  else
  {
LABEL_44:
    refreshed = 14;
  }
LABEL_40:
  if ( v9 )
    TSSession::`scalar deleting destructor'(v9, v8);
  operator delete(v6);
  return refreshed;
}
