/*
 * XREFs of KseDriverScopeInitialize @ 0x1407B3080
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x140570974 (KseRegisterShim.c)
 */

__int64 KseDriverScopeInitialize()
{
  __int64 result; // rax
  __int64 v1; // rdx
  char v2; // al

  result = KseRegisterShim((__int64)&KseDsShim, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v2 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v1]) = 0;
    LODWORD(KsepHistoryMessages[v1]) = 721040;
    if ( (v2 & 1) != 0 )
      KsepDebugPrint(11LL, "KSE-DS: driver scope shim registered.\n");
    return KsepLogInfo(11LL, (__int64)"KSE-DS: driver scope shim registered.\n");
  }
  return result;
}
