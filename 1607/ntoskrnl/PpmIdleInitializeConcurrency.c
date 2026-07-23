/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x14056A9F0
 * Callers:
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 * Callees:
 *     KeFirstGroupAffinityEx @ 0x1400AA560 (KeFirstGroupAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400C6910 (KeCountSetBitsAffinityEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     PpmQueryTime @ 0x1400D497C (PpmQueryTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(_WORD *a1, LARGE_INTEGER **a2)
{
  ULONG v4; // ebp
  unsigned int v5; // edi
  unsigned int v6; // r14d
  LARGE_INTEGER *PoolWithTag; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  v4 = KeCountSetBitsAffinityEx(a1);
  v5 = KeFirstGroupAffinityEx(&Affinity, a1);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v6 = 8 * v4 + 40;
  PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x704D5050u);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    PoolWithTag->QuadPart = 0LL;
    PoolWithTag[1].LowPart = v4;
    PoolWithTag[2] = PpmQueryTime();
  }
  else
  {
    v5 = -1073741670;
  }
  *a2 = PoolWithTag;
  return v5;
}
