/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C002FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011648 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C0011698 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C0011778 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C54 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C00232E8 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C0023530 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Create@CSemaphore@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C002405C (-Create@CSemaphore@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C002F2C4 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(DirectComposition::CApplicationChannel *this)
{
  int Batch; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned int CurrentProcessId; // eax
  __int64 v6; // rcx
  int v7; // eax
  struct DirectComposition::CBatchSharedMemoryPool *v9; // [rsp+38h] [rbp+10h] BYREF

  Batch = DirectComposition::CChannel::Initialize(this);
  if ( Batch >= 0 )
  {
    Batch = DirectComposition::CSemaphore::Create((struct DirectComposition::CSemaphore **)this + 20);
    if ( Batch >= 0 )
    {
      Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
                (DirectComposition::CApplicationChannel *)((char *)this + 608),
                2uLL);
      if ( Batch >= 0 )
      {
        DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
          (DirectComposition::CApplicationChannel *)((char *)this + 608),
          v3,
          (struct DirectComposition::CBatchSharedMemoryPool **)this + 80,
          (unsigned __int64 *)this + 81);
        DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
          (DirectComposition::CApplicationChannel *)((char *)this + 608),
          v4,
          &v9,
          (unsigned __int64 *)this + 82);
        Batch = DirectComposition::CApplicationChannel::CreateBatch(
                  this,
                  (struct DirectComposition::CBatch **)this + 17);
        if ( Batch >= 0 )
        {
          Batch = DirectComposition::CApplicationChannel::CreateBatch(
                    this,
                    (struct DirectComposition::CBatch **)this + 16);
          if ( Batch >= 0 )
          {
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            v6 = *((_QWORD *)this + 5);
            *((_DWORD *)this + 171) = CurrentProcessId;
            DirectComposition::CCriticalSection::AcquireShared(*(struct _ERESOURCE **)(v6 + 8));
            v7 = DirectComposition::CConnection::RegisterChannel(
                   *((struct _ERESOURCE ***)this + 5),
                   this,
                   (unsigned int *)this + 7);
            Batch = v7;
            if ( v7 < 0 )
            {
              if ( v7 == -1073741300 )
              {
                *((_DWORD *)this + 6) = 3;
                Batch = 0;
              }
            }
            else
            {
              DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
                (DirectComposition::CApplicationChannel *)((char *)this + 608),
                *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 232LL));
              *((_DWORD *)this + 6) = 0;
            }
            ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
            KeLeaveCriticalRegion();
          }
        }
      }
    }
  }
  return (unsigned int)Batch;
}
