/*
 * XREFs of ExpWnfCreateProcessContext @ 0x1404B2C08
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1404B2B4C (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExpWnfDeleteProcessContext @ 0x1403E1D84 (ExpWnfDeleteProcessContext.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  signed __int64 v6; // rbx
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  _UNKNOWN ***v10; // rcx
  __int64 v11; // rcx

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
    v7 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v7, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = (_UNKNOWN ***)off_1406FB6B0;
    *(_QWORD *)(v6 + 24) = off_1406FB6B0;
    *(_QWORD *)(v6 + 16) = &ExpWnfProcessesListHead;
    if ( *v10 != &ExpWnfProcessesListHead )
      __fastfail(3u);
    *v10 = (_UNKNOWN **)(v6 + 16);
    off_1406FB6B0 = (_UNKNOWN **)(v6 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1704), v6, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v6, 1);
  }
  else
  {
    v4 = -1073741670;
  }
  v11 = *(_QWORD *)(a1 + 1704);
  if ( v11 )
    v4 = 0;
  *a2 = v11;
  return v4;
}
