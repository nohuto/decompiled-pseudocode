/*
 * XREFs of PspInitializeProcessSecurity @ 0x14046A2E8
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     ObInitializeFastReference @ 0x14046A3B8 (ObInitializeFastReference.c)
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     SeAssignPrimaryToken @ 0x1405C1B24 (SeAssignPrimaryToken.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // rsi
  int SessionId; // eax
  int v9; // r9d
  int v10; // r10d
  int v11; // edi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  *a5 = 0;
  if ( a1 )
  {
    SessionId = MmGetSessionId((struct _KPROCESS *)a2);
    v11 = SeSubProcessToken(a2, v10, (unsigned int)&v13, v9, SessionId, (__int64)&a5);
    if ( v11 >= 0 )
    {
      ObInitializeFastReference(a2 + 856, v13);
      if ( a4 || (_BYTE)a5 )
        *v5 = 1;
    }
    *(_QWORD *)(a2 + 1952) = _InterlockedIncrement64(&PsNextSecurityDomain);
  }
  else
  {
    *(_QWORD *)(a2 + 856) = 0LL;
    SeAssignPrimaryToken((PEPROCESS)a2, a3);
    return 0;
  }
  return (unsigned int)v11;
}
