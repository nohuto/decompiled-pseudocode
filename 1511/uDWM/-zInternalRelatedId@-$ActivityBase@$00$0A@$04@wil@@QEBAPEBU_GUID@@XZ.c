/*
 * XREFs of ?zInternalRelatedId@?$ActivityBase@$00$0A@$04@wil@@QEBAPEBU_GUID@@XZ @ 0x18004EB9C
 * Callers:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800100F8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180077DBC (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078DA4 (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180078228 (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<1,0,5>::zInternalRelatedId(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  if ( !*(_BYTE *)(v1 + 4) || _TlgGuidIsZero((const struct _GUID *)(v1 + 24)) )
    return 0LL;
  return v2;
}
