/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0K@Z @ 0x18011276C
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1800A5248 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?StartInteraction@CInteraction@@UEAAJ_N0K@Z @ 0x1801457D0 (-StartInteraction@CInteraction@@UEAAJ_N0K@Z.c)
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z @ 0x1801724A0 (-StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z.c)
 * Callees:
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00@Z @ 0x18016F804 (-StartInteraction@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlag.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(
        CInteractionProcessor *this,
        char a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  char v7; // bp
  int started; // ecx
  bool v9; // di
  int v10; // eax

  v6 = *((unsigned int *)this + 96);
  v7 = a3;
  started = 0;
  if ( a2 || (unsigned int)(v6 - 2) <= 2 )
  {
    if ( (unsigned int)(v6 - 2) > 2 )
      *((_DWORD *)this + 96) = 3;
    a2 = 1;
  }
  else
  {
    *((_DWORD *)this + 96) = 1;
  }
  v9 = (*((_BYTE *)this + 856) & 8) != 0 && !(_DWORD)v6 && *((_DWORD *)this + 96);
  switch ( (_DWORD)a4 )
  {
    case 1:
      LOBYTE(a4) = v9;
      LOBYTE(v6) = a2;
      started = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
                  this,
                  v6,
                  a3,
                  a4);
      if ( started >= 0 )
        goto LABEL_14;
      break;
    case 2:
      LOBYTE(a4) = v9;
      LOBYTE(v6) = a2;
      v10 = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
              this,
              v6,
              a3,
              a4);
      goto LABEL_19;
    case 5:
LABEL_14:
      LOBYTE(a4) = v9;
      LOBYTE(a3) = v7;
      LOBYTE(v6) = a2;
      v10 = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
              (char *)this + 152,
              v6,
              a3,
              a4);
LABEL_19:
      started = v10;
      break;
  }
  return (unsigned int)started;
}
