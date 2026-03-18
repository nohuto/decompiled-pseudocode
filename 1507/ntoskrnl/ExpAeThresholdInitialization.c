/*
 * XREFs of ExpAeThresholdInitialization @ 0x1407DB8E4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400D3924 (KeGenericCallDpc.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char ExpAeThresholdInitialization()
{
  signed __int64 *v0; // rbp
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // r10
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned int v9; // ecx
  char v10; // cl
  unsigned __int64 v11; // rdx
  unsigned int v13; // ecx
  _QWORD v14[16]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (signed __int64 *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL);
  memset((void *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0xC0uLL);
  v1 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 1024LL;
  do
  {
    v4 = __rdtsc();
    _m_prefetchw(v0);
    v5 = *v0;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v0, v5 + 1, v5);
    }
    while ( v6 != v5 );
    v7 = __rdtsc();
    v1 += (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - v4;
    --v3;
  }
  while ( v3 );
  __writecr8(CurrentIrql);
  v8 = v1 >> 10;
  KeGenericCallDpc((__int64)ExpAeThresholdInitWorker, (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( *(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) < 4 * v8 )
  {
    ExpAeCycleCountScaler = -1;
    ExpAeCycleCountThreshold = -1;
    ExpAeSamplingPeriodMask = -1;
  }
  else
  {
    if ( HIDWORD(v8) )
    {
      _BitScanReverse(&v13, HIDWORD(v8));
      v9 = v13 + 32;
    }
    else
    {
      _BitScanReverse(&v9, v8);
    }
    if ( v9 < 2 )
      v10 = 0;
    else
      v10 = v9 - 2;
    ExpAeCycleCountScaler = v10;
    ExpAeSamplingPeriodMask = 15728640;
    v11 = (v8 + (v8 >> 2)) << 7 >> v10;
    if ( v11 > 0xFFFFFFFF )
      LODWORD(v11) = -1;
    ExpAeCycleCountThreshold = v11;
  }
  return 1;
}
