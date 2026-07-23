/*
 * XREFs of NtFindAtom @ 0x140427B30
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140013A80 (MmSessionGetWin32Callouts.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExCallCallBack @ 0x140427C90 (ExCallCallBack.c)
 *     RtlLookupAtomInAtomTable @ 0x140428260 (RtlLookupAtomInAtomTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFindAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  size_t v4; // rdi
  _RTL_RUN_ONCE *Win32Callouts; // rax
  char PreviousMode; // r15
  WCHAR *v8; // rsi
  __int64 v9; // rcx
  NTSTATUS result; // eax
  USHORT Atoma; // [rsp+20h] [rbp-258h] BYREF
  PRTL_ATOM_TABLE AtomTable; // [rsp+28h] [rbp-250h] BYREF
  PWSTR v13; // [rsp+30h] [rbp-248h]
  _WORD v14[256]; // [rsp+40h] [rbp-238h] BYREF

  v4 = AtomNameLength;
  AtomTable = 0LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack(Win32Callouts, 2LL, &AtomTable);
  if ( !AtomTable )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = AtomName;
  v13 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v9 = (__int64)Atom;
      if ( (unsigned __int64)Atom >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_WORD *)v9 = *(_WORD *)v9;
      v8 = v13;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v4 > 0x7FFFFFFF0000LL || (PWSTR)((char *)AtomName + v4) < AtomName )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v8 = v14;
      v13 = v14;
      memmove(v14, AtomName, v4);
      v14[v4 >> 1] = 0;
    }
  }
  result = RtlLookupAtomInAtomTable(AtomTable, v8, &Atoma);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = Atoma;
  }
  return result;
}
