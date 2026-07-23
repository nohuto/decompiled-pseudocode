/*
 * XREFs of ExpSaAllocatorFree @ 0x14013522C
 * Callers:
 *     ExSaFree @ 0x1401351C8 (ExSaFree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupFreeMemory @ 0x140135324 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x1401353D0 (ExpSaAllocatorOptimizeList.c)
 */

unsigned __int64 __fastcall ExpSaAllocatorFree(
        unsigned __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  char v7; // r14
  __int64 v8; // rbp
  int v9; // eax
  _BYTE *v11; // rax
  _BYTE *v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 **v15; // rcx

  if ( *(_DWORD *)(a2 + 40) == 1 )
  {
    v7 = 1;
    v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v11, (ULONG_PTR)BugCheckParameter2);
    if ( v12 )
      v12[26] |= 1u;
    *(_DWORD *)(a2 + 40) = 0;
    v13 = *(_QWORD *)a2;
    v14 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v14 != a2 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = (unsigned __int64 **)BugCheckParameter2[2];
    if ( *v15 != BugCheckParameter2 + 1 )
      __fastfail(3u);
    *(_QWORD *)a2 = BugCheckParameter2 + 1;
    *(_QWORD *)(a2 + 8) = v15;
    *v15 = (unsigned __int64 *)a2;
    BugCheckParameter2[2] = a2;
  }
  else
  {
    v7 = 0;
    v8 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v8, (ULONG_PTR)BugCheckParameter2);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw(BugCheckParameter2 + 8);
    LOBYTE(v9) = _InterlockedOr((volatile signed __int32 *)BugCheckParameter2 + 16, 2u) | 2;
  }
  else
  {
    v9 = *((_DWORD *)BugCheckParameter2 + 16);
  }
  if ( (v9 & 2) != 0 )
  {
    if ( v7 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_16;
    v7 = 0;
  }
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  }
LABEL_16:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
