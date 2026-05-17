/*
 * XREFs of RtlpLockFlsCallbackVector @ 0x1800C2B08
 * Callers:
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpLockFlsCallbackVector(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _PEB *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi

  v4 = NtCurrentPeb();
  if ( v4->FlsCallback )
  {
    v5 = 16LL;
    v6 = 127LL;
    do
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)((char *)v4->FlsCallback + v5 + 8), a2, a3, a4);
      v5 += 16LL;
      --v6;
    }
    while ( v6 );
  }
}
