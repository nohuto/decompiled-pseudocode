/*
 * XREFs of TppCleanupGroupAddMember @ 0x18007D9B4
 * Callers:
 *     TppInitializeTimer @ 0x18003DAB8 (TppInitializeTimer.c)
 *     TpAllocWork @ 0x18003DBB0 (TpAllocWork.c)
 *     TpAllocJobNotification @ 0x18007A850 (TpAllocJobNotification.c)
 *     TpAllocIoCompletion @ 0x18007B070 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007B264 (TppAllocAlpcCompletion.c)
 *     TpSimpleTryPost @ 0x18007D880 (TpSimpleTryPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall TppCleanupGroupAddMember(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  v5 = a1[2];
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v5 + 8), a2, a3, a4);
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
