/*
 * XREFs of KeConfigureHeteroProcessors @ 0x1403FA8E0
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405B0EA0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400D3924 (KeGenericCallDpc.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403FA4A8 (KiConfigureCpuSetSchedulingInformation.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(_QWORD *Val)
{
  int v1; // esi
  unsigned int v2; // ebx
  _QWORD *v3; // rdx
  unsigned int i; // edi
  _QWORD v6[22]; // [rsp+20h] [rbp-C8h] BYREF

  v1 = KiDefaultHeteroCpuPolicy;
  v2 = 0;
  v3 = Val;
  if ( Val || (v6[0] = 1310721LL, memset(&v6[1], 0, 0xA0uLL), v3 = v6, KiHeteroSystem) )
  {
    if ( (unsigned int)KiDefaultHeteroCpuPolicy >= 9 )
      KiDefaultHeteroCpuPolicy = 0;
    if ( (unsigned int)KiDefaultDynamicHeteroCpuPolicy >= 5 )
      KiDefaultDynamicHeteroCpuPolicy = 0;
    if ( (unsigned int)KiDynamicHeteroCpuPolicyImportant >= 5 )
      KiDynamicHeteroCpuPolicyImportant = 0;
    if ( (unsigned int)KiDynamicHeteroCpuPolicyImportantShort >= 5 )
      KiDynamicHeteroCpuPolicyImportantShort = 0;
    if ( (unsigned int)KiDynamicHeteroCpuPolicyMask > 7 )
      KiDynamicHeteroCpuPolicyMask = 0;
    KiDynamicHeteroCpuPolicyExpectedCycles = *(_DWORD *)(KiProcessorBlock[0] + 1524)
                                           * KiDynamicHeteroCpuPolicyExpectedRuntime;
    KeGenericCallDpc((__int64)KiConfigureHeteroProcessorsTarget, (__int64)v3);
    PopHeteroSystem = KiHeteroSystem;
    if ( !KiHeteroSystem )
      KiDefaultHeteroCpuPolicy = 0;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[i]);
    LOBYTE(v2) = v1 != KiDefaultHeteroCpuPolicy;
    return v2;
  }
  else
  {
    PopHeteroSystem = 0;
    return 0LL;
  }
}
