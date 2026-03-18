/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C001CD00
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0013A40 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C001C64C (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C001E1C0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00737BC (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C007380C (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C00738EC (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z @ 0x1C00D6F68 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(DirectComposition::CApplicationChannel *this)
{
  enum _EVENT_TYPE v2; // ecx
  int Batch; // edi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned int CurrentProcessId; // eax
  __int64 v7; // rcx
  int v8; // eax
  struct DirectComposition::CBatchSharedMemoryPool *v10; // [rsp+38h] [rbp+10h] BYREF

  Batch = DirectComposition::CChannel::Initialize(this);
  if ( Batch >= 0 )
  {
    Batch = DirectComposition::CEvent::Create(v2, (struct DirectComposition::CEvent **)this + 20);
    if ( Batch >= 0 )
    {
      Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
                (DirectComposition::CApplicationChannel *)((char *)this + 608),
                2uLL);
      if ( Batch >= 0 )
      {
        DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
          (DirectComposition::CApplicationChannel *)((char *)this + 608),
          v4,
          (struct DirectComposition::CBatchSharedMemoryPool **)this + 80,
          (unsigned __int64 *)this + 81);
        DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
          (DirectComposition::CApplicationChannel *)((char *)this + 608),
          v5,
          &v10,
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
            v7 = *((_QWORD *)this + 5);
            *((_DWORD *)this + 171) = CurrentProcessId;
            DirectComposition::CCriticalSection::AcquireShared(*(DirectComposition::CCriticalSection **)(v7 + 8));
            v8 = DirectComposition::CConnection::RegisterChannel(
                   *((DirectComposition::CCriticalSection ***)this + 5),
                   this,
                   (unsigned int *)this + 7);
            Batch = v8;
            if ( v8 < 0 )
            {
              if ( v8 == -1073741300 )
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
