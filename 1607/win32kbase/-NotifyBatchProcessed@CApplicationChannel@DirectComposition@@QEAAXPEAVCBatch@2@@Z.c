/*
 * XREFs of ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C003EC08
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018540 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0018A58 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001AE60 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::NotifyBatchProcessed(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  if ( *((_DWORD *)a2 + 5) != 6 && *((_QWORD *)this + 46) )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 47));
    if ( (*((_DWORD *)this + 58))-- == 1 )
      KeSetEvent(**((PRKEVENT **)this + 46), 1, 0);
    ExReleaseResourceLite(*((PERESOURCE *)this + 47));
    KeLeaveCriticalRegion();
  }
}
