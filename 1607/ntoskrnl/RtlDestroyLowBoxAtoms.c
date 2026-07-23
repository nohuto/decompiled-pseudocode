/*
 * XREFs of RtlDestroyLowBoxAtoms @ 0x14010CE34
 * Callers:
 *     ExRemoveLowBoxAtomReferences @ 0x1400B38D0 (ExRemoveLowBoxAtomReferences.c)
 * Callees:
 *     RtlpDereferenceAtom @ 0x14010CFB4 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x140420E90 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x14042A2C0 (RtlpUnlockAtomTable.c)
 *     RtlpFreeAtom @ 0x14051C1D8 (RtlpFreeAtom.c)
 */

__int64 __fastcall RtlDestroyLowBoxAtoms(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD **i; // r15
  _QWORD *v7; // rsi
  __int64 *j; // rbx
  _QWORD *v9; // r13
  __int64 *v10; // rcx
  __int64 *v11; // r8

  result = RtlpLockAtomTable();
  if ( (_BYTE)result )
  {
    v5 = 0;
    for ( i = (_QWORD **)(a1 + 32); v5 < *(_DWORD *)(a1 + 28); ++v5 )
    {
      v7 = *i++;
      while ( 1 )
      {
        v9 = v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        for ( j = (__int64 *)v9[2]; j != v9 + 2; j = (__int64 *)*j )
        {
          v10 = j;
          if ( *((_DWORD *)j + 4) == a2 )
          {
            v11 = (__int64 *)*j;
            j = (__int64 *)j[1];
            if ( *(__int64 **)(*v10 + 8) != v10 || (__int64 *)*j != v10 )
              __fastfail(3u);
            *j = (__int64)v11;
            v11[1] = (__int64)j;
            RtlpFreeAtom(v10);
            if ( (unsigned __int8)RtlpDereferenceAtom(v9, v9 + 2, a1) )
              break;
          }
        }
      }
    }
    return RtlpUnlockAtomTable(a1);
  }
  return result;
}
