/*
 * XREFs of TppCleanupGroupAddMember @ 0x18007A214
 * Callers:
 *     TpAllocWork @ 0x18003BBA0 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18003D258 (TppInitializeTimer.c)
 *     TppAllocAlpcCompletion @ 0x180065604 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x180079E60 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x18007A0E0 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x180084510 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rbx
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK **Value; // rdx

  v2 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v2 + 1);
  v3 = (_RTL_SRWLOCK *)(a1 + 40);
  Value = (_RTL_SRWLOCK **)v2[3].Value;
  if ( *Value != &v2[2] )
    __fastfail(3u);
  v3->Value = (unsigned __int64)&v2[2];
  *(_QWORD *)(a1 + 48) = Value;
  *Value = v3;
  v2[3].Value = (unsigned __int64)v3;
  RtlReleaseSRWLockExclusive(v2 + 1);
}
