/*
 * XREFs of ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00D4D9C
 * Callers:
 *     NtDCompositionSyncWait @ 0x1C00D44F0 (NtDCompositionSyncWait.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C00205A4 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002DA00 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C0030914 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Synchronize(
        DirectComposition::CConnection *this,
        void *a2,
        unsigned __int8 a3)
{
  DirectComposition::CBatchSharedMemoryPool ***v6; // rbx
  _DWORD *v7; // rdx
  unsigned int v8; // ebx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  v6 = (DirectComposition::CBatchSharedMemoryPool ***)*((_QWORD *)this + 19);
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)v6);
  if ( DirectComposition::CBatch::GetPayloadWritePointer(v6[15], 0x14uLL, &v10) )
  {
    v7 = v10;
    *(_DWORD *)v10 = 20;
    v7[1] = 17;
    *((_QWORD *)v7 + 1) = a2;
    v7[4] = a3;
    v8 = DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)v6, 0LL, 1);
  }
  else
  {
    v8 = -1073741823;
  }
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v8;
}
