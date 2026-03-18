/*
 * XREFs of RemoveGaps @ 0x1C00D3818
 * Callers:
 *     AlignRects @ 0x1C0063E98 (AlignRects.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     AddNextContiguousRectangle @ 0x1C00D354C (AddNextContiguousRectangle.c)
 *     CenterRectangles @ 0x1C00D3778 (CenterRectangles.c)
 */

void __fastcall RemoveGaps(int *a1, unsigned int a2)
{
  int **v4; // r11
  int **v5; // r9
  int *v6; // rbx
  unsigned int v7; // edi
  int *v8; // r10
  int v9; // ecx
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  int *v13; // rcx
  char *v14; // rsi
  int **v15; // rdi
  unsigned __int64 v16; // rbx
  int **v17; // rax
  int *v18; // rdx
  int *v19; // [rsp+20h] [rbp-A8h] BYREF
  char v20; // [rsp+28h] [rbp-A0h] BYREF

  CenterRectangles(a1, a2);
  v4 = &v19;
  v5 = &v19;
  v6 = &a1[4 * a2];
  v7 = -1;
  v8 = a1;
  if ( a1 < v6 )
  {
    do
    {
      v9 = *v8;
      v10 = v8[2] - *v8;
      *v4 = v8;
      v11 = v9 + v10 / 2;
      v12 = v8[1] + (v8[3] - v8[1]) / 2;
      if ( v11 < 0 )
        v11 = -v11;
      if ( v12 < 0 )
        v12 = -v12;
      if ( v12 + v11 < v7 )
      {
        v7 = v12 + v11;
        v5 = v4;
      }
      ++v4;
      v8 += 4;
    }
    while ( v8 < v6 );
    if ( v5 != &v19 )
    {
      v13 = *v5;
      *v5 = v19;
      v19 = v13;
    }
  }
  v14 = (char *)(a1 + 4);
  v15 = (int **)&v20;
  if ( v14 < (char *)v6 )
  {
    v16 = ((unsigned __int64)((char *)v6 - v14 - 1) >> 4) + 1;
    do
    {
      v17 = AddNextContiguousRectangle(&v19, v15, a2);
      if ( v17 != v15 )
      {
        v18 = *v17;
        *v17 = *v15;
        *v15 = v18;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
}
