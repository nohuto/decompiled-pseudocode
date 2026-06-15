/*
 * XREFs of ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18001412C
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016A50 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800171B0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAA_NI_N@Z @ 0x180012698 (-InitHashTable@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrai.c)
 *     ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x180013D64 (-NewNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x180013EA0 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        __int64 a1,
        const struct CAudioSessionInstanceId *a2,
        _QWORD *a3)
{
  __int64 Node; // r9
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v9 = -2LL;
  Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
           a1,
           (__int64)a2,
           &v8,
           (unsigned int *)&v12,
           v10);
  if ( Node )
  {
    *(_QWORD *)(Node + 80) = *a3;
  }
  else
  {
    if ( !*(_QWORD *)a1
      && !ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::InitHashTable(
            (void **)a1,
            *(_DWORD *)(a1 + 16),
            1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::NewNode(
             a1,
             a2,
             v8,
             v12);
    v12 = Node;
    try
    {
      *(_QWORD *)(Node + 80) = *a3;
    }
    catch ( ... )
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
        a1,
        v12);
      throw;
    }
  }
  return Node;
}
