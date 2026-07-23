/*
 * XREFs of RtlEmptyAtomTable @ 0x1800D1C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFreeHandleForAtom @ 0x180051E94 (RtlpFreeHandleForAtom.c)
 *     RtlpLockAtomTable @ 0x180052564 (RtlpLockAtomTable.c)
 */

NTSTATUS __cdecl RtlEmptyAtomTable(PVOID AtomTableHandle, BOOLEAN IncludePinnedAtoms)
{
  unsigned int v5; // ebp
  __int64 *i; // r14
  __int64 *v7; // rsi
  __int64 v8; // rdx
  _BYTE *v9; // rbx

  if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
    return -1073741811;
  v5 = 0;
  for ( i = (__int64 *)((char *)AtomTableHandle + 72); v5 < *((_DWORD *)AtomTableHandle + 16); ++v5 )
  {
    v7 = i++;
    while ( 1 )
    {
      v9 = (_BYTE *)*v7;
      if ( !*v7 )
        break;
      if ( IncludePinnedAtoms || (v9[14] & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTableHandle, v8);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      }
      else
      {
        v7 = (__int64 *)*v7;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return 0;
}
