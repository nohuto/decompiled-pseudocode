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

__int64 __fastcall RtlpSizeHeapInternal(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int16 v4; // bp
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int v11; // ebp
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  int v14; // ecx
  struct _TEB *v15; // rbx
  char v16; // al
  int v17; // eax
  unsigned __int16 v18; // ax
  __int64 v20; // rax
  unsigned int v21; // r9d
  int v22; // eax
  unsigned __int16 v23; // ax
  char v24; // cl
  unsigned __int64 v25; // r8
  unsigned int v26; // ecx
  int v27; // eax
  unsigned __int16 v28; // ax
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]
  int v31; // [rsp+38h] [rbp-10h]

  v3 = a3;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a3 && !(_WORD)a3 )
      RtlSparseBitmapCtxCheckBitsInternal(a1, a3 >> 16);
    v6 = RtlpHpConvertFlagsToSegmentFlags(v4);
    v8 = RtlpHpSizeHeap(a1, v7, v6);
    v9 = v8;
    if ( v8 == -1 )
    {
      RtlpLogHeapFailure(9, a1, v3, 0LL, 0LL, 0LL);
    }
    else if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      return v8 - 16;
    }
    return v9;
  }
  v11 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v11 & 0x61000000) != 0 && (v11 & 0x10000000) == 0 )
    return RtlDebugSizeHeap(a1, v11);
  v12 = 0LL;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v13 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v14 = 9;
    }
    else
    {
      v13 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
      if ( (*(_BYTE *)(v13 + 15) & 0x3F) != 0 )
        goto LABEL_22;
      a3 = v13;
      v14 = 8;
    }
    RtlpLogHeapFailure(v14, a1, a3, 0LL, 0LL, 0LL);
    v13 = 0LL;
  }
LABEL_22:
  if ( v13 )
  {
    v16 = *(_BYTE *)(v13 + 15);
    if ( v16 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v17 = *(_DWORD *)(v13 + 8);
        LOWORD(v29) = v17;
        if ( (v17 & *(_DWORD *)(a1 + 124)) != 0 )
          v29 = *(_DWORD *)(a1 + 136) ^ v17;
        v18 = v29;
      }
      else
      {
        v18 = *(_WORD *)(v13 + 8);
      }
      return *(_QWORD *)(v13 - 16) - v18;
    }
    else
    {
      if ( v16 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v22 = *(_DWORD *)(v13 + 8);
          LOWORD(v30) = v22;
          if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
            v30 = *(_DWORD *)(a1 + 136) ^ v22;
          v23 = v30;
        }
        else
        {
          v23 = *(_WORD *)(v13 + 8);
        }
        v21 = v23;
      }
      else
      {
        if ( *(_WORD *)(v13 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v13 >> 4)) )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)(v13
                          - ((unsigned __int64)(*(_DWORD *)(v13 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v13 >> 4)) >> 12));
        v21 = *(unsigned __int16 *)(v20 + 36);
      }
      v24 = *(_BYTE *)(v13 + 15);
      if ( v24 == 5 )
      {
        v25 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v24 & 0x40) != 0 )
      {
        v25 = *(unsigned __int16 *)(v13 + 16LL * (v24 & 0x3F) + 12);
      }
      else if ( (v24 & 0x3F) == 0x3F )
      {
        if ( v24 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v27 = *(_DWORD *)(v13 + 8);
            LOWORD(v31) = v27;
            if ( (v27 & *(_DWORD *)(a1 + 124)) != 0 )
              v31 = *(_DWORD *)(a1 + 136) ^ v27;
            v28 = v31;
          }
          else
          {
            v28 = *(_WORD *)(v13 + 8);
          }
          v26 = v28;
        }
        else
        {
          if ( !(*(_WORD *)(v13 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v13 >> 4))) )
            v12 = *(_QWORD *)(v13
                            - ((unsigned __int64)(*(_DWORD *)(v13 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v13 >> 4)) >> 12));
          v26 = *(unsigned __int16 *)(v12 + 36);
        }
        v25 = *(_QWORD *)(v13 + 16LL * v26);
      }
      else
      {
        v25 = v24 & 0x3F;
      }
      return 16LL * v21 - v25;
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
