/*
 * XREFs of xxxInitInput @ 0x1C00EACE0
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00EAA84 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // [rsp+30h] [rbp-1D8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-1D0h]
  _BYTE v10[432]; // [rsp+40h] [rbp-1C8h] BYREF

  v8 = a1;
  v1 = 0;
  Object = (PVOID)CreateKernelEvent(1LL, 0LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v10, 2LL, &v8) )
  {
    Win32FreePool(Object, v2, v4);
    return 0LL;
  }
  if ( gdwInAtomicOperation )
  {
    v3 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation);
  if ( (int)LpcRequestWaitReplyPort(CsrApiPort, v10, v10) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object, v5, v6);
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v1) = gptiRit != 0LL;
  return v1;
}
