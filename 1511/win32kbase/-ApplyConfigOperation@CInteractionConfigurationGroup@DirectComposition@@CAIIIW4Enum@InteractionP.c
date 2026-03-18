/*
 * XREFs of ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D9EF8
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEAUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00D9F20 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEAUDwmIntera.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00DA0F0 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
        int a1,
        unsigned int a2,
        int a3,
        _BYTE *a4)
{
  __int64 result; // rax

  if ( a3 != 3 )
  {
    if ( a3 == 1 || a3 == 6 )
      a2 |= a1;
    else
      a2 = a1 & ~a2;
  }
  result = a2;
  *a4 |= a2 != a1;
  return result;
}
