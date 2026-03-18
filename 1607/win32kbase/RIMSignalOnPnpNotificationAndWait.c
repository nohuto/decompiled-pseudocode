/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C00DA8B8
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C00DA6C0 (RIMDeviceNotify.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1C0010C90 (RawInputManagerDeviceObjectReference.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx

  if ( !*(_BYTE *)(a1 + 72) && !*(_BYTE *)(a1 + 73) )
  {
    *(_DWORD *)(a2 + 184) |= 0x10u;
    *(_QWORD *)(a2 + 328) = KeGetCurrentThread();
    ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      4,
      34,
      (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids);
    RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
    RIMUnlockExclusive(a1 + 96);
    KeWaitForSingleObject(*(PVOID *)(a2 + 368), WrUserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 96);
    *(_QWORD *)(a2 + 328) = 0LL;
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      4,
      35,
      (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids);
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  return 0LL;
}
