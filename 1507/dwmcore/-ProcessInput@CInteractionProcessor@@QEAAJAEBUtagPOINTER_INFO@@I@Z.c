/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x18012E408
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x18010D2A0 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@I@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x180130B40 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@I@Z.c)
 * Callees:
 *     ConvertToInputType @ 0x18012E290 (ConvertToInputType.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJW4InteractionState@@AEBUtagPOINTER_INFO@@I@Z @ 0x18012E3AC (-ProcessInput@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z @ 0x18012E9C4 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct tagPOINTER_INFO *a2,
        unsigned int a3)
{
  unsigned int started; // r9d
  int v7; // r8d

  *((_DWORD *)this + 89) = ConvertToInputType(*(_DWORD *)a2);
  *((_DWORD *)this + 90) = v7;
  if ( *((_DWORD *)this + 88) == started )
    started = CInteractionProcessor::StartInteraction(this, 0, 0);
  if ( *((_DWORD *)this + 89) == 1 )
    return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ProcessInput(
                           this,
                           *((_DWORD *)this + 88),
                           (__int64)a2,
                           (const GUID *)a3);
  if ( *((_DWORD *)this + 89) == 2 )
    return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ProcessInput(
                           (_QWORD *)this + 17,
                           *((_DWORD *)this + 88),
                           (__int64)a2,
                           (const GUID *)a3);
  return started;
}
