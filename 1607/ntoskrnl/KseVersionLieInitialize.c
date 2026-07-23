/*
 * XREFs of KseVersionLieInitialize @ 0x1407B30EC
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KseRegisterShim @ 0x140570974 (KseRegisterShim.c)
 */

void KseVersionLieInitialize()
{
  int v0; // edx
  int v1; // eax
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rdx
  char v7; // al

  v0 = KseRegisterShim((__int64)&Win7VersionLieShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = v0;
    KsepHistoryErrors[2 * v3] = 786673;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(12LL, "Built-in Win7 version lie shims: failed to register.\n");
    KsepLogError(12, "Built-in Win7 version lie shims: failed to register.\n");
  }
  v1 = KseRegisterShim((__int64)&Win8VersionLieShim, 0LL, 0LL);
  if ( v1 < 0 )
  {
    v4 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v4 + 1] = v1;
    v5 = KsepDebugFlag;
    KsepHistoryErrors[2 * v4] = 786681;
    if ( (v5 & 2) != 0 )
      KsepDebugPrint(12LL, "Built-in Win8 version lie shims: failed to register.\n");
    KsepLogError(12, "Built-in Win8 version lie shims: failed to register.\n");
  }
  v2 = KseRegisterShim((__int64)&Win81VersionLieShim, 0LL, 0LL);
  if ( v2 < 0 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v6 + 1] = v2;
    v7 = KsepDebugFlag;
    KsepHistoryErrors[2 * v6] = 786689;
    if ( (v7 & 2) != 0 )
      KsepDebugPrint(12LL, "Built-in Win8.1 version lie shims: failed to register.\n");
    KsepLogError(12, "Built-in Win8.1 version lie shims: failed to register.\n");
  }
}
