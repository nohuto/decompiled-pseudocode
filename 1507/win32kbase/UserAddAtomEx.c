/*
 * XREFs of UserAddAtomEx @ 0x1C000EB00
 * Callers:
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtomEx(__int64 a1, int a2, unsigned int a3)
{
  struct _RTL_ATOM_TABLE *v3; // rbx
  NTSTATUS v5; // eax
  __int64 result; // rax
  ULONG v7; // eax
  RTL_ATOM v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = UserAtomTableHandle;
  v8 = 0;
  v5 = RtlAddAtomToAtomTableEx(UserAtomTableHandle, a1, &v8, a3);
  if ( v5 < 0 )
  {
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7);
  }
  result = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v3, v8);
      return v8;
    }
  }
  return result;
}
