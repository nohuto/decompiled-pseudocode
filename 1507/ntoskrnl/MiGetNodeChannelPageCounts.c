/*
 * XREFs of MiGetNodeChannelPageCounts @ 0x14015BFC4
 * Callers:
 *     MmGetChannelInformation @ 0x14058A52C (MmGetChannelInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiGetNodeChannelPageCounts(
        unsigned int a1,
        unsigned int a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int64 *a5)
{
  _QWORD *v7; // r10
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r11
  int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 *result; // rax

  v7 = (_QWORD *)(qword_140353D28 + 1336LL * a1);
  if ( a2 == 4 )
    v8 = v7[152];
  else
    v8 = v7[a2 + 148];
  do
  {
    if ( MmNumberOfChannels == 1 || a2 == 4 )
    {
      v9 = v7[146] + (*v7 << 9);
      v10 = v7[147] + (v7[1] << 9);
    }
    else
    {
      v9 = v7[2 * a2 + 154] + ((v7[a2 + 34] + v7[a2 + 42]) << 9);
      v10 = v7[2 * a2 + 155] + ((v7[a2 + 38] + v7[a2 + 46]) << 9);
    }
    v11 = 0LL;
    if ( a2 == 4 )
    {
      a2 = 0;
      v12 = MmNumberOfChannels;
    }
    else
    {
      v12 = a2 + 1;
    }
    v13 = a2;
    if ( a2 != v12 )
    {
      while ( 2 )
      {
        v14 = 0;
        v15 = &v7[24 * v13 + 50];
        do
        {
          v16 = v11 + *v15;
          if ( v16 < v11 || v16 == -1LL )
          {
            v11 = -2LL;
            goto LABEL_13;
          }
          ++v14;
          v15 += 3;
          v11 = v16;
        }
        while ( v14 < 8 );
        if ( ++v13 != v12 )
          continue;
        break;
      }
    }
LABEL_13:
    ;
  }
  while ( v9 + v11 + v10 > v8 );
  result = a5;
  *a5 = v11;
  *a4 = v10;
  *a3 = v9;
  return result;
}
