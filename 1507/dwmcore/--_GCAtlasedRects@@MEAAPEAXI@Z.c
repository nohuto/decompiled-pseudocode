/*
 * XREFs of ??_GCAtlasedRects@@MEAAPEAXI@Z @ 0x1800F9030
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x180070B50 (--1CAtlasedRects@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
