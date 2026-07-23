/*
 * XREFs of BgpGxConvertRectangleEx @ 0x1402394C4
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140127A94 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140127B08 (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x140128324 (BgpGxConvertRectangle.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     BgpGxRectangleCreate @ 0x1407276DC (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rsi
  char v7; // r15
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  _BYTE *v11; // r9
  char *v12; // r10
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  unsigned int v15; // r8d
  __int64 v16; // r12
  int v17; // eax
  unsigned int v18; // r11d
  signed __int64 v19; // r13
  unsigned int v20; // r15d
  unsigned int v21; // ebp
  unsigned __int8 *v22; // r14
  int v23; // ecx
  int v24; // eax
  char v25; // r14
  unsigned int v26; // eax
  __int64 v27; // rcx
  char v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+28h] [rbp-60h] BYREF
  int v30; // [rsp+30h] [rbp-58h]
  _DWORD v31[4]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v32[8]; // [rsp+48h] [rbp-40h] BYREF
  char v35; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( (a4 & 1) != 0 )
  {
    v7 = 1;
    v28 = 1;
    if ( (unsigned int)a2 > *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    LODWORD(v9) = 0;
    v10 = *a3;
    *(_DWORD *)v10 = *(_DWORD *)a1;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v10 + 8) = a2;
    *(_DWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(a1 + 24);
  }
  else
  {
    LODWORD(v9) = 0;
    v31[1] = *(_DWORD *)a1;
    v7 = 0;
    v28 = 0;
    v31[0] = *(_DWORD *)(a1 + 4);
    v32[0] = 0LL;
    result = BgpGxRectangleCreate(v31, a2, v32);
    if ( (int)result < 0 )
      return result;
    v10 = v32[0];
  }
  v11 = *(_BYTE **)(v10 + 24);
  v12 = *(char **)(v6 + 24);
  v13 = *(_DWORD *)(v6 + 8) >> 3;
  LODWORD(v32[0]) = v13;
  if ( *(_DWORD *)(v6 + 8) != v5 )
  {
    if ( v5 == 4 )
    {
      v14 = 0;
      v30 = 0;
      if ( *(_DWORD *)v10 )
      {
        do
        {
          v15 = v9;
          if ( *(_DWORD *)(v10 + 4) > (unsigned int)v9 )
          {
            v16 = v13;
            do
            {
              v17 = *(_DWORD *)v12;
              v18 = v9;
              v31[0] = -1;
              v19 = &FourBitPalette - (_UNKNOWN *)&v29;
              v20 = -1;
              v29 = v17;
              do
              {
                v21 = v9;
                v22 = (unsigned __int8 *)&v29;
                v9 = 3LL;
                do
                {
                  v23 = v22[v19];
                  v24 = *v22++;
                  v21 += abs32(v24 - v23) + 2 * abs32(v24 - v23);
                  --v9;
                }
                while ( v9 );
                v25 = v35;
                if ( v21 < v20 )
                {
                  v20 = v21;
                  v35 = v18;
                  v25 = v18;
                }
                ++v18;
                v19 += 4LL;
              }
              while ( v18 < 0x10 );
              if ( (v15 & 1) != 0 )
                *v11++ |= v25;
              else
                *v11 = 16 * v25;
              v12 += v16;
              ++v15;
            }
            while ( v15 < *(_DWORD *)(v10 + 4) );
            v13 = v32[0];
            v14 = v30;
          }
          if ( (v15 & 1) != 0 )
            ++v11;
          v30 = ++v14;
        }
        while ( v14 < *(_DWORD *)v10 );
        v6 = a1;
        v7 = v28;
      }
      v4 = a3;
    }
    else
    {
      v26 = *(_DWORD *)v10 * *(_DWORD *)(v10 + 4);
      if ( v26 )
      {
        v27 = v26;
        do
        {
          v11[2] = v12[2];
          v11[1] = v12[1];
          *v11 = *v12;
          if ( v5 == 32 )
            v11[3] = 0;
          v12 += v13;
          v11 += v5 >> 3;
          --v27;
        }
        while ( v27 );
      }
    }
    if ( v7 )
      *(_DWORD *)(v6 + 16) |= 0x10u;
    goto LABEL_32;
  }
  if ( !v7 )
  {
    memmove(v11, v12, *(unsigned int *)(v6 + 12));
LABEL_32:
    *v4 = v10;
  }
  return (unsigned int)v9;
}
