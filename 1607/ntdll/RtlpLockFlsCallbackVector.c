/*
 * XREFs of RtlpLockFlsCallbackVector @ 0x1800D4558
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void RtlpLockFlsCallbackVector()
{
  struct _PEB *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rsi

  v0 = NtCurrentPeb();
  if ( v0->FlsCallback )
  {
    v1 = 16LL;
    v2 = 127LL;
    do
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)((char *)v0->FlsCallback + v1 + 8));
      v1 += 16LL;
      --v2;
    }
    while ( v2 );
  }
}
