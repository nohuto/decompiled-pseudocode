/*
 * XREFs of RtlGrowFunctionTable @ 0x1800DBAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlGrowFunctionTable(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v6; // edi
  signed __int64 result; // rax
  int v8; // ecx

  v4 = (int)a2;
  if ( *(_DWORD *)(a1 + 80) != 3 || (unsigned int)a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(-1073741811);
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v6 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    result = RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *(_DWORD *)(a1 + 84) = v4;
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
    v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v8 - 1;
    if ( v8 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return result;
}
