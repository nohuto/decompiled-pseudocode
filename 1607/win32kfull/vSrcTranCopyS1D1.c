/*
 * XREFs of vSrcTranCopyS1D1 @ 0x1C0281470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS1D1(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v9; // rbx
  unsigned int v10; // r11d
  unsigned int v12; // r10d
  int v13; // edi
  unsigned int *v14; // rcx
  __int64 v15; // r15
  unsigned int *v16; // rax
  _DWORD *v17; // rdx
  unsigned int *v18; // r9
  __int64 v19; // r14
  int v20; // r8d
  __int64 result; // rax
  __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // rdi
  unsigned int *v25; // r8
  int v26; // r10d
  unsigned int v27; // eax
  __int64 v28; // rsi
  int v29; // ebx
  __int64 v30; // rdi
  unsigned int *v31; // r8
  int v32; // eax
  int v33; // r10d
  unsigned int v34; // eax

  v9 = a3;
  v10 = -1;
  v12 = -1;
  v13 = ((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v12 = (((0xFFFFFFFF >> (a2 & 0x1F)) & 0xFF00 | (0xFFFFFFFF >> (a2 & 0x1F) << 16)) << 8) | (((0xFFFFFFFF >> (a2 & 0x1F) >> 16) | (0xFFFFFFFF >> (a2 & 0x1F)) & 0xFF0000) >> 8);
  if ( (((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F) != 0 )
    v10 = (((-1 << (32 - v13)) & 0xFF00 | (-1 << (32 - v13) << 16)) << 8) | ((((unsigned int)(-1 << (32 - v13)) >> 16) | (-1 << (32 - v13)) & 0xFF0000) >> 8);
  v14 = (unsigned int *)(a1 + (((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v15 = a2 & 0x1F;
  v16 = (unsigned int *)(a1 + (((__int64)(a2 + a6 - a5) >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v17 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v18 = (unsigned int *)((char *)v14 + a3 * (__int64)a8);
  v19 = v13;
  v20 = (_DWORD)v16 - (_DWORD)v14;
  if ( a9 )
  {
    if ( v14 == v16 )
    {
      v26 = v10 & v12;
      do
      {
        v27 = *v14;
        v14 = (unsigned int *)((char *)v14 + v9);
        result = v26 & v27;
        *v17 |= result;
        v17 = (_DWORD *)((char *)v17 + a7);
      }
      while ( v14 != v18 );
    }
    else
    {
      result = (unsigned int)(a7 - v20);
      v22 = v20;
      v23 = v9 - v20;
      v24 = (int)result;
      do
      {
        v25 = (unsigned int *)((char *)v14 + v22);
        if ( v15 )
        {
          result = v12 & *v14;
          *v17++ |= result;
          ++v14;
        }
        while ( v14 != v25 )
        {
          result = *v14++;
          *v17++ |= result;
        }
        if ( v19 )
        {
          result = v10 & *v14;
          *v17 |= result;
        }
        v14 = (unsigned int *)((char *)v14 + v23);
        v17 = (_DWORD *)((char *)v17 + v24);
      }
      while ( v14 != v18 );
    }
  }
  else if ( v14 == v16 )
  {
    v33 = v10 & v12;
    do
    {
      v34 = *v14;
      v14 = (unsigned int *)((char *)v14 + v9);
      result = ~(v33 & v34);
      *v17 &= result;
      v17 = (_DWORD *)((char *)v17 + a7);
    }
    while ( v14 != v18 );
  }
  else
  {
    result = (unsigned int)(a7 - v20);
    v28 = v20;
    v29 = v9 - v20;
    v30 = (int)result;
    do
    {
      v31 = (unsigned int *)((char *)v14 + v28);
      if ( v15 )
      {
        result = ~(v12 & *v14);
        *v17++ &= result;
        ++v14;
      }
      while ( v14 != v31 )
      {
        v32 = *v14++;
        result = (unsigned int)~v32;
        *v17++ &= result;
      }
      if ( v19 )
      {
        result = ~(v10 & *v14);
        *v17 &= result;
      }
      v14 = (unsigned int *)((char *)v14 + v29);
      v17 = (_DWORD *)((char *)v17 + v30);
    }
    while ( v14 != v18 );
  }
  return result;
}
