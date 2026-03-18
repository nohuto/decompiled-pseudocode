/*
 * XREFs of VidSchiFindPriorityLevelToSchedule @ 0x1C0004900
 * Callers:
 *     VidSchiSelectContext @ 0x1C001A140 (VidSchiSelectContext.c)
 * Callees:
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     Template_pqxxxx @ 0x1C0014E54 (Template_pqxxxx.c)
 *     VidSchiStartNodeYield @ 0x1C001A53C (VidSchiStartNodeYield.c)
 */

__int64 __fastcall VidSchiFindPriorityLevelToSchedule(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int MostSignificantBit; // ebp
  int v5; // esi
  LARGE_INTEGER v6; // rax
  int v7; // edx
  LARGE_INTEGER v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  union _LARGE_INTEGER v12; // [rsp+70h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( !*(_BYTE *)(a1 + 2024) || (*(_DWORD *)(a1 + 1616) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v1 + 160)))) == 0 )
    return (unsigned int)RtlFindMostSignificantBit(*(unsigned int *)(a1 + 1616));
  MostSignificantBit = RtlFindMostSignificantBit(*(_DWORD *)(a1 + 1616) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v1 + 160))));
  v5 = ~((1 << (*(_DWORD *)(v1 + 160) + 1)) - 1);
  v6 = KeQueryPerformanceCounter(&v12);
  if ( (v5 & *(_DWORD *)(a1 + 1620)) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 2008);
    if ( v9 )
    {
      v10 = v6.QuadPart - v9;
      v11 = *(_QWORD *)(a1 + 2016);
      if ( v10 < v11 )
      {
        *(_QWORD *)(a1 + 2008) = 0LL;
        *(_QWORD *)(a1 + 2016) = v11 - v10;
      }
      else
      {
        *(_QWORD *)(a1 + 2008) = 0LL;
        *(_BYTE *)(a1 + 2024) = 0;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))Template_pq)(
            v11,
            &EventYieldStopNode,
            (LARGE_INTEGER)v8.QuadPart,
            *(_QWORD *)(v1 + 16),
            *(unsigned __int16 *)(a1 + 4));
      }
    }
    if ( *(_BYTE *)(a1 + 2024) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pqxxxx(
          *(_DWORD *)(a1 + 1620) & v5,
          v7,
          v8.LowPart,
          *(_QWORD *)(v1 + 16),
          0,
          *(_WORD *)(a1 + 4),
          *(_BYTE *)(a1 + 1620) & v5,
          0);
    }
  }
  else if ( !*(_QWORD *)(a1 + 2008) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v6.QuadPart,
      (union _LARGE_INTEGER)v12.QuadPart);
  }
  return MostSignificantBit;
}
