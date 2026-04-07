/*
 * XREFs of ??1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18006DBB4
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18006DDD4 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x18006E0D8 (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 */

void __fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::~IconicBitmapReceived(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::IconicBitmapReceived::`vftable';
  wil::ActivityBase<1,35184372088832,5>::Destroy();
  wil::ActivityBase<1,35184372088832,5>::~ActivityBase<1,35184372088832,5>((__int64)this);
}
