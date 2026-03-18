/*
 * XREFs of ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x1801214A0
 * Callers:
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18012425C (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180013858 (--1CExternalLayer@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
