/*
 * XREFs of ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00E4240
 * Callers:
 *     NtDCompositionSyncWait @ 0x1C00E3960 (NtDCompositionSyncWait.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C001AC78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EBDC (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
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
  if ( DirectComposition::CBatch::GetPayloadWritePointer(v6[23], 0x14uLL, &v10) )
  {
    v7 = v10;
    *(_DWORD *)v10 = 20;
    v7[1] = 19;
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
