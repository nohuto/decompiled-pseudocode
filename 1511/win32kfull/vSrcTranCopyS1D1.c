/*
 * XREFs of vSrcTranCopyS1D1 @ 0x1C0283610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS1D1(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v10; // r11d
  int v11; // r9d
  int v12; // edi
  unsigned int v13; // r10d
  int v14; // esi
  int v15; // ebp
  unsigned int *v16; // rbx
  unsigned int *v17; // rcx
  _DWORD *v18; // rdx
  signed int v19; // r9d
  __int64 v20; // r14
  unsigned int *v21; // rdi
  __int64 v22; // rbp
  __int64 result; // rax
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // r9
  unsigned int *v27; // r8
  int v28; // r10d
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // r9
  unsigned int *v33; // r8
  int v34; // eax
  int v35; // r10d
  unsigned int v36; // eax

  v10 = -1;
  v11 = a2 + a6 - a5;
  v12 = a1;
  v13 = -1;
  v14 = ((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F;
  v15 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v13 = (((0xFFFFFFFF >> v15) & 0xFF00 | (0xFFFFFFFF >> v15 << 16)) << 8) | (((0xFFFFFFFF >> v15 >> 16) | (0xFFFFFFFF >> v15) & 0xFF0000) >> 8);
  if ( (((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F) != 0 )
    v10 = (((-1 << (32 - v14)) & 0xFF00 | (-1 << (32 - v14) << 16)) << 8) | ((((unsigned int)(-1 << (32 - v14)) >> 16) | (-1 << (32 - v14)) & 0xFF0000) >> 8);
  v16 = (unsigned int *)(a1 + (((__int64)v11 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v17 = (unsigned int *)(a1 + (((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v18 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v19 = v12 + ((v11 >> 3) & 0xFFFFFFFC) - (_DWORD)v17;
  v20 = v15;
  v21 = (unsigned int *)((char *)v17 + a8 * a3);
  v22 = v14;
  if ( a9 )
  {
    if ( v17 == v16 )
    {
      v28 = v10 & v13;
      do
      {
        v29 = *v17;
        v17 = (unsigned int *)((char *)v17 + a3);
        result = v28 & v29;
        *v18 |= result;
        v18 = (_DWORD *)((char *)v18 + a7);
      }
      while ( v17 != v21 );
    }
    else
    {
      result = (unsigned int)(a7 - v19);
      v24 = v19;
      v25 = (int)result;
      v26 = a3 - v19;
      do
      {
        v27 = (unsigned int *)((char *)v17 + v24);
        if ( v20 )
        {
          result = v13 & *v17;
          *v18++ |= result;
          ++v17;
        }
        while ( v17 != v27 )
        {
          result = *v17++;
          *v18++ |= result;
        }
        if ( v22 )
        {
          result = v10 & *v17;
          *v18 |= result;
        }
        v17 = (unsigned int *)((char *)v17 + v26);
        v18 = (_DWORD *)((char *)v18 + v25);
      }
      while ( v17 != v21 );
    }
  }
  else if ( v17 == v16 )
  {
    v35 = v10 & v13;
    do
    {
      v36 = *v17;
      v17 = (unsigned int *)((char *)v17 + a3);
      result = ~(v35 & v36);
      *v18 &= result;
      v18 = (_DWORD *)((char *)v18 + a7);
    }
    while ( v17 != v21 );
  }
  else
  {
    result = (unsigned int)(a7 - v19);
    v30 = v19;
    v31 = (int)result;
    v32 = a3 - v19;
    do
    {
      v33 = (unsigned int *)((char *)v17 + v30);
      if ( v20 )
      {
        result = ~(v13 & *v17);
        *v18++ &= result;
        ++v17;
      }
      while ( v17 != v33 )
      {
        v34 = *v17++;
        result = (unsigned int)~v34;
        *v18++ &= result;
      }
      if ( v22 )
      {
        result = ~(v10 & *v17);
        *v18 &= result;
      }
      v17 = (unsigned int *)((char *)v17 + v32);
      v18 = (_DWORD *)((char *)v18 + v31);
    }
    while ( v17 != v21 );
  }
  return result;
}
