/*
 * XREFs of DecPaintCount @ 0x1C005CB80
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 *     xxxDoPaint @ 0x1C005B83C (xxxDoPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C01141CC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ClrFTrueVis @ 0x1C0118F3C (ClrFTrueVis.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 520))-- == 1 )
  {
    *(_WORD *)(*(_QWORD *)(v1 + 400) + 6LL) &= ~0x20u;
    result = *(_QWORD *)(v1 + 400);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
