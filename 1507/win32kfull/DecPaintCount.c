/*
 * XREFs of DecPaintCount @ 0x1C00EB508
 * Callers:
 *     ClrFTrueVis @ 0x1C008101C (ClrFTrueVis.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     xxxDoPaint @ 0x1C008FE9C (xxxDoPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00DF69C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EB40C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 528))-- == 1 )
  {
    *(_WORD *)(*(_QWORD *)(v1 + 408) + 6LL) &= ~0x20u;
    result = *(_QWORD *)(v1 + 408);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
