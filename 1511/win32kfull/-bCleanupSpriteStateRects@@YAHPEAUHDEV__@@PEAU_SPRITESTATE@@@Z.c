/*
 * XREFs of ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00D580C
 * Callers:
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     bSetDevPreviewRect @ 0x1C027A8AC (bSetDevPreviewRect.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 */

__int64 __fastcall bCleanupSpriteStateRects(HDEV a1, struct _SPRITESTATE *a2)
{
  HSPRITE *v5; // rdi
  __int64 v6; // rsi
  HSPRITE v7; // r8

  if ( *((_DWORD *)a2 + 279) )
  {
    v5 = (HSPRITE *)((char *)a2 + 1136);
    v6 = 4LL;
    do
    {
      if ( *v5 )
      {
        GreDeleteSprite(a1, 0LL, *v5, *((_DWORD *)a2 + 280));
        *v5 = 0LL;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    *((_DWORD *)a2 + 279) = 0;
  }
  if ( *((_DWORD *)a2 + 281) )
  {
    v7 = (HSPRITE)*((_QWORD *)a2 + 146);
    if ( v7 )
    {
      GreDeleteSprite(a1, 0LL, v7, *((_DWORD *)a2 + 282));
      *((_QWORD *)a2 + 146) = 0LL;
    }
    *((_DWORD *)a2 + 281) = 0;
    *((_DWORD *)a2 + 282) = 0;
    *(_QWORD *)((char *)a2 + 1196) = 0LL;
    *(_QWORD *)((char *)a2 + 1204) = 0LL;
  }
  return 1LL;
}
