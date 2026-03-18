/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0001258
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00176C4 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 * Callees:
 *     Template_pqx @ 0x1C000FA20 (Template_pqx.c)
 *     Template_pqxxxx @ 0x1C0014E54 (Template_pqxxxx.c)
 */

void __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  LARGE_INTEGER v4; // rax
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rcx
  LARGE_INTEGER v8; // rsi
  char v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  char v15; // r11
  int v16; // edx
  __int64 v17; // r9
  int v18; // ecx
  _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(a1 + 396) > 1u )
  {
    v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v7 = *(_QWORD *)(v2 + 152);
    v8 = v4;
    if ( v7 )
    {
      v9 = LOBYTE(v4.LowPart) - v7;
      v10 = (v4.QuadPart - v7) * *(unsigned int *)(v3 + 164);
      v11 = v10 * (unsigned __int128)0x47AE147AE147AE15uLL;
      v12 = v10 / 0x64;
      if ( v12 )
      {
        v13 = 10000000 * v12 / PerformanceFrequency.QuadPart;
        if ( v13 <= *(_QWORD *)(v3 + 2344) )
        {
          LODWORD(v14) = *(_DWORD *)(a1 + 396);
          v15 = 0;
          v16 = (1 << v14) - 1;
          v17 = 0LL;
          if ( !*(_DWORD *)(v3 + 56) )
            goto LABEL_20;
          do
          {
            v14 = *(_QWORD *)(v3 + 8 * v17 + 368);
            if ( (v16 & *(_DWORD *)(v14 + 1616)) != 0 || (v16 & *(_DWORD *)(v14 + 1620)) != 0 )
            {
              *(_QWORD *)(v14 + 2008) = 0LL;
              v15 = 1;
              *(_BYTE *)(v14 + 2024) = 1;
              *(_QWORD *)(v14 + 2016) = v12;
            }
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < *(_DWORD *)(v3 + 56) );
          if ( v15 )
          {
            v18 = *(_DWORD *)(a1 + 396) - 1;
            *(_DWORD *)(v3 + 160) = v18;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_pqx(v18, (unsigned int)&EventYieldStartAdapter, v12, *(_QWORD *)(v3 + 16), v18, v13);
          }
          else
          {
LABEL_20:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_pqxxxx(v14, v16, v12, *(_QWORD *)(v3 + 16), 3, *(_DWORD *)(a1 + 396), v9, 0);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          Template_pqxxxx(
            v7,
            10000000 * v12 % PerformanceFrequency.QuadPart,
            v12,
            *(_QWORD *)(v3 + 16),
            1,
            *(_DWORD *)(a1 + 396),
            v8.QuadPart,
            *(_QWORD *)(v2 + 152));
        }
        *(LARGE_INTEGER *)(v2 + 152) = v8;
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        Template_pqxxxx(v7, DWORD2(v11), 0, *(_QWORD *)(v3 + 16), 2, *(_DWORD *)(a1 + 396), v9, 0);
      }
    }
    else
    {
      *(LARGE_INTEGER *)(v2 + 152) = v4;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pqxxxx(*(_DWORD *)(a1 + 396), v5, v6, *(_QWORD *)(v3 + 16), 1, *(_DWORD *)(a1 + 396), v4.QuadPart, 0);
    }
  }
}
