/*
 * XREFs of ??1ENUMAREAS@@QEAA@XZ @ 0x1C0103C74
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0102D80 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026CD50 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026E0F0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271710 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C02734C0 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C027492C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0274E3C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0276D38 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02790C0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02786A8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall ENUMAREAS::~ENUMAREAS(ENUMAREAS *this)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(*((_QWORD *)this + 11) + 1088LL); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_DWORD *)(i + 80) < *((_DWORD *)this + 7)
      && *(_DWORD *)(i + 84) < *((_DWORD *)this + 8)
      && *(_DWORD *)(i + 88) > *((_DWORD *)this + 5)
      && *(_DWORD *)(i + 92) > *((_DWORD *)this + 6) )
    {
      SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(i + 248));
    }
    if ( i == *(_QWORD *)(*((_QWORD *)this + 11) + 1096LL) )
      break;
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(*((_QWORD *)this + 11) + 128LL));
}
