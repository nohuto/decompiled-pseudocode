/*
 * XREFs of ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001DA44
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x14001B174 (GreDeleteSpriteOverlapPresent.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x140169778 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     DxgkEngReleaseStableSprite @ 0x1401A7B00 (DxgkEngReleaseStableSprite.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1403134CC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     GreUnlockDisplayArea @ 0x1403188F8 (GreUnlockDisplayArea.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140348168 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001DA64 (--$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 */

void __fastcall SPRITERANGELOCK::vUnlockExclusive(SPRITERANGELOCK *this)
{
  if ( !*((_BYTE *)this + 8) )
    GreReleaseSemaphoreExclusive<9,HSEMAPHORE__ *>(*(_QWORD *)this);
}
