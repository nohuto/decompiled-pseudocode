/*
 * XREFs of LZNT1CompressChunk @ 0x18005C514
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x18005C420 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     LZNT1FindMatchStandard @ 0x18005C7F0 (LZNT1FindMatchStandard.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        _RTL_DYNAMIC_HASH_TABLE *HashTable,
        char *Src,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  char *v7; // rax
  unsigned __int64 v9; // rdx
  unsigned int *v10; // r10
  char v12; // r9
  unsigned __int64 v13; // rdi
  bool v14; // cf
  __int64 v15; // r8
  PRTL_DYNAMIC_HASH_TABLE v16; // r11
  char *v17; // rsi
  _BYTE *v18; // r13
  int v19; // ecx
  _WORD *v20; // rbx
  int v21; // r15d
  unsigned int *v22; // rax
  _WORD *v23; // r12
  int MatchStandard; // eax
  int v25; // ebx
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int *v29; // [rsp+20h] [rbp-58h]
  unsigned int *v30; // [rsp+28h] [rbp-50h]
  char v32; // [rsp+88h] [rbp+10h]
  char v33; // [rsp+90h] [rbp+18h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h]

  v7 = Src + 4096;
  v9 = a5;
  v10 = (unsigned int *)&LZNT1Formats;
  v29 = (unsigned int *)&LZNT1Formats;
  v12 = 0;
  v13 = a3;
  v14 = (unsigned __int64)v7 < a3;
  v32 = 0;
  v15 = a7;
  v16 = HashTable;
  if ( v14 )
    v13 = (unsigned __int64)v7;
  v17 = Src;
  v18 = a4 + 1;
  *(_QWORD *)a7 = Src;
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v9 = (unsigned __int64)a4 + 4095;
  *(_QWORD *)(a7 + 8) = v13;
  LOBYTE(v19) = 0;
  v34 = v9;
  v33 = 0;
  v20 = (_WORD *)((char *)a4 + 3);
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v21) = 0;
  if ( (unsigned __int64)Src >= v13 )
  {
LABEL_18:
    if ( (unsigned __int64)v18 >= v9 )
      LODWORD(v20) = (_DWORD)v20 - 1;
    else
      *v18 = v21;
    v25 = (_DWORD)v20 - (_DWORD)a4;
    *a6 = v25;
    *a4 = (v25 - 3) & 0xFFF | 0xB000;
    return v32 != 0 ? 0 : 0x117;
  }
  v22 = (unsigned int *)&unk_1801024FC;
  v30 = (unsigned int *)&unk_1801024FC;
  v23 = a4 + 2;
  do
  {
    if ( &Src[*v22] < v17 )
    {
      do
      {
        v27 = v10[7];
        v10 += 5;
        *(_DWORD *)(v15 + 16) = v27;
        v30 = v10 + 3;
      }
      while ( &Src[v10[3]] < v17 );
      v12 = v32;
      v29 = v10;
    }
    if ( (unsigned __int64)(v17 + 3) > v13 )
      goto LABEL_13;
    if ( v16 == (PRTL_DYNAMIC_HASH_TABLE)LZNT1FindMatchStandard )
      MatchStandard = LZNT1FindMatchStandard(v17, v15);
    else
      MatchStandard = ((__int64 (__fastcall *)(char *, __int64, __int64))HashTable)(v17, a7, v15);
    v9 = v34;
    if ( !MatchStandard )
    {
      LOBYTE(v19) = v33;
      v12 = v32;
      v10 = v29;
LABEL_13:
      if ( (unsigned __int64)v20 >= v9 )
        break;
      v12 |= *v17;
      *(_BYTE *)v20 = *v17;
      v20 = (_WORD *)((char *)v20 + 1);
      v32 = v12;
      v23 = (_WORD *)((char *)v23 + 1);
      v21 = (unsigned __int8)v21 & ~(1 << v19);
      ++v17;
      goto LABEL_15;
    }
    if ( (unsigned __int64)v23 >= v34 )
      break;
    v10 = v29;
    ++v23;
    v12 = v32;
    v21 = (unsigned __int8)v21 | (1 << v33);
    LOBYTE(v19) = v33;
    *v20++ = (MatchStandard - 3) | (((_WORD)v17 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v29 + 16));
    v9 = v34;
    v17 += MatchStandard;
LABEL_15:
    v19 = ((_BYTE)v19 + 1) & 7;
    v33 = v19;
    if ( !v19 )
    {
      if ( (unsigned __int64)v17 >= v13 )
        goto LABEL_18;
      *v18 = v21;
      v18 = v20;
      v20 = (_WORD *)((char *)v20 + 1);
      LOBYTE(v21) = 0;
      v23 = (_WORD *)((char *)v23 + 1);
    }
    v15 = a7;
    v22 = v30;
    v16 = HashTable;
  }
  while ( (unsigned __int64)v17 < v13 );
  if ( (unsigned __int64)v17 >= v13 )
    goto LABEL_18;
  v28 = v13 - (_DWORD)Src;
  if ( (unsigned __int64)a4 + v28 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, Src, v28);
  *a6 = v28 + 2;
  *a4 = (v28 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
