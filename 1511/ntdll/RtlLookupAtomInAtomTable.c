/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x180043D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHashStringToAtom @ 0x180043E60 (RtlpHashStringToAtom.c)
 *     RtlGetIntegerAtom @ 0x180043F90 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x180044034 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180044060 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlLookupAtomInAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  __int64 v6; // r8
  NTSTATUS v7; // ebx
  __int64 v8; // r14
  USHORT v9; // ax
  _BYTE v11[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 IntegerAtom; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( RtlGetIntegerAtom(AtomName, (PUSHORT)&IntegerAtom) )
    {
      v9 = IntegerAtom;
      if ( (unsigned __int16)IntegerAtom < 0xC000u )
      {
        v7 = 0;
      }
      else
      {
        v9 = 0;
        LOWORD(IntegerAtom) = 0;
        v7 = -1073741811;
      }
      if ( !Atom )
        goto LABEL_18;
    }
    else
    {
      if ( !*AtomName )
      {
        v7 = -1073741773;
        goto LABEL_18;
      }
      v7 = RtlpHashStringToAtom(AtomTableHandle, AtomName, v6, 0LL, 0LL, v11, &IntegerAtom);
      if ( v7 < 0 )
        goto LABEL_18;
      v8 = IntegerAtom;
      if ( !IntegerAtom )
      {
        v7 = -1073741772;
        goto LABEL_18;
      }
      if ( !RtlpAtomMapAtomToHandleEntry(AtomTableHandle, *(unsigned __int16 *)(IntegerAtom + 8)) )
      {
        v7 = -1073741816;
        goto LABEL_18;
      }
      v7 = 0;
      if ( !Atom )
      {
LABEL_18:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
        return v7;
      }
      v9 = *(_WORD *)(v8 + 10);
    }
    *Atom = v9;
    goto LABEL_18;
  }
  return -1073741811;
}
