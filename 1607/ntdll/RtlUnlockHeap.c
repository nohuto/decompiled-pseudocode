/*
 * XREFs of RtlUnlockHeap @ 0x180019E40
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18000748C (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlValidateHeap @ 0x180076850 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800EA740 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA764 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpHpHeapUnlock @ 0x18001C494 (RtlpHpHeapUnlock.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  _RTL_CRITICAL_SECTION *v3; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+26h] [rbp-32h]
  PVOID v6; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapUnlock(HeapHandle, 0LL);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18014C458)();
    if ( !RtlpCheckHeapSignature(HeapHandle, "RtlUnlockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v3 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 192);
      RtlLeaveCriticalSection(v3);
    }
  }
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v6 = HeapHandle;
      v5 = 4140;
      NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
    }
  }
  return 1;
}
