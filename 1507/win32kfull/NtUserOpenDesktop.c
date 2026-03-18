/*
 * XREFs of NtUserOpenDesktop @ 0x1C00DAF70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _OpenDesktop @ 0x1C00DAFEC (_OpenDesktop.c)
 */

__int64 __fastcall NtUserOpenDesktop(struct _OBJECT_ATTRIBUTES *a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG v7; // eax
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0LL;
  v8 = 0LL;
  EnterCrit(1LL);
  v3 = OpenDesktop(a1, (__int64)&v8);
  if ( v3 < 0 )
  {
    v7 = RtlNtStatusToDosError(v3);
    UserSetLastError(v7);
  }
  else
  {
    v1 = v8;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v1;
}
