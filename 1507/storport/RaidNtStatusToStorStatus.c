/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1C0030230
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00095D4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C00286AC (StorPortpInvokeAcpiMethod.c)
 *     StorpBuildScatterGatherList @ 0x1C0028D7C (StorpBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case -2147483643:
      return 3238002692LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741670:
      return 3238002691LL;
    case -1073741496:
      return 3238002696LL;
    case 0:
      return 0LL;
  }
  result = 3238002689LL;
  if ( a1 >= 0 )
    return 0LL;
  return result;
}
