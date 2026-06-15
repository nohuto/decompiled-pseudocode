/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18000DB50 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18000DC00 (-UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180010F00 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180011040 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002C6A0 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180030720 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180039B28 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000CA44 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180031CA0 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x180040AF8 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040BD4 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ??0TSSession@@QEAA@K@Z @ 0x180040D54 (--0TSSession@@QEAA@K@Z.c)
 *     ?AddHead@?$TList@VTSSession@@@@QEAAPEAXPEAVTSSession@@@Z @ 0x180040E74 (-AddHead@-$TList@VTSSession@@@@QEAAPEAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180040EF4 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180040F58 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009EFFC (--_GTSSession@@QEAAPEAXI@Z.c)
 *     WPP_SF_dii @ 0x1800A0734 (WPP_SF_dii.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TsSessionCreate(DWORD SessionId, void **a2, struct TSSession **a3)
{
  void *v6; // rbx
  char *v7; // rax
  unsigned int v8; // edx
  TSSession *v9; // rsi
  unsigned int refreshed; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
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
  char *v25; // [rsp+90h] [rbp+50h] BYREF
  void *v26; // [rsp+98h] [rbp+58h] BYREF

  v6 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x12u,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      SessionId);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  v7 = (char *)operator new(0x170uLL);
  v25 = v7;
  if ( v7 )
    v9 = TSSession::TSSession((TSSession *)v7, SessionId);
  else
    v9 = 0LL;
  if ( !v9 || !SessionId && (int)CVolumeLimitTrackerFactory::CreateInstance((struct IVolumeLimitTracker **)v9 + 39) < 0 )
    goto LABEL_11;
  *((_DWORD *)v9 + 1) = GetTsAudioProtocol(SessionId);
  *((_DWORD *)v9 + 2) = ++dword_1800E8B2C;
  refreshed = TsSessionRefreshSessionInformation(v9);
  if ( refreshed )
    goto LABEL_48;
  v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    WPP_SF_dii(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      *((_QWORD *)v9 + 5),
      v11,
      *(unsigned int *)v9,
      *(_QWORD *)(*((_QWORD *)v9 + 5) + 176LL),
      *(_QWORD *)(*((_QWORD *)v9 + 5) + 200LL),
      -2LL);
  }
  v13 = (void *)TList<TSSession>::AddHead(v12, v9);
  if ( !v13 )
    goto LABEL_11;
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
    goto LABEL_11;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v25,
    (__int64)L"Comm");
  v15 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v15 )
    goto LABEL_11;
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
    goto LABEL_11;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v25,
    (__int64)L"1");
  v17 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v17 )
    goto LABEL_11;
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
    goto LABEL_11;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v25,
    (__int64)L"2");
  v19 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v19 )
    goto LABEL_11;
  v20 = operator new(0x10uLL);
  v6 = v20;
  v25 = (char *)v20;
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
    goto LABEL_11;
  v26 = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v25,
    (__int64)L"3");
  v21 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        (char *)v9 + 336,
                        &v25,
                        &v26) == 0;
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v21 )
    goto LABEL_11;
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
  if ( !v6
    || (v26 = v6,
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          &v25,
          (__int64)L"4"),
        v23 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              (char *)v9 + 336,
                              &v25,
                              &v26) == 0,
        ATL::CStringData::Release((ATL::CStringData *)(v25 - 24)),
        v23) )
  {
LABEL_11:
    refreshed = 14;
    goto LABEL_48;
  }
  v6 = 0LL;
  v9 = 0LL;
  refreshed = 0;
LABEL_48:
  if ( v9 )
    TSSession::`scalar deleting destructor'(v9, v8);
  operator delete(v6);
  return refreshed;
}
