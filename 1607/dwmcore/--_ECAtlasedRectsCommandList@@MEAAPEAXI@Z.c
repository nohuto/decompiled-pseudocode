/*
 * XREFs of ??_ECAtlasedRectsCommandList@@MEAAPEAXI@Z @ 0x1800B3970
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsCommandList@@MEAA@XZ @ 0x1800B39B4 (--1CAtlasedRectsCommandList@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
