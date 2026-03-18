/*
 * XREFs of PspInitializeProcessSecurity @ 0x14044F884
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     ObInitializeFastReference @ 0x14044F95C (ObInitializeFastReference.c)
 *     SeAssignPrimaryToken @ 0x14054A4B8 (SeAssignPrimaryToken.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(__int64 a1, __int64 a2, void *a3, int a4, char a5, _DWORD *a6)
{
  _DWORD *v6; // rsi
  int SessionId; // eax
  char v10; // r9
  _DWORD *v11; // r10
  int v12; // edi
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v6 = a6;
  *a6 = 0;
  if ( a1 )
  {
    SessionId = MmGetSessionId((struct _KPROCESS *)a2);
    v12 = SeSubProcessToken(a2, v11, &v14, v10, SessionId, a5, (char *)&a6);
    if ( v12 >= 0 )
    {
      ObInitializeFastReference(a2 + 856, v14);
      if ( a4 || (_BYTE)a6 )
        *v6 = 1;
    }
    *(_QWORD *)(a2 + 1936) = _InterlockedIncrement64(&PsNextSecurityDomain);
  }
  else
  {
    *(_QWORD *)(a2 + 856) = 0LL;
    SeAssignPrimaryToken((PEPROCESS)a2, a3);
    return 0;
  }
  return (unsigned int)v12;
}
