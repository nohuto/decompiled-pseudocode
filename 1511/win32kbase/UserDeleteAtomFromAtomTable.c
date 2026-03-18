/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1C0072680
 * Callers:
 *     UserDeleteAtom @ 0x1C0072670 (UserDeleteAtom.c)
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2)
{
  int v3; // ecx
  __int64 result; // rax
  ULONG v5; // eax
  __int64 v6; // rdx

  if ( a2 <= (unsigned __int16)gatomLastPinned && a2 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v3 = RtlDeleteAtomFromAtomTable(a1, a2);
  result = 0LL;
  if ( v3 < 0 )
  {
    v5 = RtlNtStatusToDosError(v3);
    UserSetLastError(v5, v6);
    return a2;
  }
  return result;
}
