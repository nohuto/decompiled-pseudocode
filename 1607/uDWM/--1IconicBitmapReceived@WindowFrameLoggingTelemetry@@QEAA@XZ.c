/*
 * XREFs of ??1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18007788C
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180077A70 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180077D94 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::~IconicBitmapReceived(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::IconicBitmapReceived::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
