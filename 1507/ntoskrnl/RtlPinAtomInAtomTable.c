/*
 * XREFs of RtlPinAtomInAtomTable @ 0x14054E7E4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x1400EE2A4 (RtlpLookupLowBox.c)
 *     RtlpUnlockAtomTable @ 0x1404216C8 (RtlpUnlockAtomTable.c)
 *     RtlpLockAtomTable @ 0x140423F20 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404240F0 (RtlpAtomMapAtomToHandleEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlPinAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  __int64 v2; // r8
  __int64 v3; // r9
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  __int64 *v8; // rax

  if ( !RtlpLockAtomTable(AtomTable, Atom, v2, v3) )
    return -1073741811;
  v6 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v6 = 0;
  }
  else
  {
    v7 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable);
    if ( v7 && *(_WORD *)(v7 + 10) == Atom )
    {
      v8 = RtlpLookupLowBox((__int64)AtomTable, v7, 0);
      if ( v8 )
      {
        v6 = 0;
        *((_WORD *)v8 + 11) |= 1u;
      }
    }
  }
  RtlpUnlockAtomTable((__int64)AtomTable);
  return v6;
}
