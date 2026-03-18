/*
 * XREFs of PoInitializeBroadcast @ 0x140565238
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopHaltDeviceIdle @ 0x140147EFC (PopHaltDeviceIdle.c)
 *     PpmBeginHighPerfRequest @ 0x14015A718 (PpmBeginHighPerfRequest.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
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
    qword_14032E1F0 = v2;
    PopCurrentBroadcast = 0LL;
    qword_14032E1E8 = 0LL;
    PopBuildDeviceNotifyList(v2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
