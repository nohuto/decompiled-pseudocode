/*
 * XREFs of RtlpAllocateAtomTableEntry @ 0x14009A04C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140099D18 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140038774 (RtlpQueryLowBoxId.c)
 *     RtlpFreeAtom @ 0x1404603BC (RtlpFreeAtom.c)
 *     RtlpAllocateAtom @ 0x14046A750 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlpAllocateAtomTableEntry(unsigned int a1, __int64 *a2, char a3)
{
  unsigned __int64 v4; // rcx
  __int64 Atom; // rax
  __int64 v7; // rbx
  __int64 *v8; // rdi
  int LowBoxId; // esi
  __int64 v10; // rax
  __int64 v12; // rcx

  v4 = a1 + 44LL;
  if ( v4 >= 0x2C )
  {
    Atom = RtlpAllocateAtom(v4, 1097692225LL);
    v7 = Atom;
    if ( Atom )
    {
      *(_QWORD *)Atom = 0LL;
      *(_WORD *)(Atom + 36) = 1;
      if ( (a3 & 2) != 0 )
        *(_WORD *)(Atom + 38) = 2;
      else
        *(_WORD *)(Atom + 38) = 0;
      *(_DWORD *)(Atom + 32) = 0;
      v8 = (__int64 *)(Atom + 16);
      *(_QWORD *)(Atom + 24) = Atom + 16;
      *(_QWORD *)(Atom + 16) = Atom + 16;
      LowBoxId = RtlpQueryLowBoxId();
      if ( !LowBoxId )
      {
        v10 = v7 + 16;
LABEL_7:
        *a2 = v10;
        return v7;
      }
      v10 = RtlpAllocateAtom(24LL, 1282241601LL);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 20) = 1;
        *(_DWORD *)(v10 + 16) = LowBoxId;
        v12 = *v8;
        *(_QWORD *)v10 = *v8;
        *(_QWORD *)(v10 + 8) = v8;
        if ( *(__int64 **)(v12 + 8) != v8 )
          __fastfail(3u);
        *(_QWORD *)(v12 + 8) = v10;
        *v8 = v10;
        goto LABEL_7;
      }
      RtlpFreeAtom(v7);
    }
  }
  return 0LL;
}
