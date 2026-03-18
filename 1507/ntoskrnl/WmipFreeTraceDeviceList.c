/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140533358
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14011A6D4 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x1405332B4 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1406E146C (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400CF108 (WmipUnreferenceRegEntry.c)
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
