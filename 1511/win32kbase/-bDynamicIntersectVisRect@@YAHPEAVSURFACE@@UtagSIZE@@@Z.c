/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00864A0
 * Callers:
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C005B0C0 (HmgSafeNextObjt.c)
 *     GreIntersectVisRect @ 0x1C00BF800 (GreIntersectVisRect.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  HDC v3; // rdi
  __int64 Objt; // rax
  LONG cy; // [rsp+4Ch] [rbp+14h]

  cy = a2.cy;
  LOWORD(v3) = 0;
  do
  {
    Objt = HmgSafeNextObjt((unsigned __int16)v3, 1);
    if ( !Objt )
      return 1LL;
    v3 = *(HDC *)Objt;
  }
  while ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0
       || *(struct SURFACE **)(Objt + 512) != a1
       || !*(_QWORD *)(Objt + 1512)
       || (unsigned int)GreIntersectVisRect(v3, cy) );
  return 0LL;
}
