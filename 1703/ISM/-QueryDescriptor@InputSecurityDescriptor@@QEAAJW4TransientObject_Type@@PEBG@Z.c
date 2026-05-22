/*
 * XREFs of ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C
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
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall InputSecurityDescriptor::QueryDescriptor(__int64 a1, unsigned int a2, __int64 a3)
{
  int LastError; // ebx
  int TransientObjectSecurityDescriptor; // eax
  __int64 v6; // rcx
  int v7; // r9d

  *(_BYTE *)(a1 + 8) = 1;
  LastError = 0;
  TransientObjectSecurityDescriptor = QueryTransientObjectSecurityDescriptor(a2, a3, a1);
  if ( TransientObjectSecurityDescriptor == -1073741772 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-26"
            "16377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
           1u,
           (PSECURITY_DESCRIPTOR *)a1,
           0LL)
      || ((int)GetLastError() > 0
        ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
        : (LastError = GetLastError()),
          LastError >= 0) )
    {
      *(_BYTE *)(a1 + 8) = 0;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 73;
LABEL_13:
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v7, LastError);
    }
  }
  else if ( TransientObjectSecurityDescriptor < 0 )
  {
    LastError = TransientObjectSecurityDescriptor | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 80;
      goto LABEL_13;
    }
  }
  return (unsigned int)LastError;
}
