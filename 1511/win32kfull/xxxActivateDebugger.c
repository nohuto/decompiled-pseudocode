/*
 * XREFs of xxxActivateDebugger @ 0x1C023957C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C00734FC (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxActivateDebugger(char a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  PETHREAD *v5; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+68h] [rbp-A0h]
  HANDLE ProcessId; // [rsp+78h] [rbp-90h]
  HANDLE ThreadId; // [rsp+80h] [rbp-88h]

  if ( (a1 & 2) != 0 )
    return 0LL;
  v1 = a1 & 4;
  if ( (a1 & 4) != 0 )
  {
    v2 = 0;
    if ( PsGetProcessDebugPort(gpepCSRSS) )
    {
      ProcessId = PsGetProcessId(gpepCSRSS);
      goto LABEL_9;
    }
    return 0LL;
  }
  v2 = 0;
  if ( !gpqForeground )
    return 0LL;
  v5 = *(PETHREAD **)(gpqForeground + 56LL);
  if ( !v5 )
    return 0LL;
  ProcessId = PsGetThreadProcessId(*v5);
  ThreadId = PsGetThreadId(**(PETHREAD **)(gpqForeground + 56LL));
  if ( (int)LockProcessByClientId((__int64)ProcessId, &Object) < 0 )
    return 0LL;
  ProcessDebugPort = PsGetProcessDebugPort(Object);
  ObfDereferenceObject(Object);
  if ( !ProcessDebugPort )
    return 0LL;
LABEL_9:
  if ( CsrApiPort )
  {
    v9[0] = 5242920LL;
    v9[5] = 0LL;
    v10 = 197635;
    UserSessionSwitchLeaveCrit(v4, v3);
    LpcRequestPort(CsrApiPort, v9);
    EnterCrit(0LL, 1LL);
  }
  LOBYTE(v2) = v1 != 0;
  return v2;
}
