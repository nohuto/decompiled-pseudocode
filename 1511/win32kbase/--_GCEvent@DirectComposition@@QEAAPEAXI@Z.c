/*
 * XREFs of ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007B5CC
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0013638 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C001CE2C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001DB5C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C0079AF0 (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z @ 0x1C00D6F68 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void **__fastcall DirectComposition::CEvent::`scalar deleting destructor'(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
    ObfDereferenceObject(v2);
  Win32FreePool();
  return this;
}
