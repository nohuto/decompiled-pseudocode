/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1404E1468
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x140013E94 (RtlpLookupLowBox.c)
 *     RtlpLockAtomTable @ 0x140421FD0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140425940 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpUnlockAtomTable @ 0x14042B3F0 (RtlpUnlockAtomTable.c)
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
