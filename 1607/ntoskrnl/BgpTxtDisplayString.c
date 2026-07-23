/*
 * XREFs of BgpTxtDisplayString @ 0x14072B0B0
 * Callers:
 *     BgDisplayString @ 0x14072A240 (BgDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140127A94 (BgpGxDrawRectangle.c)
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 *     BgpGxFillRectangle @ 0x1401282D8 (BgpGxFillRectangle.c)
 *     BgpFoGetTextMetrics @ 0x140128370 (BgpFoGetTextMetrics.c)
 *     BgpFoGetAdvanceWidth @ 0x140239738 (BgpFoGetAdvanceWidth.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1407276DC (BgpGxRectangleCreate.c)
 *     BgpGxBlendRectangle @ 0x14072AD60 (BgpGxBlendRectangle.c)
 *     BgpTxtClearRegion @ 0x14072B090 (BgpTxtClearRegion.c)
 *     TxtpJustifyRectangle @ 0x14072B2C8 (TxtpJustifyRectangle.c)
 */

__int64 __fastcall BgpTxtDisplayString(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v6; // r14
  int AdvanceWidth; // ebx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  unsigned __int16 *v12; // r13
  int v13; // ecx
  bool v14; // cc
  int v15; // eax
  _DWORD *v16; // r15
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // r13d
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v25; // [rsp+38h] [rbp-28h]
  _DWORD v26[4]; // [rsp+50h] [rbp-10h] BYREF
  _DWORD *v27; // [rsp+A0h] [rbp+40h] BYREF
  int v28; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  v29 = a4;
  v28 = a3;
  v6 = a2;
  v27 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 64) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 68) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v8 )
      {
        v11 = a1 + 40;
        v12 = a2;
        while ( 1 )
        {
          AdvanceWidth = BgpFoGetAdvanceWidth(v11, *v12, (int)&v28, a4, 0LL);
          if ( AdvanceWidth < 0 )
            break;
          v9 += v28;
          v11 = a1 + 40;
          ++v10;
          ++v12;
          if ( v10 >= (unsigned int)v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        AdvanceWidth = BgpFoGetTextMetrics(a1 + 40, (__int64)&a5);
        if ( AdvanceWidth >= 0 )
        {
          v13 = HIDWORD(a5);
          v14 = HIDWORD(a5) <= *(_DWORD *)(a1 + 12);
          v26[2] = v9;
          if ( !v14 )
            v13 = *(_DWORD *)(a1 + 12);
          v14 = v9 <= *(_DWORD *)(a1 + 8);
          v26[1] = v13;
          if ( !v14 )
            v9 = *(_DWORD *)(a1 + 8);
          v26[0] = v9;
          v15 = BgpGxRectangleCreate(v26, 32, (__int64 *)&v27);
          v16 = v27;
          AdvanceWidth = v15;
          if ( v15 >= 0 )
          {
            BgpGxFillRectangle((__int64)v27, *(_DWORD *)(a1 + 40));
            v17 = 0;
            v18 = 0;
            v19 = 0;
            v29 = 0LL;
            if ( (_DWORD)v8 )
            {
              while ( 1 )
              {
                v20 = BgpRasPrintGlyph((__int64)v16, a1 + 40, *v6, v17, v18, 0, &v28, v25, 0LL);
                AdvanceWidth = v20;
                if ( v20 == -2147483643 )
                  break;
                if ( v20 < 0 )
                  goto LABEL_30;
                v17 = v28 + v29;
                LODWORD(v29) = v17;
                if ( v17 > v9 )
                  break;
                ++v19;
                ++v6;
                if ( v19 >= (unsigned int)v8 )
                  break;
                v18 = HIDWORD(v29);
              }
            }
            TxtpJustifyRectangle(a1, v26, &v29);
            v21 = *(_DWORD **)(a1 + 24);
            v27 = 0LL;
            v22 = BgpGxBlendRectangle(v21, v16, &v29, (__int64 *)&v27);
            v23 = (__int64)v27;
            AdvanceWidth = v22;
            if ( v22 >= 0 )
            {
              AdvanceWidth = BgpTxtClearRegion(a1);
              if ( AdvanceWidth >= 0 )
              {
                HIDWORD(v29) = *(_DWORD *)(a1 + 4);
                LODWORD(v29) = *(_DWORD *)a1 + v29;
                AdvanceWidth = BgpGxDrawRectangle(v23, (__int64)&v29);
              }
            }
            if ( v23 )
              BgpGxRectangleDestroy(v23);
          }
LABEL_30:
          if ( v16 )
            BgpGxRectangleDestroy((__int64)v16);
        }
      }
    }
  }
  else
  {
    return (unsigned int)BgpTxtClearRegion(a1);
  }
  return (unsigned int)AdvanceWidth;
}
