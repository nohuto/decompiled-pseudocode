/*
 * XREFs of ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C00D86B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

void __fastcall RIMOnTTMDeviceClose(__int64 a1)
{
  int v2; // edx

  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x11u,
    (__int64)&WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
    a1);
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    4,
    18,
    (__int64)&WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids);
}
