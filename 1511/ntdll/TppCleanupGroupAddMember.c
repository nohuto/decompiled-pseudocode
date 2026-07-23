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

void __fastcall TppCleanupGroupAddMember(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *Value; // rbx
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK **v4; // rdx

  Value = (_RTL_SRWLOCK *)a1[2].Value;
  RtlAcquireSRWLockExclusive(Value + 1);
  v3 = a1 + 5;
  v4 = (_RTL_SRWLOCK **)Value[3].Value;
  a1[5].Value = (unsigned __int64)&Value[2];
  a1[6].Value = (unsigned __int64)v4;
  if ( *v4 != &Value[2] )
    __fastfail(3u);
  *v4 = v3;
  Value[3].Value = (unsigned __int64)v3;
  RtlReleaseSRWLockExclusive(Value + 1);
}
