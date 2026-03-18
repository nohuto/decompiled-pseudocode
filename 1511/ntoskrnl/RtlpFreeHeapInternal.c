/*
 * XREFs of RtlpFreeHeapInternal @ 0x1400D3418
 * Callers:
 *     RtlFreeHeap @ 0x1400D33D4 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1401F7BA8 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpFreeHeap @ 0x1400D34B0 (RtlpFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x14014FF40 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x1401FFEC0 (RtlpProbeUserBufferSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(_DWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // r9
  int v21; // eax
  int v22; // [rsp+38h] [rbp-10h]
  int v23; // [rsp+38h] [rbp-10h]
  int v24; // [rsp+38h] [rbp-10h]

  v3 = 0;
  if ( (a1[30] & 1) != 0 )
  {
    v7 = RtlpProbeUserBufferSafe();
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      v10 = a2;
      v9 = (int)a1;
      v11 = 9;
    }
    else
    {
      v7 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) != 0 )
        goto LABEL_6;
      v9 = (int)a1;
      v10 = v7;
      v11 = 8;
    }
    RtlpLogHeapFailure(v11, v9, v10, 0, 0LL);
    v7 = 0LL;
  }
LABEL_6:
  if ( v7 )
  {
    if ( *(_BYTE *)(a2 - 1) != 5 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v7, a2);
    if ( a1[31] )
    {
      v22 = a1[34] ^ *(_DWORD *)(v7 + 8);
      if ( HIBYTE(v22) != (BYTE2(v22) ^ (unsigned __int8)(BYTE1(v22) ^ v22)) )
        goto LABEL_33;
    }
    v12 = a1[31];
    if ( v12 )
    {
      v13 = *(_DWORD *)(v7 + 8);
      v12 = a1[31];
      LOWORD(v23) = v13;
      if ( (v12 & v13) != 0 )
        v23 = a1[34] ^ v13;
      v14 = v23;
    }
    else
    {
      v14 = *(_WORD *)(v7 + 8);
    }
    v15 = v14;
    if ( *(_BYTE *)(v7 + 15) == 4 )
    {
      if ( v12 )
      {
        v16 = *(_DWORD *)(v7 + 8);
        LOWORD(v24) = v16;
        if ( (a1[31] & v16) != 0 )
          v24 = a1[34] ^ v16;
        v17 = v24;
      }
      else
      {
        v17 = *(_WORD *)(v7 + 8);
      }
      v18 = v15 + *(_QWORD *)(v7 - 16) - v17;
    }
    else
    {
      v18 = 16LL * v14;
    }
    if ( v18 + v7 < a2 )
    {
LABEL_33:
      RtlpLogHeapFailure(3, (_DWORD)a1, v7, a2, 0LL);
      return v3;
    }
    v19 = *(_DWORD *)(a2 - 8);
    if ( (a3 & 0x3C000102) != 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v7, a2);
    v20 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
    v21 = v19 && (_WORD)v19 == 1 ? CLFS_LSN_NULL_EXT(a1, a2, 3LL, v20) : -1073741823;
    if ( v21 >= 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v7, a2);
  }
  return v3;
}
