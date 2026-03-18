/*
 * XREFs of ??_GCWARPDrawListEntry@@UEAAPEAXI@Z @ 0x1800FF0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CWARPDrawListEntry@@UEAA@XZ @ 0x1800FF078 (--1CWARPDrawListEntry@@UEAA@XZ.c)
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
