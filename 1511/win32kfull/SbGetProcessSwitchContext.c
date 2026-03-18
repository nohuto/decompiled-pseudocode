/*
 * XREFs of SbGetProcessSwitchContext @ 0x1C00E1EC4
 * Callers:
 *     SetManifestWinVer @ 0x1C00E1E10 (SetManifestWinVer.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment_0 @ 0x1C0152306 (ExRaiseDatatypeMisalignment_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall SbGetProcessSwitchContext(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment_0();
    if ( a1 + 4712 > MmUserProbeAddress || a1 + 4712 < a1 )
      LOBYTE(MmUserProbeAddress) = 0;
    result = a1 + 2016;
    if ( a1 == -2016LL || !*(_DWORD *)(a1 + 2064) )
      return 0LL;
  }
  return result;
}
