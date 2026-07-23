/*
 * XREFs of PpmIdleDurationExpiration @ 0x140234C7C
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmEventIdleDurationExpiration @ 0x1402409BC (PpmEventIdleDurationExpiration.c)
 */

__int64 PpmIdleDurationExpiration()
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v1; // rbx
  __int64 *v2; // rdx
  __int64 v3; // r8
  unsigned __int16 v4; // cx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned int v7; // r11d
  unsigned __int16 i; // r9
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17; // cx
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v20[21]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-20h]
  _QWORD v22[21]; // [rsp+F0h] [rbp-18h] BYREF

  v19 = 1310721LL;
  memset(v20, 0, 0xA0uLL);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v21 = 1310721LL;
  v1 = InterruptTimePrecise;
  memset(v22, 0, 0xA0uLL);
  if ( KeNumberNodes )
  {
    v2 = KeNodeBlock;
    v3 = (unsigned __int16)KeNumberNodes;
    do
    {
      v4 = *(_WORD *)(*v2 + 144);
      v5 = *(_QWORD *)(*v2 + 72);
      if ( (unsigned __int16)v21 <= v4 )
        LOWORD(v21) = v4 + 1;
      ++v2;
      v22[v4] |= v5;
      --v3;
    }
    while ( v3 );
  }
  v6 = v22[0];
  v7 = (unsigned __int16)v21;
  for ( i = 0; ; v6 = v22[i] )
  {
    while ( v6 )
    {
      _BitScanForward64(&v10, v6);
      v6 &= ~(1LL << v10);
      v11 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v10];
      if ( (unsigned int)v11 >= (unsigned int)KeNumberProcessors_0 )
      {
        v12 = 0LL;
      }
      else
      {
        _mm_lfence();
        v12 = KiProcessorBlock[v11];
      }
      if ( *(_QWORD *)(v12 + 23848) <= v1.QuadPart )
      {
        v13 = KiProcessorIndexToNumberMappingTable[v11] & 0x3F;
        v14 = (unsigned int)KiProcessorIndexToNumberMappingTable[v11] >> 6;
        if ( (unsigned __int16)v19 <= (unsigned int)v14 )
          LOWORD(v19) = v14 + 1;
        v15 = (unsigned int)v14;
        v16 = v20[v14];
        _bittestandset64(&v16, v13);
        v20[v15] = v16;
      }
    }
    result = ++i;
    if ( i >= v7 )
      break;
  }
  v17 = 0;
  if ( (_WORD)v19 )
  {
    while ( 1 )
    {
      result = v17;
      if ( v20[v17] )
        break;
      if ( ++v17 >= (unsigned __int16)v19 )
        return result;
    }
    PpmEventIdleDurationExpiration(&v19);
    return HalRequestIpi(0LL, &v19);
  }
  return result;
}
