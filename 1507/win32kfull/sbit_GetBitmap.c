/*
 * XREFs of sbit_GetBitmap @ 0x1C02DB5F4
 * Callers:
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     CopyBit @ 0x1C02D9554 (CopyBit.c)
 *     GetSbitComponent @ 0x1C02D9864 (GetSbitComponent.c)
 *     PadHorizontal @ 0x1C02D9CDC (PadHorizontal.c)
 *     ScaleHorizontal @ 0x1C02D9DDC (ScaleHorizontal.c)
 *     ScaleVertical @ 0x1C02DA2C8 (ScaleVertical.c)
 *     sbit_Embolden @ 0x1C02DA474 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02DAA38 (sbit_EmboldenGray.c)
 */

__int64 __fastcall sbit_GetBitmap(__int64 a1, __int64 a2, void *a3, char *a4)
{
  unsigned int v8; // eax
  char *v9; // rsi
  int v10; // ecx
  void *v11; // rdx
  __int64 v12; // r8
  __int64 result; // rax
  __int16 v14; // cx
  char *v15; // r14
  __int16 v16; // ax
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // r12
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // si
  unsigned __int16 v22; // r11
  int v23; // ecx
  int v24; // ecx
  unsigned __int16 v25; // bx
  bool i; // cf
  unsigned __int16 v27; // r14
  unsigned __int16 v28; // bx
  bool k; // cf
  unsigned __int16 v30; // r14
  unsigned __int16 v31; // bx
  bool n; // cf
  unsigned __int16 v33; // r14
  __int16 v34; // [rsp+58h] [rbp-49h]
  __int64 v35[2]; // [rsp+B8h] [rbp+17h] BYREF
  __int16 v36; // [rsp+C8h] [rbp+27h]
  __int16 v37; // [rsp+CAh] [rbp+29h]
  unsigned __int16 ii; // [rsp+CCh] [rbp+2Bh]
  unsigned __int16 v39; // [rsp+CEh] [rbp+2Dh]
  unsigned __int16 j; // [rsp+D0h] [rbp+2Fh]
  unsigned __int16 m; // [rsp+D2h] [rbp+31h]
  __int16 v42; // [rsp+D4h] [rbp+33h]

  memset(a3, 0, *(unsigned int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 38) || *(_WORD *)(a1 + 28) == 3 )
  {
    memset(a4, 0, *(unsigned int *)(a1 + 20));
    v8 = *(_DWORD *)(a1 + 20);
    if ( *(_WORD *)(a1 + 94) == 1 )
    {
      v9 = a4;
      v10 = *(_DWORD *)(a1 + 20);
      goto LABEL_11;
    }
    v12 = *(unsigned int *)(a1 + 24);
    v11 = a4;
    if ( (unsigned int)v12 <= v8 )
    {
      v9 = &a4[v12];
      v10 = v8 - v12;
      goto LABEL_12;
    }
LABEL_6:
    v9 = 0LL;
    v10 = 0;
    goto LABEL_12;
  }
  if ( *(_WORD *)(a1 + 94) == 1 )
  {
    v8 = *(_DWORD *)(a1 + 16);
    v11 = a3;
    goto LABEL_6;
  }
  memset(a4, 0, *(unsigned int *)(a1 + 20));
  v8 = *(_DWORD *)(a1 + 20);
  v9 = (char *)a3;
  v10 = *(_DWORD *)(a1 + 16);
LABEL_11:
  v11 = a4;
LABEL_12:
  result = GetSbitComponent(
             a2,
             *(_DWORD *)a1,
             *(_WORD *)(a1 + 44),
             *(_DWORD *)(a1 + 8),
             *(_DWORD *)(a1 + 12),
             *(_WORD *)(a1 + 46),
             *(_WORD *)(a1 + 48),
             *(_WORD *)(a1 + 66),
             *(_WORD *)(a1 + 68),
             *(_WORD *)(a1 + 70),
             v34,
             0,
             0,
             1u,
             *(_WORD *)(a1 + 54),
             *(_WORD *)(a1 + 56),
             *(_WORD *)(a1 + 94),
             v8,
             v11,
             v10,
             (__int64)v9);
  if ( (_DWORD)result )
    return result;
  if ( *(_WORD *)(a1 + 28) == 3 )
  {
    ScaleVertical(v9, *(_WORD *)(a1 + 56), *(_WORD *)(a1 + 46), *(_WORD *)(a1 + 58));
    ScaleHorizontal(
      (unsigned __int8 *)v9,
      *(_WORD *)(a1 + 56),
      *(_WORD *)(a1 + 62),
      *(_WORD *)(a1 + 94),
      *(_WORD *)(a1 + 48),
      *(_WORD *)(a1 + 60),
      *(_WORD *)(a1 + 58));
    if ( !*(_WORD *)(a1 + 38) )
      memmove(a3, v9, *(unsigned int *)(a1 + 16));
  }
  else
  {
    v14 = *(_WORD *)(a1 + 96);
    if ( v14 || *(_WORD *)(a1 + 98) )
    {
      v15 = v9;
      v16 = *(_WORD *)(a1 + 94);
      if ( !*(_WORD *)(a1 + 38) )
        v15 = (char *)a3;
      if ( v16 == 1 )
      {
        sbit_Embolden(v15, *(_WORD *)(a1 + 60), *(_WORD *)(a1 + 58), *(_WORD *)(a1 + 62), v14, *(_WORD *)(a1 + 98));
      }
      else
      {
        v17 = *(_WORD *)(a1 + 62);
        v18 = *(_WORD *)(a1 + 56);
        v19 = 1 << v16;
        if ( v17 > v18 )
          PadHorizontal((__int64)v15, v18, v17, *(_WORD *)(a1 + 58));
        sbit_EmboldenGray(
          v15,
          *(_WORD *)(a1 + 60),
          *(_WORD *)(a1 + 58),
          *(_WORD *)(a1 + 62),
          v19,
          *(_WORD *)(a1 + 96),
          *(_WORD *)(a1 + 98));
      }
    }
  }
  v20 = *(_WORD *)(a1 + 38);
  if ( v20 )
  {
    v36 = *(_WORD *)(a1 + 62);
    v37 = *(_WORD *)(a1 + 64);
    v35[0] = (__int64)v9;
    v35[1] = (__int64)a3;
    v42 = 1;
    if ( *(_WORD *)(a1 + 94) != 1 )
      v42 = 8;
    v21 = *(_WORD *)(a1 + 60);
    v22 = *(_WORD *)(a1 + 58);
    v23 = v20 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 1 )
          return 6146LL;
        v25 = 0;
        for ( i = v22 != 0; ; i = v25 < v22 )
        {
          v39 = v25;
          if ( !i )
            break;
          ii = 0;
          v27 = 0;
          for ( j = v22 - v25 - 1; v27 < v21; ii = v27 )
          {
            m = v27;
            CopyBit(v35);
            ++v27;
          }
          ++v25;
        }
      }
      else
      {
        v28 = 0;
        for ( k = v22 != 0; ; k = v28 < v22 )
        {
          v39 = v28;
          if ( !k )
            break;
          ii = 0;
          v30 = 0;
          for ( m = v22 - v28 - 1; v30 < v21; ii = v30 )
          {
            j = v21 - v30 - 1;
            CopyBit(v35);
            ++v30;
          }
          ++v28;
        }
      }
    }
    else
    {
      v31 = 0;
      for ( n = v22 != 0; ; n = v31 < v22 )
      {
        v39 = v31;
        if ( !n )
          break;
        j = v31;
        v33 = 0;
        for ( ii = 0; v33 < v21; ii = v33 )
        {
          m = v21 - v33 - 1;
          CopyBit(v35);
          ++v33;
        }
        ++v31;
      }
    }
  }
  return 0LL;
}
