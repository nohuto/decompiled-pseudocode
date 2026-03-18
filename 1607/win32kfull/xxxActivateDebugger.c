/*
 * XREFs of xxxActivateDebugger @ 0x1C02315D8
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C009AC70 (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxActivateDebugger(char a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v3; // rcx
  PETHREAD *v4; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v8[6]; // [rsp+48h] [rbp-C0h] BYREF
  int v9; // [rsp+78h] [rbp-90h]
  HANDLE ThreadProcessId; // [rsp+88h] [rbp-80h]
  HANDLE ThreadId; // [rsp+90h] [rbp-78h]

  if ( (a1 & 2) != 0 )
    return 0LL;
  v1 = a1 & 4;
  if ( (a1 & 4) == 0 )
  {
    v2 = 0;
    if ( gpqForeground )
    {
      v4 = *(PETHREAD **)(gpqForeground + 64LL);
      if ( v4 )
      {
        ThreadProcessId = PsGetThreadProcessId(*v4);
        ThreadId = PsGetThreadId(**(PETHREAD **)(gpqForeground + 64LL));
        if ( (int)LockProcessByClientId((__int64)ThreadProcessId, &Object) >= 0 )
        {
          ProcessDebugPort = PsGetProcessDebugPort(Object);
          ObfDereferenceObject(Object);
          if ( ProcessDebugPort )
            goto LABEL_9;
        }
      }
    }
    return 0LL;
  }
  v2 = 0;
  if ( !PsGetProcessDebugPort(gpepCSRSS) )
    return 0LL;
  ThreadProcessId = PsGetProcessId(gpepCSRSS);
LABEL_9:
  if ( CsrApiPort )
  {
    v8[0] = 5242920LL;
    v8[5] = 0LL;
    v9 = 197635;
    if ( gdwInAtomicOperation )
    {
      v3 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation);
    LpcRequestPort(CsrApiPort, v8);
    EnterCrit(0LL, 1LL);
  }
  LOBYTE(v2) = v1 != 0;
  return v2;
}
