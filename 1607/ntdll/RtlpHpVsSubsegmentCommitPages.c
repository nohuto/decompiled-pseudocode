/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x18006E8B0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001C590 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180041790 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x180043410 (RtlpHpSegLfhVsCommit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // r15d
  __int64 v12; // rsi
  void *v13; // rcx
  __int64 (__fastcall *v14)(PVOID, __int64); // rax
  int v15; // eax
  unsigned int v16; // edi
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v19)(__int64, __int64, unsigned int); // rax

  _BitScanForward64(&v5, a3);
  v7 = a4;
  _BitScanReverse64(&v9, a3);
  v10 = (__int64)a2 + (unsigned int)((_DWORD)v5 << 12);
  v11 = (1 - (_DWORD)v5 + (_DWORD)v9) << 12;
  v12 = ((1LL << (1 - (unsigned __int8)v5 + (unsigned __int8)v9)) - 1) << v5;
  RtlAcquireSRWLockExclusive(a2 + 3);
  v13 = *(void **)(a1 + 56);
  if ( !a5 )
  {
    v19 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 88));
    if ( v19 == RtlpHpSegLfhVsDecommit )
      RtlpHpSegLfhVsDecommit((__int64)v13, v10, v11);
    else
      v19((__int64)v13, v10, v11);
    a2[2].Value &= ~v12;
    v17 = -(int)v7;
    goto LABEL_6;
  }
  v14 = (__int64 (__fastcall *)(PVOID, __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80));
  if ( v14 == RtlpHpSegLfhVsCommit )
    v15 = RtlpHpSegLfhVsCommit(v13, v10);
  else
    v15 = ((__int64 (__fastcall *)(void *, __int64, _QWORD))v14)(v13, v10, v11);
  v16 = v15;
  if ( v15 >= 0 )
  {
    a2[2].Value |= v12;
    v17 = v7;
LABEL_6:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), v17);
    v16 = 0;
  }
  RtlReleaseSRWLockExclusive(a2 + 3);
  return v16;
}
