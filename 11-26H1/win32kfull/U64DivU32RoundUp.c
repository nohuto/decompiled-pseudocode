/*
 * XREFs of U64DivU32RoundUp @ 0x140146DC0
 * Callers:
 *     ComputeRGBLUTAA @ 0x1401460F4 (ComputeRGBLUTAA.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x140147938 (MulDivFD6Pairs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall U64DivU32RoundUp(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  int v8; // r11d
  unsigned int v9; // eax
  unsigned __int16 v10; // r9
  int v12; // ecx
  int v13; // r9d
  int v14; // r10d
  int v15; // r10d
  unsigned int v16; // ebx
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ebx
  unsigned int v22; // edx
  unsigned int v23; // ebp
  __int16 v24; // r9
  unsigned int v25; // eax

  v3 = a1 + 1;
  v4 = a2 + (a3 >> 1);
  if ( v4 >= a2 )
    v3 = a1;
  v5 = HIWORD(a3);
  if ( (_WORD)a3 && HIWORD(a3) )
  {
    v12 = (unsigned __int16)(v3 / v5);
    v8 = v3 / v5;
    v13 = v12 * (unsigned __int16)a3;
    v14 = HIWORD(v4) | ((v3 - v5 * v12) << 16);
    if ( v13 < 0 )
    {
      v25 = (v13 - v14) / a3;
      LOWORD(v8) = v8 - v25;
      v13 -= a3 * (unsigned __int16)v25;
    }
    v15 = v14 - v13;
    if ( v15 < 0 )
    {
      LOWORD(v8) = v8 - 1;
      v15 += a3;
      if ( v15 < 0 )
      {
        LOWORD(v8) = v8 - 1;
        v15 += a3;
        if ( v15 < 0 )
        {
          LOWORD(v8) = v8 - 1;
          v15 += a3;
          if ( v15 < 0 )
          {
            LOWORD(v8) = v8 - 1;
            v15 += a3;
            if ( v15 < 0 )
            {
              LOWORD(v8) = v8 - 1;
              v15 += a3;
              if ( v15 < 0 )
              {
                LOWORD(v8) = v8 - 1;
                v15 += a3;
                if ( v15 < 0 )
                {
                  v22 = -v15 % a3;
                  LOWORD(v8) = v8 - -v15 / a3;
                  if ( v22 )
                  {
                    LOWORD(v8) = v8 - 1;
                    v15 = a3 - v22;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( HIWORD(v15) >= HIWORD(a3) )
    {
      v23 = ((unsigned __int16)a3 << 16) - ((unsigned __int16)v4 | (v15 << 16));
      v24 = v23 / a3 + 1;
      if ( v23 <= a3 * (unsigned __int16)(v23 / a3) )
        v24 = v23 / a3;
      v10 = -v24;
    }
    else
    {
      v10 = v15 / v5;
      v16 = (unsigned __int16)a3 * v10;
      v17 = (unsigned __int16)v4 | ((v15 - v5 * v10) << 16);
      if ( v17 < v16 )
      {
        --v10;
        v18 = a3 + v17;
        if ( v18 < v16 )
        {
          --v10;
          v19 = v18 + a3;
          if ( v18 + a3 < v16 )
          {
            --v10;
            v20 = v19 + a3;
            if ( v19 + a3 < v16 )
            {
              --v10;
              if ( v20 + a3 < v16 )
              {
                v21 = v16 - (v20 + a3);
                v10 -= v21 / a3;
                if ( v21 > a3 * (unsigned __int16)(v21 / a3) )
                  --v10;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v6 = HIWORD(v4);
    if ( (_WORD)a3 )
    {
      v7 = v6 | (v3 << 16);
      LOWORD(v8) = v7 / (unsigned __int16)a3;
      v9 = (((v7 % (unsigned __int16)a3) << 16) | (unsigned __int16)v4) / (unsigned __int16)a3;
    }
    else
    {
      LOWORD(v8) = v3 / v5;
      v9 = (v6 | ((v3 % v5) << 16)) / v5;
    }
    v10 = v9;
  }
  return v10 | ((unsigned __int16)v8 << 16);
}
