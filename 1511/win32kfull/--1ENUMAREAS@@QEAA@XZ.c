/*
 * XREFs of ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EAD88
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EA480 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026E880 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026FC1C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02731B8 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0274F6C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02768F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02787F0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C027AB70 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027A158 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
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
