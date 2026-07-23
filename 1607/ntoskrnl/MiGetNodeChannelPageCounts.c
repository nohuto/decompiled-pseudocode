/*
 * XREFs of MiGetNodeChannelPageCounts @ 0x1401355E8
 * Callers:
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiGetNodeChannelPageCounts(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 *v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // r11
  __int64 *v10; // r10
  __int64 v11; // rbx
  __int64 *v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  int v17; // edi
  unsigned int v18; // r10d
  unsigned int v19; // ebp
  __int64 *v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 *result; // rax
  __int64 *v23; // r10
  __int64 v24; // rdi
  __int64 *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax

  v7 = (__int64 *)(*(_QWORD *)(a1 + 48) + 2184LL * a2);
  if ( a3 == 4 )
    v8 = v7[257];
  else
    v8 = v7[a3 + 253];
  do
  {
    if ( MmNumberOfChannels == 1 || a3 == 4 )
    {
      v9 = v7[251];
      v10 = MiLargePageSizes;
      v11 = v7[252];
      v12 = v7;
      v13 = 3LL;
      do
      {
        v14 = *v12;
        v12 += 2;
        v9 += *v10 * v14;
        v15 = *v10++ * *(v12 - 1);
        v11 += v15;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v23 = MiLargePageSizes;
      v24 = 3LL;
      v25 = &v7[a3 + 102];
      v9 = v7[2 * a3 + 259];
      v11 = v7[2 * a3 + 260];
      do
      {
        v26 = *v25 + v25[8];
        v25 += 16;
        v9 += *v23 * v26;
        v27 = *v23++ * (*(v25 - 12) + *(v25 - 4));
        v11 += v27;
        --v24;
      }
      while ( v24 );
    }
    v16 = 0LL;
    if ( a3 == 4 )
    {
      a3 = 0;
      v17 = MmNumberOfChannels;
    }
    else
    {
      v17 = a3 + 1;
    }
    v18 = a3;
    if ( a3 != v17 )
    {
      while ( 2 )
      {
        v19 = 0;
        v20 = &v7[24 * v18 + 155];
        do
        {
          v21 = v16 + *v20;
          if ( v21 < v16 || v21 == -1LL )
          {
            v16 = -2LL;
            goto LABEL_14;
          }
          ++v19;
          v20 += 3;
          v16 = v21;
        }
        while ( v19 < 8 );
        if ( ++v18 != v17 )
          continue;
        break;
      }
    }
LABEL_14:
    ;
  }
  while ( v9 + v16 + v11 > v8 );
  *a5 = v11;
  result = a6;
  *a4 = v9;
  *a6 = v16;
  return result;
}
