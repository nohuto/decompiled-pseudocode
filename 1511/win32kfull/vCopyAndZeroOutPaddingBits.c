/*
 * XREFs of vCopyAndZeroOutPaddingBits @ 0x1C00F6224
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

char __fastcall vCopyAndZeroOutPaddingBits(__int64 a1, _DWORD *a2, __int64 a3, int *a4)
{
  int v4; // r10d
  unsigned __int64 v6; // rsi
  int v8; // edx
  int v9; // eax
  bool v10; // cf
  int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  int v14; // ecx
  unsigned int v15; // r13d
  unsigned int v16; // edx
  char *v17; // rbx
  unsigned __int64 v18; // rax
  char v19; // r11
  char *v20; // rdi
  char *v21; // rsi
  __int64 v22; // r12
  char v23; // bp
  unsigned __int64 v24; // r12
  char *v25; // r14
  _BYTE *v26; // rdi
  char *v27; // r9
  __int64 v28; // rsi
  __int64 v29; // r15
  unsigned __int64 v30; // r10
  _BYTE *v31; // r8
  char *v32; // rdx
  char v33; // al
  _BYTE *v34; // r8
  char v36; // [rsp+60h] [rbp+8h]
  __int64 v37; // [rsp+68h] [rbp+10h]

  v4 = a4[4];
  v6 = (unsigned int)a4[2];
  v8 = a4[3];
  v36 = byte_1C02E2380[v4 & 7];
  v9 = *(_DWORD *)(a1 + 40) & 0x10000;
  a2[2] = v4;
  v10 = v9 != 0;
  v11 = *a4;
  v12 = (unsigned int)(v4 + 7) >> 3;
  v13 = v12;
  v14 = a4[5];
  v15 = v12 - 1;
  a2[3] = v14;
  v16 = 4 * ((unsigned int)((v10 ? 8 : 1) * (v4 + v6 + v8) + 31) >> 5);
  if ( v11 )
    a3 += v16 * v11;
  v17 = (char *)(a2 + 4);
  v18 = v6 >> 3;
  v19 = v6 & 7;
  if ( (v6 & 7) != 0 )
  {
    v23 = 8 - v19;
    v24 = a3 + v16 * v14;
    v25 = &v17[v13 * v14];
    v26 = (_BYTE *)(v18 + a3);
    if ( v17 < v25 )
    {
      v27 = &v17[v15];
      v28 = v16;
      v37 = v16;
      v29 = v13;
      do
      {
        v30 = v27 - v17;
        v31 = v26;
        v32 = v17;
        if ( v17 > v27 )
          v30 = 0LL;
        if ( v30 )
        {
          do
          {
            v33 = *v31++ << v19;
            *v32 = v33;
            *v32++ |= *v31 >> v23;
          }
          while ( v32 - v17 < v30 );
          v28 = v37;
        }
        LOBYTE(v18) = *v31 << v19;
        v34 = v31 + 1;
        *v32 = v18;
        if ( (unsigned __int64)v34 < v24 )
        {
          LOBYTE(v18) = *v34 >> v23;
          *v32 |= v18;
        }
        *v32 &= v36;
        v17 += v29;
        v27 += v29;
        v26 += v28;
      }
      while ( v17 < v25 );
    }
  }
  else
  {
    v20 = (char *)(v18 + a3);
    v21 = &v17[v12 * v14];
    if ( v17 < v21 )
    {
      v22 = v16;
      do
      {
        LOBYTE(v18) = (unsigned __int8)memmove(v17, v20, v12);
        v17[v15] &= v36;
        v20 += v22;
        v17 += v12;
      }
      while ( v17 < v21 );
    }
  }
  return v18;
}
