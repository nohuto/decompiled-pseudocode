/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C00045B4
 * Callers:
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C00041C0 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C00043E0 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C00189B0 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C0018BE0 (VidSchiProcessIsrPreemptedPacket.c)
 * Callees:
 *     Template_piiqq @ 0x1C0013D70 (Template_piiqq.c)
 */

bool __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v4; // rbx
  __int64 v5; // r13
  bool v6; // si
  LARGE_INTEGER PerformanceCounter; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  _QWORD *v11; // rdx
  int v12; // edx
  __int64 v13; // rcx
  bool result; // al
  __int64 v15; // r9
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // r9
  _BYTE v19[16]; // [rsp+90h] [rbp+90h] BYREF

  v1 = a1[1];
  v2 = v1;
  v4 = *(_QWORD *)(v1 + 96);
  if ( *(_QWORD *)(v1 + 496) )
    v2 = *(_QWORD *)(v1 + 496);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 448), 0, 0) == 1;
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL));
  v8 = (unsigned __int64)(10000000 * (PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 472)))
     / *(_QWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)(v1 + 464) += v8;
  *(_QWORD *)(v4 + 2616) += v8;
  v9 = *(_QWORD *)(v1 + 96);
  v10 = *(unsigned int *)(*(_QWORD *)(v9 + 24) + 4LL);
  v11 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 24LL) + 8 * v10)
                   + 8LL * *(unsigned __int16 *)(v9 + 4)
                   + 8);
  *v11 += v8;
  v12 = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 5304), v8);
  *(LARGE_INTEGER *)(v1 + 472) = PerformanceCounter;
  if ( v6 || (LODWORD(v13) = *(_DWORD *)(v5 + 2144), (v13 & 4) != 0) )
  {
    v13 = *(_QWORD *)(v2 + 456) - v8;
    *(_QWORD *)(v2 + 456) = v13;
    if ( v6 && v13 <= 0 )
    {
      v13 = *(_QWORD *)(v1 + 496);
      if ( v13 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 448), 2, 1);
        v13 = *(_QWORD *)(v1 + 496);
        _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 448), 2, 0);
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
    v15 = *(_QWORD *)(v1 + 56);
    if ( !v15 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v15) = v1;
    v16 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      Template_piiqq(v13, v12, v10, v15, *(_QWORD *)(v1 + 464), *(_QWORD *)(v1 + 456), *(_DWORD *)(v1 + 448), 2);
      v16 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    v17 = *(_QWORD *)(v1 + 496);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 56);
      if ( !v18 || (*(_DWORD *)(v17 + 112) & 0x40) != 0 )
        v18 = *(_QWORD *)(v1 + 496);
      if ( (v16 & 0x100) != 0 )
        Template_piiqq(
          *(_QWORD *)(v17 + 464),
          v17,
          v10,
          v18,
          *(_QWORD *)(v17 + 464),
          *(_QWORD *)(v17 + 456),
          *(_DWORD *)(v17 + 448),
          2);
    }
  }
  result = v6;
  a1[3] = *(_QWORD *)(v2 + 456);
  a1[2] = *(_QWORD *)(v1 + 464);
  return result;
}
