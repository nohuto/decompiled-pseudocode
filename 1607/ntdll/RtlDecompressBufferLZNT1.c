/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x18008E3B0
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunk @ 0x1800AAF70 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(char *a1, int a2, __int16 *a3, unsigned int a4, int a5, int *a6)
{
  __int16 *v6; // rsi
  char *v7; // r14
  int v8; // edi
  char *v9; // rbp
  __int16 v10; // bx
  unsigned __int64 v11; // r15
  __int16 i; // ax
  int v13; // r9d
  int v14; // r8d
  unsigned int v15; // ecx
  int v16; // eax
  __int16 *v17; // r12
  int *v18; // rax
  unsigned int v20; // ecx
  size_t v21; // r8
  char *v22; // r12
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h] BYREF
  char v25; // [rsp+88h] [rbp+20h] BYREF

  v23 = (int)a1;
  v6 = a3;
  v7 = &a1[a2];
  v24 = 0;
  v8 = 0;
  v9 = a1;
  v10 = *a3;
  v11 = (unsigned __int64)a3 + a4;
  for ( i = *a3; ; i = v10 )
  {
    v16 = (i & 0xFFF) + 3;
    v17 = (__int16 *)((char *)v6 + v16);
    if ( (unsigned __int64)v17 > v11 )
    {
LABEL_12:
      v18 = a6;
LABEL_13:
      v8 = -1073741246;
      *v18 = (int)v6;
      return (unsigned int)v8;
    }
    if ( v10 >= 0 )
    {
      if ( (unsigned __int64)v16 < 2 )
        goto LABEL_12;
      v20 = v16 - 2;
      v24 = v16 - 2;
      if ( &v9[v16 - 2] > v7 )
      {
        v20 = (_DWORD)v7 - (_DWORD)v9;
        v24 = (_DWORD)v7 - (_DWORD)v9;
      }
      if ( (unsigned __int64)v6 + v20 + 2 > v11 )
        goto LABEL_12;
      memmove(v9, v6 + 1, v20);
      goto LABEL_5;
    }
    v13 = v16 + (_DWORD)v6;
    v14 = (_DWORD)v6 + 2;
    if ( !a5 )
    {
      v8 = LZNT1DecompressChunk((_DWORD)v9, (_DWORD)v7, v14, v13, (__int64)&v24);
      if ( v8 < 0 )
        goto LABEL_26;
LABEL_5:
      v15 = v24;
      goto LABEL_6;
    }
    v8 = LZNT1DecompressChunk((_DWORD)v9, (_DWORD)v7, v14, v13, (__int64)&v25);
    if ( v8 < 0 )
    {
LABEL_26:
      *a6 = v24;
      return (unsigned int)v8;
    }
    v15 = a5;
    v24 = a5;
LABEL_6:
    v6 = v17;
    v9 += v15;
    if ( v9 == v7 )
      break;
    if ( (unsigned __int64)v17 > v11 - 2 )
      break;
    v10 = *v17;
    if ( !*v17 )
      break;
    if ( v15 < 0x1000 )
    {
      v21 = (int)(4096 - v15);
      v22 = &v9[v21];
      if ( &v9[v21] >= v7 )
        break;
      memset(v9, 0, v21);
      v9 = v22;
    }
  }
  v18 = a6;
  if ( (unsigned __int64)v6 > v11 )
    goto LABEL_13;
  *a6 = (_DWORD)v9 - v23;
  return (unsigned int)v8;
}
