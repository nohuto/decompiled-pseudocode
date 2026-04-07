/*
 * XREFs of ??1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180078584
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180078624 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x180076188 (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::~ImmersiveIconicBitmapReceived(
        WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::`vftable';
  wil::ActivityBase<1,35184372088832,5>::Destroy((__int64)this);
  wil::ActivityBase<1,35184372088832,5>::~ActivityBase<1,35184372088832,5>((__int64)this);
}
