/*
 * XREFs of LdrpCallTlsInitializers @ 0x1800450A4
 * Callers:
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180021AB8 (LdrpInitializeThread.c)
 *     LdrpProcessDetachNode @ 0x180043728 (LdrpProcessDetachNode.c)
 *     LdrShutdownProcess @ 0x180044620 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x180044DE4 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpCallInitRoutine @ 0x180024024 (LdrpCallInitRoutine.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     LdrpFindTlsEntry @ 0x1800451A0 (LdrpFindTlsEntry.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 */

char __fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 TlsEntry; // rbx
  char result; // al
  __int64 (__fastcall **v8)(__int64, _QWORD, __int64); // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock, (char *)a2, a3, a4);
  TlsEntry = LdrpFindTlsEntry(a2);
  result = RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v8 = *(__int64 (__fastcall ***)(__int64, _QWORD, __int64))(TlsEntry + 40);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        ++v8;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1061,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v9,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        result = LdrpCallInitRoutine(v9, *(_QWORD *)(a2 + 48), a1, 0LL);
      }
    }
  }
  return result;
}
