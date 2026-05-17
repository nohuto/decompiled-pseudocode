/*
 * XREFs of RtlQuerySecurityObject @ 0x1800CCC60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlpFilterSacl @ 0x1800D8600 (RtlpFilterSacl.c)
 */

__int64 __fastcall RtlQuerySecurityObject(__int64 a1, char a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v6; // edx
  int v8; // ecx
  unsigned int v9; // r13d
  unsigned __int16 *v10; // r14
  __int64 v11; // rbx
  unsigned __int8 *v12; // r12
  unsigned int v14; // r15d
  unsigned __int8 *v15; // rsi
  unsigned int v16; // ecx
  char *v17; // rsi
  __int64 v18; // rbx
  unsigned int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+24h] [rbp-64h]
  int v22; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Src; // [rsp+30h] [rbp-58h]
  unsigned int v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  unsigned int v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v20 = 0;
  v6 = 0;
  v8 = 0;
  v24 = 0;
  Src = 0LL;
  v9 = 0;
  LODWORD(Size) = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v22 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_8;
      v12 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 8));
    }
    else
    {
      v12 = *(unsigned __int8 **)(a1 + 16);
    }
    if ( v12 )
      v20 = (4 * v12[1] + 11) & 0xFFFFFFFC;
  }
LABEL_8:
  v21 = a2 & 4;
  if ( (a2 & 4) != 0 && (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( (*(_WORD *)(a1 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_16;
      v10 = (unsigned __int16 *)(a1 + *(unsigned int *)(a1 + 16));
    }
    else
    {
      v10 = *(unsigned __int16 **)(a1 + 32);
    }
    if ( v10 )
      v9 = (v10[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v14 = a2 & 0xF8;
  if ( (a2 & 0xF8) != 0 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( (*(_WORD *)(a1 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_24;
      v11 = a1 + *(unsigned int *)(a1 + 12);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 24);
    }
    if ( v11 )
    {
      RtlpFilterSacl(v11, 0LL, &v24, a2 & 0xF8);
      v6 = v24;
      v8 = Size;
      a4 = v27;
    }
  }
LABEL_24:
  v25 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( (*(_WORD *)(a1 + 2) & 0x8000) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 4) )
      {
        Src = 0LL;
        goto LABEL_32;
      }
      v15 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 4));
    }
    else
    {
      v15 = *(unsigned __int8 **)(a1 + 8);
    }
    Src = v15;
    if ( v15 )
    {
      v8 = (4 * v15[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v8;
    }
  }
LABEL_32:
  v16 = v9 + v8 + v6 + v20 + 20;
  *a5 = v16;
  if ( v16 > a4 || !a3 )
    return 3221225507LL;
  v17 = (char *)(a3 + 20);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 16) = 0;
  *(_WORD *)(a3 + 2) |= 0x8000u;
  *(_BYTE *)a3 = 1;
  if ( v14 )
  {
    if ( v6 )
    {
      RtlpFilterSacl(v11, a3 + 20, &v24, v14);
      *(_DWORD *)(a3 + 12) = 20;
      v17 += v24;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 0x2830;
  }
  if ( v21 )
  {
    if ( v9 )
    {
      memmove(v17, v10, v9);
      *(_DWORD *)(a3 + 16) = (_DWORD)v17 - a3;
      v17 += v9;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 0x140C;
  }
  if ( v25 )
  {
    if ( (_DWORD)Size )
    {
      v18 = (unsigned int)Size;
      memmove(v17, Src, (unsigned int)Size);
      *(_DWORD *)(a3 + 4) = (_DWORD)v17 - a3;
      v17 += v18;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 1;
  }
  if ( v22 )
  {
    if ( v20 )
    {
      memmove(v17, v12, v20);
      *(_DWORD *)(a3 + 8) = (_DWORD)v17 - a3;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 2;
  }
  return 0LL;
}
