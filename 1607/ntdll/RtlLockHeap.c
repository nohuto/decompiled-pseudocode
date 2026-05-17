/*
 * XREFs of RtlLockHeap @ 0x180019AC0
 * Callers:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x180076860 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800EA680 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA6A4 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapLock @ 0x18001E6B8 (RtlpHpHeapLock.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  _BYTE v3[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapLock();
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18014C450)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 384);
    }
  }
  if ( MEMORY[0x7FFE0380] )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v5 = a1;
      v4 = 4139;
      NtTraceEvent(MEMORY[0x7FFE0380], 1026LL, 8LL, v3);
    }
  }
  return 1;
}
