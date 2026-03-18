/*
 * XREFs of CalcWindowRgn @ 0x1C00912AC
 * Callers:
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EB40C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
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
