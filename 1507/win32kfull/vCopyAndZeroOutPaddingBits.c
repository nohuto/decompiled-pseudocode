/*
 * XREFs of vCopyAndZeroOutPaddingBits @ 0x1C00F1EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

char __fastcall vCopyAndZeroOutPaddingBits(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  int v4; // r10d
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // r13d
  unsigned int v11; // edx
  char *v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // r11d
  char *v15; // rdi
  char *v16; // rsi
  size_t v17; // r14
  __int64 v18; // r15
  __int64 v19; // r12
  int v20; // r12d
  char v21; // bp
  unsigned int v22; // ecx
  unsigned __int64 v23; // r12
  char *v24; // r14
  _BYTE *v25; // rdi
  char *v26; // r9
  __int64 v27; // rsi
  __int64 v28; // r15
  unsigned __int64 v29; // r10
  _BYTE *v30; // r8
  char *v31; // rdx
  char v32; // al
  _BYTE *v33; // r8
  char v35; // [rsp+60h] [rbp+8h]
  __int64 v36; // [rsp+68h] [rbp+10h]

  v4 = a4[4];
  v35 = byte_1C02E2FC0[v4 & 7];
  v7 = -((*(_DWORD *)(a1 + 40) & 0x10000) != 0);
  v8 = v4 + a4[2] + a4[3];
  a2[2] = v4;
  v9 = (unsigned int)(v4 + 7) >> 3;
  a2[3] = a4[5];
  v10 = v9 - 1;
  v11 = 4 * ((((v7 & 7u) + 1) * v8 + 31) >> 5);
  if ( *a4 )
    a3 += v11 * *a4;
  v12 = (char *)(a2 + 4);
  v13 = (unsigned __int64)(unsigned int)a4[2] >> 3;
  v14 = a4[2] & 7;
  if ( v14 )
  {
    v20 = a4[5];
    v21 = 8 - v14;
    v22 = v9 * v20;
    v23 = a3 + v11 * v20;
    v24 = &v12[v22];
    v25 = (_BYTE *)(v13 + a3);
    if ( v12 < v24 )
    {
      v26 = &v12[v10];
      v27 = v11;
      v36 = v11;
      v28 = v9;
      do
      {
        v29 = v26 - v12;
        v30 = v25;
        v31 = v12;
        if ( v12 > v26 )
          v29 = 0LL;
        if ( v29 )
        {
          do
          {
            v32 = *v30++ << v14;
            *v31 = v32;
            *v31++ |= *v30 >> v21;
          }
          while ( v31 - v12 < v29 );
          v27 = v36;
        }
        LOBYTE(v13) = *v30 << v14;
        v33 = v30 + 1;
        *v31 = v13;
        if ( (unsigned __int64)v33 < v23 )
        {
          LOBYTE(v13) = *v33 >> v21;
          *v31 |= v13;
        }
        *v31 &= v35;
        v12 += v28;
        v26 += v28;
        v25 += v27;
      }
      while ( v12 < v24 );
    }
  }
  else
  {
    v15 = (char *)(v13 + a3);
    v16 = &v12[v9 * a4[5]];
    if ( v12 < v16 )
    {
      v17 = v9;
      v18 = v9;
      v19 = v11;
      do
      {
        LOBYTE(v13) = (unsigned __int8)memmove(v12, v15, v17);
        v12[v10] &= v35;
        v15 += v19;
        v12 += v18;
      }
      while ( v12 < v16 );
    }
  }
  return v13;
}
