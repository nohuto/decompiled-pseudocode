/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1405048B0
 * Callers:
 *     NtDeleteAtom @ 0x1405046E4 (NtDeleteAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x1400EE2A4 (RtlpLookupLowBox.c)
 *     RtlpDereferenceAtom @ 0x1400EE310 (RtlpDereferenceAtom.c)
 *     RtlpUnlockAtomTable @ 0x1404216C8 (RtlpUnlockAtomTable.c)
 *     RtlpLockAtomTable @ 0x140423F20 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404240F0 (RtlpAtomMapAtomToHandleEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  __int64 v2; // r8
  __int64 v3; // r9
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 *v9; // rax

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
    v8 = v7;
    if ( v7 )
    {
      if ( *(_WORD *)(v7 + 10) == Atom )
      {
        v9 = RtlpLookupLowBox((__int64)AtomTable, v7, 1);
        if ( v9 )
        {
          v6 = 0;
          if ( (*((_BYTE *)v9 + 22) & 1) != 0 )
            v6 = 1073741849;
          else
            RtlpDereferenceAtom(v8, v9, (__int64)AtomTable);
        }
      }
    }
  }
  RtlpUnlockAtomTable((__int64)AtomTable);
  return v6;
}
