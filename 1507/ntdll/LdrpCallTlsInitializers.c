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

void __fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  __int64 TlsEntry; // rbx
  _RTL_DYNAMIC_HASH_TABLE **v5; // rbx
  _RTL_DYNAMIC_HASH_TABLE *v6; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a2);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v5 = *(_RTL_DYNAMIC_HASH_TABLE ***)(TlsEntry + 40);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1061,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v6,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        LdrpCallInitRoutine(v6, *(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR **)(a2 + 48), a1, 0LL);
      }
    }
  }
}
