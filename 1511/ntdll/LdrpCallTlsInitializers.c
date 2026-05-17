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

__int64 __fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  __int64 TlsEntry; // rbx
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a2);
  result = RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v6 = *(__int64 **)(TlsEntry + 40);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          break;
        ++v6;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1061,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n");
        result = LdrpCallInitRoutine(v7, *(_QWORD *)(a2 + 48), a1, 0LL);
      }
    }
  }
  return result;
}
