/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00808C8
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0080790 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011648 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C0011698 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C001523C (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0031388 (-EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006B434 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0080B0C (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D55F8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, HANDLE Handle)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v7; // esi
  void *v8; // rax
  volatile signed __int32 *v9; // rbx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    v7 = -1073741258;
LABEL_15:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_13;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 216),
    CurrentProcess);
  v7 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
         (DirectComposition::CConnection *)((char *)this + 216),
         1uLL);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = DirectComposition::CEvent::Create(Handle, (struct DirectComposition::CEvent **)this + 11);
  if ( v7 < 0 )
    goto LABEL_15;
  v11 = 0LL;
  *((_DWORD *)this + 37) = 1;
  *((_DWORD *)this + 36) = 0;
  while ( 1 )
  {
    v8 = DirectComposition::CLinearHandleTableBase::EnumerateObjects(
           (DirectComposition::CConnection *)((char *)this + 24),
           &v11);
    v9 = (volatile signed __int32 *)v8;
    if ( !v8 )
      break;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v8 + 6, 4, 3) == 3
      && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v8 + 4)) )
    {
      if ( _InterlockedCompareExchange(v9 + 6, 5, 4) == 4 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 56LL))(v9);
      ExReleaseResourceLite(*((PERESOURCE *)v9 + 4));
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
  return (unsigned int)v7;
}
