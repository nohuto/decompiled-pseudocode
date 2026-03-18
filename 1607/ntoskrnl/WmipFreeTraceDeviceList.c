/*
 * XREFs of WmipFreeTraceDeviceList @ 0x1404C0BE8
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14009D2C4 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x1404C0B3C (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x14069EF1C (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400C48D0 (WmipUnreferenceRegEntry.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *a1, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = a1;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a1, 0x70696D57u);
}
