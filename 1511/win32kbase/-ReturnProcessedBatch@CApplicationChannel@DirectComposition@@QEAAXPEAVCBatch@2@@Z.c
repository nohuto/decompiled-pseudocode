/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001AC10
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001A4F8 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001A4E0 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z @ 0x1C001E03C (-ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx

  if ( *((_DWORD *)a2 + 5) == 6 )
  {
    v4 = *((_QWORD *)this + 5);
    v5 = *((_DWORD *)this + 7);
    DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(v4 + 16));
    DirectComposition::CLinearHandleTableBase::ReleaseHandle((DirectComposition::CLinearHandleTableBase *)(v4 + 24), v5);
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 16));
    KeLeaveCriticalRegion();
    DirectComposition::CBatch::`scalar deleting destructor'(a2);
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
  else
  {
    *((_DWORD *)this + 95) = *((_DWORD *)a2 + 4);
    if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
      *((_BYTE *)this + 185) = 0;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 9, (PSLIST_ENTRY)a2);
    KeSetEvent(**((PRKEVENT **)this + 20), 1, 0);
  }
}
