/*
 * XREFs of RtlpFreeHeapInternal @ 0x140092CE8
 * Callers:
 *     RtlFreeHeap @ 0x140092CA4 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x140211DA0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x1402190A8 (RtlpProbeUserBufferSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(_DWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  int v8; // edx
  int v9; // r8d
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // r9
  int v20; // eax
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
      v9 = a2;
      v8 = (int)a1;
      v10 = 9;
    }
    else
    {
      v7 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) != 0 )
        goto LABEL_10;
      v8 = (int)a1;
      v9 = v7;
      v10 = 8;
    }
    RtlpLogHeapFailure(v10, v8, v9, 0, 0LL);
    v7 = 0LL;
  }
LABEL_10:
  if ( v7 )
  {
    if ( *(_BYTE *)(a2 - 1) != 5 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v7, a2);
    if ( a1[31] )
    {
      v22 = a1[34] ^ *(_DWORD *)(v7 + 8);
      if ( HIBYTE(v22) != (BYTE2(v22) ^ (unsigned __int8)(BYTE1(v22) ^ v22)) )
        goto LABEL_28;
    }
    v11 = a1[31];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v7 + 8);
      v11 = a1[31];
      LOWORD(v23) = v12;
      if ( (v11 & v12) != 0 )
        v23 = a1[34] ^ v12;
      v13 = v23;
    }
    else
    {
      v13 = *(_WORD *)(v7 + 8);
    }
    v14 = v13;
    if ( *(_BYTE *)(v7 + 15) == 4 )
    {
      if ( v11 )
      {
        v15 = *(_DWORD *)(v7 + 8);
        LOWORD(v24) = v15;
        if ( (v15 & a1[31]) != 0 )
          v24 = a1[34] ^ v15;
        v16 = v24;
      }
      else
      {
        v16 = *(_WORD *)(v7 + 8);
      }
      v17 = v14 + *(_QWORD *)(v7 - 16) - v16;
    }
    else
    {
      v17 = 16LL * v13;
    }
    if ( v17 + v7 < a2 )
    {
LABEL_28:
      RtlpLogHeapFailure(3, (_DWORD)a1, v7, a2, 0LL);
      return v3;
    }
    v18 = *(_DWORD *)(a2 - 8);
    if ( (a3 & 0x3C000102) != 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v7, a2);
    v19 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
    v20 = v18 && (_WORD)v18 == 1 ? CLFS_LSN_NULL_EXT(a1, a2, 3LL, v19) : -1073741823;
    if ( v20 >= 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2u, v7, a2);
  }
  return v3;
}
