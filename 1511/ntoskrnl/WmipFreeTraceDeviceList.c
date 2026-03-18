/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140509BBC
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1401252F0 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x140509B18 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x14065EBC4 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14001AFF0 (WmipUnreferenceRegEntry.c)
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
