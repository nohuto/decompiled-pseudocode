/*
 * XREFs of ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00051C0
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CD878 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00CDAB4 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 */

__int64 __fastcall bBrushPath(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  _QWORD *pvRbrush; // rcx
  __int64 v12; // rsi
  unsigned int v13; // r9d
  LONG y; // r10d
  int v15; // r11d
  unsigned int v16; // r8d
  __int64 v17; // rcx
  _QWORD v19[4]; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+54h] [rbp-2Ch]
  unsigned int v22; // [rsp+60h] [rbp-20h]
  unsigned int v23; // [rsp+64h] [rbp-1Ch]
  unsigned int v24; // [rsp+68h] [rbp-18h]
  unsigned int v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)(*((_DWORD *)a1 + 24) - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fastfill.cxx:%d:bBrushPath:Invalid surface format.\n", 248);
    return 0LL;
  }
  else
  {
    pvRbrush = a4[1].pvRbrush;
    v12 = *((unsigned int *)a1 + 24);
    v19[2] = *((_QWORD *)a1 + 10);
    v20 = *((_DWORD *)a1 + 22);
    v26 = *((_DWORD *)&aulMulFormat + v12);
    v19[3] = pvRbrush[4];
    v21 = *((_DWORD *)pvRbrush + 7);
    v13 = v26 * *((_DWORD *)pvRbrush + 5);
    y = a5->y;
    v15 = v26 * a5->x;
    v24 = v13;
    v16 = *((_DWORD *)pvRbrush + 6);
    v25 = v16;
    v23 = y;
    v22 = v15;
    if ( v15 < 0 )
      v22 = v13 - (-1 - v15) % v13 - 1;
    if ( y < 0 )
      v23 = v16 - (-1 - y) % v16 - 1;
    v17 = a6 + 3 * v12;
    v19[0] = *(&apfnPatBlt + v17);
    v19[1] = *(&apfnPatRow + v17);
    return bEngFastFillEnum(
             (struct EPATHOBJ *)a2,
             a3,
             a7,
             (void (*)(struct _RECTL *, unsigned int, void *))vBrushPathEnum,
             (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPathEnumRow,
             v19);
  }
}
