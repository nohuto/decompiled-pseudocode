/*
 * XREFs of RaspAntiAlias @ 0x140128070
 * Callers:
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 * Callees:
 *     BgpGxBlendColor @ 0x1401281E8 (BgpGxBlendColor.c)
 *     BgpGxFillRectangle @ 0x1401282D8 (BgpGxFillRectangle.c)
 */

__int64 __fastcall RaspAntiAlias(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v10; // r9d
  __int64 v11; // r10
  unsigned int *v12; // r11
  int v13; // r15d
  unsigned int v14; // r13d
  _BYTE *v15; // r12
  int v16; // ebp
  int v17; // r10d
  __int64 i; // r9
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned int v23; // [rsp+70h] [rbp+18h]
  unsigned int v24; // [rsp+78h] [rbp+20h]

  v5 = *(_QWORD *)(a1 + 24);
  v7 = (unsigned int)a3;
  v23 = 0;
  v24 = a4 * a3;
  result = BgpGxFillRectangle(a2, *a5, a3);
  if ( *(_DWORD *)v11 > v10 )
  {
    result = *(_DWORD *)(a1 + 4) / a4;
    v13 = 0;
    do
    {
      v14 = 0;
      v15 = (_BYTE *)(*(_QWORD *)(v11 + 24) + 4 * v10 * *(_DWORD *)(v11 + 4));
      if ( (_DWORD)result )
      {
        v16 = 0;
        do
        {
          v17 = 0;
          for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
          {
            if ( (_DWORD)v7 )
            {
              v19 = v7;
              v20 = v16 + *(_DWORD *)(a1 + 4) * (v13 + i);
              do
              {
                if ( ((unsigned __int8)(128 >> (v20 & 7)) & *(_BYTE *)(((unsigned __int64)v20 >> 3) + v5)) != 0 )
                  ++v17;
                ++v20;
                --v19;
              }
              while ( v19 );
            }
          }
          v21 = BgpGxBlendColor(*v12, v12[1], 255 * v17 / v24, i);
          v12 = a5;
          v15[2] = BYTE2(v21);
          ++v14;
          *v15 = v21;
          v16 += v7;
          v15[1] = BYTE1(v21);
          v15[3] = -1;
          v15 += 4;
          result = *(_DWORD *)(a1 + 4) / a4;
        }
        while ( v14 < (unsigned int)result );
        v10 = v23;
        v11 = a2;
      }
      ++v10;
      v13 += a4;
      v23 = v10;
    }
    while ( v10 < *(_DWORD *)v11 );
  }
  return result;
}
