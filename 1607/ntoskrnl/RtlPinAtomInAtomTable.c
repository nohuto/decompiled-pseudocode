/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1404C4A6C
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x140013A14 (RtlpLookupLowBox.c)
 *     RtlpLockAtomTable @ 0x140420E90 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140424810 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpUnlockAtomTable @ 0x14042A2C0 (RtlpUnlockAtomTable.c)
 */

NTSTATUS __stdcall RtlPinAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v5; // rax
  __int64 *v6; // rax

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
    if ( v5 && *(_WORD *)(v5 + 10) == Atom )
    {
      v6 = RtlpLookupLowBox((__int64)AtomTable, v5, 0);
      if ( v6 )
      {
        v4 = 0;
        *((_WORD *)v6 + 11) |= 1u;
      }
    }
  }
  RtlpUnlockAtomTable((__int64)AtomTable);
  return v4;
}
