/*
 * XREFs of RtlpHpHeapUnlock @ 0x18001C494
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18000748C (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlUnlockHeap @ 0x180019E40 (RtlUnlockHeap.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800EAD28 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpHeapUnlock(__int64 a1, int a2)
{
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
    if ( (*(_WORD *)(a1 + 38))-- == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 48));
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 88));
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 176));
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 336));
    }
  }
}
