/*
 * XREFs of NtUserCloseWindowStation @ 0x1C00DCBD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00DD080 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserCloseWindowStation(unsigned __int64 Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // edi
  ULONG v8; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(1LL);
  LOBYTE(v2) = 1;
  v5 = 0;
  if ( (int)ValidateHwinsta(Handle, v2, 0LL, &Object) >= 0 )
  {
    GetProcessWindowStation(&v9);
    if ( ((Handle ^ v9) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v6 = ObCloseHandle((HANDLE)Handle, 1);
    else
      v6 = -2147483631;
    ObfDereferenceObject(Object);
    if ( v6 < 0 )
    {
      v8 = RtlNtStatusToDosError(v6);
      UserSetLastError(v8);
    }
    else
    {
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
