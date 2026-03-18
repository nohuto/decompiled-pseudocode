/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z @ 0x1800FE584
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x1800A7FB0 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z.c)
 *     ?StartInteraction@CInteraction@@UEAAJ_N0@Z @ 0x180127D60 (-StartInteraction@CInteraction@@UEAAJ_N0@Z.c)
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0@Z @ 0x1801448D0 (-StartInteraction@CInteractionRoot@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N0@Z @ 0x180142DE4 (-StartInteraction@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlag.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(CInteractionProcessor *this, __int64 a2, __int64 a3)
{
  char v3; // bp
  char v4; // si
  __int64 v6; // r14

  v3 = a3;
  v4 = a2;
  if ( (_BYTE)a2 || (unsigned int)(*((_DWORD *)this + 88) - 2) <= 2 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 88) - 2) > 2 )
      *((_DWORD *)this + 88) = 3;
    v4 = 1;
  }
  else
  {
    *((_DWORD *)this + 88) = 1;
  }
  v6 = *(_QWORD *)this;
  *((_BYTE *)this + 128) = *((_BYTE *)this + 128) ^ (*((_BYTE *)this + 128) ^ (2 * a3)) & 2 | 1;
  if ( !v6 )
    return 2147947423LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  LOBYTE(a3) = v3;
  LOBYTE(a2) = v4;
  return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
           (char *)this + 136,
           a2,
           a3);
}
