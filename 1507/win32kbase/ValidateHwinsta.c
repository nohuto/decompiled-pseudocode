/*
 * XREFs of ValidateHwinsta @ 0x1C0014DF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

__int64 __fastcall ValidateHwinsta(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // eax
  _DWORD *v6; // rcx
  unsigned int v7; // ebx
  ULONG v9; // eax
  ULONG v10; // eax
  _DWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = ObReferenceObjectByHandle(a1, a3, ExWindowStationObjectType, a2, (PVOID *)&v11, 0LL);
  v6 = v11;
  v7 = v5;
  *a4 = v11;
  if ( v5 < 0 )
  {
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9);
  }
  else if ( *v6 != gSessionId )
  {
    v7 = -1073741816;
    v10 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v10);
    ObfDereferenceObject(*a4);
  }
  return v7;
}
