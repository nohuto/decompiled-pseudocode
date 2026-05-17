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

__int64 __fastcall RtlEmptyAtomTable(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  unsigned int v7; // ebp
  unsigned __int64 *i; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx

  v4 = (char)a2;
  if ( !RtlpLockAtomTable(a1, a2, a3, a4) )
    return 3221225485LL;
  v7 = 0;
  for ( i = (unsigned __int64 *)(a1 + 72); v7 < *(_DWORD *)(a1 + 64); ++v7 )
  {
    v9 = i++;
    while ( 1 )
    {
      v11 = *v9;
      if ( !*v9 )
        break;
      if ( v4 || (*(_BYTE *)(v11 + 14) & 1) == 0 )
      {
        v10 = *v9;
        *v9 = *(_QWORD *)v11;
        *(_QWORD *)v11 = 0LL;
        RtlpFreeHandleForAtom(a1, v10);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      }
      else
      {
        v9 = (unsigned __int64 *)*v9;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return 0LL;
}
