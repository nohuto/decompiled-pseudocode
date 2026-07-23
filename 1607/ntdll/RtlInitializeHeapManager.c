/*
 * XREFs of RtlInitializeHeapManager @ 0x18005D71C
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     SbSelectProcedure @ 0x18002E9B0 (SbSelectProcedure.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180041760 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18005D588 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpHpLargeSparseBmpInitialize @ 0x18005D85C (RtlpHpLargeSparseBmpInitialize.c)
 *     RtlpGetModifiedProcessCookie @ 0x18005D95C (RtlpGetModifiedProcessCookie.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18005DA28 (RtlpHpOptIntoSegmentHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS RtlInitializeHeapManager()
{
  struct _PEB *v0; // rbx
  int v1; // eax
  int v2; // ecx
  char v3; // al
  void (*v5)(void); // rax

  v0 = NtCurrentPeb();
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap() )
  {
    RtlpHpHeapFeatures |= 1u;
    v5 = (void (*)(void))qword_180153028;
    if ( qword_180153028
      || (v5 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_180153028 = (__int64)v5) != 0) )
    {
      v5();
    }
  }
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v1 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      v1 = 2;
    v2 = 0;
    RtlpHeapErrorHandlerThreshold = v1;
  }
  else
  {
    v2 = RtlpDisableBreakOnFailureCookie;
  }
  v3 = RtlpDisableHeapLookaside & 1;
  v0->MaximumNumberOfHeaps = 16;
  v0->NumberOfHeaps = 0;
  RtlpDisableBreakOnFailureCookie = v3 != 0 ? v2 : 0;
  v0->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlpHeapKey = RtlpHeapGenerateRandomValue64();
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  RtlpHpLargeSparseBmpInitialize();
  return RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
}
