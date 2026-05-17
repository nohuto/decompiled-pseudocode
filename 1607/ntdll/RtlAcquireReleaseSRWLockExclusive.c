/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x180077510
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180077420 (RtlpHpSegLfhExtendContext.c)
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D3FD0 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
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
    RtlAcquireSRWLockExclusive((unsigned __int64)a1, a2, a3, a4);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
