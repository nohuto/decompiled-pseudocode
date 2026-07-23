/*
 * XREFs of PspConvertSiloToServerSilo @ 0x14067E604
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsTerminateServerSilo @ 0x14067E25C (PsTerminateServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E868 (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x14067EAB8 (PspQueueDeferredWorkAndWait.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E63BC (ObGetSiloRootDirectoryPath.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, KPROCESSOR_MODE a2, void *a3)
{
  PVOID PoolWithTag; // rax
  signed __int64 v8; // rbx
  NTSTATUS SiloRootDirectoryPath; // esi
  __int64 v10; // rcx

  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( *(_QWORD *)(a1 + 1064) )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x430uLL, 0x476C6953u);
  v8 = (signed __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x430uLL);
  *(_DWORD *)(v8 + 1008) = -1;
  *(_DWORD *)(v8 + 992) = 0;
  *(_DWORD *)(v8 + 996) = 259;
  if ( a3 )
  {
    SiloRootDirectoryPath = ObReferenceObjectByHandleWithTag(
                              a3,
                              2u,
                              (POBJECT_TYPE)ExEventObjectType,
                              a2,
                              0x65446953u,
                              (PVOID *)(v8 + 1000),
                              0LL);
    if ( SiloRootDirectoryPath < 0 )
      goto LABEL_9;
  }
  SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v8 + 968);
  if ( SiloRootDirectoryPath < 0 )
    goto LABEL_9;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1256), v8, 0LL) )
  {
    SiloRootDirectoryPath = -1073741791;
LABEL_9:
    PspDeleteServerSiloGlobals(v8);
    return (unsigned int)SiloRootDirectoryPath;
  }
  if ( (int)PspQueueDeferredWorkAndWait(v10, a1) >= 0 )
    return 0LL;
  PsTerminateServerSilo(a1);
  return 3221226341LL;
}
