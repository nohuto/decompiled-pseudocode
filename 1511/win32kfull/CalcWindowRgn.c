/*
 * XREFs of CalcWindowRgn @ 0x1C007D1B4
 * Callers:
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007EEF8 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWindowRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v6; // r8

  v4 = a1 + 128;
  if ( !a3 )
    v4 = a1 + 112;
  SetRectRgnIndirect(a2, v4);
  v6 = *(_QWORD *)(a1 + 200);
  if ( v6 )
    return GreCombineRgn(a2, a2, v6, 1LL);
  else
    return 2LL;
}
