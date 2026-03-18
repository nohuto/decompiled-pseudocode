/*
 * XREFs of ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x18010B020
 * Callers:
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18010DDEC (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180010BE4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CClippedBitmapLayer *__fastcall CClippedBitmapLayer::`scalar deleting destructor'(CClippedBitmapLayer *this, char a2)
{
  *(_QWORD *)this = &CClippedBitmapLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CClippedBitmapLayer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
