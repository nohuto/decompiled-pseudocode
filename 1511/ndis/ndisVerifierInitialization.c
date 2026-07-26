/*
 * XREFs of ndisVerifierInitialization @ 0x1C0017178
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C00938D0 (ndisQueryStatisticsOids.c)
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

char ndisVerifierInitialization()
{
  char v0; // bl
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
  {
    ndisVerifierWdmDispatch = (struct _VF_WDM_DISPATCH_TABLE *)VfQueryDispatchTable(0LL, 80LL);
    if ( ndisVerifierWdmDispatch )
    {
      ndisVerifierNdisDispatch = (struct _VF_NDIS_DISPATCH_TABLE *)VfQueryDispatchTable(2LL, 160LL);
      if ( ndisVerifierNdisDispatch )
      {
        ndisVerifierLevel = VerifierFlags;
        if ( (ndisFlags & 4) != 0 )
          ndisVerifierLevel = VerifierFlags | 4;
        if ( MmAddVerifierThunks(&off_1C0074C60, 0x110u) >= 0 )
        {
          qword_1C0085078 = (__int64)&ndisMiniportTrackAllocList;
          ndisMiniportTrackAllocList.Flink = &ndisMiniportTrackAllocList;
          qword_1C0085090 = (__int64)&ndisDriverTrackAllocList;
          ndisDriverTrackAllocList.Flink = &ndisDriverTrackAllocList;
          KeInitializeSpinLock(&ndisTrackMemLock);
          return 1;
        }
      }
    }
  }
  return v0;
}
