/*
 * XREFs of KeyboardClassCancelPendingIrpLeds @ 0x1C0004600
 * Callers:
 *     KeyboardPnP @ 0x1C0001A70 (KeyboardPnP.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001870 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall KeyboardClassCancelPendingIrpLeds(__int64 a1)
{
  char v1; // di
  IRP *v3; // rbx

  v1 = 0;
  v3 = (IRP *)_InterlockedExchange64((volatile __int64 *)(a1 + 368), 0LL);
  if ( v3 )
  {
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 87);
    IoCancelIrp(v3);
    v1 = 1;
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 376), 2) == 3 )
    {
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 88);
      IoFreeIrp(v3);
    }
  }
  return v1;
}
