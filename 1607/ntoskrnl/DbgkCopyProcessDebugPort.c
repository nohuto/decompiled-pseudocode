/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x14045E744
 * Callers:
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpMarkProcessPeb @ 0x1406184F4 (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(_QWORD *BugCheckParameter1, __int64 a2, char *a3, _BYTE *a4)
{
  char *v5; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS v11; // edi
  char v12; // di
  char v13[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+30h] [rbp-98h]

  BugCheckParameter1[132] = 0LL;
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
  LOBYTE(v9) = *(_BYTE *)(a2 + 1738);
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v10, v9) )
  {
    v11 = -1073740014;
  }
  else if ( (*((_DWORD *)v5 + 24) & 4) == 0 || BugCheckParameter1[133] )
  {
    if ( !BugCheckParameter1[90]
      || (v14 = BugCheckParameter1[90], v15 = 1LL, v11 = VslpEnterIumSecureMode(1, 11LL, 0LL, (__int64)v13), v11 >= 0) )
    {
      v12 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 24));
      if ( (*((_DWORD *)v5 + 24) & 1) != 0 )
        v12 = 1;
      else
        BugCheckParameter1[132] = v5;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 24));
      if ( v12 )
      {
        ObfDereferenceObject(v5);
        v5 = 0LL;
      }
      if ( v5 )
      {
        DbgkpMarkProcessPeb((ULONG_PTR)BugCheckParameter1);
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
    v11 = -1073741637;
  }
  ObfDereferenceObject(v5);
  return (unsigned int)v11;
}
