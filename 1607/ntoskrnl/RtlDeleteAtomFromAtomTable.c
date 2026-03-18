/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1404A3568
 * Callers:
 *     NtDeleteAtom @ 0x1404A3520 (NtDeleteAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x140013E94 (RtlpLookupLowBox.c)
 *     RtlpDereferenceAtom @ 0x140088DC4 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x140421FD0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140425940 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpUnlockAtomTable @ 0x14042B3F0 (RtlpUnlockAtomTable.c)
 */

NTSTATUS __stdcall RtlDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v7 = RtlpLookupLowBox((__int64)AtomTable, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v7, (__int64)AtomTable);
        }
      }
    }
  }
  RtlpUnlockAtomTable((__int64)AtomTable);
  return v4;
}
