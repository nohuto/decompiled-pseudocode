/*
 * XREFs of ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C0020770
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C001DB90 (NtDCompositionConfirmFrame.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C002FC9C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002FE20 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C006B7A8 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CBatch *__fastcall DirectComposition::CBatch::`scalar deleting destructor'(
        DirectComposition::CBatch *this)
{
  Win32FreePool(this);
  return this;
}
