/*
 * XREFs of KeBuildLogicalProcessorSystemInformation @ 0x140541798
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeBuildLogicalProcessorSystemInformation(__int16 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // r13
  __int16 v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r9d
  _QWORD *v19; // r11
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned int v23; // r11d
  unsigned int v24; // eax
  _QWORD *v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // r9
  bool v28; // al
  __int64 result; // rax
  unsigned int v31; // [rsp+48h] [rbp+10h]

  v31 = 0;
  v4 = a4;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v10 = KiProcessorBlock[v9];
      v11 = *(unsigned __int8 *)(v10 + 1616);
      if ( (_WORD)v11 == v6 )
      {
        v12 = *(_QWORD *)(v10 + 8 * v11 + 24608);
        if ( v12 )
        {
          _BitScanReverse64(&v13, v12);
          v14 = KiProcessorNumberToIndexMappingTable[(unsigned int)(v13 + ((_DWORD)v11 << 6))];
        }
        else
        {
          v14 = -1;
        }
        if ( *(_DWORD *)(v10 + 36) == v14 )
        {
          v8 += 32;
          if ( v8 > a3 )
          {
            v7 = -1073741820;
          }
          else
          {
            *(_QWORD *)a2 = v12;
            *(_DWORD *)(a2 + 8) = 3;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_BYTE *)(a2 + 16) = 0;
            a2 += 32LL;
          }
        }
        v15 = *(_QWORD *)(v10 + 24792);
        if ( v15 )
        {
          _BitScanReverse64(&v16, v15);
          v17 = KiProcessorNumberToIndexMappingTable[(unsigned int)(v16 + ((_DWORD)v11 << 6))];
        }
        else
        {
          v17 = -1;
        }
        if ( *(_DWORD *)(v10 + 36) == v17 )
        {
          v28 = *(_QWORD *)(v10 + 1608) != v15;
          v8 += 32;
          if ( v8 > a3 )
          {
            v7 = -1073741820;
          }
          else
          {
            *(_QWORD *)a2 = v15;
            *(_DWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_BYTE *)(a2 + 16) = v28;
            a2 += 32LL;
          }
        }
        v18 = 0;
        if ( *(_DWORD *)(v10 + 24508) )
        {
          v19 = (_QWORD *)(a2 + 16);
          do
          {
            v20 = *(_QWORD *)(v10 + 1608);
            v21 = *(_QWORD *)(v10 + 8LL * v18 + 24816);
            if ( !v21
              || (_BitScanReverse64(&v22, v21),
                  v20 = *(_QWORD *)(v10 + 8LL * v18 + 24816),
                  *(_DWORD *)(v10 + 36) == KiProcessorNumberToIndexMappingTable[(unsigned int)(v22 + ((_DWORD)v11 << 6))]) )
            {
              v8 += 32;
              if ( v8 > a3 )
              {
                v7 = -1073741820;
              }
              else
              {
                *(_QWORD *)a2 = v20;
                *((_DWORD *)v19 - 2) = 2;
                a2 += 32LL;
                v19[1] = 0LL;
                *v19 = 0LL;
                *v19 = *(_QWORD *)(v10 + 12LL * v18 + 24448);
                *((_DWORD *)v19 + 2) = *(_DWORD *)(v10 + 12LL * v18 + 24456);
                v19 += 4;
              }
            }
            ++v18;
          }
          while ( v18 < *(_DWORD *)(v10 + 24508) );
          v9 = v31;
          v6 = a1;
        }
      }
      v31 = ++v9;
    }
    while ( v9 < (unsigned int)KeNumberProcessors_0 );
    v4 = a4;
  }
  v23 = (unsigned __int16)KeNumberNodes;
  v24 = 0;
  if ( KeNumberNodes )
  {
    v25 = (_QWORD *)(a2 + 16);
    v26 = KeNodeBlock;
    do
    {
      v27 = *(_QWORD *)(*v26 + 136);
      if ( v27 && *(_WORD *)(*v26 + 144) == v6 )
      {
        v8 += 32;
        if ( v8 <= a3 )
        {
          *(v25 - 2) = v27;
          *((_DWORD *)v25 - 2) = 1;
          v25[1] = 0LL;
          *v25 = 0LL;
          *(_DWORD *)v25 = v24;
          v25 += 4;
        }
        else
        {
          v7 = -1073741820;
        }
      }
      ++v24;
      ++v26;
    }
    while ( v24 < v23 );
  }
  result = v7;
  *v4 = v8;
  return result;
}
