/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180005DF8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009DE4 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18001DD34 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?Initialize@InputEdgyNotifier@@QEAAJXZ @ 0x180024CD8 (-Initialize@InputEdgyNotifier@@QEAAJXZ.c)
 *     ?Initialize@MobileCursorBroker@@QEAAJXZ @ 0x180025950 (-Initialize@MobileCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@ControllerNavigationManager@@AEAAJXZ @ 0x180030BD0 (-Initialize@ControllerNavigationManager@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180055E28 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@TouchProcessor@@QEAAJXZ @ 0x180060210 (-InitializeCoreMessaging@TouchProcessor@@QEAAJXZ.c)
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006F240 (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180082770 (-Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     _InputStateManager::Initialize_::_1_::dtor$0 @ 0x18009EF9B (_InputStateManager--Initialize_--_1_--dtor$0.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x18009F3BB (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x18009F9AF (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x18009F9BB (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$2 @ 0x18009F9C7 (_DWMInputRouter--Initialize_--_1_--dtor$2.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x18009FFAE (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DWMHardwareCursor::Initialize_::_1_::dtor$0 @ 0x1800A0212 (_DWMHardwareCursor--Initialize_--_1_--dtor$0.c)
 *     _InputEdgyNotifier::Initialize_::_1_::dtor$0 @ 0x1800A068B (_InputEdgyNotifier--Initialize_--_1_--dtor$0.c)
 *     _InputEdgyNotifier::Initialize_::_1_::dtor$1 @ 0x1800A0697 (_InputEdgyNotifier--Initialize_--_1_--dtor$1.c)
 *     _LegacyInjectionRawInputProvider::Initialize_::_1_::dtor$0 @ 0x1800A06FC (_LegacyInjectionRawInputProvider--Initialize_--_1_--dtor$0.c)
 *     _InputRedirectionComponent::Initialize_::_1_::dtor$0 @ 0x1800A0ECE (_InputRedirectionComponent--Initialize_--_1_--dtor$0.c)
 *     _TouchProcessor::InitializeCoreMessaging_::_1_::dtor$0 @ 0x1800A1D72 (_TouchProcessor--InitializeCoreMessaging_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSecurityDescriptor::~InputSecurityDescriptor(InputSecurityDescriptor *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(v2);
    *(_QWORD *)this = 0LL;
  }
}
