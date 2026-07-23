/*
 * XREFs of RtlpSizeHeapInternal @ 0x1800DD7F8
 * Callers:
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlDebugSizeHeap @ 0x1800ED6C8 (RtlDebugSizeHeap.c)
 */

__int64 __fastcall RtlpSizeHeapInternal(__int64 BaseAddress, int a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int16 v4; // bp
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  int v13; // ecx
  struct _TEB *v14; // rbx
  char v15; // al
  int v16; // eax
  unsigned __int16 v17; // ax
  __int64 v19; // rax
  unsigned int v20; // r9d
  int v21; // eax
  unsigned __int16 v22; // ax
  char v23; // cl
  unsigned __int64 v24; // r8
  unsigned int v25; // ecx
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // [rsp+38h] [rbp-10h]
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]

  v3 = a3;
  v4 = a2;
  if ( *(_DWORD *)(BaseAddress + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a3 && !(_WORD)a3 )
      RtlSparseBitmapCtxCheckBitsInternal(BaseAddress, a3 >> 16);
    v6 = RtlpHpConvertFlagsToSegmentFlags(v4);
    v8 = RtlpHpSizeHeap(BaseAddress, v7, v6);
    v9 = v8;
    if ( v8 == -1 )
    {
      RtlpLogHeapFailure(9, BaseAddress, v3, 0LL, 0LL, 0LL);
    }
    else if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      return v8 - 16;
    }
    return v9;
  }
  if ( ((*(_DWORD *)(BaseAddress + 116) | a2) & 0x61000000) != 0
    && ((*(_DWORD *)(BaseAddress + 116) | a2) & 0x10000000) == 0 )
  {
    return RtlDebugSizeHeap((PVOID)BaseAddress);
  }
  v11 = 0LL;
  if ( (*(_BYTE *)(BaseAddress + 120) & 1) != 0 )
  {
    v12 = (unsigned __int64)RtlpProbeUserBufferSafe(BaseAddress, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v13 = 9;
    }
    else
    {
      v12 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
      if ( (*(_BYTE *)(v12 + 15) & 0x3F) != 0 )
        goto LABEL_22;
      a3 = v12;
      v13 = 8;
    }
    RtlpLogHeapFailure(v13, BaseAddress, a3, 0LL, 0LL, 0LL);
    v12 = 0LL;
  }
LABEL_22:
  if ( v12 )
  {
    v15 = *(_BYTE *)(v12 + 15);
    if ( v15 == 4 )
    {
      if ( *(_DWORD *)(BaseAddress + 124) )
      {
        v16 = *(_DWORD *)(v12 + 8);
        LOWORD(v28) = v16;
        if ( (v16 & *(_DWORD *)(BaseAddress + 124)) != 0 )
          v28 = *(_DWORD *)(BaseAddress + 136) ^ v16;
        v17 = v28;
      }
      else
      {
        v17 = *(_WORD *)(v12 + 8);
      }
      return *(_QWORD *)(v12 - 16) - v17;
    }
    else
    {
      if ( v15 >= 0 )
      {
        if ( *(_DWORD *)(BaseAddress + 124) )
        {
          v21 = *(_DWORD *)(v12 + 8);
          LOWORD(v29) = v21;
          if ( (v21 & *(_DWORD *)(BaseAddress + 124)) != 0 )
            v29 = *(_DWORD *)(BaseAddress + 136) ^ v21;
          v22 = v29;
        }
        else
        {
          v22 = *(_WORD *)(v12 + 8);
        }
        v20 = v22;
      }
      else
      {
        if ( *(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ BaseAddress ^ (v12 >> 4)) )
          v19 = 0LL;
        else
          v19 = *(_QWORD *)(v12
                          - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(v12 >> 4)) >> 12));
        v20 = *(unsigned __int16 *)(v19 + 36);
      }
      v23 = *(_BYTE *)(v12 + 15);
      if ( v23 == 5 )
      {
        v24 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(BaseAddress + 140);
      }
      else if ( (v23 & 0x40) != 0 )
      {
        v24 = *(unsigned __int16 *)(v12 + 16LL * (v23 & 0x3F) + 12);
      }
      else if ( (v23 & 0x3F) == 0x3F )
      {
        if ( v23 >= 0 )
        {
          if ( *(_DWORD *)(BaseAddress + 124) )
          {
            v26 = *(_DWORD *)(v12 + 8);
            LOWORD(v30) = v26;
            if ( (v26 & *(_DWORD *)(BaseAddress + 124)) != 0 )
              v30 = *(_DWORD *)(BaseAddress + 136) ^ v26;
            v27 = v30;
          }
          else
          {
            v27 = *(_WORD *)(v12 + 8);
          }
          v25 = v27;
        }
        else
        {
          if ( !(*(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ BaseAddress ^ (v12 >> 4))) )
            v11 = *(_QWORD *)(v12
                            - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(v12 >> 4)) >> 12));
          v25 = *(unsigned __int16 *)(v11 + 36);
        }
        v24 = *(_QWORD *)(v12 + 16LL * v25);
      }
      else
      {
        v24 = v23 & 0x3F;
      }
      return 16LL * v20 - v24;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v14 = NtCurrentTeb();
    v14->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return -1LL;
  }
}
