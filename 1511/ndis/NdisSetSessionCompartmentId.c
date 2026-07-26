/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1C0060F30
 * Callers:
 *     ndisNsiSetAllSessionInformation @ 0x1C00D1A90 (ndisNsiSetAllSessionInformation.c)
 * Callees:
 *     ?ndisCmIsThreadCompartmentSandboxed@@YAEPEAU_ETHREAD@@PEAI@Z @ 0x1C0012058 (-ndisCmIsThreadCompartmentSandboxed@@YAEPEAU_ETHREAD@@PEAI@Z.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C003FC24 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C003FE34 (ndisIfReferenceCompartmentForUser.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0060DC0 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C0060E34 (-ndisCmLazyInitializeCleanup@@YAXXZ.c)
 *     WPP_SF_qll @ 0x1C006113C (WPP_SF_qll.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int ThreadSessionId, unsigned int a2)
{
  unsigned int *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r15
  KIRQL v11; // r13
  char *PoolWithTag; // rbx
  PVOID v13; // r15
  struct _NDIS_IF_COMPARTMENT_BLOCK *v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  if ( ndisCmIsThreadCompartmentSandboxed(KeGetCurrentThread(), 0LL) )
  {
    if ( (unsigned __int8)byte_1C008371D >= 3u )
      WPP_SF_qll(v6, v5, KeGetCurrentThread(), ThreadSessionId, a2);
    return 3221225506LL;
  }
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( a2 )
  {
    v14 = 0LL;
    ndisIfReferenceCompartmentForUser(0LL, a2, &v14);
    v8 = (unsigned int *)v14;
    if ( !v14 )
      return 3221225485LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = ThreadSessionId + 1;
  v10 = v9;
  v15 = v9;
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    PoolWithTag = (char *)ndisCmSession;
  }
  else
  {
    ndisCmLazyInitializeCleanup();
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24 * v9, 0x6D63444Eu);
    if ( !PoolWithTag )
    {
      KeReleaseSpinLock(&ndisCmSessionLock, v11);
      if ( v8 )
        ndisIfDereferenceCompartmentForUser(v8);
      return 3221225626LL;
    }
    v13 = ndisCmSession;
    if ( ndisCmSession )
    {
      memmove(PoolWithTag, ndisCmSession, 24LL * ndisCmSessionCount);
      ExFreePoolWithTag(v13, 0);
    }
    memset(&PoolWithTag[24 * ndisCmSessionCount], 0, 24LL * ((unsigned int)v9 - ndisCmSessionCount));
    v10 = v15;
    ndisCmSession = PoolWithTag;
    ndisCmSessionCount = v9;
  }
  if ( !*(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] )
  {
    if ( !a2 )
      goto LABEL_26;
    *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] = v10;
LABEL_25:
    *(_DWORD *)&PoolWithTag[24 * ThreadSessionId] = a2;
    *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 16] = v8;
    goto LABEL_26;
  }
  v4 = *(unsigned int **)&PoolWithTag[24 * ThreadSessionId + 16];
  if ( a2 )
    goto LABEL_25;
  *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] = 0LL;
  *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 16] = 0LL;
  *(_DWORD *)&PoolWithTag[24 * ThreadSessionId] = 1;
LABEL_26:
  KeReleaseSpinLock(&ndisCmSessionLock, v11);
  if ( v4 )
    ndisIfDereferenceCompartmentForUser(v4);
  _InterlockedExchangeAdd((volatile signed __int32 *)&NdisSessionToCompartmentMappingEpochAndZero, 2u);
  return 0LL;
}
