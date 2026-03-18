/*
 * XREFs of ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800AE4BC
 * Callers:
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AE584 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B280 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800AE21C (-UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z.c)
 */

void __fastcall CFlipChain::MarkBufferComplete(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 152) && *(_DWORD *)(a1 + 104) )
  {
    CBitmapOfDeviceBitmaps::AddUpdateRect(**(_QWORD **)(a1 + 128), a3, a4);
    if ( (unsigned int)a2 <= *(_DWORD *)(a1 + 176) )
      --*(_DWORD *)(a1 + 104);
    else
      CFlipChain::UpdateBufferState(a1, v6, a5, a2);
  }
}
