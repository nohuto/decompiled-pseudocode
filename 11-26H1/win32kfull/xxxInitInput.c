/*
 * XREFs of xxxInitInput @ 0x140249D14
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1402330A4 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[960]; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(v17, 0, 0x3B8uLL);
  v14 = a1;
  v2 = 0;
  Object = (PVOID)CreateKernelEvent(1LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v17, 2LL, &v14) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  v5 = 0;
  UserSessionState = W32GetUserSessionState(v4, v3);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
  {
    v5 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v7);
  v16 = 952LL;
  v10 = W32GetUserSessionState(v9, v8);
  if ( (int)LpcSendWaitReceivePort(*(_QWORD *)(v10 + 71272), 0x20000LL, v17, v17, &v16, 0LL) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(1LL, 0LL);
  if ( v5 )
    EnterMitRitHazardCrit();
  LOBYTE(v2) = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18696) != 0LL;
  return v2;
}
