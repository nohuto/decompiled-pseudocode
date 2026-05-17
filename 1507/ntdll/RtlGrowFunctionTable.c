/*
 * XREFs of RtlGrowFunctionTable @ 0x1800CAE40
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
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
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, a2, a3, a4);
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
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, a2, a3, a4);
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
