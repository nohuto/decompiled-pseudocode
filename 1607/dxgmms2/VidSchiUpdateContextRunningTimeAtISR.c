/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C000BF10
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000BC60 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000BE80 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000CD48 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0024708 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     Template_piiqq @ 0x1C0022804 (Template_piiqq.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r15
  bool v7; // r14
  LARGE_INTEGER PerformanceCounter; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  _BOOL8 result; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // r9
  _BYTE v20[16]; // [rsp+90h] [rbp+90h] BYREF

  v1 = (_QWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL);
  v2 = a1[1];
  v4 = v2;
  v5 = *(_QWORD *)(v2 + 96);
  if ( *(_QWORD *)(v2 + 496) )
    v4 = *(_QWORD *)(v2 + 496);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 448), 0, 0) == 1;
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL));
  v9 = PerformanceCounter.QuadPart - *(_QWORD *)(v2 + 472);
  *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = (v9 * (unsigned __int128)0x989680uLL) >> 64;
  if ( is_mul_ok(v9, 0x989680uLL) )
  {
    if ( *v1 == 3312661LL )
      v10 = 10000000 * v9 / 0x328C15;
    else
      v10 = 10000000 * v9 / *v1;
  }
  else
  {
    v10 = 10000000 * (v9 / *v1) + 10000000 * (v9 % *v1) / *v1;
  }
  *(_QWORD *)(v2 + 464) += v10;
  *(_QWORD *)(v5 + 2528) += v10;
  v11 = *(_QWORD *)(v2 + 96);
  v12 = *(unsigned int *)(*(_QWORD *)(v11 + 24) + 4LL);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 104) + 40LL) + 24LL) + 8 * v12)
                  + 8LL * *(unsigned __int16 *)(v11 + 4)
                  + 8);
  *(_QWORD *)v13 += v10;
  LODWORD(v13) = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v6 + 5632), v10);
  *(LARGE_INTEGER *)(v2 + 472) = PerformanceCounter;
  if ( v7 || (*(_DWORD *)(v6 + 2136) & 4) != 0 )
  {
    v15 = *(_QWORD *)(v4 + 456) - v10;
    *(_QWORD *)(v4 + 456) = v15;
    if ( v7 && v15 <= 0 )
    {
      v13 = *(_QWORD *)(v2 + 496);
      if ( v13 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 448), 2, 1);
        v13 = *(_QWORD *)(v2 + 496);
        _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 448), 2, 0);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 448), 2, 1);
      }
      v7 = 0;
    }
  }
  if ( bTracingEnabled )
  {
    v16 = *(_QWORD *)(v2 + 56);
    if ( !v16 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v16) = v2;
    v17 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_piiqq(v13, v10, v12, v16, *(_QWORD *)(v2 + 464), *(_QWORD *)(v2 + 456), *(_DWORD *)(v2 + 448), 2);
      v17 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    v18 = *(_QWORD *)(v2 + 496);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 56);
      if ( !v19 || (*(_DWORD *)(v18 + 112) & 0x40) != 0 )
        v19 = *(_QWORD *)(v2 + 496);
      if ( v17 < 0 )
        Template_piiqq(
          *(_QWORD *)(v18 + 464),
          v18,
          v12,
          v19,
          *(_QWORD *)(v18 + 464),
          *(_QWORD *)(v18 + 456),
          *(_DWORD *)(v18 + 448),
          2);
    }
  }
  result = v7;
  a1[3] = *(_QWORD *)(v4 + 456);
  a1[2] = *(_QWORD *)(v2 + 464);
  return result;
}
