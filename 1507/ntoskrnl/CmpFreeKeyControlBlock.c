/*
 * XREFs of CmpFreeKeyControlBlock @ 0x1404C8DB0
 * Callers:
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpDecommisssionKcb @ 0x14055802C (CmpDecommisssionKcb.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(unsigned __int64 P, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 *v10; // rax
  __int64 **v11; // rcx
  _DWORD *v12; // rbx
  unsigned __int8 v13; // bl
  signed __int32 v14; // eax
  unsigned __int16 i; // dx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rcx

  _InterlockedDecrement64(&CmPerfCounters);
  v5 = *(void **)(P + 192);
  if ( (unsigned __int64)v5 >= 2 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = *(void **)(P + 288);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x624E4D43u);
  if ( (*(_BYTE *)(P + 6) & 1) != 0 )
  {
    _InterlockedDecrement64(&qword_14077F060);
    _InterlockedIncrement64(&qword_14077F058);
    v7 = KeAbPreAcquire((ULONG_PTR)&CmpAllocBucketLock, 0LL, 0LL, a4);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpAllocBucketLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpAllocBucketLock, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    qword_14034DB28 = (__int64)KeGetCurrentThread();
    dword_14034DB50 = CurrentIrql;
    v10 = (__int64 *)(P + 120);
    *(_QWORD *)(P + 32) = 0LL;
    v11 = (__int64 **)qword_14034DB08;
    *(_QWORD *)(P + 120) = &CmpFreeKCBListHead;
    *(_QWORD *)(P + 128) = v11;
    if ( *v11 != &CmpFreeKCBListHead )
      __fastfail(3u);
    *v11 = v10;
    v12 = (_DWORD *)(P & 0xFFFFFFFFFFFFF000uLL);
    qword_14034DB08 = (__int64)v10;
    if ( ++*v12 == 13 )
    {
      for ( i = 0; i < 0xDu; ++i )
      {
        v16 = &v12[74 * i + 32];
        v17 = *v16;
        v18 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        _InterlockedDecrement64(&qword_14077F058);
      }
      ExFreePoolWithTag(v12, 0x6C414D43u);
      _InterlockedDecrement64(&qword_14077F050);
    }
    v13 = dword_14034DB50;
    qword_14034DB28 = 0LL;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpAllocBucketLock, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpAllocBucketLock, v14);
    __writecr8(v13);
    KeAbPostRelease((ULONG_PTR)&CmpAllocBucketLock);
  }
  else
  {
    ExFreePoolWithTag((PVOID)P, 0x626B4D43u);
  }
}
