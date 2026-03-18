/*
 * XREFs of PoInitializeBroadcast @ 0x140531FFC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PnprQuiesceDevices @ 0x1403DC3D4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopHaltDeviceIdle @ 0x1401234C8 (PopHaltDeviceIdle.c)
 *     PpmBeginHighPerfRequest @ 0x140131E88 (PpmBeginHighPerfRequest.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 */

__int64 PoInitializeBroadcast()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D0uLL, 0x73734450u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1D0uLL);
    v3 = v2 + 12;
    v2[2] = KeGetCurrentThread();
    v4 = 5LL;
    v2[1] = 0LL;
    v2[54] = v2 + 53;
    v2[53] = v2 + 53;
    do
    {
      *(v3 - 2) = v3 - 3;
      *(v3 - 3) = v3 - 3;
      *v3 = v3 - 1;
      *(v3 - 1) = v3 - 1;
      v3[2] = v3 + 1;
      v3[1] = v3 + 1;
      v5 = v3 + 3;
      v3[4] = v3 + 3;
      v3 += 9;
      *v5 = v5;
      --v4;
    }
    while ( v4 );
    PpmBeginHighPerfRequest();
    qword_1403033F0 = v2;
    PopCurrentBroadcast = 0LL;
    qword_1403033E8 = 0LL;
    PopBuildDeviceNotifyList(v2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
