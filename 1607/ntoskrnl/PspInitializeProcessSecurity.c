/*
 * XREFs of PspInitializeProcessSecurity @ 0x1404711C8
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     ObInitializeFastReference @ 0x14047137C (ObInitializeFastReference.c)
 *     SeAssignPrimaryToken @ 0x140580478 (SeAssignPrimaryToken.c)
 *     PspIdentityBasedJobBreakaway @ 0x14067F260 (PspIdentityBasedJobBreakaway.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        _DWORD *a10)
{
  _DWORD *v10; // rsi
  PACCESS_TOKEN v11; // rbp
  _DWORD *v15; // r14
  int SessionId; // eax
  int v17; // r9d
  __int64 v18; // r10
  int v19; // r15d
  int v21[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF

  v10 = a10;
  v11 = 0LL;
  *a10 = 0;
  v15 = v10 + 1;
  v10[1] = 0;
  if ( Process )
  {
    v21[0] = a5;
    v21[1] = a6;
    v21[2] = (HIDWORD(Process[2].ActiveProcessors.Bitmap[0]) >> 19) & 1;
    SessionId = MmGetSessionId((struct _KPROCESS *)a2);
    v19 = SeSubProcessToken(a2, v18, &v22, v17, SessionId, v21, a7, a8, a9, (__int64)&a10);
    if ( v19 >= 0 )
    {
      ObInitializeFastReference(a2 + 856, v22);
      if ( a4 || (_BYTE)a10 )
        *v10 = 1;
      if ( BYTE1(a10) )
        *v15 = 1;
      if ( !*v15 && BYTE2(a10) )
      {
        v11 = PsReferencePrimaryToken(Process);
        v19 = PspIdentityBasedJobBreakaway(v11, v22, v10 + 1);
      }
    }
    if ( *v10 )
      *(_QWORD *)(a2 + 1976) = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      *(_QWORD *)(a2 + 1976) = *(_QWORD *)&Process[2].ThreadSeed[18];
  }
  else
  {
    *(_QWORD *)(a2 + 856) = 0LL;
    SeAssignPrimaryToken(a2, a3);
    v19 = 0;
  }
  if ( v11 )
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v11);
  return (unsigned int)v19;
}
