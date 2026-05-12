/*
 * XREFs of RaidAdapterScsiIrp @ 0x1C0053218
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0001810 (RaDriverScsiIrp.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0025880 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterScsiIrp(__int64 a1, IRP *a2)
{
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Fu,
      (__int64)&WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
      a1,
      a2);
  }
  return RaidCompleteRequestEx(a2, 0, 0xC0000001);
}
