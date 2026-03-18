/*
 * XREFs of ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0041738
 * Callers:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0041624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C010CB04 (GreRealizeDefaultPalette.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02AF95C (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreSetSystemPaletteUse @ 0x1C02B159C (GreSetSystemPaletteUse.c)
 *     NtGdiResizePalette @ 0x1C02B1950 (NtGdiResizePalette.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B40F8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B450C (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B45F8 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vUpdateTime(XEPALOBJ *this)
{
  signed __int32 v1; // edx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v1;
  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 136LL);
  if ( v3 != v2 )
    *(_DWORD *)(v3 + 32) = v1;
}
