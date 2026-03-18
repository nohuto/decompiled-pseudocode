/*
 * XREFs of PspLockJobMemoryLimitsExclusive @ 0x140486750
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x140417EB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x140485508 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall PspLockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx

  if ( a3 )
    --*(_WORD *)(a3 + 486);
  if ( a1 != a2 )
  {
    v3 = (unsigned __int64 *)(a1 + 1024);
    v4 = KeAbPreAcquire(a1 + 1024, 0LL, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
  }
}
