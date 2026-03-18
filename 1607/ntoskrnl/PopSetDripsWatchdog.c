/*
 * XREFs of PopSetDripsWatchdog @ 0x1406756C4
 * Callers:
 *     PdcPoResiliencyClient @ 0x14066FC04 (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406754AC (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     PopCalculateIdleInformation @ 0x140207954 (PopCalculateIdleInformation.c)
 *     PopAcquireDripsWatchdogLock @ 0x140675074 (PopAcquireDripsWatchdogLock.c)
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
    qword_140329B68 = 0LL;
    v0 = MEMORY[0xFFFFF78000000008];
    if ( !qword_140329B60 )
    {
      qword_140329B60 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v6);
      qword_140329B48 = v7;
      dword_140329B38 = v8;
      dword_140329B3C = v9;
    }
    if ( !qword_140329B50 )
    {
      dword_140329B40 = unk_1403036A4;
      qword_140329B50 = v0;
    }
    if ( !qword_140329B58 )
      qword_140329B58 = v0;
    if ( !qword_140329B70 )
      qword_140329B70 = qword_1403288A8;
    qword_140329B78 = 0LL;
    v5[1] = -1LL;
    v5[0] = 0LL;
    KeSetTimer2((__int64)&unk_140329C00, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v5);
    ExReleaseResourceLite(&stru_140329B98);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
  }
  return result;
}
