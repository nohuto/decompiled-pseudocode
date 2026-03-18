/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0026984 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C0101EF0 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C0101F68 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C0102010 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     GreRealizePalette @ 0x1C0111C40 (GreRealizePalette.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C011CAA0 (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B5158 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
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
