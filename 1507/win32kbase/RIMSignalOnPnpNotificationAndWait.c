/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C00C989C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C00C96D0 (RIMDeviceNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0077220 (RawInputManagerDeviceObjectReference.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 72) && !*(_BYTE *)(a1 + 73) )
  {
    *(_DWORD *)(a2 + 184) |= 0x10u;
    *(_QWORD *)(a2 + 320) = KeGetCurrentThread();
    ZwSetEvent(*(HANDLE *)(a1 + 480), 0LL);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x1Cu,
      (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
    RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
    RIMUnlockExclusive(a1 + 96);
    KeWaitForSingleObject(*(PVOID *)(a2 + 360), WrUserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 96);
    *(_QWORD *)(a2 + 320) = 0LL;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x1Du,
      (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  return 0LL;
}
