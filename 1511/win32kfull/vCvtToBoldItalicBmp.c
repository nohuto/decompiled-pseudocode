/*
 * XREFs of vCvtToBoldItalicBmp @ 0x1C0248388
 * Callers:
 *     BmfdQueryFontData @ 0x1C0116898 (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void *__fastcall vCvtToBoldItalicBmp(_DWORD *a1, __int64 a2, char *a3, int a4, int a5, int a6)
{
  int v6; // r13d
  _DWORD *v7; // rbp
  signed int v10; // esi
  int v11; // eax
  signed int v12; // ebx
  unsigned int v13; // r15d
  void *result; // rax
  int v15; // r10d
  __int64 v16; // rcx
  int v17; // edi
  unsigned __int8 v18; // r8
  char v19; // r15
  _BYTE *v20; // r9
  char *v21; // r12
  __int64 v22; // rdi
  __int64 v23; // r13
  char v24; // al
  char v25; // r15
  char v26; // r8
  __int64 v27; // [rsp+20h] [rbp-58h]
  char v28; // [rsp+80h] [rbp+8h]
  signed int v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+98h] [rbp+20h]

  v6 = a5;
  v7 = a1 + 4;
  *a1 = 0;
  a1[3] = a5;
  v10 = (unsigned int)(a5 - 1) >> 4;
  v11 = ((unsigned int)(a5 - 1) >> 1) + a4;
  v12 = ((unsigned int)(a5 - 1) >> 1) & 7;
  v28 = ((unsigned int)(a5 - 1) >> 1) + a4;
  a1[2] = v11 + 1;
  v13 = (unsigned int)(v11 + 8) >> 3;
  v29 = (unsigned int)(a4 + 7) >> 3;
  a1[1] = -a6;
  result = memset(a1 + 4, 0, a5 * v13);
  v15 = 0;
  if ( a5 > 0 )
  {
    v16 = v13;
    v17 = -a4 & 7;
    v27 = v13;
    v30 = v17;
    do
    {
      if ( v12 < 0 )
      {
        v12 = 7;
        --v10;
      }
      v18 = 0;
      v19 = 0;
      v20 = (char *)v7 + v10;
      v21 = a3;
      if ( v29 > 0 )
      {
        v22 = (unsigned int)v6;
        v23 = (unsigned int)v29;
        do
        {
          v24 = v19 | v18 | ((unsigned __int8)*v21 >> v12) | ((unsigned __int8)(v18 | ((unsigned __int8)*v21 >> v12)) >> 1);
          v25 = v18 | ((unsigned __int8)*v21 >> v12);
          *v20++ = v24;
          v26 = *v21;
          v21 += v22;
          v18 = v26 << (8 - v12);
          v19 = v25 << 7;
          --v23;
        }
        while ( v23 );
        v17 = v30;
        v6 = a5;
        v16 = v27;
      }
      if ( v17 < v12 )
      {
        *v20 = v18 | v19 | (v18 >> 1);
        if ( (v28 & 7) == 0 )
          v20[1] = v18 << 7;
      }
      ++a3;
      result = (void *)(v15 & 1);
      v7 = (_DWORD *)((char *)v7 + v16);
      v12 -= (int)result;
      ++v15;
    }
    while ( v15 < v6 );
  }
  return result;
}
