/*
 * XREFs of ??1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800796A4
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180079734 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180077D94 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::~ImmersiveIconicBitmapReceived(
        WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
