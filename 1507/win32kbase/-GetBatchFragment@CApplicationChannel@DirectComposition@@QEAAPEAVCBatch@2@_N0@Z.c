/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340
 * Callers:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0014C04 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C002D340 (NtDCompositionSubmitDWMBatch.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002DA00 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C00117B0 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00121E0 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0022778 (-Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C002C348 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C002F2C4 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C0031460 (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0031484 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  struct DirectComposition::CBatch *v3; // rsi
  void *v5; // rcx
  char v6; // r12
  union _LARGE_INTEGER *v7; // r14
  __int64 v8; // rax
  union _LARGE_INTEGER v9; // rdi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r15
  union _LARGE_INTEGER *v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  PSLIST_ENTRY v16; // rax
  PSLIST_ENTRY v17; // r14
  unsigned __int64 v18; // rax
  struct _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY *v20; // rdi
  unsigned __int64 v21; // r15
  DirectComposition::CApplicationChannel *v22; // rbp
  struct _RTL_GENERIC_TABLE *v23; // rdi
  PVOID v24; // rax
  LONGLONG QuadPart; // rcx
  LONGLONG v26; // rcx
  LONGLONG v27; // rax
  DirectComposition::CBatch::CSystemResourceReference *v28; // rcx
  __int64 v29; // rdi
  struct _SLIST_ENTRY *v30; // r12
  DirectComposition::CAnimationMarshaler *v31; // r13
  struct DirectComposition::CResourceMarshaler *v32; // rdx
  struct DirectComposition::CBatch *v33; // [rsp+30h] [rbp-68h] BYREF
  _QWORD Buffer[12]; // [rsp+38h] [rbp-60h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  char v36; // [rsp+A8h] [rbp+10h]
  char v37; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v38; // [rsp+B8h] [rbp+20h] BYREF

  v37 = a3;
  v36 = a2;
  v3 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    v5 = (void *)*((_QWORD *)this + 20);
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(v5, UserRequest, 0, 0, &Timeout) )
      break;
    v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 9);
    --*((_DWORD *)this + 43);
    v17 = v16;
    v18 = *((_QWORD *)&v16[4].Next + 1);
    if ( v18 > *((_QWORD *)this + 22) )
    {
      *((_BYTE *)this + 184) |= 2u;
      *((_QWORD *)this + 22) = v18;
    }
    if ( *((_QWORD *)&v17[2].Next + 1) )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
      v23 = DirectComposition::CSynchronizationManager::s_pSyncTable;
      Buffer[0] = *((_QWORD *)&v17[2].Next + 1);
      Buffer[1] = 0LL;
      v24 = RtlLookupElementGenericTable(DirectComposition::CSynchronizationManager::s_pSyncTable, Buffer);
      if ( v24 )
        RtlDeleteElementGenericTable(v23, v24);
      ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
      KeLeaveCriticalRegion();
      *((_QWORD *)&v17[2].Next + 1) = 0LL;
    }
    Next = v17[6].Next;
    Next[2].Next = (struct _SLIST_ENTRY *)((char *)Next[2].Next + (unsigned __int64)(&v17[7].Next[2].Next + 1));
    if ( !LOBYTE(Next[4].Next) && (struct _SLIST_ENTRY *)*((_QWORD *)&Next[2].Next + 1) == Next[2].Next )
      DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)Next);
    LOBYTE(v17[2].Next) &= 0xF2u;
    v20 = v17[5].Next;
    v21 = *((_QWORD *)&v17[4].Next + 1);
    v22 = (DirectComposition::CApplicationChannel *)*((_QWORD *)&v17->Next + 1);
    v17[6].Next = 0LL;
    *((_QWORD *)&v17[6].Next + 1) = 0LL;
    LODWORD(v17[3].Next) = 0;
    *((_QWORD *)&v17[3].Next + 1) = 0LL;
    v17[7].Next = 0LL;
    if ( v20 )
    {
      do
      {
        v30 = (struct _SLIST_ENTRY *)*((_QWORD *)&v20->Next + 1);
        *((_QWORD *)&v20->Next + 1) = 0LL;
        v31 = (DirectComposition::CAnimationMarshaler *)v20->Next;
        DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(
          (DirectComposition::CAnimationMarshaler *)v20->Next,
          v21);
        DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v20);
        if ( v31 )
          v32 = (DirectComposition::CAnimationMarshaler *)((char *)v31 + 16);
        else
          v32 = 0LL;
        DirectComposition::CApplicationChannel::ReleaseResource(v22, v32);
        v20 = v30;
      }
      while ( v30 );
    }
    v17[5].Next = 0LL;
    if ( *((_QWORD *)&v17[5].Next + 1) )
    {
      do
      {
        v28 = (DirectComposition::CBatch::CSystemResourceReference *)*((_QWORD *)&v17[5].Next + 1);
        v29 = *(_QWORD *)v28;
        DirectComposition::CBatch::CSystemResourceReference::Delete(
          v28,
          *((DirectComposition::CConnection ***)&v17->Next + 1));
        *((_QWORD *)&v17[5].Next + 1) = v29;
      }
      while ( v29 );
    }
    v17->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v17;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v3 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
LABEL_16:
    if ( v3 )
    {
      v14 = v36 == 0;
      *(_QWORD *)v3 = 0LL;
      if ( !v14 )
      {
        *((_DWORD *)v3 + 4) = ++*((_DWORD *)this + 94);
        ++*((_DWORD *)this + 43);
        *((_BYTE *)this + 184) |= 8u;
        if ( *((_QWORD *)this + 45) )
        {
          DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 46));
          if ( ++*((_DWORD *)this + 42) == 1 )
            KeResetEvent(**((PRKEVENT **)this + 45));
          ExReleaseResourceLite(*((PERESOURCE *)this + 46));
          KeLeaveCriticalRegion();
        }
      }
    }
    return v3;
  }
  v6 = v37;
  v7 = (union _LARGE_INTEGER *)((char *)this + 608);
  v38 = 0LL;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    v9 = *v7;
    Timeout.QuadPart = 0LL;
    v10 = v8 + 40;
    if ( (union _LARGE_INTEGER *)v9.QuadPart != v7 )
      break;
LABEL_34:
    if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                (DirectComposition::CApplicationChannel *)((char *)this + 608),
                *((_BYTE *)this + 632),
                (struct DirectComposition::CBatchSharedMemoryPool **)&Timeout) >= 0 )
    {
      v9 = Timeout;
      DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(
        (DirectComposition::CBatchSharedMemoryPool *)Timeout.QuadPart,
        v10,
        &v38);
      QuadPart = v7->QuadPart;
      *(_QWORD *)v9.QuadPart = v7->QuadPart;
      *(_QWORD *)(v9.QuadPart + 8) = v7;
      if ( *(union _LARGE_INTEGER **)(QuadPart + 8) != v7 )
        __fastfail(3u);
      v11 = v38;
      *(union _LARGE_INTEGER *)(QuadPart + 8) = v9;
      goto LABEL_43;
    }
    if ( !v6 )
      return v3;
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this, 1);
  }
  while ( *(_BYTE *)(v9.QuadPart + 64) || v10 > 4096LL - *(_QWORD *)(v9.QuadPart + 40) )
  {
    v9 = *(union _LARGE_INTEGER *)v9.QuadPart;
    if ( (union _LARGE_INTEGER *)v9.QuadPart == v7 )
      goto LABEL_34;
  }
  v11 = *(_QWORD *)(v9.QuadPart + 40);
  *(_BYTE *)(v9.QuadPart + 64) = 1;
  v12 = *(union _LARGE_INTEGER **)(v9.QuadPart + 8);
  if ( v12 != v7 )
  {
    v26 = *(_QWORD *)v9.QuadPart;
    if ( *(_QWORD *)(*(_QWORD *)v9.QuadPart + 8LL) != v9.QuadPart || v12->QuadPart != v9.QuadPart )
      __fastfail(3u);
    v12->QuadPart = v26;
    *(_QWORD *)(v26 + 8) = v12;
    v27 = v7->QuadPart;
    *(_QWORD *)v9.QuadPart = v7->QuadPart;
    *(_QWORD *)(v9.QuadPart + 8) = v7;
    if ( *(union _LARGE_INTEGER **)(v27 + 8) != v7 )
      __fastfail(3u);
    *(union _LARGE_INTEGER *)(v27 + 8) = v9;
LABEL_43:
    *v7 = v9;
  }
  if ( v9.QuadPart )
  {
    v13 = *(_QWORD *)(v9.QuadPart + 40);
    if ( (unsigned __int64)(4096 - v13) >= 0x28 )
      *(_QWORD *)(v9.QuadPart + 40) = v13 + 40;
    v3 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
    if ( v3 )
    {
      *((_QWORD *)this + 17) = *(_QWORD *)v3;
    }
    else if ( (int)DirectComposition::CApplicationChannel::CreateBatch(this, &v33) < 0 && *((_DWORD *)this + 43) )
    {
      DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this, 1);
      v3 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = *(_QWORD *)v3;
    }
    else
    {
      v3 = v33;
    }
    if ( !v3 )
    {
      *(_BYTE *)(v9.QuadPart + 64) = 0;
      return v3;
    }
    *((union _LARGE_INTEGER *)v3 + 12) = v9;
    *((_QWORD *)v3 + 13) = v11;
    goto LABEL_16;
  }
  return v3;
}
