/*
 * XREFs of RtlSizeHeap @ 0x180046170
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x18005F2A0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085F30 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x180088EE0 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800EDA58 (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800EFCAC (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18004667C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlDebugSizeHeap @ 0x1800FB344 (RtlDebugSizeHeap.c)
 */

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  int v3; // edi
  ULONG v6; // edx
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
  SIZE_T v21; // rsi
  unsigned int v22; // ecx
  int v23; // eax
  unsigned __int16 v24; // ax
  struct _TEB *v25; // rbx
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // [rsp+38h] [rbp-10h]
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]

  v3 = (int)BaseAddress;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && BaseAddress && !(_WORD)BaseAddress )
      RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, (unsigned __int64)BaseAddress >> 16, 1LL);
    v18 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v20 = RtlpHpSizeHeap(HeapHandle, v19, v18);
    v21 = v20;
    if ( v20 == -1 )
    {
      RtlpLogHeapFailure(9, (_DWORD)HeapHandle, v3, 0, 0LL, 0LL);
    }
    else if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      return v20 - 16;
    }
    return v21;
  }
  else
  {
    v6 = Flags | *((_DWORD *)HeapHandle + 29);
    if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
    {
      v7 = 0LL;
      if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
      {
        v8 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
      }
      else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
        v8 = 0LL;
      }
      else
      {
        v8 = (unsigned __int64)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
        {
          RtlpLogHeapFailure(8, (_DWORD)HeapHandle, v8, 0, 0LL, 0LL);
          v8 = 0LL;
        }
      }
      if ( v8 )
      {
        v9 = *(_BYTE *)(v8 + 15);
        if ( v9 == 4 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v23 = *(_DWORD *)(v8 + 8);
            LOWORD(v29) = v23;
            if ( (v23 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v29 = *((_DWORD *)HeapHandle + 34) ^ v23;
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
            if ( (unsigned __int16)HeapHandle ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
              v17 = 0LL;
            else
              v17 = *(_QWORD *)(v8
                              - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
            v12 = *(unsigned __int16 *)(v17 + 36);
          }
          else
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v10 = *(_DWORD *)(v8 + 8);
              LOWORD(v28) = v10;
              if ( (v10 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v28 = *((_DWORD *)HeapHandle + 34) ^ v10;
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
            v14 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)*((unsigned __int16 *)HeapHandle + 70);
          }
          else if ( (v13 & 0x40) != 0 )
          {
            v14 = *(unsigned __int16 *)(v8 + 16LL * (v13 & 0x3F) + 12);
          }
          else if ( (v13 & 0x3F) == 0x3F )
          {
            if ( v13 >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v26 = *(_DWORD *)(v8 + 8);
                LOWORD(v30) = v26;
                if ( (v26 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v30 = *((_DWORD *)HeapHandle + 34) ^ v26;
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
              if ( !((unsigned __int16)HeapHandle ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))) )
                v7 = *(_QWORD *)(v8
                               - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
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
      return RtlDebugSizeHeap(HeapHandle);
    }
  }
}
