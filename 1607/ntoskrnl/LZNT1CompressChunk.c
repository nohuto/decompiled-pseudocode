/*
 * XREFs of LZNT1CompressChunk @ 0x1403C8950
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x1403C8860 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *, __int64),
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  __int64 *v8; // r10
  char v10; // dl
  _WORD *v11; // r11
  __int64 (__fastcall *v12)(char *, __int64); // r8
  char *v13; // rbx
  char *v14; // rcx
  int v15; // r9d
  char *v16; // r14
  __int64 result; // rax
  int v18; // edi
  int *v19; // r15
  _WORD *v20; // r13
  int v21; // eax
  int v22; // r14d
  char *v23; // rax
  int v24; // eax
  unsigned int v25; // esi
  char *v26; // [rsp+20h] [rbp-68h]
  __int64 *v27; // [rsp+28h] [rbp-60h]
  char *v28; // [rsp+30h] [rbp-58h]
  char v30; // [rsp+98h] [rbp+10h]
  unsigned __int8 v31; // [rsp+A0h] [rbp+18h]

  v8 = &LZNT1Formats;
  v27 = &LZNT1Formats;
  v10 = 0;
  v11 = a4;
  v12 = a1;
  v30 = 0;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v13 = a2;
  v14 = (char *)a5;
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v14 = (char *)a4 + 4095;
  *(_QWORD *)a7 = a2;
  v26 = v14;
  LOBYTE(v15) = 0;
  v28 = (char *)(v11 + 1);
  v16 = (char *)v11 + 3;
  v31 = 0;
  result = 0LL;
  *(_QWORD *)(a7 + 8) = a3;
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v18) = 0;
  if ( (unsigned __int64)a2 >= a3 )
  {
LABEL_16:
    if ( v28 >= v14 )
      LODWORD(v16) = (_DWORD)v16 - 1;
    else
      *v28 = v15;
    v22 = (_DWORD)v16 - (_DWORD)v11;
    *a6 = v22;
    *v11 = (v22 - 3) & 0xFFF | 0xB000;
    if ( !v30 )
      return 279LL;
    return result;
  }
  v19 = &dword_1403E0ADC;
  v20 = v11 + 2;
  while ( 1 )
  {
    if ( &a2[*v19] < v13 )
    {
      do
      {
        v24 = *((_DWORD *)v8 + 7);
        v8 = (__int64 *)((char *)v8 + 20);
        *(_DWORD *)(a7 + 16) = v24;
        v19 = (int *)v8 + 3;
      }
      while ( &a2[*((unsigned int *)v8 + 3)] < v13 );
      v27 = v8;
    }
    if ( (unsigned __int64)(v13 + 3) > a3 )
      goto LABEL_11;
    v21 = v12(v13, a7);
    v14 = v26;
    if ( v21 )
      break;
    LOBYTE(v15) = v31;
    v10 = v30;
    v8 = v27;
LABEL_11:
    if ( v16 >= v14 )
      goto LABEL_27;
    v20 = (_WORD *)((char *)v20 + 1);
    v10 |= *v13;
    *v16 = *v13;
    v15 = (unsigned __int8)v15 & ~(1 << v18);
    ++v16;
    v30 = v10;
    ++v13;
LABEL_13:
    v31 = v15;
    v18 = ((_BYTE)v18 + 1) & 7;
    if ( !v18 )
    {
      if ( (unsigned __int64)v13 >= a3 )
        goto LABEL_15;
      v23 = v28;
      v28 = v16++;
      *v23 = v15;
      LOBYTE(v15) = 0;
      v31 = 0;
      v20 = (_WORD *)((char *)v20 + 1);
    }
    v12 = a1;
    if ( (unsigned __int64)v13 >= a3 )
      goto LABEL_15;
  }
  if ( v20 < (_WORD *)v26 )
  {
    v8 = v27;
    ++v20;
    v15 = v31 | (1 << v18);
    v14 = v26;
    *(_WORD *)v16 = (v21 - 3) | (((_WORD)v13 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v27 + 16));
    v16 += 2;
    v10 = v30;
    v13 += v21;
    goto LABEL_13;
  }
LABEL_27:
  if ( (unsigned __int64)v13 >= a3 )
  {
    LOBYTE(v15) = v31;
LABEL_15:
    v11 = a4;
    result = 0LL;
    goto LABEL_16;
  }
  v25 = a3 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v25 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v25);
  *a6 = v25 + 2;
  *a4 = (v25 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
