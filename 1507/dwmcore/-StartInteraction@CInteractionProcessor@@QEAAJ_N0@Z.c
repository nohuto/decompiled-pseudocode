/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z @ 0x18012E9C4
 * Callers:
 *     ?StartInteraction@CInteraction@@UEAAJ_N0@Z @ 0x18010D390 (-StartInteraction@CInteraction@@UEAAJ_N0@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x18012E408 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@I@Z.c)
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0@Z @ 0x180131C60 (-StartInteraction@CInteractionRoot@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N0@Z @ 0x18012E950 (-StartInteraction@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlag.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(CInteractionProcessor *this, char a2, char a3)
{
  __int64 v6; // r14

  *((_DWORD *)this + 88) = a2 != 0 ? 3 : 1;
  v6 = *(_QWORD *)this;
  *((_BYTE *)this + 128) = *((_BYTE *)this + 128) ^ (*((_BYTE *)this + 128) ^ (2 * a3)) & 2 | 1;
  if ( !v6 )
    return 2147947423LL;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
  return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
           (__int64 *)this + 17,
           a2,
           a3);
}
