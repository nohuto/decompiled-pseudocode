/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0041720
 * Callers:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0044040 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C012CF80 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C012CFF8 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C012D0A0 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     GreRealizePalette @ 0x1C013C7E0 (GreRealizePalette.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B40F8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 136LL);
  if ( v2 == v1 )
    return *(unsigned int *)(v1 + 32);
  else
    return *(unsigned int *)(v2 + 32);
}
