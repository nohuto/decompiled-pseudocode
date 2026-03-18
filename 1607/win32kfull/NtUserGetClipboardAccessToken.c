/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C0212BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(void **a1, ACCESS_MASK a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  void *Handle; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL) <= 0x1FFF
    || (v7 = *(void **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL) + 128LL)) == 0LL )
  {
    UserSetLastError(5LL);
  }
  else
  {
    LOBYTE(v4) = ObOpenObjectByPointer(v7, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (void **)W32UserProbeAddress;
    *a1 = Handle;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
