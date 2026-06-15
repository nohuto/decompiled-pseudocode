/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180018850
 * Callers:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180014D68 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180016310 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800167C4 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180019500 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180027C70 (--0CAudioSession@@IEAA@XZ.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18002A7A0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ??0CDuckingNotification@@QEAA@XZ @ 0x1800328A0 (--0CDuckingNotification@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z @ 0x18007173C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180076F78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
        _QWORD *a1,
        volatile signed __int32 *a2)
{
  struct ATL::CStringData *(__fastcall *v3)(ATL::CAtlStringMgr *__hidden); // rsi
  __int64 v4; // rax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v3 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(a2 + 8);
    v4 = (__int64)(a2 + 4);
  }
  else
  {
    v4 = (__int64)v3((ATL::CAtlStringMgr *)a2);
  }
  *a1 = v4 + 24;
  return a1;
}
