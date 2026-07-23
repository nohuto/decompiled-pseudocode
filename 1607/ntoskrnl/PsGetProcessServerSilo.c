/*
 * XREFs of PsGetProcessServerSilo @ 0x140013220
 * Callers:
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObpReferenceDeviceMap @ 0x140420CA0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1404210E0 (ObQueryDeviceMapInformation.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x14045FCC0 (ObDereferenceDeviceMap.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     PspTerminateAllThreads @ 0x1404EC680 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054AF18 (EtwpWriteAppStateChangeSummary.c)
 *     SepRmLsaConnectRequest @ 0x14056BF00 (SepRmLsaConnectRequest.c)
 *     ObSetProcessDeviceMap @ 0x140668BF8 (ObSetProcessDeviceMap.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
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
