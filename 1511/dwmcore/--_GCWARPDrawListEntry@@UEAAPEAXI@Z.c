/*
 * XREFs of ??_GCWARPDrawListEntry@@UEAAPEAXI@Z @ 0x180117EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CWARPDrawListEntry@@UEAA@XZ @ 0x180117E74 (--1CWARPDrawListEntry@@UEAA@XZ.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::`scalar deleting destructor'(CWARPDrawListEntry *this, char a2)
{
  CWARPDrawListEntry::~CWARPDrawListEntry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWARPDrawListEntry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
