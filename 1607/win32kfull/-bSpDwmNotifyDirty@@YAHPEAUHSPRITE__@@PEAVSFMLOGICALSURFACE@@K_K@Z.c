/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0
 * Callers:
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0063A6C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00D72A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00D80F0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C00D82EC (GreNotifyDirtySprite.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0122858 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C025E3E4 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0052088 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0052968 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0053F20 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C0132C84 (DwmAsyncDirtySprite.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, ULONG a3, UINT_PTR a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  void *v14; // rax

  v7 = 0;
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(a2) && (a3 & 1) != 0 )
    a3 &= ~1u;
  SFMLOGICALSURFACE::bDeviceBitmap(a2);
  if ( !a3 )
    return 1LL;
  if ( bShouldUseSfmTokenArray(*((unsigned int *)a2 + 64), v8, v9, v10) )
  {
    v12 = GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)a2, a3, a4);
  }
  else
  {
    v14 = (void *)UserReferenceDwmApiPort(v11);
    v12 = DwmAsyncDirtySprite(v14, a4);
  }
  LOBYTE(v7) = v12 >= 0;
  return v7;
}
