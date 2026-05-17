/*
 * XREFs of LdrForkMrdata @ 0x1800D2E7C
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D3FD0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4250 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1, char *a2, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
  }
}
