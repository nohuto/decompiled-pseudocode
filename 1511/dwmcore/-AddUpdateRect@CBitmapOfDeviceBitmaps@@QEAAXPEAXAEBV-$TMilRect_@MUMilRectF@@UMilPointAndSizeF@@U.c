/*
 * XREFs of ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B280
 * Callers:
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800AE4BC (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008AC64 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x18008D6E8 (-IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV-$TMilRect_@HUtagRECT@@UMilPo.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::AddUpdateRect(__int64 a1, int a2, __int64 a3)
{
  LONG v3; // eax
  struct tagRECT v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 184);
  v6.left = 0;
  v6.top = 0;
  v6.right = v3;
  v6.bottom = *(_DWORD *)(a1 + 188);
  if ( (unsigned __int8)IntersectAliasedBoundsRectFWithSurfaceRect(a3, &v6, &v6) )
    CBitmapOfDeviceBitmaps::AddUpdateRect(a1, a2, &v6);
}
