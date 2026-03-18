/*
 * XREFs of ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1401862C8
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     vSpDynamicModeChange @ 0x140185A00 (vSpDynamicModeChange.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x140186134 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x140186368 (-vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpRemoveAllSpriteOverlapPresents(HDEV a1)
{
  _QWORD *v1; // rbx
  int v2; // r14d
  _QWORD *v4; // rbp
  struct _POINTL v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)a1 + 20);
  v2 = 0;
  v5 = 0LL;
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)v1[1];
      if ( !v2 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)(a1 + 20), &v5, (struct _RECTL *)(a1 + 30), 0LL, 1);
        v2 = 1;
      }
      Win32FreePool(v1);
      v1 = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)a1 + 20) = 0LL;
  vSpUpdateSpriteOverlapPresent(a1, 0);
}
