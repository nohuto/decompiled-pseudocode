/*
 * XREFs of PopCancelDripsWatchdog @ 0x140675094
 * Callers:
 *     PdcPoResiliencyClient @ 0x14066FC04 (PdcPoResiliencyClient.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 *     PopAcquireDripsWatchdogLock @ 0x140675074 (PopAcquireDripsWatchdogLock.c)
 */

__int64 PopCancelDripsWatchdog()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax

  if ( PopDripsWatchdog )
  {
    PopAcquireDripsWatchdogLock();
    KeCancelTimer2((__int64)&unk_140329C00);
    dword_140329B38 = 0;
    dword_140329B3C = 0;
    qword_140329B48 = 0LL;
    qword_140329B50 = 0LL;
    qword_140329B58 = 0LL;
    dword_140329B40 = 0;
    qword_140329B60 = 0LL;
    qword_140329B68 = 0LL;
    qword_140329B70 = 0LL;
    qword_140329B78 = 0LL;
    qword_140329B80 = 0LL;
    qword_140329B88 = 0LL;
    qword_140329B90 = 0LL;
    ExReleaseResourceLite(&stru_140329B98);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v0, v1, v2);
  }
  return result;
}
