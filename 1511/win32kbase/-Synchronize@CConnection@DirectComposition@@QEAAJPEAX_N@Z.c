/*
 * XREFs of ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00D6BA8
 * Callers:
 *     NtDCompositionSyncWait @ 0x1C00D61E0 (NtDCompositionSyncWait.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C001A314 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001ABC8 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C001DADC (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
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
    v7[1] = 18;
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
