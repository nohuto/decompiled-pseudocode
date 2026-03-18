/*
 * XREFs of ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x180032330
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800322A8 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 */

CHwBitmapColorSource *__fastcall CHwBitmapColorSource::`scalar deleting destructor'(
        CHwBitmapColorSource *this,
        char a2)
{
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwBitmapColorSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
