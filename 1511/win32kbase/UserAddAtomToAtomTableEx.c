/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C0076760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(PRTL_ATOM_TABLE AtomTable, __int64 a2, int a3, __int64 a4)
{
  NTSTATUS v6; // eax
  __int64 result; // rax
  ULONG v8; // eax
  __int64 v9; // rdx
  RTL_ATOM v10[12]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = 0;
  v6 = RtlAddAtomToAtomTableEx(AtomTable, a2, v10, a4);
  if ( v6 < 0 )
  {
    v8 = RtlNtStatusToDosError(v6);
    UserSetLastError(v8, v9);
  }
  result = v10[0];
  if ( v10[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(AtomTable, v10[0]);
      return v10[0];
    }
  }
  return result;
}
