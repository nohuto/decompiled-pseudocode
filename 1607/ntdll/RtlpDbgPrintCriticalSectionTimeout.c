/*
 * XREFs of RtlpDbgPrintCriticalSectionTimeout @ 0x1800D3B18
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 * Callees:
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 */

ULONG __fastcall RtlpDbgPrintCriticalSectionTimeout(const void **a1, __int64 *a2, int a3)
{
  struct _TEB *v3; // rdi
  unsigned __int64 v5; // rdx
  int v6; // eax

  v3 = NtCurrentTeb();
  v5 = (__int64)(((unsigned __int128)(*a2 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *a2) >> 23;
  DbgPrintEx(0x65u, 1u, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v5 + (v5 >> 63), a3);
  if ( *a1 == (const void *)-1LL )
    v6 = 0;
  else
    v6 = *((_DWORD *)*a1 + 9);
  return DbgPrintEx(
           0x65u,
           0,
           "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
           v3->ClientId.UniqueProcess,
           v3->ClientId.UniqueThread,
           a1[2],
           a1,
           v6);
}
