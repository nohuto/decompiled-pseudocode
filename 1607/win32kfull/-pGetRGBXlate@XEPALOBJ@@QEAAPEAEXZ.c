/*
 * XREFs of ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C0136724
 * Callers:
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0136668 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C003A910 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C01366B0 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 */

unsigned __int8 *__fastcall XEPALOBJ::pGetRGBXlate(XEPALOBJ *this)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v4; // r8

  v1 = 0LL;
  if ( *(_QWORD *)this )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 112LL) || (v3 = XEPALOBJ::ulTime(this), *(_DWORD *)(v4 + 104) != v3) )
    {
      if ( (unsigned int)XEPALOBJ::bGenColorXlate555(this) )
        return *(unsigned __int8 **)(*(_QWORD *)this + 112LL);
      else
        return 0LL;
    }
  }
  return (unsigned __int8 *)v1;
}
