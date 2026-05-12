/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x1C0006E10
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C0006D38 (RaidAdapterPowerDownDevice.c)
 * Callees:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0006794 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidPowerPassToMiniPort @ 0x1C0006F30 (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C002AB6C (RaidAdapterSendPowerToMiniport.c)
 */

int __fastcall RaidAdapterStopOnPowerdown(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  int result; // eax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6LL) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
    return RaidAdapterDevicePowerstopAdapter(a2, v2);
  }
  *(_BYTE *)(v2 + 4641) = 1;
  result = RaidPowerPassToMiniPort(a1, a2, RaidAdapterDevicePowerDownSrbComplete);
  if ( result < 0 )
    return RaidAdapterDevicePowerstopAdapter(a2, v2);
  return result;
}
