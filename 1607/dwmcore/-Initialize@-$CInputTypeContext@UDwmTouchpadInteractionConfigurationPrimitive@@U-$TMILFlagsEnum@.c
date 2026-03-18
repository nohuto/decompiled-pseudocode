/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x1800A5FEC
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x1800A5074 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x1800A5944 (-AddMultipleAndSet@-$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTou.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
        __int64 *a1,
        __int64 a2)
{
  int v4; // edi
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v6[0] = 0;
  v6[1] = 0;
  v6[2] = 0;
  v4 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(a1 + 11), v6, 1u);
  if ( v4 < 0 )
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(a1);
  else
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a1, a2);
  return (unsigned int)v4;
}
