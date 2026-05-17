/*
 * XREFs of RtlUnlockHeap @ 0x180019E50
 * Callers:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18000749C (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlValidateHeap @ 0x180076860 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800EA680 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA6A4 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpHpHeapUnlock @ 0x18001C4A4 (RtlpHpHeapUnlock.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  __int64 v3; // rcx
  _BYTE v4[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+26h] [rbp-32h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapUnlock(a1, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18014C458)();
    if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlUnlockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v3 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 384);
      RtlLeaveCriticalSection(v3);
    }
  }
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v6 = a1;
      v5 = 4140;
      NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v4);
    }
  }
  return 1;
}
