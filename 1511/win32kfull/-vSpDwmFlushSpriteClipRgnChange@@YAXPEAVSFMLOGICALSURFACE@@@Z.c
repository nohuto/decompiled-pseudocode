/*
 * XREFs of ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF34
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C007AC30 (GreUpdateSpriteClipRgn.c)
 *     GreForceClipRgnChange @ 0x1C0103A50 (GreForceClipRgnChange.c)
 * Callees:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C007B03C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

void __fastcall vSpDwmFlushSpriteClipRgnChange(HSPRITE *a1)
{
  if ( (*((_DWORD *)a1 + 64) & 0x80u) != 0 )
  {
    bSpDwmNotifyDirty(a1[38], (struct SFMLOGICALSURFACE *)a1, 2u, 0LL);
    *((_DWORD *)a1 + 64) = (_DWORD)a1[32] & 0xFFFFFF7B | 4;
  }
}
