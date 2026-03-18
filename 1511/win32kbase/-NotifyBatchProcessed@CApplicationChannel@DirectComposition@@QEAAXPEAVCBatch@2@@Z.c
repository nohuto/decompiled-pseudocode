/*
 * XREFs of ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001ABEC
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0011A20 (NtDCompositionConfirmFrame.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001A4F8 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::NotifyBatchProcessed(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  if ( *((_DWORD *)a2 + 5) != 6 && *((_QWORD *)this + 45) )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 46));
    if ( (*((_DWORD *)this + 42))-- == 1 )
      KeSetEvent(**((PRKEVENT **)this + 45), 1, 0);
    ExReleaseResourceLite(*((PERESOURCE *)this + 46));
    KeLeaveCriticalRegion();
  }
}
