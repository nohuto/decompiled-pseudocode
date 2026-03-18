/*
 * XREFs of VidSchiFinishMeasuringPreemptionTime @ 0x1C000F5D4
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EC2C (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     Template_ppxx @ 0x1C001D63C (Template_ppxx.c)
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 */

void __fastcall VidSchiFinishMeasuringPreemptionTime(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r14
  LARGE_INTEGER v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  ULONGLONG v8; // rbp
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 504) )
  {
    v2 = *(_QWORD *)(a1 + 104);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
    v4 = *(_QWORD *)(v2 + 40);
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( RtlULongLongMult(v5.QuadPart - *(_QWORD *)(a1 + 504), 0x989680uLL, &pullResult) >= 0 )
      v8 = pullResult / v7;
    else
      v8 = 10000000 * (v6 / v7) + 10000000 * (v6 % v7) / v7;
    if ( v8 >= *(_QWORD *)(v3 + 2288) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 2656));
      if ( v8 >= *(_QWORD *)(v3 + 2272) && !*(_BYTE *)(*(_QWORD *)(v2 + 40) + 2624LL) )
      {
        v9 = *(_DWORD *)(v2 + 48);
        if ( (v9 & 8) == 0
          && (v9 & 1) == 0
          && !VidSchIsTDRPending(v3)
          && !*(_BYTE *)(v2 + 172)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 168), 0, 0)
          && (*(_DWORD *)(v3 + 2096) & 0x8000) != 0 )
        {
          KeSetTimer((PKTIMER)(a1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v3 + 2280), (PKDPC)(a1 + 576));
          VidSchiUpdateContextStatus(a1, (_QWORD *)7, (__int64 *)0x552E);
          if ( bTracingEnabled )
          {
            v12 = *(_QWORD *)(a1 + 56);
            if ( !v12 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
              LODWORD(v12) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_ppxx(
                v10,
                (unsigned int)&EventDelayContextScheduling,
                v11,
                v12,
                *(_QWORD *)(v4 + 2632),
                v8,
                *(_QWORD *)(v3 + 2280));
          }
        }
      }
    }
    *(_QWORD *)(a1 + 504) = 0LL;
  }
}
