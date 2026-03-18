/*
 * XREFs of ??_GCAtlasedRects@@MEAAPEAXI@Z @ 0x180113140
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x1800253CC (--1CAtlasedRects@@MEAA@XZ.c)
 */

CAtlasedRects *__fastcall CAtlasedRects::`scalar deleting destructor'(CAtlasedRects *this, char a2)
{
  CAtlasedRects::~CAtlasedRects(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAtlasedRects *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
