/*
 * XREFs of RtlpDereferenceAtom @ 0x14010CFB4
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x14010CE34 (RtlDestroyLowBoxAtoms.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14051B968 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlpFreeAllAtom @ 0x14010D200 (RtlpFreeAllAtom.c)
 *     RtlpFreeAtom @ 0x14051C1D8 (RtlpFreeAtom.c)
 */

char __fastcall RtlpDereferenceAtom(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  __int64 *v7; // rcx
  __int64 **v8; // rax

  v4 = a1;
  if ( (*((_BYTE *)a2 + 22) & 1) != 0 )
    return 0;
  v5 = (*((_WORD *)a2 + 10))-- == 1;
  if ( !v5 )
    return 0;
  if ( a2 != (__int64 *)(a1 + 16) )
  {
    v7 = (__int64 *)*a2;
    v8 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    RtlpFreeAtom(a2);
    if ( (*(_BYTE *)(v4 + 38) & 1) != 0 )
      return 0;
    v5 = (*(_WORD *)(v4 + 36))-- == 1;
    if ( !v5 )
      return 0;
    a1 = v4;
  }
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
