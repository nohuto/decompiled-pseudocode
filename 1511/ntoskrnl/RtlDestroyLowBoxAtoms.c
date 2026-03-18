/*
 * XREFs of RtlDestroyLowBoxAtoms @ 0x140099C4C
 * Callers:
 *     ExRemoveLowBoxAtomReferences @ 0x14009A2A0 (ExRemoveLowBoxAtomReferences.c)
 * Callees:
 *     RtlpDereferenceAtom @ 0x140099FC4 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x1403F6CFC (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x14045FF90 (RtlpUnlockAtomTable.c)
 *     RtlpFreeAtom @ 0x1404603BC (RtlpFreeAtom.c)
 */

__int64 __fastcall RtlDestroyLowBoxAtoms(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD **i; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // r13
  __int64 *j; // rbx
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
        v8 = v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        for ( j = (__int64 *)v8[2]; j != v8 + 2; j = (__int64 *)*j )
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
            RtlpFreeAtom();
            if ( (unsigned __int8)RtlpDereferenceAtom(v8, v8 + 2, a1) )
              break;
          }
        }
      }
    }
    return RtlpUnlockAtomTable(a1);
  }
  return result;
}
