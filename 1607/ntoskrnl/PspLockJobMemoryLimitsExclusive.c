/*
 * XREFs of PspLockJobMemoryLimitsExclusive @ 0x140463A00
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1404C5D4C (PspJobClose.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1404EA6E0 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  _BYTE *v4; // rax
  _BYTE *v5; // rbx

  if ( a3 )
    --*(_WORD *)(a3 + 486);
  if ( a1 != a2 )
  {
    v3 = (unsigned __int64 *)(a1 + 1016);
    v4 = (_BYTE *)KeAbPreAcquire(a1 + 1016, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      v5[26] |= 1u;
  }
}
