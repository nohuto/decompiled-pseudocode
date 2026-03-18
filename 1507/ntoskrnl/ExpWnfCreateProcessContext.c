/*
 * XREFs of ExpWnfCreateProcessContext @ 0x1405458E0
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1405457F4 (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpWnfDeleteProcessContext @ 0x140505720 (ExpWnfDeleteProcessContext.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  signed __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  _UNKNOWN ***v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  v6 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    *(_DWORD *)v6 = 8915206;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 72) = v6 + 64;
    *(_QWORD *)(v6 + 64) = v6 + 64;
    *(_QWORD *)(v6 + 96) = v6 + 88;
    *(_QWORD *)(v6 + 88) = v6 + 88;
    *(_QWORD *)(v6 + 120) = v6 + 112;
    *(_QWORD *)(v6 + 112) = v6 + 112;
    *(_QWORD *)(v6 + 128) = 0LL;
    *(_QWORD *)(v6 + 8) = a1;
    v8 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0LL, v7);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v8, (ULONG_PTR)&ExpWnfProcessesListLock, v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = (_UNKNOWN ***)off_14077E6E0;
    *(_QWORD *)(v6 + 24) = off_14077E6E0;
    *(_QWORD *)(v6 + 16) = &ExpWnfProcessesListHead;
    if ( *v12 != &ExpWnfProcessesListHead )
      __fastfail(3u);
    *v12 = (_UNKNOWN **)(v6 + 16);
    off_14077E6E0 = (_UNKNOWN **)(v6 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1696), v6, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v6, 1, v13, v14);
  }
  else
  {
    v4 = -1073741670;
  }
  v15 = *(_QWORD *)(a1 + 1696);
  if ( v15 )
    v4 = 0;
  *a2 = v15;
  return v4;
}
