/*
 * XREFs of ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006B434
 * Callers:
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C006B080 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006B0DC (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00808C8 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011648 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0011708 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00167E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0031388 (-EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C006B5CC (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C006B614 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C006B748 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0080B0C (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  DirectComposition::CBatch *v3; // rcx
  DirectComposition::CBatch *v4; // rcx
  struct DirectComposition::CBatch *v5; // rax
  DirectComposition::CBatch *v6; // rax
  DirectComposition::CBatch *v7; // rbx
  void *v8; // rax
  volatile signed __int32 *v9; // rbx
  void **v10; // rcx
  DirectComposition::CBatch *v11; // rbx
  DirectComposition::CBatch *v12; // rbx
  struct DirectComposition::CBatch *v13; // rbx
  struct DirectComposition::CBatch *v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 27);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 216),
    0LL);
  v3 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
  {
    do
    {
      v11 = *(DirectComposition::CBatch **)v3;
      DirectComposition::CBatch::ReturnToApplication(v3, 0);
      v3 = v11;
    }
    while ( v11 );
  }
  v4 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
  {
    do
    {
      v12 = *(DirectComposition::CBatch **)v4;
      DirectComposition::CBatch::ReturnToApplication(v4, 0);
      v4 = v12;
    }
    while ( v12 );
  }
  v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  v14 = v5;
  if ( v5 )
  {
    do
    {
      v13 = *(struct DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v13;
    }
    while ( v13 );
    v14 = 0LL;
  }
  DirectComposition::CConnection::GetNewBatches(this, &v14);
  v6 = v14;
  if ( v14 )
  {
    do
    {
      v7 = *(DirectComposition::CBatch **)v6;
      DirectComposition::CBatch::ReturnToApplication(v6, 0);
      v6 = v7;
    }
    while ( v7 );
    v14 = 0LL;
  }
  if ( v2 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v8 = DirectComposition::CLinearHandleTableBase::EnumerateObjects(
             (DirectComposition::CConnection *)((char *)this + 24),
             &v15);
      v9 = (volatile signed __int32 *)v8;
      if ( !v8 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v8 + 6, 3, 4) != 4
        && !_InterlockedCompareExchange((volatile signed __int32 *)v8 + 6, 1, 0)
        && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v8 + 4)) )
      {
        if ( _InterlockedCompareExchange(v9 + 6, 2, 1) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, 0LL);
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 4));
        KeLeaveCriticalRegion();
      }
    }
  }
  v10 = (void **)*((_QWORD *)this + 11);
  if ( v10 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v10);
    *((_QWORD *)this + 11) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
}
