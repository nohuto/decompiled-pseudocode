/*
 * XREFs of EtwpAllocateStringFilterData @ 0x1406E9B80
 * Callers:
 *     EtwpValidateFilterDescriptors @ 0x1406EA75C (EtwpValidateFilterDescriptors.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateStringFilterData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  unsigned int v5; // ebx
  _WORD *v6; // r15
  unsigned __int16 v7; // bp
  unsigned int i; // ecx
  __int16 v9; // dx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  char *v12; // r14
  unsigned __int16 v13; // r9
  __int16 v14; // r11
  unsigned int j; // r8d
  __int16 v16; // ax
  __int16 v17; // cx
  __int64 v18; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 - 2 > 0x3FE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v2 >> 1;
    v6 = *(_WORD **)a1;
    v7 = 1;
    for ( i = 0; i < v5; ++i )
    {
      v9 = v6[i];
      if ( !v9 )
        break;
      if ( v9 == 59 )
        ++v7;
    }
    if ( v5 > i + 1 )
      v5 = i + 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * (v5 + 8 * v7) + 24, 0x46777445u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 2 * (v5 + 8 * v7) + 24);
      v12 = (char *)&v11[2 * v7 + 3];
      *(_WORD *)v11 = v7;
      memmove(v12, v6, 2LL * v5);
      v11[2] = v12;
      v13 = 1;
      v14 = 0;
      for ( j = 0; j < v5; ++j )
      {
        v16 = *(_WORD *)&v12[2 * j];
        if ( !v16 || v13 >= *(_WORD *)v11 )
          break;
        if ( v16 == 59 )
        {
          v17 = j - v14;
          *(_WORD *)&v12[2 * j] = 0;
          v14 = j + 1;
          LOWORD(v11[2 * v13 - 1]) = v17;
          v18 = 2 * ++v13;
          v11[v18] = &v12[2 * j + 2];
        }
      }
      LOWORD(v11[2 * v13 - 1]) = v5 - v14 - 1;
      *a2 = v11;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
