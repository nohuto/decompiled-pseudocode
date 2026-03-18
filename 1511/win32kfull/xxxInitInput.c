/*
 * XREFs of xxxInitInput @ 0x1C00D6E08
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00D6B58 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-1D8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-1D0h]
  _BYTE v7[432]; // [rsp+40h] [rbp-1C8h] BYREF

  v5 = a1;
  v1 = 0;
  Object = (PVOID)CreateKernelEvent(1LL, 0LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v7, 2LL, &v5) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  if ( (int)LpcRequestWaitReplyPort(CsrApiPort, v7, v7) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v1) = gptiRit != 0LL;
  return v1;
}
