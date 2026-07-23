/*
 * XREFs of MiCompressRelocations @ 0x1405082F0
 * Callers:
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiCompressRelocations(_QWORD *P, int a2)
{
  __int64 v2; // r14
  char v3; // r12
  char v5; // bl
  _QWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  _WORD *v10; // r10
  __int16 v11; // r11
  unsigned int v12; // r9d
  unsigned __int16 v13; // r8
  unsigned int v14; // edi
  __int16 v15; // dx
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  char *PoolWithTag; // rax
  char *v19; // r12
  _QWORD *v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rbp
  signed __int64 v26; // r14
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v30; // rcx
  _WORD *v31; // rdx
  __int16 v32; // r8
  unsigned int v33; // r10d
  __int16 v34; // r11
  unsigned int v35; // r9d
  unsigned __int16 v36; // cx
  signed __int64 v38; // [rsp+80h] [rbp+18h]
  char *v39; // [rsp+88h] [rbp+20h]

  v2 = P[4];
  v3 = 0;
  v5 = 0;
  v6 = P;
  v7 = 0LL;
  v8 = 0LL;
  do
  {
    v9 = *(unsigned int *)(v2 + 4);
    v10 = (_WORD *)(v2 + 8);
    v8 += v9;
    a2 -= v9;
    v2 += v9;
    v11 = 4;
    v12 = (unsigned int)(v9 - 8) >> 1;
    v13 = 0;
    v14 = 0;
    if ( v12 )
    {
      do
      {
        v15 = *v10 >> 12;
        if ( v15 )
        {
          if ( v5 != (_BYTE)v15 )
          {
            if ( v3 )
              return (char *)v6;
            v5 = v15;
            v3 = 1;
          }
          v16 = *v10 & 0xFFF;
          if ( v16 <= v13 && v13 )
            return (char *)v6;
          v17 = v16 - v13;
          if ( v17 == v11 )
          {
            if ( ++v14 == 255 )
            {
              v7 += 2LL;
              v14 = 0;
            }
          }
          else
          {
            if ( v14 )
            {
              if ( v14 > 4 )
                v7 += 2LL;
              else
                ++v7;
              v14 = 0;
            }
            v11 = v17;
            if ( (unsigned __int16)v17 >= 0xEBu )
              v7 += 2LL;
            else
              ++v7;
          }
          v13 += v17;
          ++v10;
          --v12;
        }
        else
        {
          ++v10;
          --v12;
        }
      }
      while ( v12 );
      if ( v14 )
      {
        if ( v14 <= 4 )
          ++v7;
        else
          v7 += 2LL;
      }
    }
    v7 += 2LL;
    if ( (v7 & 1) != 0 )
      ++v7;
  }
  while ( a2 );
  if ( !v3 )
    return (char *)v6;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7 + 8 * (v6[7] + 11LL), 0x65526D4Du);
  v39 = PoolWithTag;
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return (char *)v6;
  v20 = PoolWithTag + 88;
  v21 = v6[4] - *v6;
  *(_OWORD *)PoolWithTag = *(_OWORD *)v6;
  v22 = v21 >> 3;
  *((_OWORD *)PoolWithTag + 1) = *((_OWORD *)v6 + 1);
  *((_OWORD *)PoolWithTag + 2) = *((_OWORD *)v6 + 2);
  *((_OWORD *)PoolWithTag + 3) = *((_OWORD *)v6 + 3);
  *((_OWORD *)PoolWithTag + 4) = *((_OWORD *)v6 + 4);
  *((_QWORD *)PoolWithTag + 10) = v6[10];
  PoolWithTag[68] = v5;
  *(_QWORD *)PoolWithTag = PoolWithTag + 88;
  v23 = (__int64)&PoolWithTag[8 * v6[7] + 88];
  *((_QWORD *)PoolWithTag + 4) = v23;
  v24 = v6[4];
  if ( (_DWORD)v22 )
  {
    v25 = (unsigned int)v22;
    v26 = (char *)v6 - PoolWithTag;
    v27 = 0LL;
    v38 = (char *)v6 - PoolWithTag;
    do
    {
      if ( v27 < v6[7] )
      {
        v28 = *(_QWORD *)((char *)v20 + v26);
        if ( v28 > 1 )
        {
          *v20 = v23;
          if ( (*((_BYTE *)v20 + v26) & 1) != 0 )
            *v20 = v23 | 1;
          v30 = *(unsigned int *)(v24 + 4);
          v31 = (_WORD *)(v24 + 8);
          v32 = 0;
          v33 = 0;
          v24 += v30;
          v34 = 4;
          v35 = (unsigned int)(v30 - 8) >> 1;
          if ( v35 )
          {
            do
            {
              if ( (*v31 & 0xF000) != 0 )
              {
                v36 = (*v31 & 0xFFF) - v32;
                if ( v36 == v34 )
                {
                  if ( ++v33 == 255 )
                  {
                    *(_WORD *)v23 = -17;
                    v33 = 0;
                    v23 += 2LL;
                  }
                }
                else
                {
                  if ( v33 )
                  {
                    if ( v33 > 4 )
                    {
                      *(_BYTE *)v23 = -17;
                      *(_BYTE *)(v23 + 1) = v33;
                      v23 += 2LL;
                    }
                    else
                    {
                      *(_BYTE *)v23++ = -17 - v33;
                    }
                    v33 = 0;
                  }
                  v34 = v36;
                  if ( v36 >= 0xEBu )
                  {
                    *(_BYTE *)v23 = v36 | 0xF0;
                    *(_BYTE *)(v23 + 1) = v36 >> 4;
                    v23 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v23++ = v36;
                  }
                }
                v32 += v36;
              }
              ++v31;
              --v35;
            }
            while ( v35 );
            v26 = v38;
            v6 = P;
            if ( v33 )
            {
              if ( v33 <= 4 )
              {
                *(_BYTE *)v23++ = -17 - v33;
              }
              else
              {
                *(_BYTE *)v23 = -17;
                *(_BYTE *)(v23 + 1) = v33;
                v23 += 2LL;
              }
            }
          }
          *(_WORD *)v23 = 240;
          v23 += 2LL;
          if ( (v23 & 1) != 0 )
            ++v23;
        }
        else
        {
          *v20 = v28;
        }
      }
      ++v27;
      ++v20;
      --v25;
    }
    while ( v25 );
    v19 = v39;
  }
  ExFreePoolWithTag(v6, 0);
  return v19;
}
