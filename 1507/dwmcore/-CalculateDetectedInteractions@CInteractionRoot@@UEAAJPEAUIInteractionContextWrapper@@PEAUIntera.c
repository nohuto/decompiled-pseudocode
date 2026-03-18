/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18012FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18012D3D0 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 */

__int64 __fastcall CInteractionRoot::CalculateDetectedInteractions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  return CInteractionProcessor::CalculateDetectedInteractions(a1 + 32, a2, a3, a4, a5, a6, a7, a8);
}
