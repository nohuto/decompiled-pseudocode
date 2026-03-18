/*
 * XREFs of NtFindAtom @ 0x1404223CC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExCallCallBack @ 0x14042251C (ExCallCallBack.c)
 *     RtlLookupAtomInAtomTable @ 0x140423CF0 (RtlLookupAtomInAtomTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFindAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  size_t v4; // rbx
  char PreviousMode; // r15
  WCHAR *v7; // r14
  _WORD *v8; // rcx
  NTSTATUS result; // eax
  USHORT Atoma; // [rsp+20h] [rbp-258h] BYREF
  PRTL_ATOM_TABLE AtomTable; // [rsp+28h] [rbp-250h] BYREF
  PWSTR v12; // [rsp+30h] [rbp-248h]
  _WORD v13[256]; // [rsp+40h] [rbp-238h] BYREF

  v4 = AtomNameLength;
  AtomTable = 0LL;
  ExCallCallBack(AtomName, 2LL, &AtomTable);
  if ( !AtomTable )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = AtomName;
  v12 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v8 = Atom;
      if ( (unsigned __int64)Atom >= MmUserProbeAddress )
        v8 = (_WORD *)MmUserProbeAddress;
      *v8 = *v8;
      v7 = v12;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v4 > MmUserProbeAddress || (PWSTR)((char *)AtomName + v4) < AtomName )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v7 = v13;
      v12 = v13;
      memmove(v13, AtomName, v4);
      v13[v4 >> 1] = 0;
    }
  }
  result = RtlLookupAtomInAtomTable(AtomTable, v7, &Atoma);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = Atoma;
  }
  return result;
}
