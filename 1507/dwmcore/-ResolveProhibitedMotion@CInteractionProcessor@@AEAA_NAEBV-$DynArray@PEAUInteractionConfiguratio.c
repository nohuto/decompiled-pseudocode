/*
 * XREFs of ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012E6FC
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012D520 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012CEC0 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 */

char __fastcall CInteractionProcessor::ResolveProhibitedMotion(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // esi
  char v9; // r8
  bool v10; // zf
  unsigned __int8 v11; // al

  v5 = 0;
  v9 = 1;
  while ( v5 < *(_DWORD *)(a2 + 24) )
  {
    switch ( *(_DWORD *)(a1 + 356) )
    {
      case 1:
        v11 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                (__int64 *)a1,
                (__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * v5) + 8LL),
                (float *)a3,
                a4);
        goto LABEL_14;
      case 2:
        v11 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                (__int64 *)a1,
                (__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * v5) + 40LL),
                (float *)a3,
                a4);
LABEL_14:
        v9 = v11;
        goto LABEL_15;
      case 3:
        v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * v5) + 4LL) == 0;
LABEL_9:
        if ( !v10 )
        {
          *(_WORD *)a3 = 0;
          v9 = 0;
          *(_QWORD *)(a3 + 4) = 0LL;
          *(_DWORD *)(a3 + 12) = 0;
          *a4 = *(_DWORD *)(a1 + 352);
        }
        goto LABEL_15;
      case 4:
        v10 = **(_DWORD **)(*(_QWORD *)a2 + 8LL * v5) == 0;
        goto LABEL_9;
    }
    *(_WORD *)a3 = 0;
    *(_QWORD *)(a3 + 4) = 0LL;
    *(_DWORD *)(a3 + 12) = 0;
    *a4 = *(_DWORD *)(a1 + 352);
LABEL_15:
    ++v5;
    if ( !v9 )
      return v9;
  }
  return v9;
}
