/*
 * XREFs of sbit_GetBitmap @ 0x1C000BD48
 * Callers:
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 * Callees:
 *     GetSbitComponent @ 0x1C000BEA4 (GetSbitComponent.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     CopyBit @ 0x1C02DD02C (CopyBit.c)
 *     PadHorizontal @ 0x1C02DD33C (PadHorizontal.c)
 *     ScaleHorizontal @ 0x1C02DD3FC (ScaleHorizontal.c)
 *     ScaleVertical @ 0x1C02DD8E8 (ScaleVertical.c)
 *     sbit_Embolden @ 0x1C02DDA94 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02DE064 (sbit_EmboldenGray.c)
 */

__int64 __fastcall sbit_GetBitmap(__int64 a1, int a2, char *a3, char *a4)
{
  unsigned int v8; // eax
  void *v9; // rdx
  char *v10; // rsi
  int v11; // ecx
  __int64 result; // rax
  __int16 v13; // cx
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  char *v16; // r14
  __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int16 v20; // r12
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
  _QWORD v35[2]; // [rsp+B8h] [rbp+17h] BYREF
  __int16 v36; // [rsp+C8h] [rbp+27h]
  __int16 v37; // [rsp+CAh] [rbp+29h]
  unsigned __int16 ii; // [rsp+CCh] [rbp+2Bh]
  unsigned __int16 v39; // [rsp+CEh] [rbp+2Dh]
  unsigned __int16 j; // [rsp+D0h] [rbp+2Fh]
  unsigned __int16 m; // [rsp+D2h] [rbp+31h]
  __int16 v42; // [rsp+D4h] [rbp+33h]

  memset(a3, 0, *(unsigned int *)(a1 + 16));
  if ( !*(_WORD *)(a1 + 38) && *(_WORD *)(a1 + 28) != 3 )
  {
    if ( *(_WORD *)(a1 + 94) == 1 )
    {
      v8 = *(_DWORD *)(a1 + 16);
      v9 = a3;
LABEL_5:
      v10 = 0LL;
      v11 = 0;
      goto LABEL_6;
    }
    memset(a4, 0, *(unsigned int *)(a1 + 20));
    v8 = *(_DWORD *)(a1 + 20);
    v10 = a3;
    v11 = *(_DWORD *)(a1 + 16);
    goto LABEL_18;
  }
  memset(a4, 0, *(unsigned int *)(a1 + 20));
  v8 = *(_DWORD *)(a1 + 20);
  if ( *(_WORD *)(a1 + 94) == 1 )
  {
    v10 = a4;
    v11 = *(_DWORD *)(a1 + 20);
LABEL_18:
    v9 = a4;
    goto LABEL_6;
  }
  v15 = *(unsigned int *)(a1 + 24);
  v9 = a4;
  if ( (unsigned int)v15 > v8 )
    goto LABEL_5;
  v10 = &a4[v15];
  v11 = v8 - v15;
LABEL_6:
  result = GetSbitComponent(
             a2,
             *(_DWORD *)a1,
             *(unsigned __int16 *)(a1 + 44),
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
             1,
             *(_WORD *)(a1 + 54),
             *(_WORD *)(a1 + 56),
             *(_WORD *)(a1 + 94),
             v8,
             v9,
             v11,
             (__int64)v10);
  if ( !(_DWORD)result )
  {
    if ( *(_WORD *)(a1 + 28) == 3 )
    {
      ScaleVertical(v10);
      ScaleHorizontal(v10, *(_WORD *)(a1 + 48), *(_WORD *)(a1 + 60), *(_WORD *)(a1 + 58));
      if ( !*(_WORD *)(a1 + 38) )
        memmove(a3, v10, *(unsigned int *)(a1 + 16));
    }
    else
    {
      v13 = *(_WORD *)(a1 + 96);
      if ( v13 || *(_WORD *)(a1 + 98) )
      {
        v16 = v10;
        v17 = *(_WORD *)(a1 + 94);
        if ( !*(_WORD *)(a1 + 38) )
          v16 = a3;
        if ( v17 == 1 )
        {
          sbit_Embolden(
            (_DWORD)v16,
            *(unsigned __int16 *)(a1 + 60),
            *(unsigned __int16 *)(a1 + 58),
            *(unsigned __int16 *)(a1 + 62),
            v13,
            *(_WORD *)(a1 + 98));
        }
        else
        {
          v18 = *(unsigned __int16 *)(a1 + 62);
          v19 = *(unsigned __int16 *)(a1 + 56);
          v20 = 1 << v17;
          if ( (unsigned __int16)v18 > (unsigned __int16)v19 )
            PadHorizontal(v16, v19, v18, *(unsigned __int16 *)(a1 + 58));
          sbit_EmboldenGray(v16, v20, *(_WORD *)(a1 + 96), *(_WORD *)(a1 + 98));
        }
      }
    }
    v14 = *(_WORD *)(a1 + 38);
    if ( v14 )
    {
      v36 = *(_WORD *)(a1 + 62);
      v37 = *(_WORD *)(a1 + 64);
      v35[0] = v10;
      v35[1] = a3;
      v42 = 1;
      if ( *(_WORD *)(a1 + 94) != 1 )
        v42 = 8;
      v21 = *(_WORD *)(a1 + 60);
      v22 = *(_WORD *)(a1 + 58);
      v23 = v14 - 1;
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
  return result;
}
