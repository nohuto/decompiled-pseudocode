/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0010444
 * Callers:
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000A6E8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C000ABBC (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C000B0EC (GreNotifyDirtySprite.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C000E98C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C026143C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0262294 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C000EA78 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0011EE8 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0012720 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     DwmAsyncDirtySprite @ 0x1C0121FCC (DwmAsyncDirtySprite.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  void *v11; // rax

  v7 = 0;
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(a2) && (a3 & 1) != 0 )
    a3 &= ~1u;
  SFMLOGICALSURFACE::bDeviceBitmap(a2);
  if ( !a3 )
    return 1LL;
  if ( bShouldUseSfmTokenArray(*((_DWORD *)a2 + 64)) )
  {
    v9 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)a2, a3, a4);
  }
  else
  {
    v11 = (void *)UserReferenceDwmApiPort(v8);
    v9 = DwmAsyncDirtySprite(v11, a4);
  }
  LOBYTE(v7) = v9 >= 0;
  return v7;
}
