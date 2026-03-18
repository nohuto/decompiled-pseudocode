/*
 * XREFs of CalcWindowRgn @ 0x1C0056EE4
 * Callers:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C01141CC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
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
