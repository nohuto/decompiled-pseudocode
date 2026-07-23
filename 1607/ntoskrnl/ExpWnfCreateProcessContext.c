/*
 * XREFs of ExpWnfCreateProcessContext @ 0x1404BB634
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1404BB578 (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpWnfDeleteProcessContext @ 0x1404AD754 (ExpWnfDeleteProcessContext.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  signed __int64 v6; // rbx
  _BYTE *v7; // rax
  signed __int8 v8; // cf
  _BYTE *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx

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
    v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v7, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v9 )
      v9[26] |= 1u;
    v10 = off_140747720;
    v11 = (_QWORD *)(v6 + 16);
    if ( *off_140747720 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v11 = &ExpWnfProcessesListHead;
    *(_QWORD *)(v6 + 24) = v10;
    *v10 = v11;
    off_140747720 = (_UNKNOWN **)(v6 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1720), v6, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v6, 1);
  }
  else
  {
    v4 = -1073741670;
  }
  v12 = *(_QWORD *)(a1 + 1720);
  if ( v12 )
    v4 = 0;
  *a2 = v12;
  return v4;
}
