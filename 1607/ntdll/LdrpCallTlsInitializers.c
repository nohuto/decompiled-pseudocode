/*
 * XREFs of LdrpCallTlsInitializers @ 0x180012548
 * Callers:
 *     LdrShutdownProcess @ 0x180006F30 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18000BC04 (LdrpProcessDetachNode.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     LdrpInitializeNode @ 0x180072384 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 *     LdrpFindTlsEntry @ 0x180012638 (LdrpFindTlsEntry.c)
 *     LdrpCallInitRoutine @ 0x1800188C4 (LdrpCallInitRoutine.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
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
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v7,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        result = LdrpCallInitRoutine(v7, *(_QWORD *)(a2 + 48), a1, 0LL);
      }
    }
  }
  return result;
}
