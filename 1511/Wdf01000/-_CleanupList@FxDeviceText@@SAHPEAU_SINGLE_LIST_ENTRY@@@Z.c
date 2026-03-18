/*
 * XREFs of ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C006A6F4
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C00840B8 (--1FxPkgPdo@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0063598 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 */

FxDeviceText *__fastcall FxDeviceText::_CleanupList(_SINGLE_LIST_ENTRY *Head)
{
  FxDeviceText *Next; // rcx
  FxDeviceText *result; // rax

  Next = (FxDeviceText *)Head->Next;
  if ( Next )
  {
    Next->m_Entry.Next = 0LL;
    result = FxDeviceText::`scalar deleting destructor'(Next);
  }
  Head->Next = 0LL;
  return result;
}
