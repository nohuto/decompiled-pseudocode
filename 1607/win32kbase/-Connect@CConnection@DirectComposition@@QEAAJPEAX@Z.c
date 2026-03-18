/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0018FA0
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00812A0 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C000E174 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018DC8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C003BF00 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0042718 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C0042768 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C007A2B4 (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00E4E6C (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, void *a2)
{
  __int64 v4; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v6; // esi
  void *v7; // rax
  volatile signed __int32 *v8; // rbx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    v6 = -1073741258;
LABEL_15:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_13;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v4);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 216),
    CurrentProcess);
  v6 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
         (DirectComposition::CConnection *)((char *)this + 216),
         1uLL);
  if ( v6 < 0 )
    goto LABEL_15;
  v6 = DirectComposition::CEvent::Create(a2, (struct DirectComposition::CEvent **)this + 11);
  if ( v6 < 0 )
    goto LABEL_15;
  v10 = 0LL;
  *((_DWORD *)this + 37) = 1;
  *((_DWORD *)this + 36) = 0;
  while ( 1 )
  {
    v7 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CConnection *)((char *)this + 24),
           &v10);
    v8 = (volatile signed __int32 *)v7;
    if ( !v7 )
      break;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v7 + 6, 4, 3) == 3
      && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v7 + 4)) )
    {
      if ( _InterlockedCompareExchange(v8 + 6, 5, 4) == 4 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 56LL))(v8);
      ExReleaseResourceLite(*((PERESOURCE *)v8 + 4));
      KeLeaveCriticalRegion();
    }
  }
  KeSetEvent(**((PRKEVENT **)this + 11), 1, 0);
  if ( *((_DWORD *)this + 62) )
    DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), 1);
LABEL_13:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return (unsigned int)v6;
}
