/*
 * XREFs of UserAddAtomEx @ 0x1C006CE00
 * Callers:
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtomEx(__int64 a1, int a2, unsigned int a3)
{
  struct _RTL_ATOM_TABLE *v3; // rbx
  NTSTATUS v5; // eax
  __int64 result; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  RTL_ATOM v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = UserAtomTableHandle;
  v9 = 0;
  v5 = RtlAddAtomToAtomTableEx(UserAtomTableHandle, a1, &v9, a3);
  if ( v5 < 0 )
  {
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7, v8);
  }
  result = v9;
  if ( v9 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v3, v9);
      return v9;
    }
  }
  return result;
}
