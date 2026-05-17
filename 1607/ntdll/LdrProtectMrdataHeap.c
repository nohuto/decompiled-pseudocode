/*
 * XREFs of LdrProtectMrdataHeap @ 0x18002D9F4
 * Callers:
 *     RtlpProtectReadOnlyHeap @ 0x1800F7668 (RtlpProtectReadOnlyHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 */

signed __int64 __fastcall LdrProtectMrdataHeap(int a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // ebx
  signed __int64 result; // rax

  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( a1 )
    {
      if ( !v5 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v6 = v5 - 1;
    }
    else
    {
      if ( !v5 )
        RtlProtectHeap(LdrpMrdataHeap, 0);
      if ( v5 == -1 )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      v6 = v5 + 1;
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6;
    if ( a1 )
    {
      if ( !v6 )
        RtlProtectHeap(LdrpMrdataHeap, 1);
    }
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return result;
}
