/*
 * XREFs of ulIndexToRGB @ 0x1C00804E0
 * Callers:
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1C00CD610 (ulColorRefToRGB.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0026F90 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall ulIndexToRGB(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  char v4; // bl
  __int64 v6; // rdx
  unsigned int v7; // r8d
  _BYTE *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h]
  HSEMAPHORE v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = a2;
  v10 = a1;
  v3 = 0;
  v4 = a3;
  if ( a1 )
    return XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&v10, a3);
  if ( a3 < 0xA )
    return *((unsigned int *)&logDefaultPal + a3 + 1);
  if ( a3 > 0xF5 )
    return *((unsigned int *)&logDefaultPal + a3 - 235);
  v12 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  v6 = *(_QWORD *)(v11 + 72);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v11 + 28);
    v8 = (_BYTE *)(v6 + 4);
    v9 = 0;
    if ( v7 )
    {
      while ( *v8 != v4 )
      {
        ++v9;
        ++v8;
        if ( v9 >= v7 )
          goto LABEL_13;
      }
      v3 = *(_DWORD *)(*(_QWORD *)(v11 + 120) + 4LL * v9);
    }
  }
LABEL_13:
  SEMOBJ::vUnlock((PERESOURCE *)&v12);
  return v3;
}
