/*
 * XREFs of ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02CC740
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015C68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0015E4C (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 */

__int64 __fastcall bBrushPathN_8x8(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  void (*v7)(struct _RECTL *, unsigned int, void *); // r10
  void (*v8)(int, struct _ROW *, unsigned int, void *); // r11
  _BYTE v10[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]

  v7 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath4_8x8Enum;
  v11 = *((_QWORD *)a1 + 10);
  v8 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath4_8x8EnumRow;
  v13 = *((_DWORD *)a1 + 22);
  v12 = *((_QWORD *)a4[1].pvRbrush + 4);
  v14 = a5->x & 7;
  v15 = a5->y & 7;
  if ( a6 == 3 )
  {
    v7 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath8_8x8Enum;
    v8 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath8_8x8EnumRow;
  }
  return bEngFastFillEnum((struct EPATHOBJ *)a2, a3, a7, v7, v8, v10);
}
