/*
 * XREFs of NtQueryInformationAtom @ 0x140504728
 * Callers:
 *     <none>
 * Callees:
 *     ExCallCallBack @ 0x14042251C (ExCallCallBack.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     RtlQueryAtomInAtomTable @ 0x140504970 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406CBD70 (RtlQueryAtomsInAtomTable.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  _DWORD *v9; // rcx
  ULONG v10; // ebx
  int AtomsInAtomTable; // edx
  ULONG v12; // eax
  ULONG RefCount; // [rsp+38h] [rbp-20h] BYREF
  ULONG NameLength; // [rsp+3Ch] [rbp-1Ch] BYREF
  ULONG PinCount; // [rsp+40h] [rbp-18h] BYREF
  PRTL_ATOM_TABLE AtomTable[2]; // [rsp+48h] [rbp-10h] BYREF

  AtomTable[0] = 0LL;
  ExCallCallBack(Atom, 2LL, (__int64)AtomTable);
  if ( !AtomTable[0] )
    return -1073741790;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    ProbeForWrite(AtomInformation, AtomInformationLength, 4u);
    v9 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v9 = (_DWORD *)MmUserProbeAddress;
      *v9 = *v9;
    }
  }
  v10 = 0;
  if ( AtomInformationClass )
  {
    if ( AtomInformationClass == AtomTableInformation )
    {
      v10 = 4;
      if ( AtomInformationLength < 4 )
        return -1073741820;
      AtomsInAtomTable = RtlQueryAtomsInAtomTable(
                           AtomTable[0],
                           (AtomInformationLength - 4) >> 1,
                           AtomInformation,
                           (char *)AtomInformation + 4);
      if ( AtomsInAtomTable >= 0 )
        v10 = 2 * *(_DWORD *)AtomInformation + 4;
    }
    else
    {
      AtomsInAtomTable = -1073741821;
    }
  }
  else
  {
    v10 = 6;
    if ( AtomInformationLength < 6 )
      return -1073741820;
    RefCount = 0;
    NameLength = AtomInformationLength - 6;
    AtomsInAtomTable = RtlQueryAtomInAtomTable(
                         AtomTable[0],
                         Atom,
                         &RefCount,
                         &PinCount,
                         (PWSTR)AtomInformation + 3,
                         &NameLength);
    if ( AtomsInAtomTable >= 0 )
    {
      *(_WORD *)AtomInformation = RefCount;
      *((_WORD *)AtomInformation + 1) = PinCount;
      v12 = NameLength;
      *((_WORD *)AtomInformation + 2) = NameLength;
      v10 = v12 + 8;
    }
  }
  if ( ReturnLength )
    *ReturnLength = v10;
  return AtomsInAtomTable;
}
