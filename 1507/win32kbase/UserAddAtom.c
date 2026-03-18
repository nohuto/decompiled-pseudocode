/*
 * XREFs of UserAddAtom @ 0x1C0084170
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtom(PWSTR AtomName, int a2)
{
  struct _RTL_ATOM_TABLE *v2; // rbx
  int v4; // eax
  __int64 result; // rax
  ULONG v6; // eax
  __int64 v7; // rdx
  USHORT v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = UserAtomTableHandle;
  v8 = 0;
  v4 = RtlAddAtomToAtomTable(UserAtomTableHandle, AtomName, &v8);
  if ( v4 < 0 )
  {
    v6 = RtlNtStatusToDosError(v4);
    UserSetLastError(v6, v7);
  }
  result = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v2, v8);
      return v8;
    }
  }
  return result;
}
