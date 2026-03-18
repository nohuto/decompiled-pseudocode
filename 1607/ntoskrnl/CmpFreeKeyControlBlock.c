/*
 * XREFs of CmpFreeKeyControlBlock @ 0x1404375A0
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x1401B484C (CmpCloneToUnbackedKcb.c)
 *     CmpUnlockKcbStack @ 0x140404820 (CmpUnlockKcbStack.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpUnlockTwoKcbs @ 0x140438FD0 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpDecommisssionKcb @ 0x14053F1A8 (CmpDecommisssionKcb.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000CA8C (ExpReleaseFastMutexContended.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002D218 (CmpFreeTransientPoolWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(unsigned __int64 P)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _DWORD *v6; // rbx
  unsigned __int8 v7; // bl
  signed __int32 v8; // eax
  unsigned __int16 i; // dx
  _QWORD *v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax

  _InterlockedDecrement64(&CmPerfCounters);
  v2 = *(void **)(P + 192);
  if ( (unsigned __int64)v2 >= 2 )
    ExFreePoolWithTag(v2, 0x624E4D43u);
  v3 = *(_QWORD *)(P + 288);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( v3 )
    CmpFreeTransientPoolWithTag((PVOID)v3, 0x624E4D43u);
  if ( (*(_BYTE *)(P + 6) & 1) != 0 )
  {
    _InterlockedDecrement64(qword_1407481F0);
    _InterlockedIncrement64(&qword_1407481E8);
    ExAcquireFastMutex((PFAST_MUTEX)&CmpAllocBucketLock);
    *(_QWORD *)(P + 24) = 0LL;
    v4 = (_QWORD *)(P + 112);
    v5 = (_QWORD *)qword_140322C88;
    if ( *(__int64 **)qword_140322C88 != &CmpFreeKCBListHead )
      __fastfail(3u);
    *v4 = &CmpFreeKCBListHead;
    v6 = (_DWORD *)(P & 0xFFFFFFFFFFFFF000uLL);
    v4[1] = v5;
    *v5 = v4;
    qword_140322C88 = (__int64)v4;
    if ( ++*v6 == 13 )
    {
      for ( i = 0; i < 0xDu; ++i )
      {
        v10 = &v6[74 * i + 30];
        v11 = *v10;
        v12 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        _InterlockedDecrement64(&qword_1407481E8);
      }
      CmpFreeTransientPoolWithTag(v6, 0x6C414D43u);
      _InterlockedDecrement64(&qword_1407481E0);
    }
    v7 = *((_BYTE *)&CmpAllocBucketLock + 48);
    *(&CmpAllocBucketLock + 1) = 0LL;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v8 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v8);
    __writecr8(v7);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
  }
  else
  {
    CmpFreeTransientPoolWithTag((PVOID)P, 0x626B4D43u);
  }
}
