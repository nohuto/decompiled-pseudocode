/*
 * XREFs of KeFlushQueuedDpcs @ 0x1400D4B60
 * Callers:
 *     KeCleanupThreadState @ 0x1400EE43C (KeCleanupThreadState.c)
 *     IopDeleteDriver @ 0x1404F380C (IopDeleteDriver.c)
 *     MmPageEntireDriver @ 0x1404F5378 (MmPageEntireDriver.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 *     VerifierKeFlushQueuedDpcs @ 0x140742174 (VerifierKeFlushQueuedDpcs.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x1400D55E0 (KiGetDeepIdleProcessors.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void KeFlushQueuedDpcs(void)
{
  unsigned __int64 v0; // r9
  unsigned int v1; // r11d
  unsigned __int16 i; // r8
  __int64 v3; // rdx
  unsigned int v4; // r10d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _WORD v8[88]; // [rsp+20h] [rbp-178h] BYREF
  unsigned __int16 v9; // [rsp+D0h] [rbp-C8h] BYREF
  _QWORD v10[21]; // [rsp+D8h] [rbp-C0h]

  KiGetDeepIdleProcessors(&v9, v8);
  v0 = v10[0];
  v1 = v9;
  for ( i = 0; ; v0 = v10[i] )
  {
    while ( v0 )
    {
      _BitScanForward64((unsigned __int64 *)&v3, v0);
      v0 &= ~(1LL << v3);
      if ( *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v3]] + 11756) )
      {
        v4 = KiProcessorIndexToNumberMappingTable[KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v3]] & 0x3F;
        v5 = (unsigned int)KiProcessorIndexToNumberMappingTable[KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v3]] >> 6;
        if ( v8[0] <= (unsigned int)v5 )
          v8[0] = v5 + 1;
        v6 = (unsigned int)v5;
        v7 = *(_QWORD *)&v8[4 * v5 + 4];
        _bittestandset64(&v7, v4);
        *(_QWORD *)&v8[4 * v6 + 4] = v7;
      }
    }
    if ( ++i >= v1 )
      break;
  }
  ((void (__fastcall *)(_WORD *, __int64 (__fastcall *)(), _QWORD, __int64))KeGenericProcessorCallback)(
    v8,
    KiFlushQueuedDpcsWorker,
    0LL,
    2LL);
}
