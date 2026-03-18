/*
 * XREFs of DecPaintCount @ 0x1C00F15F4
 * Callers:
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     xxxDoPaint @ 0x1C0055FF8 (xxxDoPaint.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ClrFTrueVis @ 0x1C007D45C (ClrFTrueVis.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007EEF8 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
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
