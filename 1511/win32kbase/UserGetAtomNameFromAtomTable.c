/*
 * XREFs of UserGetAtomNameFromAtomTable @ 0x1C0075E10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

unsigned __int64 __fastcall UserGetAtomNameFromAtomTable(
        struct _RTL_ATOM_TABLE *a1,
        RTL_ATOM a2,
        WCHAR *AtomName,
        int a4)
{
  int v4; // eax
  ULONG v6; // eax
  __int64 v7; // rdx
  ULONG NameLength; // [rsp+58h] [rbp+20h] BYREF

  NameLength = 2 * a4;
  v4 = RtlQueryAtomInAtomTable(a1, a2, 0LL, 0LL, AtomName, &NameLength);
  if ( v4 >= 0 )
    return (unsigned __int64)NameLength >> 1;
  v6 = RtlNtStatusToDosError(v4);
  UserSetLastError(v6, v7);
  return 0LL;
}
