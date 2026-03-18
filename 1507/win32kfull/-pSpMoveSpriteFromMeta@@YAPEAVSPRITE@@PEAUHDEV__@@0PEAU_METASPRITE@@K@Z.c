/*
 * XREFs of ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0273228
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00F5060 (vSpDynamicModeChange.c)
 * Callees:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0273014 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275DF4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpMoveSpriteFromMeta(HDEV a1, _QWORD *a2, struct _METASPRITE *a3, unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 i; // rdi
  struct SPRITE *v10; // rcx
  __int64 v11; // rax
  __int64 j; // rcx

  v7 = *((_QWORD *)a3 + a4 + 4);
  if ( v7 )
    *(_QWORD *)(v7 + 8) = 0LL;
  v8 = 0LL;
  if ( *((_QWORD *)a3 + 1) )
    v8 = v7;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 6); i = (unsigned int)(i + 1) )
  {
    if ( (_DWORD)i != a4 || !v8 )
    {
      v10 = (struct SPRITE *)*((_QWORD *)a3 + i + 4);
      if ( (*(_DWORD *)v10 & 0x40) != 0 )
        pSpHintSpriteShape(v10, 0LL, 0);
      vSpDeleteSprite(*((struct SPRITE **)a3 + i + 4));
    }
  }
  v11 = a2[22];
  if ( (struct _METASPRITE *)v11 == a3 )
  {
    a2[22] = *((_QWORD *)a3 + 2);
  }
  else
  {
    for ( j = *(_QWORD *)(v11 + 16); (struct _METASPRITE *)j != a3; j = *(_QWORD *)(j + 16) )
      v11 = j;
    *(_QWORD *)(v11 + 16) = *((_QWORD *)a3 + 2);
  }
  Win32FreePool(a3);
  return (struct SPRITE *)v8;
}
