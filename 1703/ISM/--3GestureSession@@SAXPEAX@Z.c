/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x18000174C
 * Callers:
 *     _OneCoreUAPInputHost::Initialize_::_1_::dtor$2 @ 0x18009EE95 (_OneCoreUAPInputHost--Initialize_--_1_--dtor$2.c)
 *     _OneCoreUAPInputHost::Initialize_::_1_::dtor$28 @ 0x18009EEAD (_OneCoreUAPInputHost--Initialize_--_1_--dtor$28.c)
 *     _Win32kInterop::Create_::_1_::dtor$0 @ 0x18009F52A (_Win32kInterop--Create_--_1_--dtor$0.c)
 *     _GestureTargetingComponent::Create_::_1_::dtor$0 @ 0x18009F692 (_GestureTargetingComponent--Create_--_1_--dtor$0.c)
 *     _GestureTargetingComponent::Create_::_1_::dtor$1 @ 0x18009F69E (_GestureTargetingComponent--Create_--_1_--dtor$1.c)
 *     _TouchProcessor::Create_::_1_::dtor$1 @ 0x18009F742 (_TouchProcessor--Create_--_1_--dtor$1.c)
 *     _BufferedInputTarget::Create_::_1_::dtor$0 @ 0x18009FD39 (_BufferedInputTarget--Create_--_1_--dtor$0.c)
 *     _DWMInputTarget::CreateFromINPUTDEST_::_1_::dtor$0 @ 0x18009FD45 (_DWMInputTarget--CreateFromINPUTDEST_--_1_--dtor$0.c)
 *     _DWMInputDisplay::Create_::_1_::dtor$0 @ 0x18009FD8D (_DWMInputDisplay--Create_--_1_--dtor$0.c)
 *     _InputRedirectionComponent::Create_::_1_::dtor$0 @ 0x18009FFC6 (_InputRedirectionComponent--Create_--_1_--dtor$0.c)
 *     _DWMCursor::Create_::_1_::dtor$1 @ 0x1800A00FC (_DWMCursor--Create_--_1_--dtor$1.c)
 *     _EdgeGestureTarget::UpdateInputTarget_::_1_::dtor$2 @ 0x1800A0623 (_EdgeGestureTarget--UpdateInputTarget_--_1_--dtor$2.c)
 *     _MobileCursor::Create_::_1_::dtor$0 @ 0x1800A0744 (_MobileCursor--Create_--_1_--dtor$0.c)
 *     _ButtonProcessor::Create_::_1_::dtor$0 @ 0x1800A0DFC (_ButtonProcessor--Create_--_1_--dtor$0.c)
 *     _TargetingArbitrationComponent::Create_::_1_::dtor$0 @ 0x1800A0EC2 (_TargetingArbitrationComponent--Create_--_1_--dtor$0.c)
 *     _GestureRecognizerCreate_::_1_::dtor$0 @ 0x1800A113B (_GestureRecognizerCreate_--_1_--dtor$0.c)
 *     _HeatProcessor::Create_::_1_::dtor$0 @ 0x1800A11F5 (_HeatProcessor--Create_--_1_--dtor$0.c)
 *     _KeyboardProcessor::Create_::_1_::dtor$0 @ 0x1800A1249 (_KeyboardProcessor--Create_--_1_--dtor$0.c)
 *     _OrientationWatcher::Create_::_1_::dtor$0 @ 0x1800A1FC5 (_OrientationWatcher--Create_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::Create_::_1_::dtor$1 @ 0x1800A21A4 (_WGIRawInputProvider--Create_--_1_--dtor$1.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$2 @ 0x1800A2DF3 (_RIMRawInputProvider--Initialize_--_1_--dtor$2.c)
 *     _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800A2E23 (_PenDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$0 @ 0x1800A2E2F (_AugmentedInputDeviceCollection--Create_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::Create_::_1_::dtor$1 @ 0x1800A2F92 (_SpatialInputControllerCollection--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::Create_::_1_::dtor$1 @ 0x1800A367F (_MPCInputRouter--Create_--_1_--dtor$1.c)
 *     _MPCHFXInputTarget::Create_::_1_::dtor$0 @ 0x1800A376F (_MPCHFXInputTarget--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
