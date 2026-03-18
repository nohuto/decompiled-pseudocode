/*
 * XREFs of ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C011C1AC
 * Callers:
 *     vSpDynamicModeChange @ 0x1C011BCF0 (vSpDynamicModeChange.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0278404 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0276D38 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpRemoveAllSpriteOverlapPresents(_QWORD *a1, struct _POINTL *a2, __int64 a3)
{
  HDEV v3; // rbx
  int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi

  v3 = (HDEV)(a1 + 12);
  v4 = 0;
  v5 = a1[23];
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v4 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v3, a2, (struct _RECTL *)v3 + 3, 0LL, 1);
        v4 = 1;
      }
      Win32FreePool(v5, a2, a3);
      v5 = v6;
    }
    while ( v6 );
  }
  *((_QWORD *)v3 + 11) = 0LL;
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)v3, 0);
}
