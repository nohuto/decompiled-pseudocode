/*
 * XREFs of ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000EA14
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18000C000 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVGameList.c)
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18000C820 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVGameListEnt.c)
 *     ?FireProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18000D204 (-FireProgress@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Window.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180019A90 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U-$A.c)
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x180019D50 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Detai.c)
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001A7B0 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncOpti.c)
 *     ?FireCompletion@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001AA70 (-FireCompletion@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@M.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
        __int64 a1,
        __int64 a2)
{
  int MatchingRestrictedErrorInfo; // edi
  __int64 v4; // rsi
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  MatchingRestrictedErrorInfo = a1;
  if ( (_DWORD)a1 == -2147417848 || (_DWORD)a1 == -2147023174 || (_DWORD)a1 == -1996357631 )
  {
    RoTransformError(a1, 0LL, 0LL);
    MatchingRestrictedErrorInfo = 0;
  }
  if ( (unsigned int)IsErrorPropagationEnabled() == 0 )
  {
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      return 0;
    }
  }
  else if ( MatchingRestrictedErrorInfo < 0 )
  {
    v6 = 0LL;
    MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v6);
    if ( MatchingRestrictedErrorInfo >= 0 )
      MatchingRestrictedErrorInfo = RoReportFailedDelegate(a2, v6);
    v4 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return (unsigned int)MatchingRestrictedErrorInfo;
}
