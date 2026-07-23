/*
 * XREFs of PopCancelDripsWatchdog @ 0x140675178
 * Callers:
 *     PdcPoResiliencyClient @ 0x14066FCE8 (PdcPoResiliencyClient.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 *     PopAcquireDripsWatchdogLock @ 0x140675158 (PopAcquireDripsWatchdogLock.c)
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
    KeCancelTimer2((__int64)&unk_140329C40);
    dword_140329B78 = 0;
    dword_140329B7C = 0;
    qword_140329B88 = 0LL;
    qword_140329B90 = 0LL;
    qword_140329B98 = 0LL;
    dword_140329B80 = 0;
    qword_140329BA0 = 0LL;
    qword_140329BA8 = 0LL;
    qword_140329BB0 = 0LL;
    qword_140329BB8 = 0LL;
    qword_140329BC0 = 0LL;
    qword_140329BC8 = 0LL;
    qword_140329BD0 = 0LL;
    ExReleaseResourceLite(&stru_140329BD8);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v0, v1, v2);
  }
  return result;
}
