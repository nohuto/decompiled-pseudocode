/*
 * XREFs of ValidateHdesk @ 0x1C00140F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

__int64 __fastcall ValidateHdesk(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // ebx
  _DWORD *v6; // rax
  ULONG v8; // eax
  ULONG v9; // eax
  _DWORD *v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = ObReferenceObjectByHandle(a1, a3, (POBJECT_TYPE)ExDesktopObjectType, a2, (PVOID *)&v10, 0LL);
  v6 = v10;
  *a4 = v10;
  if ( v5 < 0 )
  {
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9);
    return (unsigned int)v5;
  }
  if ( *v6 == gSessionId && (v6[8] & 0xE) == 0 )
    return (unsigned int)v5;
  v8 = RtlNtStatusToDosError(-1073741816);
  UserSetLastError(v8);
  ObfDereferenceObject(*a4);
  return 3221225480LL;
}
