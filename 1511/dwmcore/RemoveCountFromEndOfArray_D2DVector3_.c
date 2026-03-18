/*
 * XREFs of RemoveCountFromEndOfArray_D2DVector3_ @ 0x180144904
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1800F2CE8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArray_D2DVector3_(int a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(_DWORD *)(a2 + 24);
      if ( v4 )
        *(_DWORD *)(a2 + 24) = v4 - 1;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      --v3;
    }
    while ( v3 );
  }
}
