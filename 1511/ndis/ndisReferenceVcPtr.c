/*
 * XREFs of ndisReferenceVcPtr @ 0x1C00F3EA0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     ndisWmiFindInstanceName @ 0x1C009F330 (ndisWmiFindInstanceName.c)
 *     ndisWmiQueryAllData @ 0x1C00CFBFC (ndisWmiQueryAllData.c)
 *     NdisClAddParty @ 0x1C00F0000 (NdisClAddParty.c)
 *     NdisClCloseCall @ 0x1C00F01D0 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C00F0520 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C00F0E50 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_SF_qDDLq @ 0x1C004D184 (WPP_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al

  v2 = 0;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qDDLq(0x2Bu, *(_QWORD *)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( *(int *)(a1 + 4) >= 0 )
  {
    v2 = 1;
    ++*(_DWORD *)a1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v3);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qDDLq(0x2Cu, **(unsigned int **)(a1 + 8), a1, *(_DWORD *)(a1 + 4));
  return v2;
}
