/*
 * XREFs of CreatePointerDeviceProcessEvents @ 0x140138F98
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x140139008 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 */

__int64 __fastcall CreatePointerDeviceProcessEvents(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = CreatePointerDeviceProcessEvent(
             0x100000u,
             1,
             1u,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-running",
             (void **)(UserSessionState + 16688));
  if ( (_DWORD)result )
  {
    v6 = W32GetUserSessionState(v5, v4);
    return CreatePointerDeviceProcessEvent(
             2u,
             0,
             0,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-request",
             (void **)(v6 + 16696));
  }
  return result;
}
