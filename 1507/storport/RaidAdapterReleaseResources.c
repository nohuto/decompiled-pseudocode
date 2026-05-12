/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C0053008
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0053170 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0053420 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterStop @ 0x1C0006B5C (RaidAdapterStop.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C002114C (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C002A524 (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C0030078 (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C0034B48 (RaFreeRaidResources.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, char a3)
{
  void *v4; // rcx
  __int64 v5; // rdx
  unsigned int i; // edi
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 296) )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL), a3, 0LL, 0);
  RaAdapterDeregisterFromIdleDetection(a1);
  v4 = *(void **)(a1 + 5440);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x57506152u);
    *(_QWORD *)(a1 + 5440) = 0LL;
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
        (__int64)&WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids);
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
      (__int64)&WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids);
  }
  RaFreeRaidResources((PSLIST_HEADER)(a1 + 832), v5, *(_BYTE *)(a1 + 4450));
  RaidFreeMappingList((void **)(a1 + 760));
}
