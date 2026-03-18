/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x1403E38B4
 * Callers:
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A4564 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpMarkProcessPeb @ 0x1405EE810 (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(ULONG_PTR BugCheckParameter1, __int64 a2, char *a3, _BYTE *a4)
{
  char *v5; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  NTSTATUS v12; // edi
  char v13; // di
  unsigned __int8 v14[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-A0h]
  __int64 v16; // [rsp+30h] [rbp-98h]

  *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  v5 = a3;
  if ( a3 )
  {
    ObfReferenceObject(a3);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 1056) )
      goto LABEL_3;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v5 = *(char **)(a2 + 1056);
    if ( v5 )
    {
      if ( (*(_DWORD *)(a2 + 772) & 2) != 0 )
        v5 = 0LL;
      else
        ObfReferenceObject(*(PVOID *)(a2 + 1056));
    }
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  }
  if ( !v5 )
    goto LABEL_3;
  LOBYTE(v9) = *(_BYTE *)(a2 + 1722);
  LOBYTE(v11) = *(_BYTE *)(BugCheckParameter1 + 1722);
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v10, v9, v11) )
  {
    v12 = -1073740014;
  }
  else if ( (*((_DWORD *)v5 + 24) & 4) == 0 || *(_QWORD *)(BugCheckParameter1 + 1064) )
  {
    if ( !*(_QWORD *)(BugCheckParameter1 + 720)
      || (v15 = *(_QWORD *)(BugCheckParameter1 + 720), v16 = 1LL, v12 = HvlpEnterIumSecureMode(1u, 11, 0, v14), v12 >= 0) )
    {
      v13 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 24));
      if ( (*((_DWORD *)v5 + 24) & 1) != 0 )
        v13 = 1;
      else
        *(_QWORD *)(BugCheckParameter1 + 1056) = v5;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 24));
      if ( v13 )
      {
        ObfDereferenceObject(v5);
        v5 = 0LL;
      }
      if ( v5 )
      {
        DbgkpMarkProcessPeb(BugCheckParameter1);
        *a4 = 1;
        return 0LL;
      }
LABEL_3:
      *a4 = 0;
      return 0LL;
    }
  }
  else
  {
    v12 = -1073741637;
  }
  ObfDereferenceObject(v5);
  return (unsigned int)v12;
}
