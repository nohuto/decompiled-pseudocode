/*
 * XREFs of ExpSaAllocatorFree @ 0x140266070
 * Callers:
 *     ExSaFree @ 0x140265FEC (ExSaFree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpSaAllocatorOptimizeList @ 0x1402661EC (ExpSaAllocatorOptimizeList.c)
 *     ExpSaPageGroupFreeMemory @ 0x1402663F8 (ExpSaPageGroupFreeMemory.c)
 */

void __fastcall ExpSaAllocatorFree(unsigned __int64 *BugCheckParameter2, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  char v7; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int64 **v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r9
  int v16; // eax

  v4 = a4;
  if ( *(_DWORD *)(a2 + 40) == 1 )
  {
    v7 = 1;
    v8 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v8, (ULONG_PTR)BugCheckParameter2, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *(_DWORD *)(a2 + 40) = 0;
    v11 = *(_QWORD *)a2;
    v12 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v12 != a2 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = (unsigned __int64 **)BugCheckParameter2[2];
    *(_QWORD *)a2 = BugCheckParameter2 + 1;
    *(_QWORD *)(a2 + 8) = v13;
    if ( *v13 != BugCheckParameter2 + 1 )
      __fastfail(3u);
    *v13 = (unsigned __int64 *)a2;
    BugCheckParameter2[2] = a2;
  }
  else
  {
    v7 = 0;
    v14 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v14, (ULONG_PTR)BugCheckParameter2, v15);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, v4) )
  {
    _m_prefetchw(BugCheckParameter2 + 8);
    LOBYTE(v16) = _InterlockedOr((volatile signed __int32 *)BugCheckParameter2 + 16, 2u) | 2;
  }
  else
  {
    v16 = *((_DWORD *)BugCheckParameter2 + 16);
  }
  if ( (v16 & 2) != 0 )
  {
    if ( v7 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
    {
LABEL_24:
      ExpSaAllocatorOptimizeList(BugCheckParameter2);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      goto LABEL_28;
    }
    v7 = 0;
  }
  if ( v7 )
    goto LABEL_24;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
LABEL_28:
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
