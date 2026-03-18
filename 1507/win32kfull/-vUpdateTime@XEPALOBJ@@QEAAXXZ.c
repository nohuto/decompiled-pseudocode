/*
 * XREFs of ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0013D20
 * Callers:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0013C98 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C007B930 (GreRealizeDefaultPalette.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02B074C (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreSetSystemPaletteUse @ 0x1C02B2310 (GreSetSystemPaletteUse.c)
 *     NtGdiResizePalette @ 0x1C02B26C0 (NtGdiResizePalette.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B5158 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B556C (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B5658 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
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
