/*
 * XREFs of PpmParkReportMask @ 0x1400E86CC
 * Callers:
 *     <none>
 * Callees:
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     HvlParkedVirtualProcessors @ 0x1401ECE54 (HvlParkedVirtualProcessors.c)
 */

char PpmParkReportMask()
{
  unsigned __int16 v0; // r9
  __int16 *v1; // r10
  __int64 v2; // rdx

  if ( PpmIsParkingEnabled )
  {
    v0 = PpmPerfReportedCoreParkingMask[0];
    if ( PpmPerfCoreParkingMask[0] >= (unsigned int)PpmPerfReportedCoreParkingMask[0] )
    {
      v1 = PpmPerfCoreParkingMask;
    }
    else
    {
      v1 = PpmPerfReportedCoreParkingMask;
      v0 = PpmPerfCoreParkingMask[0];
    }
    v2 = 0LL;
    if ( v0 )
    {
      while ( *(_QWORD *)&PpmPerfCoreParkingMask[4 * (unsigned __int16)v2 + 4] == *(_QWORD *)&PpmPerfReportedCoreParkingMask[4 * (unsigned __int16)v2 + 4] )
      {
        LOWORD(v2) = v2 + 1;
        if ( (unsigned __int16)v2 >= v0 )
          goto LABEL_11;
      }
LABEL_13:
      word_140322672 = word_140320A42;
      PpmPerfReportedCoreParkingMask[0] = PpmPerfCoreParkingMask[0];
      dword_140322674 = 0;
      if ( PpmPerfCoreParkingMask[0] )
        memmove(&unk_140322678, &qword_140320A48, 8LL * (unsigned __int16)PpmPerfCoreParkingMask[0]);
      if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPower )
        HvlParkedVirtualProcessors();
      if ( PpmParkMaskHandler )
        PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
      LOBYTE(v2) = 2;
      KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask, v2);
    }
    else
    {
LABEL_11:
      while ( (unsigned __int16)v2 < (unsigned __int16)*v1 )
      {
        if ( *(_QWORD *)&v1[4 * (unsigned __int16)v2 + 4] )
          goto LABEL_13;
        LOWORD(v2) = v2 + 1;
      }
    }
  }
  return 1;
}
