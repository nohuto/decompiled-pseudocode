/*
 * XREFs of ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N0@Z @ 0x18012E950
 * Callers:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z @ 0x18012E9C4 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v4;
}
