/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x18006C900
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x18006C810 (RtlpHpSegLfhExtendContext.c)
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800C2620 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlAcquireReleaseSRWLockExclusive(
        volatile signed __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 result; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  result = *a1;
  if ( (*a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
