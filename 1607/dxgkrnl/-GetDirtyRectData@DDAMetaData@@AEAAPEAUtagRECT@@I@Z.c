/*
 * XREFs of ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C0181178
 * Callers:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0180A80 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C0180DF8 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C0180F18 (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C01810A0 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C01811A0 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01826F0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

struct tagRECT *__fastcall DDAMetaData::GetDirtyRectData(void ***this, int a2)
{
  struct tagRECT *result; // rax

  result = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(this[4], 16 * a2 + 36, 1);
  if ( result )
    result += 2;
  return result;
}
