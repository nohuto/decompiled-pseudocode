/*
 * XREFs of ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0261C54
 * Callers:
 *     DwmDestroyDeviceSpecificResources @ 0x1C003E020 (DwmDestroyDeviceSpecificResources.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C000D98C (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 */

void __fastcall vSpDwmDestroyCursorSprites(HDEV a1)
{
  struct DwmState *v1; // rdx
  HSPRITE v3; // rdi
  _QWORD *NeighborSprite; // rbx

  v1 = g_pDwmState;
  v3 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
  if ( v3 )
  {
    do
    {
      NeighborSprite = hspGetNeighborSprite(v3, 1, 0);
      GreDeleteSpriteInternal(a1, 0LL, v3, 1);
      v3 = (HSPRITE)NeighborSprite;
    }
    while ( NeighborSprite );
    v1 = g_pDwmState;
  }
  *(_QWORD *)(*(_QWORD *)v1 + 136LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v1 + 144LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v1 + 160LL) = 0;
}
