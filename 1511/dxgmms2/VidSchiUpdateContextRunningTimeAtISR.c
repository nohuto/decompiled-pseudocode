/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C000D1C0
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000CF40 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000D130 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E648 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0020F50 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 *     Template_piiqq @ 0x1C001F7D0 (Template_piiqq.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // r14
  bool v6; // di
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // rdx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // r9
  _BOOL8 result; // rax
  _BYTE v22[16]; // [rsp+90h] [rbp+90h] BYREF

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD *)(v1 + 96);
  if ( *(_QWORD *)(v1 + 496) )
    v3 = *(_QWORD *)(v1 + 496);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 448), 0, 0) == 1;
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( RtlULongLongMult(
         PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 472),
         0x989680uLL,
         (ULONGLONG *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8)) >= 0 )
    v11 = *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8) / v9;
  else
    v11 = 10000000 * (v8 / v9) + 10000000 * (v8 % v9) / v9;
  *(_QWORD *)(v1 + 464) += v11;
  *(_QWORD *)(v4 + 2488) += v11;
  v12 = *(_QWORD *)(v1 + 96);
  v13 = *(unsigned int *)(*(_QWORD *)(v12 + 24) + 4LL);
  v14 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 24LL) + 8 * v13)
                   + 8LL * *(unsigned __int16 *)(v12 + 4)
                   + 8);
  *v14 += v11;
  v15 = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 5256), v11);
  *(_QWORD *)(v1 + 472) = v10;
  if ( v6 || (LODWORD(v16) = *(_DWORD *)(v5 + 2096), (v16 & 4) != 0) )
  {
    v16 = *(_QWORD *)(v3 + 456) - v11;
    *(_QWORD *)(v3 + 456) = v16;
    if ( v6 && v16 <= 0 )
    {
      v16 = *(_QWORD *)(v1 + 496);
      if ( v16 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 448), 2, 1);
        v16 = *(_QWORD *)(v1 + 496);
        _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 448), 2, 0);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 448), 2, 1);
      }
      v6 = 0;
    }
  }
  if ( bTracingEnabled )
  {
    v17 = *(_QWORD *)(v1 + 56);
    if ( !v17 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v17) = v1;
    v18 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      Template_piiqq(v16, v15, v13, v17, *(_QWORD *)(v1 + 464), *(_QWORD *)(v1 + 456), *(_DWORD *)(v1 + 448), 2);
      v18 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    v19 = *(_QWORD *)(v1 + 496);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 56);
      if ( !v20 || (*(_DWORD *)(v19 + 112) & 0x40) != 0 )
        v20 = *(_QWORD *)(v1 + 496);
      if ( (v18 & 0x100) != 0 )
        Template_piiqq(
          *(_QWORD *)(v19 + 464),
          v19,
          v13,
          v20,
          *(_QWORD *)(v19 + 464),
          *(_QWORD *)(v19 + 456),
          *(_DWORD *)(v19 + 448),
          2);
    }
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 456);
  a1[2] = *(_QWORD *)(v1 + 464);
  return result;
}
