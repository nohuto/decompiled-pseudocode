/*
 * XREFs of HvlpCopyFlushVaList @ 0x1401C14B4
 * Callers:
 *     HvlpFastFlushPasidAddressList @ 0x1401BE7DC (HvlpFastFlushPasidAddressList.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401BEA00 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpFastFlushListTb @ 0x1401C1614 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1401C16E0 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTb @ 0x1401C1A10 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401C1B5C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlpCopyFlushVaList(unsigned int a1, __int64 *a2, char a3, __int64 *a4)
{
  __int64 *v4; // r10
  signed __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r11
  int v11; // edx
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // rdx

  v4 = a2;
  if ( a3 )
  {
    v7 = 0LL;
    if ( a1 )
    {
      v8 = a1;
      do
      {
        v9 = *v4;
        v10 = ((unsigned __int64)*v4 >> 10) & 3;
        if ( (*v4 & 0x3FF) != 0 && v10 != 0 )
        {
          v11 = v9 & 0x3FF;
          v12 = v9 & 0xFFFFFFFFFFFFF000uLL;
          v13 = 4096LL << (9 * (unsigned __int8)v10);
          v14 = (unsigned int)(v11 + 1);
          do
          {
            a4[v7] = v12;
            v12 += v13;
            v7 = (unsigned int)(v7 + 1);
            --v14;
          }
          while ( v14 );
        }
        else
        {
          a4[v7] = v9 & 0xFFFFFFFFFFFFF3FFuLL;
          v7 = (unsigned int)(v7 + 1);
        }
        ++v4;
        --v8;
      }
      while ( v8 );
    }
  }
  else if ( a1 )
  {
    v5 = (char *)a2 - (char *)a4;
    v6 = a1;
    do
    {
      *a4 = *(__int64 *)((char *)a4 + v5) & 0x800 | (*(__int64 *)((char *)a4 + v5)
                                                   + (*(__int64 *)((char *)a4 + v5) & 0xC00));
      ++a4;
      --v6;
    }
    while ( v6 );
  }
}
