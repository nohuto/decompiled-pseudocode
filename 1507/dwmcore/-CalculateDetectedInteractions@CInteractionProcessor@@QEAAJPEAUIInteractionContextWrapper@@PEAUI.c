/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18012D3D0
 * Callers:
 *     ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18010CDA0 (-CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractio.c)
 *     ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18012FC90 (-CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUIntera.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18012C518 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  _DWORD *v8; // rsi
  unsigned int v9; // ebx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax

  v8 = a8;
  v9 = 0;
  *a4 = 0;
  v11 = a6;
  *a6 = 0;
  *v8 = 0;
  v12 = *(_DWORD *)(a1 + 356);
  if ( v12 == 1 )
  {
    v13 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (_BYTE *)a1,
            a2,
            a3,
            a4,
            a5,
            v11);
    goto LABEL_5;
  }
  if ( v12 == 2 )
  {
    v13 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (_BYTE *)(a1 + 136),
            a2,
            a3,
            a4,
            a5,
            v11);
LABEL_5:
    v9 = v13;
    if ( v13 < 0 )
      return v9;
  }
  if ( (*(_BYTE *)(a1 + 380) & 1) != 0 )
  {
    v14 = a7;
    a6 = (_DWORD *)(a1 + 280);
    v15 = *(_DWORD *)(a7 + 24);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      return v9;
    }
    v9 = 0;
    if ( v16 <= *(_DWORD *)(a7 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a7 + 8LL * *(unsigned int *)(a7 + 24)) = a6;
      *(_DWORD *)(v14 + 24) = v16;
LABEL_14:
      ++*v8;
      return v9;
    }
    v17 = DynArrayImpl<0>::AddMultipleAndSet(a7, 8u, 1, &a6);
    v9 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
    if ( (v9 & 0x80000000) == 0 )
      goto LABEL_14;
  }
  return v9;
}
