/*
 * XREFs of ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180142B4C
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801412EC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180140CB4 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 */

char __fastcall CInteractionProcessor::ResolveProhibitedMotion(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v6; // r8
  __int64 v9; // rbx
  unsigned __int8 v10; // al

  v6 = 1;
  v9 = 0LL;
  while ( (unsigned int)v9 < *(_DWORD *)(a2 + 24) )
  {
    switch ( *(_DWORD *)(a1 + 356) )
    {
      case 1:
        v10 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                (__int64 *)a1,
                (__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v9) + 8LL),
                (unsigned __int8 *)a3,
                a4);
        goto LABEL_14;
      case 2:
        v10 = CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                (__int64 *)a1,
                (__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v9) + 40LL),
                (unsigned __int8 *)a3,
                a4);
LABEL_14:
        v6 = v10;
        break;
      case 3:
        if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v9) + 4LL) )
          break;
LABEL_9:
        *(_WORD *)a3 = 0;
        v6 = 0;
        *(_QWORD *)(a3 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        *(_DWORD *)(a3 + 12) = 0;
        *a4 = *(_DWORD *)(a1 + 352);
        break;
      case 4:
        if ( **(_DWORD **)(*(_QWORD *)a2 + 8 * v9) )
          goto LABEL_9;
        break;
      default:
        *(_WORD *)a3 = 0;
        *(_QWORD *)(a3 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        *(_DWORD *)(a3 + 12) = 0;
        *a4 = *(_DWORD *)(a1 + 352);
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( !v6 )
      return v6;
  }
  return v6;
}
