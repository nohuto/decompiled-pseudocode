/*
 * XREFs of PopSetDripsWatchdog @ 0x14063CF34
 * Callers:
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14063CD1C (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PopCalculateIdleInformation @ 0x1401EEE24 (PopCalculateIdleInformation.c)
 *     PopAcquireDripsWatchdogLock @ 0x14063C910 (PopAcquireDripsWatchdogLock.c)
 */

__int64 PopSetDripsWatchdog()
{
  __int64 v0; // rbx
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v3[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  if ( PopDripsWatchdog )
  {
    PopAcquireDripsWatchdogLock();
    qword_140306E48 = 0LL;
    v0 = MEMORY[0xFFFFF78000000008];
    if ( !qword_140306E40 )
    {
      qword_140306E40 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v3);
      qword_140306E28 = v4;
      dword_140306E18 = v5;
      dword_140306E1C = v6;
    }
    if ( !qword_140306E30 )
    {
      dword_140306E20 = DWORD1(xmmword_1402DE400);
      qword_140306E30 = v0;
    }
    if ( !qword_140306E38 )
      qword_140306E38 = v0;
    if ( !qword_140306E50 )
      qword_140306E50 = qword_140305A68;
    qword_140306E58 = 0LL;
    v2[1] = -1LL;
    v2[0] = 0LL;
    KeSetTimer2(dword_140306EE0, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v2);
    ExReleaseResourceLite(&stru_140306E78);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
