/*
 * XREFs of RtlpHpHeapUnlock @ 0x18001C4A4
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18000749C (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlUnlockHeap @ 0x180019E50 (RtlUnlockHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAC68 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpHeapUnlock(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 38) = 1;
      *(_QWORD *)(a1 + 336) = 1LL;
      *(_QWORD *)(a1 + 176) = 1LL;
      *(_QWORD *)(a1 + 88) = 1LL;
      *(_QWORD *)(a1 + 48) = 1LL;
    }
    result = 0xFFFFLL;
    if ( (*(_WORD *)(a1 + 38))-- == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      RtlReleaseSRWLockExclusive(a1 + 48);
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(a1 + 88);
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive(a1 + 176);
      }
      return RtlReleaseSRWLockExclusive(a1 + 336);
    }
  }
  return result;
}
