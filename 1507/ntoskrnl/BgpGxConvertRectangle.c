/*
 * XREFs of BgpGxConvertRectangle @ 0x140150D94
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1401505A0 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140150614 (GxpWriteFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     BgpGxRectangleCreate @ 0x14075E808 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangle(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // rsi
  char v7; // r12
  __int64 result; // rax
  __int64 v9; // rdi
  _BYTE *v10; // r9
  char *v11; // r10
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  __int64 v17; // r15
  int v18; // eax
  unsigned int v19; // r11d
  signed __int64 v20; // r13
  unsigned int v21; // r12d
  unsigned int v22; // ebp
  unsigned __int8 *v23; // r14
  __int64 v24; // rbx
  int v25; // ecx
  int v26; // eax
  char v27; // r14
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
    v9 = *a3;
    v7 = 1;
    v28 = 1;
    *(_DWORD *)v9 = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v9 + 8) = a2;
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v31[1] = *(_DWORD *)a1;
    v7 = 0;
    v28 = 0;
    v31[0] = *(_DWORD *)(a1 + 4);
    v32[0] = 0LL;
    result = BgpGxRectangleCreate(v31, a2, v32);
    if ( (int)result < 0 )
      return result;
    v9 = v32[0];
  }
  v10 = *(_BYTE **)(v9 + 24);
  v11 = *(char **)(v6 + 24);
  v12 = *(_DWORD *)(v6 + 8) >> 3;
  LODWORD(v32[0]) = v12;
  if ( *(_DWORD *)(v6 + 8) != v5 )
  {
    if ( v5 == 4 )
    {
      v15 = 0;
      v30 = 0;
      if ( *(_DWORD *)v9 )
      {
        do
        {
          v16 = 0;
          if ( *(_DWORD *)(v9 + 4) )
          {
            v17 = v12;
            do
            {
              v18 = *(_DWORD *)v11;
              v19 = 0;
              v31[0] = -1;
              v20 = &FourBitPalette - (_UNKNOWN *)&v29;
              v21 = -1;
              v29 = v18;
              do
              {
                v22 = 0;
                v23 = (unsigned __int8 *)&v29;
                v24 = 3LL;
                do
                {
                  v25 = v23[v20];
                  v26 = *v23++;
                  v22 += abs32(v26 - v25) + 2 * abs32(v26 - v25);
                  --v24;
                }
                while ( v24 );
                v27 = v35;
                if ( v22 < v21 )
                {
                  v21 = v22;
                  v35 = v19;
                  v27 = v19;
                }
                ++v19;
                v20 += 4LL;
              }
              while ( v19 < 0x10 );
              if ( (v16 & 1) != 0 )
                *v10++ |= v27;
              else
                *v10 = 16 * v27;
              v11 += v17;
              ++v16;
            }
            while ( v16 < *(_DWORD *)(v9 + 4) );
            v12 = v32[0];
            v15 = v30;
          }
          if ( (v16 & 1) != 0 )
            ++v10;
          v30 = ++v15;
        }
        while ( v15 < *(_DWORD *)v9 );
        v6 = a1;
        v7 = v28;
        v4 = a3;
      }
    }
    else
    {
      v13 = *(_DWORD *)v9 * *(_DWORD *)(v9 + 4);
      if ( v13 )
      {
        v14 = v13;
        do
        {
          v10[2] = v11[2];
          v10[1] = v11[1];
          *v10 = *v11;
          if ( v5 == 32 )
            v10[3] = 0;
          v11 += v12;
          v10 += v5 >> 3;
          --v14;
        }
        while ( v14 );
      }
    }
    if ( v7 )
      *(_DWORD *)(v6 + 16) |= 0x10u;
    goto LABEL_7;
  }
  if ( !v7 )
  {
    memmove(v10, v11, *(unsigned int *)(v6 + 12));
LABEL_7:
    *v4 = v9;
  }
  return 0LL;
}
