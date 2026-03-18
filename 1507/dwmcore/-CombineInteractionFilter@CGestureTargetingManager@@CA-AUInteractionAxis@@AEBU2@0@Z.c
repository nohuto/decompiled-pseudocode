/*
 * XREFs of ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x180132014
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@@Z @ 0x1801324A0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGestureTargetingManager::CombineInteractionFilter(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  char v4; // r9
  float v5; // xmm0_4
  float v6; // xmm1_4
  __int64 result; // rax
  float v8; // xmm0_4

  v3 = 0;
  if ( *(_BYTE *)a2 || (v4 = 0, *(_BYTE *)a3) )
    v4 = 1;
  *(_BYTE *)a1 = v4;
  if ( *(_BYTE *)(a2 + 1) || *(_BYTE *)(a3 + 1) )
    v3 = 1;
  v5 = *(float *)(a2 + 4) + *(float *)(a3 + 4);
  v6 = *(float *)(a2 + 8) + *(float *)(a3 + 8);
  *(_BYTE *)(a1 + 1) = v3;
  result = a1;
  *(float *)(a1 + 4) = v5;
  v8 = *(float *)(a2 + 12) + *(float *)(a3 + 12);
  *(float *)(a1 + 8) = v6;
  *(float *)(a1 + 12) = v8;
  return result;
}
