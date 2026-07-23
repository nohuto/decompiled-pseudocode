/*
 * XREFs of RtlInitializeHeapManager @ 0x1800D8010
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180035950 (RtlpHeapGenerateRandomValue64.c)
 *     SbSelectProcedure @ 0x180041D20 (SbSelectProcedure.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800EA77C (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800EEDD8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpHpLargeSparseBmpInitialize @ 0x1800F0544 (RtlpHpLargeSparseBmpInitialize.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800F0798 (RtlpInitializeLowFragHeapManager.c)
 */

NTSTATUS RtlInitializeHeapManager()
{
  struct _PEB *v0; // rdi
  PRTL_DYNAMIC_HASH_TABLE v1; // rbx
  int v2; // eax
  int v3; // ecx
  char v4; // al

  v0 = NtCurrentPeb();
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap() )
  {
    RtlpHpHeapFeatures |= 1u;
    v1 = qword_180148620;
    if ( qword_180148620
      || (qword_180148620 = (PRTL_DYNAMIC_HASH_TABLE)SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (v1 = qword_180148620) != 0LL) )
    {
      ((void (__fastcall *)(PRTL_DYNAMIC_HASH_TABLE))v1)(v1);
    }
  }
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v2 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      v2 = 2;
    v3 = 0;
    RtlpHeapErrorHandlerThreshold = v2;
  }
  else
  {
    v3 = RtlpDisableBreakOnFailureCookie;
  }
  v4 = RtlpDisableHeapLookaside & 1;
  v0->MaximumNumberOfHeaps = 16;
  v0->NumberOfHeaps = 0;
  RtlpDisableBreakOnFailureCookie = v4 != 0 ? v3 : 0;
  v0->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlpHeapKey = RtlpHeapGenerateRandomValue64();
  if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  RtlpHpLargeSparseBmpInitialize();
  return RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
}
