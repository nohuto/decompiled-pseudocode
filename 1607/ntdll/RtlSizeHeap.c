/*
 * XREFs of RtlSizeHeap @ 0x180046180
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x18005F2B0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085F40 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x180088EF0 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800ED998 (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800EFCAC (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x180046370 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004668C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007AE0C (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  int v3; // edi
  int v6; // edx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  char v9; // al
  int v10; // eax
  unsigned __int16 v11; // ax
  unsigned int v12; // r9d
  char v13; // cl
  unsigned __int64 v14; // r8
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // ecx
  int v23; // eax
  unsigned __int16 v24; // ax
  struct _TEB *v25; // rbx
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // [rsp+38h] [rbp-10h]
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a3 && !(_WORD)a3 )
      RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a3 >> 16, 1LL);
    v18 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v20 = RtlpHpSizeHeap(a1, v19, v18);
    v21 = v20;
    if ( v20 == -1 )
    {
      RtlpLogHeapFailure(9, a1, v3, 0, 0LL, 0LL);
    }
    else if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      return v20 - 16;
    }
    return v21;
  }
  else
  {
    v6 = a2 | *(_DWORD *)(a1 + 116);
    if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
    {
      v7 = 0LL;
      if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
      {
        v8 = RtlpProbeUserBufferSafe(a1, a3);
      }
      else if ( (a3 & 0xF) != 0 )
      {
        RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
        v8 = 0LL;
      }
      else
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
        {
          RtlpLogHeapFailure(8, a1, v8, 0, 0LL, 0LL);
          v8 = 0LL;
        }
      }
      if ( v8 )
      {
        v9 = *(_BYTE *)(v8 + 15);
        if ( v9 == 4 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v23 = *(_DWORD *)(v8 + 8);
            LOWORD(v29) = v23;
            if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
              v29 = *(_DWORD *)(a1 + 136) ^ v23;
            v24 = v29;
          }
          else
          {
            v24 = *(_WORD *)(v8 + 8);
          }
          return *(_QWORD *)(v8 - 16) - v24;
        }
        else
        {
          if ( v9 < 0 )
          {
            if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
              v17 = 0LL;
            else
              v17 = *(_QWORD *)(v8
                              - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
            v12 = *(unsigned __int16 *)(v17 + 36);
          }
          else
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v10 = *(_DWORD *)(v8 + 8);
              LOWORD(v28) = v10;
              if ( (v10 & *(_DWORD *)(a1 + 124)) != 0 )
                v28 = *(_DWORD *)(a1 + 136) ^ v10;
              v11 = v28;
            }
            else
            {
              v11 = *(_WORD *)(v8 + 8);
            }
            v12 = v11;
          }
          v13 = *(_BYTE *)(v8 + 15);
          if ( v13 == 5 )
          {
            v14 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v13 & 0x40) != 0 )
          {
            v14 = *(unsigned __int16 *)(v8 + 16LL * (v13 & 0x3F) + 12);
          }
          else if ( (v13 & 0x3F) == 0x3F )
          {
            if ( v13 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v26 = *(_DWORD *)(v8 + 8);
                LOWORD(v30) = v26;
                if ( (v26 & *(_DWORD *)(a1 + 124)) != 0 )
                  v30 = *(_DWORD *)(a1 + 136) ^ v26;
                v27 = v30;
              }
              else
              {
                v27 = *(_WORD *)(v8 + 8);
              }
              v22 = v27;
            }
            else
            {
              if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))) )
                v7 = *(_QWORD *)(v8
                               - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
              v22 = *(unsigned __int16 *)(v7 + 36);
            }
            v14 = *(_QWORD *)(v8 + 16LL * v22);
          }
          else
          {
            v14 = v13 & 0x3F;
          }
          return 16LL * v12 - v14;
        }
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v25 = NtCurrentTeb();
        v25->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        return -1LL;
      }
    }
    else
    {
      return RtlDebugSizeHeap();
    }
  }
}
