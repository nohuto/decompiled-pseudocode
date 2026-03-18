/*
 * XREFs of PopCancelDripsWatchdog @ 0x14063C930
 * Callers:
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     PopAcquireDripsWatchdogLock @ 0x14063C910 (PopAcquireDripsWatchdogLock.c)
 */

__int64 PopCancelDripsWatchdog()
{
  __int64 result; // rax

  if ( PopDripsWatchdog )
  {
    PopAcquireDripsWatchdogLock();
    KeCancelTimer2((__int64)&unk_140306EE0);
    dword_140306E18 = 0;
    dword_140306E1C = 0;
    qword_140306E28 = 0LL;
    qword_140306E30 = 0LL;
    qword_140306E38 = 0LL;
    dword_140306E20 = 0;
    qword_140306E40 = 0LL;
    qword_140306E48 = 0LL;
    qword_140306E50 = 0LL;
    qword_140306E58 = 0LL;
    qword_140306E60 = 0LL;
    qword_140306E68 = 0LL;
    qword_140306E70 = 0LL;
    ExReleaseResourceLite(&stru_140306E78);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
