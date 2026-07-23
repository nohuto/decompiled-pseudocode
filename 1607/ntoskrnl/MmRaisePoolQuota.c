/*
 * XREFs of MmRaisePoolQuota @ 0x1400C4A14
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePoolPagesLeft @ 0x140027D10 (MiFreePoolPagesLeft.c)
 */

char __fastcall MmRaisePoolQuota(int a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r8
  _QWORD *v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // rcx
  char result; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  if ( a1 == 1 )
  {
    v7 = MiFreePoolPagesLeft(6);
    v8 = v2;
    if ( v2 < 0x100000 )
      v8 = 0x100000LL;
    if ( v7 > v8 >> 12 && qword_140326568 + v2 >= qword_140326568 )
    {
      qword_140326568 += v2;
      goto LABEL_7;
    }
  }
  else
  {
    v1 = MiFreePoolPagesLeft(5);
    v5 = v2;
    if ( v2 < 0x100000 )
      v5 = 0x100000LL;
    if ( v1 > v5 >> 12 && qword_140326570 + v2 >= qword_140326570 )
    {
      qword_140326570 += v2;
LABEL_7:
      result = 1;
      *v3 = v4 + v2;
      return result;
    }
  }
  return 0;
}
