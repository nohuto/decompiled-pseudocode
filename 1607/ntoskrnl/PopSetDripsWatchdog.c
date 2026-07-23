/*
 * XREFs of PopSetDripsWatchdog @ 0x1406757A8
 * Callers:
 *     PdcPoResiliencyClient @ 0x14066FCE8 (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140675590 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     PopCalculateIdleInformation @ 0x140207780 (PopCalculateIdleInformation.c)
 *     PopAcquireDripsWatchdogLock @ 0x140675158 (PopAcquireDripsWatchdogLock.c)
 */

__int64 PopSetDripsWatchdog()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  if ( PopDripsWatchdog )
  {
    PopAcquireDripsWatchdogLock();
    qword_140329BA8 = 0LL;
    v0 = MEMORY[0xFFFFF78000000008];
    if ( !qword_140329BA0 )
    {
      qword_140329BA0 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v6);
      qword_140329B88 = v7;
      dword_140329B78 = v8;
      dword_140329B7C = v9;
    }
    if ( !qword_140329B90 )
    {
      dword_140329B80 = unk_1403035E4;
      qword_140329B90 = v0;
    }
    if ( !qword_140329B98 )
      qword_140329B98 = v0;
    if ( !qword_140329BB0 )
      qword_140329BB0 = qword_1403288E8;
    qword_140329BB8 = 0LL;
    v5[1] = -1LL;
    v5[0] = 0LL;
    KeSetTimer2((__int64)&unk_140329C40, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v5);
    ExReleaseResourceLite(&stru_140329BD8);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
  }
  return result;
}
