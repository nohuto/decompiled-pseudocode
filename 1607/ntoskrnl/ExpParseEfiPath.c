/*
 * XREFs of ExpParseEfiPath @ 0x1406B12AC
 * Callers:
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  char *v4; // r12
  unsigned int v5; // ebp
  unsigned int v6; // edi
  _QWORD *v7; // r14
  char v9; // al
  char *v10; // r13
  unsigned int v11; // r15d
  char *v12; // r10
  int v13; // ecx
  char v14; // al
  unsigned int v15; // ebp
  _WORD *PoolWithTag; // rbx
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned __int64 v20; // rax
  PVOID v21; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = -1073741811;
  v7 = a3;
  while ( 1 )
  {
    v9 = *Src & 0x7F;
    if ( v9 == 127 )
      return v6;
    if ( v9 == 4 && Src[1] == 1 )
      break;
    Src += (unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8);
  }
  v10 = Src;
  v6 = 0;
  v11 = *((unsigned __int16 *)Src + 1);
  v12 = &Src[((unsigned __int8)Src[3] << 8) | (unsigned __int64)(unsigned __int8)Src[2]];
  if ( (*v12 & 0x7F) == 4 && v12[1] == 4 )
  {
    v4 = v12;
    while ( 1 )
    {
      v13 = *((unsigned __int16 *)v12 + 1);
      if ( v13 - 4 + v5 < v5 )
        break;
      v5 += v13 - 4;
      if ( v13 + v11 < v11 )
      {
        v11 = -1;
        goto LABEL_16;
      }
      v11 += v13;
      v6 = 0;
      v12 += ((unsigned __int8)v12[3] << 8) | (unsigned __int64)(unsigned __int8)v12[2];
      if ( (*v12 & 0x7F) != 4 || v12[1] != 4 )
        goto LABEL_17;
    }
    v5 = -1;
LABEL_16:
    v6 = -1073741675;
  }
LABEL_17:
  if ( (*v12 & 0x7F) != 0x7F )
    v6 = -1073741811;
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  v14 = v10[41];
  if ( v14 == 2 )
  {
    *a4 = 1;
LABEL_24:
    if ( v5 )
    {
      v15 = v5 + 2;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x72766E45u);
      if ( !PoolWithTag )
        return 3221225626LL;
      v18 = 0;
      while ( (*v4 & 0x7F) != 0x7F )
      {
        v19 = *((unsigned __int16 *)v4 + 1) - 4;
        if ( v19 >= v15 )
          goto LABEL_35;
        memmove((char *)PoolWithTag + v18, v4 + 4, v19);
        v15 -= v19;
        v18 += v19;
        v4 += (unsigned __int8)v4[2] | (unsigned __int64)((unsigned __int8)v4[3] << 8);
      }
      v20 = v18;
      v7 = a3;
      PoolWithTag[v20 >> 1] = 0;
    }
    else
    {
      PoolWithTag = 0LL;
    }
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
    *a2 = v21;
    if ( !v21 )
    {
      if ( PoolWithTag )
LABEL_35:
        ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225626LL;
    }
    memmove(v21, v10, v11);
    *v7 = PoolWithTag;
    return v6;
  }
  if ( v14 == 1 )
  {
    *a4 = 0;
    goto LABEL_24;
  }
  return 3221225485LL;
}
