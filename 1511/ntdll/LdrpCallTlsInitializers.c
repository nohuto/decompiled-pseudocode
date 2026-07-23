/*
 * XREFs of LdrpCallTlsInitializers @ 0x1800114E4
 * Callers:
 *     LdrpProcessDetachNode @ 0x18000554C (LdrpProcessDetachNode.c)
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     LdrShutdownProcess @ 0x18005B1A0 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180071F68 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x1800115E0 (LdrpFindTlsEntry.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 */

void __fastcall LdrpCallTlsInitializers(__int64 a1, __int64 a2)
{
  __int64 TlsEntry; // rbx
  _RTL_DYNAMIC_HASH_TABLE **v4; // rbx
  _RTL_DYNAMIC_HASH_TABLE *v5; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a2);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v4 = *(_RTL_DYNAMIC_HASH_TABLE ***)(TlsEntry + 40);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *v4;
        if ( !*v4 )
          break;
        ++v4;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1061,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n");
        LdrpCallInitRoutine(v5);
      }
    }
  }
}
