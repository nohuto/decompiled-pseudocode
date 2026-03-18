/*
 * XREFs of ulIndexToRGB @ 0x1C0017BD0
 * Callers:
 *     GreGetNearestColor @ 0x1C0025760 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1C00BFE80 (ulColorRefToRGB.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C003ACC0 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 */

unsigned int __fastcall ulIndexToRGB(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  char v4; // bl
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h]
  HSEMAPHORE v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  v9 = a1;
  v3 = 0;
  v4 = a3;
  if ( a1 )
    return XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&v9, a3);
  if ( a3 < 0xA )
    return *((_DWORD *)&logDefaultPal + a3 + 1);
  if ( a3 > 0xF5 )
    return *((_DWORD *)&logDefaultPal + a3 - 235);
  v11 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  v7 = *(_QWORD *)(v10 + 72);
  if ( v7 )
  {
    v6 = *(unsigned int *)(v10 + 28);
    v7 += 4LL;
    v8 = 0;
    if ( (_DWORD)v6 )
    {
      while ( *(_BYTE *)v7 != v4 )
      {
        ++v8;
        ++v7;
        if ( v8 >= (unsigned int)v6 )
          goto LABEL_13;
      }
      v7 = v8;
      v3 = *(_DWORD *)(*(_QWORD *)(v10 + 128) + 4LL * v8);
    }
  }
LABEL_13:
  SEMOBJ::vUnlock((SEMOBJ *)&v11, v7, v6);
  return v3;
}
