/*
 * XREFs of PfGenerateTrace @ 0x14052FD24
 * Callers:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 *     PfpLogEventRequest @ 0x14052FB44 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x14052FC18 (PfpLogScenarioEvent.c)
 * Callees:
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14005A2E0 (KeWaitForMultipleObjects.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B188 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfGenerateTrace(__int64 a1, int a2)
{
  unsigned int v4; // edi
  PVOID v5; // r14
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&PfTGlobals);
  v4 = 0;
  if ( *(_QWORD *)a1 )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
    KeResetEvent((PRKEVENT)(a1 + 56));
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    v5 = *(PVOID *)a1;
    ObfReferenceObject(*(PVOID *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
    Object[0] = (PVOID)(a1 + 56);
    Object[1] = v5;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    ObfDereferenceObject(v5);
    if ( !a2 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  }
  else
  {
    v4 = -1073741177;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
  }
  return v4;
}
