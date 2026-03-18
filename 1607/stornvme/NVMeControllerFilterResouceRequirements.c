/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C0006AC8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     GetProcessorGroupInformation @ 0x1C0005670 (GetProcessorGroupInformation.c)
 *     IsPci3MsiInterrupt @ 0x1C000657C (IsPci3MsiInterrupt.c)
 */

char __fastcall NVMeControllerFilterResouceRequirements(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  char result; // al
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // esi
  unsigned int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  unsigned int v16; // r9d
  __int64 v17; // r10
  int v18; // r11d
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  __int64 v22; // r10
  __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  unsigned int v26; // r8d
  int v27; // r9d
  _OWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  const void *v31; // rdx

  v3 = 0;
  result = GetProcessorGroupInformation(a1);
  if ( result )
  {
    v6 = *(_QWORD *)(a2 + 8) + 32LL;
    v7 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 36LL);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a2 + 8) + 40LL;
      do
      {
        if ( IsPci3MsiInterrupt(v8) )
          ++v3;
        v8 = v9 + 32;
      }
      while ( v10 != 1 );
    }
    v11 = *(unsigned __int16 *)(a1 + 162);
    result = v11 + 1;
    if ( v3 > v11 + 1 )
    {
      v12 = v11 - v3 + v7 + 1;
      v13 = 0;
      if ( v7 )
      {
        while ( 1 )
        {
          if ( IsPci3MsiInterrupt(v6 + 32LL * v13 + 8) )
          {
            if ( v17 )
            {
              while ( !_bittest64(&v17, v16) )
                ++v16;
            }
            *(_WORD *)(v14 + 12) |= 4u;
            *(_DWORD *)(v14 + 16) = -2;
            *(_QWORD *)(v14 + 32) = 1LL << v16;
            *(_DWORD *)(v14 + 20) = -2;
            *(_WORD *)(v14 + 24) = 4;
            *(_WORD *)(v14 + 26) = v18;
            *(_DWORD *)(v14 + 28) = 3;
            if ( (v17 & ~(1LL << v16)) == 0 && v18 == *(unsigned __int16 *)(a1 + 160) - 1 )
              break;
          }
          v13 = v15 + 1;
          if ( v13 >= *(_DWORD *)(v6 + 4) )
            goto LABEL_19;
        }
        v13 = v15 + 1;
      }
LABEL_19:
      v19 = *(_DWORD *)(v6 + 4);
      while ( v13 < v19 )
      {
        if ( IsPci3MsiInterrupt(32LL * v13 + v6 + 8) )
        {
          if ( v22 )
          {
            while ( !_bittest64(&v22, v21) )
              ++v21;
          }
          v23 = 32LL * v20;
          *(_WORD *)(v23 + v6 + 12) |= 4u;
          v13 = v20 + 1;
          *(_DWORD *)(v23 + v6 + 16) = -2;
          *(_DWORD *)(v23 + v6 + 20) = -2;
          *(_DWORD *)(v23 + v6 + 24) = 4;
          *(_DWORD *)(v23 + v6 + 28) = 3;
          *(_QWORD *)(v23 + v6 + 32) = 1LL << v21;
          break;
        }
        v13 = v20 + 1;
      }
      v24 = 0;
      while ( 1 )
      {
        v30 = v6 + 8;
        if ( v13 >= *(_DWORD *)(v6 + 4) )
          break;
        if ( !IsPci3MsiInterrupt(32LL * v13 + v30) || v27 )
        {
          if ( !IsPci3MsiInterrupt(v25) )
          {
            if ( v24 )
            {
              v29 = 32LL * v24++;
              *(_OWORD *)(v29 + v6 + 8) = *v28;
              *(_OWORD *)(v29 + v6 + 24) = v28[1];
            }
          }
        }
        else
        {
          v24 = v26;
        }
        v13 = v26 + 1;
      }
      v31 = (const void *)(32LL * *(unsigned int *)(v6 + 4) + v6 + 8);
      memmove((void *)(32LL * v24 + v30), v31, (unsigned int)*(_QWORD *)(a2 + 8) + **(_DWORD **)(a2 + 8) - (_DWORD)v31);
      result = (unsigned __int8)NVMeZeroMemory(
                                  (void *)(*(_QWORD *)(a2 + 8)
                                         + **(unsigned int **)(a2 + 8)
                                         - 32LL * (unsigned int)(*(_DWORD *)(v6 + 4) - v12)),
                                  32 * (*(_DWORD *)(v6 + 4) - v12));
      *(_DWORD *)(v6 + 4) = v12;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 9;
  }
  return result;
}
