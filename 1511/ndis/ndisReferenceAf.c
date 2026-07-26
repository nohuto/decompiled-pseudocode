/*
 * XREFs of ndisReferenceAf @ 0x1C00F3E4C
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C004C9D0 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1C00F0520 (NdisClMakeCall.c)
 *     NdisClRegisterSap @ 0x1C00F06B0 (NdisClRegisterSap.c)
 *     NdisCmDispatchIncomingCall @ 0x1C00F0CD0 (NdisCmDispatchIncomingCall.c)
 *     NdisCoOidRequest @ 0x1C00F2260 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C00F2720 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C00F3070 (NdisMCmOidRequest.c)
 *     NdisMCmRequest @ 0x1C00F3160 (NdisMCmRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceAf(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  char v3; // di
  KIRQL v4; // al

  v1 = (KSPIN_LOCK *)(a1 + 384);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 384));
  if ( *(int *)(a1 + 8) >= 0 )
  {
    v3 = 1;
    ++*(_DWORD *)(a1 + 12);
  }
  KeReleaseSpinLock(v1, v4);
  return v3;
}
