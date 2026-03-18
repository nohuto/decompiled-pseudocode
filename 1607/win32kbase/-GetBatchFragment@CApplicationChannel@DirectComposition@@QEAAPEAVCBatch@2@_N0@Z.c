/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0041844
 * Callers:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EBDC (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0041A44 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_K@Z @ 0x1C00428E0 (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_K@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0078C0C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001ACA8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C003DBC8 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00417CC (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C004261C (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  struct DirectComposition::CBatch *v3; // rdi
  PRKEVENT *v5; // rcx
  PSLIST_ENTRY v8; // rax
  DirectComposition::CBatch *v9; // rsi
  struct DirectComposition::CBatch *v10; // rax
  __int64 v11; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v15; // rax
  int v16; // ebp
  unsigned __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF
  struct DirectComposition::CBatch *v18; // [rsp+60h] [rbp+8h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = (PRKEVENT *)*((_QWORD *)this + 28);
  v19 = 0LL;
  v17[0] = 0LL;
  v18 = 0LL;
  KeResetEvent(*v5);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
    v9 = (DirectComposition::CBatch *)v8;
    if ( !v8 )
      break;
    --*((_DWORD *)this + 59);
    v15 = *((_QWORD *)&v8[4].Next + 1);
    if ( v15 > *((_QWORD *)this + 30) )
    {
      *((_BYTE *)this + 248) |= 2u;
      *((_QWORD *)this + 30) = v15;
    }
    DirectComposition::CBatch::Clear(v9);
    *(_QWORD *)v9 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = v9;
  }
  v10 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    *((_QWORD *)this + 23) = 0LL;
    v3 = v10;
  }
  else
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
      if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                  (DirectComposition::CApplicationChannel *)((char *)this + 616),
                  v11 + 40,
                  &v19,
                  v17) >= 0
        || !a3 )
      {
        break;
      }
      DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
    }
    v12 = v19;
    if ( !v19 )
      return v3;
    v13 = *((_QWORD *)v19 + 5);
    if ( (unsigned __int64)(4096 - v13) >= 0x28 )
      *((_QWORD *)v19 + 5) = v13 + 40;
    v3 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 25);
    if ( v3 )
    {
      *((_QWORD *)this + 25) = *(_QWORD *)v3;
    }
    else
    {
      do
      {
        v16 = DirectComposition::CApplicationChannel::CreateBatch(this, &v18);
        if ( v16 < 0
          && *((int *)this + 59) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v3 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 25);
          v16 = 0;
          v18 = v3;
          *((_QWORD *)this + 25) = *(_QWORD *)v3;
        }
        else
        {
          v3 = v18;
        }
      }
      while ( a3 && v16 < 0 );
    }
    if ( v3 )
    {
      *((_QWORD *)v3 + 13) = v17[0];
      *((_QWORD *)v3 + 12) = v12;
    }
    else
    {
      *((_BYTE *)v12 + 64) = 0;
    }
  }
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    if ( a2 )
    {
      *((_DWORD *)v3 + 4) = ++*((_DWORD *)this + 96);
      ++*((_DWORD *)this + 59);
      *((_BYTE *)this + 248) |= 8u;
      if ( *((_QWORD *)this + 46) )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 47));
        if ( ++*((_DWORD *)this + 58) == 1 )
          KeResetEvent(**((PRKEVENT **)this + 46));
        ExReleaseResourceLite(*((PERESOURCE *)this + 47));
        KeLeaveCriticalRegion();
      }
    }
  }
  return v3;
}
