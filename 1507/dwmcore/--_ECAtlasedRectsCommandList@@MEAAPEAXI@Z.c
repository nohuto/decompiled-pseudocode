/*
 * XREFs of ??_ECAtlasedRectsCommandList@@MEAAPEAXI@Z @ 0x180013AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsCommandList@@MEAA@XZ @ 0x180013B38 (--1CAtlasedRectsCommandList@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CAtlasedRectsCommandList *__fastcall CAtlasedRectsCommandList::`vector deleting destructor'(
        CAtlasedRectsCommandList *this,
        char a2)
{
  CAtlasedRectsCommandList::~CAtlasedRectsCommandList(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAtlasedRectsCommandList *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
