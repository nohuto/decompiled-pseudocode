/*
 * XREFs of ndisReferenceVcPtr @ 0x1C00F9EA0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A8144 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiFindInstanceName @ 0x1C00D6308 (ndisWmiFindInstanceName.c)
 *     ndisWmiQueryAllData @ 0x1C00D6580 (ndisWmiQueryAllData.c)
 *     NdisClAddParty @ 0x1C00F6000 (NdisClAddParty.c)
 *     NdisClCloseCall @ 0x1C00F61D0 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C00F6520 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C00F6E50 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_SF_qDDLq @ 0x1C004C944 (WPP_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al

  v2 = 0;
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qDDLq(0x2Bu, *(_QWORD *)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( *(int *)(a1 + 4) >= 0 )
  {
    v2 = 1;
    ++*(_DWORD *)a1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v3);
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qDDLq(0x2Cu, **(unsigned int **)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  return v2;
}
