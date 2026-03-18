/*
 * XREFs of PsGetProcessServerSilo @ 0x1400136A0
 * Callers:
 *     ObpDecrementHandleCount @ 0x140406420 (ObpDecrementHandleCount.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     ObpReferenceDeviceMap @ 0x140421DE0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x140422220 (ObQueryDeviceMapInformation.c)
 *     ObpIncrementHandleCountEx @ 0x14044DC50 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x140460DF0 (ObDereferenceDeviceMap.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     PspTerminateAllThreads @ 0x1405096F0 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140509A30 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x14051A604 (PspSetupUserProcessAddressSpace.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054A9D8 (EtwpWriteAppStateChangeSummary.c)
 *     SepRmLsaConnectRequest @ 0x14056B9C0 (SepRmLsaConnectRequest.c)
 *     ObSetProcessDeviceMap @ 0x140668B14 (ObSetProcessDeviceMap.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 944);
  if ( !v1 )
    return 0LL;
  do
  {
    if ( (*(_DWORD *)(v1 + 1304) & 0x40000000) != 0 )
      break;
    v1 = *(_QWORD *)(v1 + 1056);
  }
  while ( v1 );
  if ( !v1 )
    return 0LL;
  while ( !(unsigned __int8)PspIsServerSilo() )
    ;
  return v3;
}
