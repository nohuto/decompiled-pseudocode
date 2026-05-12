/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C0056F70
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00570E0 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0057390 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterStop @ 0x1C00088B8 (RaidAdapterStop.c)
 *     RaidPnPPassToMiniPort @ 0x1C0010A08 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C002382C (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C002C4E4 (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C00311B4 (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C00367E8 (RaFreeRaidResources.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, char a3)
{
  void *v4; // rcx
  __int64 v5; // rdx
  unsigned int i; // edi
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 296) && (*(_BYTE *)(a1 + 109) & 0x20) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL), a3, 0LL, 0);
  RaAdapterDeregisterFromIdleDetection(a1);
  v4 = *(void **)(a1 + 5448);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57506152u);
    *(_QWORD *)(a1 + 5448) = 0LL;
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
        (__int64)&WPP_187a9a52e0a035763cd3db40300053e1_Traceguids);
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
      (__int64)&WPP_187a9a52e0a035763cd3db40300053e1_Traceguids);
  }
  RaFreeRaidResources((PSLIST_HEADER)(a1 + 832), v5, *(_BYTE *)(a1 + 4450));
  RaidFreeMappingList((void **)(a1 + 760));
}
