/*
 * XREFs of ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000A340
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C3F0 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus.c)
 *     ?FireCompletion@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001CCF0 (-FireCompletion@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@M.c)
 *     ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001E8C0 (-FireProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINil.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
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
