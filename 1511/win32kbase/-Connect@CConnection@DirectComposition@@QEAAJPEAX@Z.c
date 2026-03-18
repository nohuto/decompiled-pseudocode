/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0013810
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0013638 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001E07C (-EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0045EEC (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00737BC (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C007380C (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C0079AF0 (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D7698 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, void *a2)
{
  struct _EPROCESS *CurrentProcess; // rax
  int v5; // esi
  void *v6; // rax
  volatile signed __int32 *v7; // rbx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(*((_QWORD *)this + 19)
                                                                                                + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    v5 = -1073741258;
LABEL_15:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_13;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 216),
    CurrentProcess);
  v5 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
         (DirectComposition::CConnection *)((char *)this + 216),
         1uLL);
  if ( v5 < 0 )
    goto LABEL_15;
  v5 = DirectComposition::CEvent::Create(a2, (struct DirectComposition::CEvent **)this + 11);
  if ( v5 < 0 )
    goto LABEL_15;
  v9 = 0LL;
  *((_DWORD *)this + 37) = 1;
  *((_DWORD *)this + 36) = 0;
  while ( 1 )
  {
    v6 = DirectComposition::CLinearHandleTableBase::EnumerateObjects(
           (DirectComposition::CConnection *)((char *)this + 24),
           &v9);
    v7 = (volatile signed __int32 *)v6;
    if ( !v6 )
      break;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v6 + 6, 4, 3) == 3
      && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v6 + 4)) )
    {
      if ( _InterlockedCompareExchange(v7 + 6, 5, 4) == 4 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 56LL))(v7);
      ExReleaseResourceLite(*((PERESOURCE *)v7 + 4));
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
  return (unsigned int)v5;
}
