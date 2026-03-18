/*
 * XREFs of ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C0101EF0
 * Callers:
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C0101F68 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C01020F8 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 */

__int64 __fastcall XEPALOBJ::bGenColorXlate555(XEPALOBJ *this)
{
  unsigned int v2; // ebx
  unsigned __int8 *v3; // rcx
  unsigned __int8 *v4; // rcx

  v2 = 0;
  v3 = *(unsigned __int8 **)(*(_QWORD *)this + 120LL);
  if ( !v3 || v3 == gpRGBXlate )
    *(_QWORD *)(*(_QWORD *)this + 120LL) = PALLOCMEM2(0x8000uLL, 1650946631LL, 0);
  v4 = *(unsigned __int8 **)(*(_QWORD *)this + 120LL);
  if ( v4 )
  {
    MakeITable(v4, *(struct RGBX **)(*(_QWORD *)this + 128LL), *(_DWORD *)(*(_QWORD *)this + 28LL));
    v2 = 1;
    *(_DWORD *)(*(_QWORD *)this + 112LL) = XEPALOBJ::ulTime(this);
  }
  return v2;
}
