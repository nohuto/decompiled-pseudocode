/*
 * XREFs of ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02AB15C
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02ACAB0 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1C02ADB60 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02AE150 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02AE4B0 (NtGdiEngPaint.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AF350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AF6D0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AF9F0 (NtGdiEngTextOut.c)
 * Callees:
 *     <none>
 */

struct _BRUSHOBJ *__fastcall CaptureAndFakeBRUSHOBJ(struct _BRUSHOBJ *a1, struct _BRUSHOBJ *a2)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (struct _BRUSHOBJ *)W32UserProbeAddress;
  *a2 = *a1;
  if ( a2 && a2->iSolidColor == -1 )
    return 0LL;
  a2->pvRbrush = 0LL;
  return a2;
}
