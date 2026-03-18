/*
 * XREFs of ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00E64E8
 * Callers:
 *     EngFillPath @ 0x1C00E6210 (EngFillPath.c)
 * Callees:
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0009284 (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C00E660C (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00E6FE0 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02C8F00 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 */

__int64 __fastcall EngFastFill(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v11; // ebp
  unsigned int *v12; // rsi
  int v13; // edx
  ULONG iSolidColor; // r9d
  unsigned int v17; // ecx
  _DWORD *pvRbrush; // rax

  v11 = -1;
  v12 = (unsigned int *)SURFOBJ_TO_SURFACE(a1);
  if ( !a1->iType )
  {
    v13 = gaMix[a6 & 0xF] | (gaMix[(a6 >> 8) & 0xF] << 8);
    switch ( v13 )
    {
      case 0:
        iSolidColor = 0;
        return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
      case 0xF0F0:
        iSolidColor = a4->iSolidColor;
        if ( a4->iSolidColor != -1 )
          return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
        v17 = v12[24];
        if ( v17 - 2 <= 1 )
        {
          if ( pvGetEngRbrush(a4) )
          {
            pvRbrush = a4[1].pvRbrush;
            if ( pvRbrush[5] == 8 && pvRbrush[6] == 8 )
              return (unsigned int)bBrushPathN_8x8((struct SURFACE *)v12, a2, a3, a4, a5, v12[24], a7);
          }
        }
        else if ( v17 >= 3 && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
        {
          return (unsigned int)bBrushPath((struct SURFACE *)v12, a2, a3, a4, a5, 0, a7);
        }
        break;
      case 0xF0F:
        if ( a4->iSolidColor != -1 )
        {
          iSolidColor = ~a4->iSolidColor;
          return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
        }
        if ( v12[24] >= 3 && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
          return (unsigned int)bBrushPath((struct SURFACE *)v12, a2, a3, a4, a5, 1u, a7);
        break;
      case 0x5555:
        return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, 0xFFFFFFFF, 1, a7);
      case 0x5A5A:
        if ( a4->iSolidColor != -1 )
          return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, a4->iSolidColor, 1, a7);
        if ( v12[24] >= 3 && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
          return (unsigned int)bBrushPath((struct SURFACE *)v12, a2, a3, a4, a5, 2u, a7);
        break;
      case 0xAAAA:
        return 1;
      case 0xFFFF:
        iSolidColor = -1;
        return (unsigned int)bPaintPath((struct SURFACE *)v12, a2, a3, iSolidColor, 0, a7);
    }
  }
  return v11;
}
