/*
 * XREFs of ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C000DE28
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001ACA8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(
        struct DirectComposition::CBatch *a1)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  PVOID v3; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive((DirectComposition::CCriticalSection *)DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  v2 = DirectComposition::CSynchronizationManager::s_pSyncTable;
  Buffer[0] = *((_QWORD *)a1 + 5);
  Buffer[1] = 0LL;
  v3 = RtlLookupElementGenericTable(DirectComposition::CSynchronizationManager::s_pSyncTable, Buffer);
  if ( v3 )
    RtlDeleteElementGenericTable(v2, v3);
  ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  KeLeaveCriticalRegion();
}
