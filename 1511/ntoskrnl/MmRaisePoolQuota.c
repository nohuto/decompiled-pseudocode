/*
 * XREFs of MmRaisePoolQuota @ 0x140013140
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePoolPagesLeft @ 0x140014424 (MiFreePoolPagesLeft.c)
 */

char __fastcall MmRaisePoolQuota(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rcx
  char result; // al
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  if ( a1 == 1 )
  {
    if ( !a3 )
      a3 = 0x80000LL;
    v9 = MiFreePoolPagesLeft(6LL, a2, a3);
    v10 = v4;
    if ( v4 < 0x100000 )
      v10 = 0x100000LL;
    if ( v9 > v10 >> 12 && qword_1402FE268 + v4 >= qword_1402FE268 )
    {
      qword_1402FE268 += v4;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !a3 )
      a3 = 0x10000LL;
    v3 = MiFreePoolPagesLeft(5LL, a2, a3);
    v7 = v4;
    if ( v4 < 0x100000 )
      v7 = 0x100000LL;
    if ( v3 > v7 >> 12 && qword_1402FE270 + v4 >= qword_1402FE270 )
    {
      qword_1402FE270 += v4;
LABEL_9:
      result = 1;
      *v5 = v6 + v4;
      return result;
    }
  }
  return 0;
}
