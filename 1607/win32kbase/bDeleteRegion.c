/*
 * XREFs of bDeleteRegion @ 0x1C003A220
 * Callers:
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0059F94 (-vCleanupRegions@@YAXK@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0036950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  BOOL v1; // ebx
  struct OBJECT *v3[9]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, a1, 0, 0);
  v1 = 0;
  if ( v3[0] && !*((_DWORD *)v3[0] + 8) )
    v1 = RGNOBJAPI::bDeleteRGNOBJAPI(v3) != 0;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
  return v1;
}
