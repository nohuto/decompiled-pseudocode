/*
 * XREFs of Template_t @ 0x1C00B8FFC
 * Callers:
 *     EtwTraceTouchPadCurtainState @ 0x1C00B5D40 (EtwTraceTouchPadCurtainState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_t(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (ULONGLONG)&v6;
  v5.Reserved = 0;
  v5.Size = 4;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TouchPadCurtainState, &W32kControlGuid, 1u, &v5);
}
