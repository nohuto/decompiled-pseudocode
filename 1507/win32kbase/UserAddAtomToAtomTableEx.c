/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C0013D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(PRTL_ATOM_TABLE AtomTable, __int64 a2, int a3, __int64 a4)
{
  NTSTATUS v6; // eax
  __int64 result; // rax
  ULONG v8; // eax
  RTL_ATOM v9[12]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = 0;
  v6 = RtlAddAtomToAtomTableEx(AtomTable, a2, v9, a4);
  if ( v6 < 0 )
  {
    v8 = RtlNtStatusToDosError(v6);
    UserSetLastError(v8);
  }
  result = v9[0];
  if ( v9[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(AtomTable, v9[0]);
      return v9[0];
    }
  }
  return result;
}
