/*
 * XREFs of ?GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z @ 0x18000BC34
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180130A3C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetEndpoint(__int64 a1, int a2)
{
  unsigned int *v2; // r8
  unsigned int v3; // ecx
  int v4; // edx
  int v6; // edx
  int v7; // edx

  v2 = *(unsigned int **)(a1 + 72);
  v3 = 0;
  if ( v2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v6 = v4 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            return v2[3];
        }
        else
        {
          return v2[2];
        }
      }
      else
      {
        return v2[1];
      }
    }
    else
    {
      return *v2;
    }
  }
  return v3;
}
