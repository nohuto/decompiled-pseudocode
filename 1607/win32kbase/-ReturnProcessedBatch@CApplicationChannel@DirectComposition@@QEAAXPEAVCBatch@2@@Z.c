/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C003EC6C
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018540 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001AE60 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001AE48 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C003BF50 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  __int64 v4; // rdi
  int v5; // ebx

  if ( *((_DWORD *)a2 + 5) == 6 )
  {
    v4 = *((_QWORD *)this + 5);
    v5 = *((_DWORD *)this + 7);
    DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(v4 + 16));
    DirectComposition::CLinearObjectTableBase::ReleaseHandle((DirectComposition::CLinearObjectTableBase *)(v4 + 24), v5);
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 16));
    KeLeaveCriticalRegion();
    DirectComposition::CBatch::`scalar deleting destructor'(a2);
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
  else
  {
    *((_DWORD *)this + 97) = *((_DWORD *)a2 + 4);
    if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
      *((_BYTE *)this + 249) = 0;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 13, (PSLIST_ENTRY)a2);
    KeSetEvent(**((PRKEVENT **)this + 28), 1, 0);
  }
}
