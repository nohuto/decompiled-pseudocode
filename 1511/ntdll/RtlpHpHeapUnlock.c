/*
 * XREFs of RtlpHpHeapUnlock @ 0x18005AFDC
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005B6FC (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800E1A50 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegLockRelease @ 0x1800590B8 (RtlpHpSegLockRelease.c)
 *     RtlpHpLargeLockRelease @ 0x18005A5F4 (RtlpHpLargeLockRelease.c)
 */

signed __int64 __fastcall RtlpHpHeapUnlock(__int64 a1, int a2)
{
  int v3; // ecx
  signed __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 20);
  if ( (v3 & 1) == 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 38) = 1;
      *(_QWORD *)(a1 + 320) = 1LL;
      *(_QWORD *)(a1 + 168) = 1LL;
      *(_QWORD *)(a1 + 88) = 1LL;
      *(_QWORD *)(a1 + 48) = 1LL;
    }
    result = 0xFFFFLL;
    if ( (*(_WORD *)(a1 + 38))-- == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      RtlpHpLargeLockRelease(a1, v3);
      RtlpHpSegLockRelease(a1, *(_DWORD *)(a1 + 20));
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 168));
      return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 320));
    }
  }
  return result;
}
