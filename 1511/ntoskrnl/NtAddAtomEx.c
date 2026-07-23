/*
 * XREFs of NtAddAtomEx @ 0x14045FD74
 * Callers:
 *     NtAddAtom @ 0x1406740D4 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x140099D18 (RtlAddAtomToAtomTableEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExCallCallBack @ 0x1403F6504 (ExCallCallBack.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  size_t v6; // rbx
  char PreviousMode; // r15
  WCHAR *v9; // r14
  _WORD *v10; // rcx
  NTSTATUS result; // eax
  USHORT v12; // [rsp+20h] [rbp-268h] BYREF
  __int64 v13; // [rsp+28h] [rbp-260h] BYREF
  PWSTR v14; // [rsp+30h] [rbp-258h]
  _WORD v15[256]; // [rsp+40h] [rbp-248h] BYREF

  v6 = Length;
  v13 = 0LL;
  if ( (Flags & 0xFFFFFFFD) != 0 )
    return -1073741811;
  ExCallCallBack((__int64)AtomName, 2LL, (__int64)&v13);
  if ( !v13 )
    return -1073741790;
  if ( (unsigned int)v6 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = AtomName;
  v14 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v10 = Atom;
      if ( (unsigned __int64)Atom >= MmUserProbeAddress )
        v10 = (_WORD *)MmUserProbeAddress;
      *v10 = *v10;
      v9 = v14;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v6 > MmUserProbeAddress || (PWSTR)((char *)AtomName + v6) < AtomName )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v9 = v15;
      v14 = v15;
      memmove(v15, AtomName, v6);
      v15[v6 >> 1] = 0;
    }
  }
  result = RtlAddAtomToAtomTableEx(v13, v9, &v12, Flags);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = v12;
  }
  return result;
}
