/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C006B748
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0023264 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z @ 0x1C002DD8C (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006B434 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C006B784 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  *((_BYTE *)this + 32) ^= (*((_BYTE *)this + 32) ^ (2 * (a2 == 0))) & 2;
  if ( (*((_BYTE *)this + 32) & 4) == 0 )
    DirectComposition::CApplicationChannel::NotifyBatchProcessed(
      *((DirectComposition::CApplicationChannel **)this + 1),
      this);
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(
    *((DirectComposition::CApplicationChannel **)this + 1),
    this);
}
