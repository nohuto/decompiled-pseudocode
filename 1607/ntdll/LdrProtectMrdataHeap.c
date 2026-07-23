/*
 * XREFs of LdrProtectMrdataHeap @ 0x18002D9E4
 * Callers:
 *     RtlpProtectReadOnlyHeap @ 0x1800F7668 (RtlpProtectReadOnlyHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 */

void __fastcall LdrProtectMrdataHeap(int a1)
{
  int v2; // ebx
  int v3; // ebx

  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v2 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( a1 )
    {
      if ( !v2 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v3 = v2 - 1;
    }
    else
    {
      if ( !v2 )
        RtlProtectHeap(LdrpMrdataHeap, 0);
      if ( v2 == -1 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v3 = v2 + 1;
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v3;
    if ( a1 )
    {
      if ( !v3 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
    }
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
}
