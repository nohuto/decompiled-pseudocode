/*
 * XREFs of RtlpSetupExtendedBlock @ 0x1800863B0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  unsigned __int64 v6; // rbx
  char v8; // r15
  char v9; // cl
  __int64 v11; // rcx
  __int64 v13; // rax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int16 v16; // ax
  int v17; // [rsp+28h] [rbp-20h]

  v6 = a3 - 16;
  v8 = 0;
  v9 = *(_BYTE *)(a3 - 16 + 15);
  if ( v9 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(a1 + 116)) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v8 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    *(_WORD *)(v6 + 8) += a5;
    LOWORD(v11) = *(_WORD *)(v6 + 8);
    *(_BYTE *)(v6 + 14) = a5 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(a5 + a3 - 2) = a5 >> 4;
  }
  else
  {
    if ( v9 == 5 )
    {
      LOWORD(v11) = *(_WORD *)(v6 + 12) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v9 & 0x40) != 0 )
    {
      LOWORD(v11) = *(_WORD *)(v6 + 16LL * (v9 & 0x3F) + 12);
    }
    else if ( (v9 & 0x3F) == 0x3F )
    {
      if ( v9 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v15 = *(_DWORD *)(v6 + 8);
          LOWORD(v17) = v15;
          if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
            v17 = *(_DWORD *)(a1 + 136) ^ v15;
          v16 = v17;
        }
        else
        {
          v16 = *(_WORD *)(v6 + 8);
        }
        v14 = v16;
      }
      else
      {
        if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4)) )
          v13 = 0LL;
        else
          v13 = *(_QWORD *)(v6
                          - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12));
        v14 = *(unsigned __int16 *)(v13 + 36);
      }
      v11 = *(_QWORD *)(v6 + 16LL * v14);
    }
    else
    {
      LOWORD(v11) = v9 & 0x3F;
    }
    *(_BYTE *)(a5 + a3 - 2) = a5 >> 4;
    *(_BYTE *)(v6 + 15) &= 0xC0u;
    *(_BYTE *)(v6 + 15) |= (unsigned __int8)(a5 >> 4) | 0x40;
  }
  *(_BYTE *)(a5 + a3 - 1) = 5;
  *(_WORD *)(a5 + a3 - 4) = a5 + v11;
  *(_DWORD *)(a5 + a3 - 8) = a6;
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return a5 + a3;
}
