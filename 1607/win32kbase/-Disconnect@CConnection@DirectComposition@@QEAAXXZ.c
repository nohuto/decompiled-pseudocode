/*
 * XREFs of ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018DC8
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0018FA0 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0078540 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0082810 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C000E174 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C0019104 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00192AC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001AE60 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C003BF00 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0042718 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C00427DC (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  DirectComposition::CBatch *v3; // rcx
  DirectComposition::CBatch *v4; // rcx
  struct DirectComposition::CBatch *v5; // rax
  unsigned int v6; // edx
  DirectComposition::CBatch *v7; // rax
  DirectComposition::CBatch *v8; // rbx
  void *v9; // rax
  volatile signed __int32 *v10; // rbx
  DirectComposition::CEvent *v11; // rcx
  DirectComposition::CBatch *v12; // rbx
  DirectComposition::CBatch *v13; // rbx
  struct DirectComposition::CBatch *v14; // rbx
  struct DirectComposition::CBatch *v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CConnection *)((char *)this + 216));
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
      v12 = *(DirectComposition::CBatch **)v3;
      DirectComposition::CBatch::ReturnToApplication(v3, 0);
      v3 = v12;
    }
    while ( v12 );
  }
  v4 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
  {
    do
    {
      v13 = *(DirectComposition::CBatch **)v4;
      DirectComposition::CBatch::ReturnToApplication(v4, 0);
      v4 = v13;
    }
    while ( v13 );
  }
  v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  v15 = v5;
  if ( v5 )
  {
    do
    {
      v14 = *(struct DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v14;
    }
    while ( v14 );
    v15 = 0LL;
  }
  DirectComposition::CConnection::GetNewBatches(this, &v15);
  v7 = v15;
  if ( v15 )
  {
    do
    {
      v8 = *(DirectComposition::CBatch **)v7;
      DirectComposition::CBatch::ReturnToApplication(v7, 0);
      v7 = v8;
    }
    while ( v8 );
    v15 = 0LL;
  }
  if ( v2 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v9 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
             (DirectComposition::CConnection *)((char *)this + 24),
             &v16);
      v10 = (volatile signed __int32 *)v9;
      if ( !v9 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v9 + 6, 3, 4) != 4
        && !_InterlockedCompareExchange((volatile signed __int32 *)v9 + 6, 1, 0)
        && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v9 + 4)) )
      {
        if ( _InterlockedCompareExchange(v10 + 6, 2, 1) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, 0LL);
        ExReleaseResourceLite(*((PERESOURCE *)v10 + 4));
        KeLeaveCriticalRegion();
      }
    }
  }
  v11 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
  if ( v11 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v11, v6);
    *((_QWORD *)this + 11) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
}
