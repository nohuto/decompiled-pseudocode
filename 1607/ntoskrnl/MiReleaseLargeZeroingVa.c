/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x14008B474
 * Callers:
 *     MiZeroLargePage @ 0x14008B1C0 (MiZeroLargePage.c)
 *     MiDecrementHugeContext @ 0x140140E7C (MiDecrementHugeContext.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiZeroPageWorkMapping @ 0x14008B8A0 (MiZeroPageWorkMapping.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReleaseLargeZeroingVa(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = *(unsigned int *)(a1 + 64);
  if ( *(_BYTE *)(v1 + 106) != 1 )
    return MiZeroPageWorkMapping(v2);
  v3 = *(_QWORD *)(v1 + 144);
  v4 = *(_QWORD *)(v3 + 40);
  if ( (_DWORD)v2 )
  {
    v8 = *(_QWORD *)(v1 + 88);
    v9 = v4 + ((v8 + (*(_QWORD *)(v1 + 80) << 9)) << 21);
    *(_QWORD *)(v1 + 88) = v8 + 1;
    v6 = (v9 >> 18) & 0x3FFFFFF8;
    v7 = 0xFFFFF6FB40000000uLL;
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 112) + 176LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 64), &LockHandle);
    _bittestandset64(*(signed __int64 **)(v3 + 24), (v5 - v4) >> 30);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v6 = (v5 >> 27) & 0x1FFFF8;
    v7 = 0xFFFFF6FB7DA00000uLL;
  }
  *(_QWORD *)(v7 + v6) = 0LL;
  result = MiPteInShadowRange(v7 + v6, v1);
  if ( (_DWORD)result )
    return MiWritePteShadow(v11, 0LL);
  return result;
}
