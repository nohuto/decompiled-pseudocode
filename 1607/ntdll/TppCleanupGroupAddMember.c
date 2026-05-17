/*
 * XREFs of TppCleanupGroupAddMember @ 0x18007A224
 * Callers:
 *     TpAllocWork @ 0x18003BBB0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18003D268 (TppInitializeTimer.c)
 *     TppAllocAlpcCompletion @ 0x180065614 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x180079E70 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x18007A0F0 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x180084520 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
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
  if ( *v7 != v5 + 16 )
    __fastfail(3u);
  *v6 = v5 + 16;
  a1[6] = v7;
  *v7 = v6;
  *(_QWORD *)(v5 + 24) = v6;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 8));
}
