/*
 * XREFs of ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FA73C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00FA280 (vSpDynamicModeChange.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0279EB4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02787F0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpRemoveAllSpriteOverlapPresents(_QWORD *a1, struct _POINTL *a2)
{
  HDEV v2; // rbx
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi

  v2 = (HDEV)(a1 + 12);
  v3 = 0;
  v4 = a1[23];
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( !v3 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, a2, (struct _RECTL *)v2 + 3, 0LL, 1);
        v3 = 1;
      }
      Win32FreePool(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  *((_QWORD *)v2 + 11) = 0LL;
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)v2, 0);
}
