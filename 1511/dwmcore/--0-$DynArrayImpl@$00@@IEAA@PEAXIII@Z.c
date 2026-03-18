/*
 * XREFs of ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A18D0
 * Callers:
 *     ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x180068A88 (--0-$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ.c)
 *     ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x180068D3C (--0-$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180085C48 (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18008BC0C (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??0?$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ @ 0x1800A18A4 (--0-$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ.c)
 *     ??0CAnalogCompositorClient@@QEAA@XZ @ 0x1800B4C98 (--0CAnalogCompositorClient@@QEAA@XZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800B4CF8 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801299E4 (--0CExpression@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::DynArrayImpl<1>(__int64 a1, void *a2, int a3, __int64 a4, int a5)
{
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a3;
  if ( a2 )
    memset_0(a2, 0, (unsigned int)(a5 * a3));
  return a1;
}
