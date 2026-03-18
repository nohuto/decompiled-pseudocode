/*
 * XREFs of VidSchiFinishMeasuringPreemptionTime @ 0x1C000342C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C00178CC (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     Template_ppxx @ 0x1C000FC18 (Template_ppxx.c)
 */

void __fastcall VidSchiFinishMeasuringPreemptionTime(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  LARGE_INTEGER v5; // rax
  unsigned __int64 v6; // rax
  char v7; // r14
  int v8; // ecx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 504) )
  {
    v2 = *(_QWORD *)(a1 + 104);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
    v4 = *(_QWORD *)(v2 + 40);
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v6 = (unsigned __int64)(10000000 * (v5.QuadPart - *(_QWORD *)(a1 + 504))) / PerformanceFrequency.QuadPart;
    v7 = v6;
    if ( v6 >= *(_QWORD *)(v3 + 2336) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 2656));
      if ( v6 >= *(_QWORD *)(v3 + 2320) && !*(_BYTE *)(*(_QWORD *)(v2 + 40) + 2624LL) )
      {
        v8 = *(_DWORD *)(v2 + 48);
        if ( (v8 & 8) == 0
          && (v8 & 1) == 0
          && !*(_DWORD *)(v3 + 2480)
          && !*(_BYTE *)(v2 + 172)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 168), 0, 0)
          && (*(_DWORD *)(v3 + 2144) & 0x8000) != 0 )
        {
          KeSetTimer((PKTIMER)(a1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v3 + 2328), (PKDPC)(a1 + 576));
          VidSchiUpdateContextStatus(a1, (_QWORD *)7, (__int64 *)0x5312);
          if ( bTracingEnabled )
          {
            v11 = *(_QWORD *)(a1 + 56);
            if ( !v11 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
              LODWORD(v11) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_ppxx(
                v9,
                (unsigned int)&EventDelayContextScheduling,
                v10,
                v11,
                *(_QWORD *)(v4 + 2632),
                v7,
                *(_QWORD *)(v3 + 2328));
          }
        }
      }
    }
    *(_QWORD *)(a1 + 504) = 0LL;
  }
}
