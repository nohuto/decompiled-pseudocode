/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x14045FED4
 * Callers:
 *     NtDeleteAtom @ 0x14045FBA8 (NtDeleteAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x140099F58 (RtlpLookupLowBox.c)
 *     RtlpDereferenceAtom @ 0x140099FC4 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x1403F6CFC (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1403F6EC0 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpUnlockAtomTable @ 0x14045FF90 (RtlpUnlockAtomTable.c)
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
  RtlpUnlockAtomTable(AtomTable);
  return v4;
}
