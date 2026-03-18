/*
 * XREFs of VidSchiFinishMeasuringPreemptionTime @ 0x1C000E45C
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D694 (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     Template_ppxx @ 0x1C001E9B0 (Template_ppxx.c)
 */

void __fastcall VidSchiFinishMeasuringPreemptionTime(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r14
  LARGE_INTEGER v5; // rcx
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // r9
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h]

  if ( *(_QWORD *)(a1 + 504) )
  {
    v2 = *(_QWORD *)(a1 + 104);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
    v4 = *(_QWORD *)(v2 + 40);
    v5 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(a1 + 504));
    v6 = (unsigned __int64)v5.QuadPart * (unsigned __int128)0x989680uLL;
    v17 = *((_QWORD *)&v6 + 1);
    if ( is_mul_ok(v5.QuadPart, 0x989680uLL) )
      v7 = v6 / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v7 = 10000000 * (v5.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v5.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    v8 = (unsigned __int64 *)(v3 + 2648);
    v9 = 8;
    v10 = 8LL;
    while ( v7 <= *v8 )
    {
      --v9;
      --v8;
      if ( --v10 < 0 )
        goto LABEL_9;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8LL * v9 + 2664));
LABEL_9:
    if ( v7 >= *(_QWORD *)(v3 + 2576) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 2656));
      if ( v7 >= *(_QWORD *)(v3 + 2560) && !*(_BYTE *)(*(_QWORD *)(v2 + 40) + 2624LL) )
      {
        v11 = *(_DWORD *)(v2 + 48);
        if ( (v11 & 8) == 0
          && (v11 & 1) == 0
          && !VidSchIsTDRPending(v3)
          && !*(_BYTE *)(v2 + 164)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 160), 0, 0)
          && (*(_DWORD *)(v3 + 2136) & 0x2000) != 0 )
        {
          KeSetTimer((PKTIMER)(a1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v3 + 2568), (PKDPC)(a1 + 576));
          VidSchiUpdateContextStatus(a1, (_QWORD *)7, 23351LL, v12);
          if ( bTracingEnabled )
          {
            v15 = *(_QWORD *)(a1 + 56);
            if ( !v15 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
              LODWORD(v15) = a1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_ppxx(
                v13,
                (unsigned int)&EventDelayContextScheduling,
                v14,
                v15,
                *(_QWORD *)(v4 + 2632),
                v7,
                *(_QWORD *)(v3 + 2568));
          }
        }
      }
    }
    *(_QWORD *)(a1 + 504) = 0LL;
  }
}
