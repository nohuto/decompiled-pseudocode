/*
 * XREFs of RtlSizeHeap @ 0x18001BA80
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x18004DC40 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180081BC0 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x180084E90 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800E4828 (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800E6A64 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlDebugSizeHeap @ 0x1800EFE54 (RtlDebugSizeHeap.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x18001BDD0 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18001C0D4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char *v6; // r9
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rax
  SIZE_T v10; // rbp
  ULONG v12; // edx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  struct _TEB *v15; // rbx
  char v16; // al
  int v17; // eax
  unsigned int v18; // r9d
  int v19; // eax
  unsigned __int16 v20; // ax
  char v21; // cl
  unsigned __int64 v22; // r8
  unsigned int v23; // ecx
  int v24; // eax
  unsigned __int16 v25; // ax
  int v26; // [rsp+38h] [rbp-10h]
  int v27; // [rsp+38h] [rbp-10h]
  int v28; // [rsp+38h] [rbp-10h]

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && BaseAddress )
    {
      if ( (_WORD)BaseAddress
        || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(HeapHandle, (unsigned __int64)BaseAddress >> 16) )
      {
        v6 = (char *)BaseAddress - 16;
      }
      else
      {
        v6 = (char *)BaseAddress;
      }
    }
    else
    {
      v6 = (char *)BaseAddress;
    }
    v7 = RtlpHpConvertFlagsToSegmentFlags(Flags, *(_QWORD *)&Flags, BaseAddress, v6);
    v9 = RtlpHpSizeHeap(HeapHandle, v8, v7);
    v10 = v9;
    if ( v9 == -1 )
    {
      RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
      return -1LL;
    }
    else
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
        return v9 - 16;
      return v10;
    }
  }
  else
  {
    v12 = Flags | *((_DWORD *)HeapHandle + 29);
    if ( (v12 & 0x61000000) == 0 || (v12 & 0x10000000) != 0 )
    {
      v13 = 0LL;
      if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
      {
        v14 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
      }
      else if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
        v14 = 0LL;
      }
      else
      {
        v14 = (unsigned __int64)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
        if ( (*(_BYTE *)(v14 + 15) & 0x3F) == 0 )
        {
          RtlpLogHeapFailure(8, (_DWORD)HeapHandle, v14, 0, 0LL, 0LL);
          v14 = 0LL;
        }
      }
      if ( v14 )
      {
        v16 = *(_BYTE *)(v14 + 15);
        if ( v16 == 4 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v17 = *(_DWORD *)(v14 + 8);
            LOWORD(v26) = v17;
            if ( (v17 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v26 = *((_DWORD *)HeapHandle + 34) ^ v17;
            return *(_QWORD *)(v14 - 16) - (unsigned __int16)v26;
          }
          else
          {
            return *(_QWORD *)(v14 - 16) - *(unsigned __int16 *)(v14 + 8);
          }
        }
        else
        {
          if ( v16 >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v19 = *(_DWORD *)(v14 + 8);
              LOWORD(v27) = v19;
              if ( (v19 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v27 = *((_DWORD *)HeapHandle + 34) ^ v19;
              v20 = v27;
            }
            else
            {
              v20 = *(_WORD *)(v14 + 8);
            }
            v18 = v20;
          }
          else if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v14 + 8) ^ (v14 >> 4)) )
          {
            v18 = MEMORY[0x24];
          }
          else
          {
            v18 = *(unsigned __int16 *)(*(_QWORD *)(v14
                                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)(v14 >> 4)) >> 12))
                                      + 36LL);
          }
          v21 = *(_BYTE *)(v14 + 15);
          if ( v21 == 5 )
          {
            v22 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)*((unsigned __int16 *)HeapHandle + 70);
          }
          else if ( (v21 & 0x40) != 0 )
          {
            v22 = *(unsigned __int16 *)(v14 + 16LL * (v21 & 0x3F) + 12);
          }
          else if ( (v21 & 0x3F) == 0x3F )
          {
            if ( v21 >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v24 = *(_DWORD *)(v14 + 8);
                LOWORD(v28) = v24;
                if ( (v24 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v28 = *((_DWORD *)HeapHandle + 34) ^ v24;
                v25 = v28;
              }
              else
              {
                v25 = *(_WORD *)(v14 + 8);
              }
              v23 = v25;
            }
            else
            {
              if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *(_WORD *)(v14 + 8) ^ (v14 >> 4))) )
                v13 = *(_QWORD *)(v14
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)(v14 >> 4)) >> 12));
              v23 = *(unsigned __int16 *)(v13 + 36);
            }
            v22 = *(_QWORD *)(v14 + 16LL * v23);
          }
          else
          {
            v22 = v21 & 0x3F;
          }
          return 16LL * v18 - v22;
        }
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        return -1LL;
      }
    }
    else
    {
      return RtlDebugSizeHeap(HeapHandle);
    }
  }
}
