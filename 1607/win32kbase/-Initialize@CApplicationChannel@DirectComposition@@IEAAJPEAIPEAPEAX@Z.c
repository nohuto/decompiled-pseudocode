/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C0041DA0
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000D5B4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0079F60 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00803E0 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1C0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0019228 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00417CC (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00424F0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0042718 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C0042768 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C004284C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z @ 0x1C007A314 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  enum _EVENT_TYPE v7; // ecx
  NTSTATUS Batch; // ebx
  __int64 v9; // rcx
  void *CurrentProcess; // rax
  int v11; // eax
  unsigned int v12; // eax
  PVOID *v13; // rsi
  __int64 v14; // rdx
  PVOID v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v21; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 176) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = (void *)PsGetCurrentProcess(v9);
    *((_QWORD *)this + 87) = CurrentProcess;
    Batch = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v11 = *((_DWORD *)this + 180);
  if ( !v11 )
    goto LABEL_11;
  if ( Batch >= 0 )
  {
    v12 = (v11 + 4095) & 0xFFFFF000;
    *((_DWORD *)this + 180) = v12;
    if ( !v12 )
      Batch = -1073741801;
    if ( Batch >= 0 )
    {
      v13 = (PVOID *)((char *)this + 712);
      v23 = v12;
      Batch = MmCreateSection((char *)this + 712, 6LL, 0LL, &v23, 4, 138412032, 0LL, 0LL);
      if ( Batch >= 0 )
      {
        Batch = MmMapViewInSessionSpace(*v13, (PVOID *)this + 91, &ViewSize);
        if ( Batch >= 0 )
        {
          v14 = *((_QWORD *)this + 87);
          v15 = *v13;
          v20 = 0LL;
          Batch = ((__int64 (__fastcall *)(PVOID, __int64, char *, _QWORD, _QWORD, __int64 *, ULONG_PTR *, int, int, int))MmMapViewOfSection)(
                    v15,
                    v14,
                    (char *)this + 736,
                    0LL,
                    *((unsigned int *)this + 180),
                    &v20,
                    &ViewSize,
                    2,
                    0x400000,
                    4);
LABEL_11:
          if ( Batch >= 0 )
          {
            Batch = DirectComposition::CEvent::Create(v7, (struct DirectComposition::CEvent **)this + 28);
            if ( Batch >= 0 )
            {
              Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
                        (DirectComposition::CApplicationChannel *)((char *)this + 616),
                        2uLL);
              if ( Batch >= 0 )
              {
                DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
                  (DirectComposition::CApplicationChannel *)((char *)this + 616),
                  v16,
                  (struct DirectComposition::CBatchSharedMemoryPool **)this + 81,
                  (unsigned __int64 *)this + 82);
                DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
                  (DirectComposition::CApplicationChannel *)((char *)this + 616),
                  v17,
                  &v21,
                  (unsigned __int64 *)this + 83);
                Batch = DirectComposition::CApplicationChannel::CreateBatch(
                          this,
                          (struct DirectComposition::CBatch **)this + 25);
                if ( Batch >= 0 )
                {
                  Batch = DirectComposition::CApplicationChannel::CreateBatch(
                            this,
                            (struct DirectComposition::CBatch **)this + 24);
                  if ( Batch >= 0 )
                  {
                    DirectComposition::CCriticalSection::AcquireShared(*(struct _ERESOURCE **)(*((_QWORD *)this + 5)
                                                                                             + 8LL));
                    v18 = DirectComposition::CConnection::RegisterChannel(
                            *((struct _ERESOURCE ***)this + 5),
                            this,
                            (unsigned int *)this + 7);
                    Batch = v18;
                    if ( v18 < 0 )
                    {
                      if ( v18 == -1073741300 )
                      {
                        *((_DWORD *)this + 6) = 3;
                        Batch = 0;
                      }
                    }
                    else
                    {
                      DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
                        (DirectComposition::CApplicationChannel *)((char *)this + 616),
                        *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 232LL));
                      *((_DWORD *)this + 6) = 0;
                    }
                    ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
                    KeLeaveCriticalRegion();
                    if ( Batch >= 0 )
                    {
                      if ( a2 )
                        *a2 = *((_DWORD *)this + 180);
                      if ( a3 )
                        *a3 = (void *)*((_QWORD *)this + 92);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)Batch;
}
