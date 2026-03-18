/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x1402461FC
 * Callers:
 *     RtlStdLogStackTrace @ 0x140245C34 (RtlStdLogStackTrace.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     RtlpStdGetSpaceForTrace @ 0x140246140 (RtlpStdGetSpaceForTrace.c)
 */

PSLIST_ENTRY __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // r14
  __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // r15
  PSLIST_ENTRY i; // rbx
  PSLIST_ENTRY SpaceForTrace; // rax
  __int16 v13; // cx
  __int64 v14; // rdx
  __int16 v15; // cx
  unsigned __int8 v16; // si
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v6 = a3 % *(_DWORD *)(a1 + 720);
  v8 = 3 * v6;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v9 = a1 + 736 + 24LL * (unsigned int)v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 736 + 24LL * (unsigned int)v6));
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 736 + 24LL * (unsigned int)v6));
  }
  *(_BYTE *)(v9 + 8) = CurrentIrql;
  for ( i = *(PSLIST_ENTRY *)(a1 + 8 * v8 + 728); i; i = i->Next )
  {
    if ( *((_WORD *)&i->Next + 7) == *(_WORD *)(a2 + 14) && RtlCompareMemory(&i[1], (const void *)(a2 + 16), v4) == v4 )
      goto LABEL_12;
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(_WORD *)(a2 + 14));
  i = SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_15;
  }
  memmove(&SpaceForTrace[1], (const void *)(a2 + 16), v4);
  v13 = *(_WORD *)(a2 + 14);
  *((_WORD *)&i->Next + 4) &= 0xF800u;
  *((_WORD *)&i->Next + 7) = v13;
  v14 = 3LL * (a3 % *(_DWORD *)(a1 + 720));
  i->Next = *(_SLIST_ENTRY **)(a1 + 24LL * (a3 % *(_DWORD *)(a1 + 720)) + 728);
  *(_QWORD *)(a1 + 8 * v14 + 728) = i;
LABEL_12:
  v15 = *((_WORD *)&i->Next + 4);
  if ( (v15 & 0x7FF) != 0x7FF )
    *((_WORD *)&i->Next + 4) = v15 ^ (v15 ^ (v15 + 1)) & 0x7FF;
LABEL_15:
  v16 = *(_BYTE *)(v9 + 8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v9, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  __writecr8(v16);
  return i;
}
