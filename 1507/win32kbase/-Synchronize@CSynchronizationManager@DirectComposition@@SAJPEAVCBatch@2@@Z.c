/*
 * XREFs of ?Synchronize@CSynchronizationManager@DirectComposition@@SAJPEAVCBatch@2@@Z @ 0x1C0021AA4
 * Callers:
 *     NtDCompositionSynchronize @ 0x1C0010750 (NtDCompositionSynchronize.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSynchronizationManager::Synchronize(struct DirectComposition::CBatch *a1)
{
  bool v2; // zf
  unsigned __int64 v3; // rax
  struct _RTL_GENERIC_TABLE *v4; // rcx
  unsigned int v5; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive((DirectComposition::CCriticalSection *)DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  if ( *((_QWORD *)a1 + 5) )
  {
    v5 = -1073741790;
  }
  else
  {
    v2 = DirectComposition::CSynchronizationManager::s_syncIdCounter == -1LL;
    v3 = ++DirectComposition::CSynchronizationManager::s_syncIdCounter;
    if ( v2 )
    {
      v3 = 1LL;
      DirectComposition::CSynchronizationManager::s_syncIdCounter = 1LL;
    }
    v4 = DirectComposition::CSynchronizationManager::s_pSyncTable;
    *((_QWORD *)a1 + 5) = v3;
    Buffer[0] = v3;
    Buffer[1] = a1;
    v5 = RtlInsertElementGenericTable(v4, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000017 : 0;
  }
  ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  KeLeaveCriticalRegion();
  return v5;
}
