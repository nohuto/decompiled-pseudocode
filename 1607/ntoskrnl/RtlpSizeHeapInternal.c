/*
 * XREFs of RtlpSizeHeapInternal @ 0x1402138CC
 * Callers:
 *     RtlSizeHeap @ 0x140211D38 (RtlSizeHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x1402190A8 (RtlpProbeUserBufferSafe.c)
 */

__int64 __fastcall RtlpSizeHeapInternal(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // rdx
  int v6; // ecx
  int v8; // eax
  unsigned __int16 v9; // ax
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // r9
  char v14; // cl
  unsigned __int64 v15; // r8
  int v16; // eax
  unsigned __int16 v17; // ax
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+38h] [rbp-10h]
  int v20; // [rsp+38h] [rbp-10h]

  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v4 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v5 = a1;
      v6 = 9;
      goto LABEL_8;
    }
    v4 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
    if ( (*(_BYTE *)(v4 + 15) & 0x3F) == 0 )
    {
      a3 = v4;
      v5 = a1;
      v6 = 8;
LABEL_8:
      RtlpLogHeapFailure(v6, v5, a3, 0LL, 0LL);
      v4 = 0LL;
    }
  }
  if ( !v4 )
    return -1LL;
  if ( *(_BYTE *)(v4 + 15) == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v8 = *(_DWORD *)(v4 + 8);
      LOWORD(v18) = v8;
      if ( (v8 & *(_DWORD *)(a1 + 124)) != 0 )
        v18 = *(_DWORD *)(a1 + 136) ^ v8;
      v9 = v18;
    }
    else
    {
      v9 = *(_WORD *)(v4 + 8);
    }
    return *(_QWORD *)(v4 - 16) - v9;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 124);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v4 + 8);
      v11 = *(_DWORD *)(a1 + 124);
      LOWORD(v19) = v12;
      if ( (v11 & v12) != 0 )
        v19 = *(_DWORD *)(a1 + 136) ^ v12;
      v13 = v19;
    }
    else
    {
      v13 = *(_WORD *)(v4 + 8);
    }
    v14 = *(_BYTE *)(v4 + 15);
    if ( v14 == 5 )
    {
      v15 = *(unsigned __int16 *)(v4 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v14 & 0x40) != 0 )
    {
      v15 = *(unsigned __int16 *)(v4 + 16LL * (v14 & 0x3F) + 12);
    }
    else if ( (v14 & 0x3F) == 0x3F )
    {
      if ( v11 )
      {
        v16 = *(_DWORD *)(v4 + 8);
        LOWORD(v20) = v16;
        if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
          v20 = *(_DWORD *)(a1 + 136) ^ v16;
        v17 = v20;
      }
      else
      {
        v17 = *(_WORD *)(v4 + 8);
      }
      v15 = *(_QWORD *)(v4 + 16LL * v17);
    }
    else
    {
      v15 = v14 & 0x3F;
    }
    return 16LL * v13 - v15;
  }
}
