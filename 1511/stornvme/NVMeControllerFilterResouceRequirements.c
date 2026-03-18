/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C0004698
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001BB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     GetProcessorGroupInformation @ 0x1C00031B8 (GetProcessorGroupInformation.c)
 *     memmove @ 0x1C000EC00 (memmove.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall NVMeControllerFilterResouceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ecx
  int v13; // r10d
  int v14; // esi
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rax
  const void *v26; // rdx
  unsigned int v27; // edx

  v5 = 0;
  LOBYTE(v7) = GetProcessorGroupInformation(a1, a2, a3, a4);
  if ( !(_BYTE)v7 )
  {
    *(_DWORD *)(a1 + 24) = 9;
    return v7;
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_DWORD *)(v8 + 36);
  if ( v9 )
  {
    v10 = v8 + 44;
    v11 = v9;
    do
    {
      if ( *(_BYTE *)(v10 - 3) == 2
        && (*(_BYTE *)v10 & 3) != 0
        && *(_DWORD *)(v10 + 4) == -2
        && *(_DWORD *)(v10 + 8) == -2 )
      {
        ++v5;
      }
      v10 += 32LL;
      --v11;
    }
    while ( v11 );
  }
  v12 = *(unsigned __int16 *)(a1 + 154);
  LOBYTE(v7) = v12 + 1;
  if ( v5 > v12 + 1 )
  {
    v13 = 0;
    v14 = v12 - v5 + v9 + 1;
    v15 = 0;
    v16 = 0;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL);
    if ( v9 )
    {
      do
      {
        v18 = 32LL * v15;
        if ( *(_BYTE *)(v18 + v8 + 41) == 2
          && (*(_BYTE *)(v18 + v8 + 44) & 3) != 0
          && *(_DWORD *)(v18 + v8 + 48) == -2
          && *(_DWORD *)(v18 + v8 + 52) == -2 )
        {
          if ( v17 )
          {
            while ( !_bittest64(&v17, v16) )
              ++v16;
          }
          *(_DWORD *)(v18 + v8 + 48) = -2;
          *(_WORD *)(v18 + v8 + 44) |= 4u;
          *(_WORD *)(v18 + v8 + 56) = 4;
          *(_QWORD *)(v18 + v8 + 64) = 1LL << v16;
          v17 &= ~(1LL << v16);
          *(_DWORD *)(v18 + v8 + 52) = -2;
          *(_WORD *)(v18 + v8 + 58) = v13;
          *(_DWORD *)(v18 + v8 + 60) = 3;
          if ( !v17 )
          {
            if ( v13 == *(unsigned __int16 *)(a1 + 152) - 1 )
            {
              ++v15;
              break;
            }
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 16LL * (unsigned int)++v13 + 8);
            v16 = 0;
          }
        }
        ++v15;
      }
      while ( v15 < *(_DWORD *)(v8 + 36) );
    }
    v19 = 0;
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL);
    while ( 1 )
    {
      if ( v15 >= *(_DWORD *)(v8 + 36) )
        goto LABEL_37;
      v21 = 32LL * v15;
      if ( *(_BYTE *)(v21 + v8 + 41) == 2
        && (*(_BYTE *)(v21 + v8 + 44) & 3) != 0
        && *(_DWORD *)(v21 + v8 + 48) == -2
        && *(_DWORD *)(v21 + v8 + 52) == -2 )
      {
        break;
      }
      ++v15;
    }
    if ( v20 )
    {
      while ( !_bittest64(&v20, v19) )
        ++v19;
    }
    v22 = 32LL * v15;
    *(_WORD *)(v22 + v8 + 44) |= 4u;
    *(_DWORD *)(v22 + v8 + 56) = 4;
    *(_QWORD *)(v22 + v8 + 64) = 1LL << v19;
    ++v15;
    *(_DWORD *)(v22 + v8 + 48) = -2;
    *(_DWORD *)(v22 + v8 + 52) = -2;
    *(_DWORD *)(v22 + v8 + 60) = 3;
LABEL_37:
    v23 = 0;
    while ( 1 )
    {
      if ( v15 >= *(_DWORD *)(v8 + 36) )
      {
        v26 = (const void *)(32LL * *(unsigned int *)(v8 + 36) + v8 + 40);
        memmove(
          (void *)(32LL * v23 + v8 + 40),
          v26,
          (unsigned int)*(_QWORD *)(a2 + 8) + **(_DWORD **)(a2 + 8) - (_DWORD)v26);
        v7 = 32LL * (unsigned int)(*(_DWORD *)(v8 + 36) - v14);
        v27 = (unsigned int)(32 * (*(_DWORD *)(v8 + 36) - v14)) >> 2;
        if ( v27 )
          LOBYTE(v7) = (unsigned __int8)memset(
                                          (void *)(*(_QWORD *)(a2 + 8) + **(unsigned int **)(a2 + 8) - v7),
                                          0,
                                          4LL * v27);
        *(_DWORD *)(v8 + 36) = v14;
        return v7;
      }
      v24 = 32LL * v15;
      if ( *(_BYTE *)(v24 + v8 + 41) != 2 )
        goto LABEL_48;
      if ( (*(_BYTE *)(v24 + v8 + 44) & 3) != 0
        && *(_DWORD *)(v24 + v8 + 48) == -2
        && *(_DWORD *)(v24 + v8 + 52) == -2
        && !v23 )
      {
        v23 = v15;
        goto LABEL_50;
      }
      if ( *(_BYTE *)(v24 + v8 + 41) != 2
        || (*(_BYTE *)(v24 + v8 + 44) & 3) == 0
        || *(_DWORD *)(v24 + v8 + 48) != -2
        || *(_DWORD *)(v24 + v8 + 52) != -2 )
      {
LABEL_48:
        if ( v23 )
        {
          v25 = 32LL * v23++;
          *(_OWORD *)(v25 + v8 + 40) = *(_OWORD *)(v24 + v8 + 40);
          *(_OWORD *)(v25 + v8 + 56) = *(_OWORD *)(v24 + v8 + 56);
        }
      }
LABEL_50:
      ++v15;
    }
  }
  return v7;
}
