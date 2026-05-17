/*
 * XREFs of TppCleanupGroupAddMember @ 0x180077A64
 * Callers:
 *     TpAllocWork @ 0x18000CDC0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18000CF00 (TppInitializeTimer.c)
 *     TppAllocAlpcCompletion @ 0x18006BF34 (TppAllocAlpcCompletion.c)
 *     TpSimpleTryPost @ 0x1800776B0 (TpSimpleTryPost.c)
 *     TpAllocIoCompletion @ 0x1800777F0 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall TppCleanupGroupAddMember(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  v5 = a1[2];
  RtlAcquireSRWLockExclusive(v5 + 8, a2, a3, a4);
  v6 = a1 + 5;
  v7 = *(_QWORD **)(v5 + 24);
  a1[5] = v5 + 16;
  a1[6] = v7;
  if ( *v7 != v5 + 16 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v5 + 24) = v6;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 8));
}
