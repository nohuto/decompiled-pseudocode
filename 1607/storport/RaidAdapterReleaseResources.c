/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C005E2C4
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C005E438 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C005E6F0 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterStop @ 0x1C000CA80 (RaidAdapterStop.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0026BEC (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C00301F8 (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C00344D4 (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C0039A1C (RaFreeRaidResources.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  unsigned int i; // edi
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 296) && (*(_BYTE *)(a1 + 109) & 0x20) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL), a3, 0LL, 0);
  RaAdapterDeregisterFromIdleDetection(a1);
  v4 = *(void **)(a1 + 5464);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57506152u);
    *(_QWORD *)(a1 + 5464) = 0LL;
  }
  RaidAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  RaidAdapterStop(a1);
  for ( i = 0; i < 0x258; ++i )
  {
    if ( !*(_DWORD *)(a1 + 4984) && !*(_DWORD *)(a1 + 4208) )
      break;
    if ( !(i / 0x32)
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_222db84838ff3f85fffe5432ece91366_Traceguids);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( i >= 0x258
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Cu,
      (__int64)&WPP_222db84838ff3f85fffe5432ece91366_Traceguids);
  }
  RaFreeRaidResources((PSLIST_HEADER)(a1 + 832), *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4450));
  RaidFreeMappingList((void **)(a1 + 760));
}
