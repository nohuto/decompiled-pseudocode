/*
 * XREFs of ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C000B150
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A5E8 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0097230 (DwmDestroyDeviceSpecificResources.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0079A6C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8474 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall vSpDwmDestroyCursorSprites(HDEV a1)
{
  struct DwmState *v1; // rdx
  HSPRITE v3; // rdi
  HSPRITE NeighborSprite; // rbx

  v1 = g_pDwmState;
  v3 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
  if ( v3 )
  {
    do
    {
      NeighborSprite = hspGetNeighborSprite(v3, 1, 0);
      GreDeleteSpriteInternal(a1, 0LL, v3, 1);
      v3 = NeighborSprite;
    }
    while ( NeighborSprite );
    v1 = g_pDwmState;
  }
  *(_QWORD *)(*(_QWORD *)v1 + 136LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v1 + 144LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v1 + 160LL) = 0;
}
