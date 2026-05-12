/*
 * XREFs of RaidCheckATADeviceIdMapping @ 0x1C002C1E4
 * Callers:
 *     ATAShimGetMsftId @ 0x1C0042DA4 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidCheckATADeviceIdMapping(__int64 a1, const STRING *a2)
{
  _LIST_ENTRY *i; // rbx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  for ( i = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
        i != (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
        i = i->Flink )
  {
    if ( !RtlCompareString(a2, (const STRING *)&i[1], 0) )
    {
      *(_LIST_ENTRY *)a1 = i[2];
      return a1;
    }
  }
  return a1;
}
