/*
 * XREFs of ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N0@Z @ 0x180142DE4
 * Callers:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z @ 0x1800FE584 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
        __int64 *a1,
        char a2,
        char a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi

  v3 = *a1;
  v4 = 0;
  *((_BYTE *)a1 + 128) = *((_BYTE *)a1 + 128) ^ (*((_BYTE *)a1 + 128) ^ (2 * a3)) & 2 | 1;
  if ( v3 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v4;
}
