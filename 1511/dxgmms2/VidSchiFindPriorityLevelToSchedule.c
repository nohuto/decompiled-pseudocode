/*
 * XREFs of VidSchiFindPriorityLevelToSchedule @ 0x1C001473C
 * Callers:
 *     VidSchiSelectContext @ 0x1C0021C64 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C0014268 (VidSchiStartNodeYield.c)
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     Template_pqxxxx @ 0x1C0020958 (Template_pqxxxx.c)
 */

__int64 __fastcall VidSchiFindPriorityLevelToSchedule(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int MostSignificantBit; // ebp
  int v4; // esi
  LARGE_INTEGER v5; // rax
  int v6; // edx
  LARGE_INTEGER v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  union _LARGE_INTEGER v12; // [rsp+70h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( !*(_BYTE *)(a1 + 1896)
    || (*(_DWORD *)(a1 + 1648) & 0xC0000000) != 0
    || (*(_DWORD *)(a1 + 1648) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v1 + 160)))) == 0 )
  {
    return (unsigned int)RtlFindMostSignificantBit(*(unsigned int *)(a1 + 1648));
  }
  MostSignificantBit = RtlFindMostSignificantBit(*(_DWORD *)(a1 + 1648) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v1 + 160))));
  v4 = ~((1 << (*(_DWORD *)(v1 + 160) + 1)) - 1);
  v5 = KeQueryPerformanceCounter(&v12);
  if ( (v4 & *(_DWORD *)(a1 + 1652)) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 1880);
    if ( v8 )
    {
      v9 = v5.QuadPart - v8;
      v10 = *(_QWORD *)(a1 + 1888);
      if ( v9 < v10 )
      {
        *(_QWORD *)(a1 + 1880) = 0LL;
        *(_QWORD *)(a1 + 1888) = v10 - v9;
      }
      else
      {
        *(_QWORD *)(a1 + 1880) = 0LL;
        *(_BYTE *)(a1 + 1896) = 0;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))Template_pq)(
            v10,
            &EventYieldStopNode,
            (LARGE_INTEGER)v7.QuadPart,
            *(_QWORD *)(v1 + 16),
            *(unsigned __int16 *)(a1 + 4));
      }
    }
    if ( *(_BYTE *)(a1 + 1896) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pqxxxx(
          v4 & *(_DWORD *)(a1 + 1652),
          v6,
          v7.LowPart,
          *(_QWORD *)(v1 + 16),
          0,
          *(_WORD *)(a1 + 4),
          v4 & *(_BYTE *)(a1 + 1652),
          0,
          0);
    }
  }
  else if ( !*(_QWORD *)(a1 + 1880) )
  {
    VidSchiStartNodeYield(a1, v5.QuadPart, v12.QuadPart);
  }
  return MostSignificantBit;
}
