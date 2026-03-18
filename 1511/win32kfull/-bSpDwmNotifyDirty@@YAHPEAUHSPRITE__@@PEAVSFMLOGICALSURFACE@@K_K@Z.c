/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C007B03C
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000AF68 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF34 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreNotifyDirtySprite @ 0x1C009AE28 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C009B1FC (GreAdjustSpriteDirtyAccum.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00D2428 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E9318 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0260AF4 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C003C598 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C007B130 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C007B8B8 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C0110984 (DwmAsyncDirtySprite.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, ULONG a3, UINT_PTR a4)
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
  if ( (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)a2 + 64)) )
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
