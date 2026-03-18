/*
 * XREFs of ?SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@VSamplerMode@@12@Z @ 0x18007A9D4
 * Callers:
 *     ?ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEAUHWDrawListCacheEntry@@MMW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@3PEAV?$DynArrayIA@UHWDrawListCacheEntry@@$03$0A@@@PEA_N@Z @ 0x18002FE7C (-ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEA.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

char __fastcall CCommonRenderingEffect::SetEffectState(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  CBitmapOfDeviceBitmaps **v6; // rbx
  __int64 v7; // rdi
  char result; // al

  v6 = (CBitmapOfDeviceBitmaps **)(a1 + 8);
  *(_DWORD *)(a1 + 32) = a2;
  v7 = 2LL;
  *(_QWORD *)(a1 + 16) = a5;
  *(_WORD *)(a1 + 24) = *(_WORD *)a4;
  *(_BYTE *)(a1 + 26) = *(_BYTE *)(a4 + 2);
  *(_WORD *)(a1 + 27) = *(_WORD *)a6;
  result = *(_BYTE *)(a6 + 2);
  *(_BYTE *)(a1 + 29) = result;
  *(_QWORD *)(a1 + 8) = a3;
  do
  {
    if ( *v6 )
      result = CBitmapOfDeviceBitmaps::AddRef(*v6);
    ++v6;
    --v7;
  }
  while ( v7 );
  return result;
}
