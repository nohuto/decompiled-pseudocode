/*
 * XREFs of ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C003A928
 * Callers:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C003A8AC (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C01008B0 (GreRealizeDefaultPalette.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02B2338 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreSetSystemPaletteUse @ 0x1C02B443C (GreSetSystemPaletteUse.c)
 *     NtGdiResizePalette @ 0x1C02B4820 (NtGdiResizePalette.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B7258 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B765C (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B7744 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
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
  v3 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v3 != v2 )
    *(_DWORD *)(v3 + 32) = v1;
}
