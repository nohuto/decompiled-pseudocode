/*
 * XREFs of KseClearPCIDBitsInitialize @ 0x1407D03F4
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KseRegisterShim @ 0x140570974 (KseRegisterShim.c)
 */

void KseClearPCIDBitsInitialize()
{
  int v0; // eax
  __int64 v1; // rdx
  char v2; // al

  v0 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 917629;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(12LL, "ClearPCIDBits shim: failed to register.\n");
    KsepLogError(12, "ClearPCIDBits shim: failed to register.\n");
  }
}
