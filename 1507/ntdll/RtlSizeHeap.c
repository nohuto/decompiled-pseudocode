/*
 * XREFs of RtlSizeHeap @ 0x18002A610
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x180046B90 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180075230 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x180078BC0 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800DF0D8 (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800E13A4 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlDebugSizeHeap @ 0x1800ED6C8 (RtlDebugSizeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpSizeHeapInternal @ 0x1800DD7F8 (RtlpSizeHeapInternal.c)
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 *     RtlDebugSizeHeap @ 0x1800ED6C8 (RtlDebugSizeHeap.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 HeapByAlloc; // rbx
  ULONG v6; // edx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  char v9; // al
  int v10; // eax
  unsigned __int16 v11; // ax
  unsigned int v12; // r9d
  char v13; // cl
  unsigned __int64 v14; // r8
  char *v17; // r9
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  SIZE_T v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned __int16 v25; // ax
  struct _TEB *v26; // rbx
  int v27; // eax
  unsigned __int16 v28; // ax
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]
  int v31; // [rsp+38h] [rbp-10h]

  HeapByAlloc = (__int64)HeapHandle;
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    if ( HeapHandle == NtCurrentPeb()->ProcessHeap )
      HeapByAlloc = RtlpHpVirtFindHeapByAlloc(HeapHandle, BaseAddress, 0LL);
    return RtlpSizeHeapInternal((PVOID)HeapByAlloc);
  }
  else if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && BaseAddress )
    {
      if ( (_WORD)BaseAddress
        || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(HeapHandle, (unsigned __int64)BaseAddress >> 16) )
      {
        v17 = (char *)BaseAddress - 16;
      }
      else
      {
        v17 = (char *)BaseAddress;
      }
    }
    else
    {
      v17 = (char *)BaseAddress;
    }
    v18 = RtlpHpConvertFlagsToSegmentFlags(Flags, *(_QWORD *)&Flags, BaseAddress, v17);
    v20 = RtlpHpSizeHeap(HeapByAlloc, v19, v18);
    v21 = v20;
    if ( v20 == -1 )
    {
      RtlpLogHeapFailure(9, HeapByAlloc, (_DWORD)BaseAddress, 0, 0LL, 0LL);
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
          if ( *(_DWORD *)(HeapByAlloc + 124) )
          {
            v24 = *(_DWORD *)(v8 + 8);
            LOWORD(v30) = v24;
            if ( (v24 & *(_DWORD *)(HeapByAlloc + 124)) != 0 )
              v30 = *(_DWORD *)(HeapByAlloc + 136) ^ v24;
            v25 = v30;
          }
          else
          {
            v25 = *(_WORD *)(v8 + 8);
          }
          return *(_QWORD *)(v8 - 16) - v25;
        }
        else
        {
          if ( v9 < 0 )
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(HeapByAlloc ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
              v22 = 0LL;
            else
              v22 = *(_QWORD *)(v8
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapByAlloc ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
            v12 = *(unsigned __int16 *)(v22 + 36);
          }
          else
          {
            if ( *(_DWORD *)(HeapByAlloc + 124) )
            {
              v10 = *(_DWORD *)(v8 + 8);
              LOWORD(v29) = v10;
              if ( (v10 & *(_DWORD *)(HeapByAlloc + 124)) != 0 )
                v29 = *(_DWORD *)(HeapByAlloc + 136) ^ v10;
              v11 = v29;
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
            v14 = *(unsigned __int16 *)(HeapByAlloc + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v8 + 12);
          }
          else if ( (v13 & 0x40) != 0 )
          {
            v14 = *(unsigned __int16 *)(v8 + 16LL * (v13 & 0x3F) + 12);
          }
          else if ( (v13 & 0x3F) == 0x3F )
          {
            if ( v13 >= 0 )
            {
              if ( *(_DWORD *)(HeapByAlloc + 124) )
              {
                v27 = *(_DWORD *)(v8 + 8);
                LOWORD(v31) = v27;
                if ( (v27 & *(_DWORD *)(HeapByAlloc + 124)) != 0 )
                  v31 = *(_DWORD *)(HeapByAlloc + 136) ^ v27;
                v28 = v31;
              }
              else
              {
                v28 = *(_WORD *)(v8 + 8);
              }
              v23 = v28;
            }
            else
            {
              if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(HeapByAlloc ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))) )
                v7 = *(_QWORD *)(v8
                               - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapByAlloc ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
              v23 = *(unsigned __int16 *)(v7 + 36);
            }
            v14 = *(_QWORD *)(v8 + 16LL * v23);
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
        v26 = NtCurrentTeb();
        v26->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        return -1LL;
      }
    }
    else
    {
      return RtlDebugSizeHeap(HeapHandle);
    }
  }
}
