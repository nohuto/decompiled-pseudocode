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
