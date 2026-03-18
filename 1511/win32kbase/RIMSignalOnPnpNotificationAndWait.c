/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C00CA79C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C00CA5D0 (RIMDeviceNotify.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0010880 (RawInputManagerDeviceObjectReference.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 72) && !*(_BYTE *)(a1 + 73) )
  {
    *(_DWORD *)(a2 + 176) |= 0x10u;
    *(_QWORD *)(a2 + 312) = KeGetCurrentThread();
    ZwSetEvent(*(HANDLE *)(a1 + 512), 0LL);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x1Eu,
      (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
    RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
    RIMUnlockExclusive(a1 + 96);
    KeWaitForSingleObject(*(PVOID *)(a2 + 352), WrUserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 96);
    *(_QWORD *)(a2 + 312) = 0LL;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x1Fu,
      (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  return 0LL;
}
