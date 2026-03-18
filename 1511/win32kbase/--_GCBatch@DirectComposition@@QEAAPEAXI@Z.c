/*
 * XREFs of ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001A4E0
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0011A20 (NtDCompositionConfirmFrame.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001AC10 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C001CE2C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001CFF0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CBatch *__fastcall DirectComposition::CBatch::`scalar deleting destructor'(
        DirectComposition::CBatch *this)
{
  Win32FreePool(this);
  return this;
}
