/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C6C4
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C001A040 (NtDCompositionSubmitDWMBatch.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001ABC8 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0075184 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 * Callees:
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C001A20C (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C001C64C (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0073924 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00D74CC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  struct DirectComposition::CBatch *v4; // rsi
  DirectComposition::CBatchSharedMemoryPool **v7; // r14
  __int64 v8; // rax
  int v9; // r10d
  DirectComposition::CBatchSharedMemoryPool *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r15
  DirectComposition::CBatchSharedMemoryPool **v13; // rax
  DirectComposition::CBatchSharedMemoryPool *v14; // rcx
  DirectComposition::CBatchSharedMemoryPool *v15; // rax
  DirectComposition::CBatchSharedMemoryPool *v16; // rcx
  __int64 v17; // rax
  int v18; // ebp
  unsigned __int64 v20[9]; // [rsp+20h] [rbp-48h] BYREF
  struct DirectComposition::CBatch *v21; // [rsp+70h] [rbp+8h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  if ( *((_QWORD *)this + 15) )
  {
    v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
LABEL_37:
    if ( v4 )
    {
      *(_QWORD *)v4 = 0LL;
      if ( a2 )
      {
        *((_DWORD *)v4 + 4) = ++*((_DWORD *)this + 94);
        ++*((_DWORD *)this + 43);
        *((_BYTE *)this + 184) |= 8u;
        if ( *((_QWORD *)this + 45) )
        {
          DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 46));
          if ( ++*((_DWORD *)this + 42) == 1 )
            KeResetEvent(**((PRKEVENT **)this + 45));
          ExReleaseResourceLite(*((PERESOURCE *)this + 46));
          KeLeaveCriticalRegion();
        }
      }
    }
    return v4;
  }
  v7 = (DirectComposition::CBatchSharedMemoryPool **)((char *)this + 608);
LABEL_4:
  v8 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
  v20[0] = 0LL;
  v9 = 0;
  v22 = 0LL;
  v10 = *v7;
  v11 = v8 + 40;
  while ( 1 )
  {
    if ( v10 == (DirectComposition::CBatchSharedMemoryPool *)v7 )
    {
      if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                  (DirectComposition::CApplicationChannel *)((char *)this + 608),
                  *((_BYTE *)this + 632),
                  &v22) >= 0 )
      {
        v10 = v22;
        DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v22, v11, v20);
        v16 = *v7;
        *(_QWORD *)v10 = *v7;
        *((_QWORD *)v10 + 1) = v7;
        if ( *((DirectComposition::CBatchSharedMemoryPool ***)v16 + 1) != v7 )
          __fastfail(3u);
        v12 = v20[0];
        *((_QWORD *)v16 + 1) = v10;
        goto LABEL_17;
      }
LABEL_18:
      if ( !a3 )
        return v4;
      DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
      goto LABEL_4;
    }
    if ( !*((_BYTE *)v10 + 64) && v11 <= 4096LL - *((_QWORD *)v10 + 5) )
      break;
    v10 = *(DirectComposition::CBatchSharedMemoryPool **)v10;
  }
  v12 = *((_QWORD *)v10 + 5);
  *((_BYTE *)v10 + 64) = 1;
  v13 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v10 + 1);
  if ( v13 == v7 )
    goto LABEL_22;
  v14 = *(DirectComposition::CBatchSharedMemoryPool **)v10;
  if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v10 + 8LL) != v10 || *v13 != v10 )
    __fastfail(3u);
  *v13 = v14;
  *((_QWORD *)v14 + 1) = v13;
  v15 = *v7;
  *(_QWORD *)v10 = *v7;
  *((_QWORD *)v10 + 1) = v7;
  if ( *((DirectComposition::CBatchSharedMemoryPool ***)v15 + 1) != v7 )
    __fastfail(3u);
  *((_QWORD *)v15 + 1) = v10;
LABEL_17:
  *v7 = v10;
  if ( v9 < 0 )
    goto LABEL_18;
LABEL_22:
  if ( v10 )
  {
    v17 = *((_QWORD *)v10 + 5);
    if ( (unsigned __int64)(4096 - v17) >= 0x28 )
      *((_QWORD *)v10 + 5) = v17 + 40;
    v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
    if ( v4 )
    {
      *((_QWORD *)this + 17) = *(_QWORD *)v4;
    }
    else
    {
      do
      {
        v18 = DirectComposition::CApplicationChannel::CreateBatch(this, &v21);
        if ( v18 < 0
          && *((int *)this + 43) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
          v18 = 0;
          v21 = v4;
          *((_QWORD *)this + 17) = *(_QWORD *)v4;
        }
        else
        {
          v4 = v21;
        }
      }
      while ( a3 && v18 < 0 );
    }
    if ( v4 )
    {
      *((_QWORD *)v4 + 12) = v10;
      *((_QWORD *)v4 + 13) = v12;
    }
    else
    {
      *((_BYTE *)v10 + 64) = 0;
    }
    goto LABEL_37;
  }
  return v4;
}
