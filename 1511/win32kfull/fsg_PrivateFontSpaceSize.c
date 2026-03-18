/*
 * XREFs of fsg_PrivateFontSpaceSize @ 0x1C00A6430
 * Callers:
 *     fs_NewSfnt @ 0x1C00A50AC (fs_NewSfnt.c)
 * Callees:
 *     fsg_GetOutlineSizeAndOffsets @ 0x1C00A67B0 (fsg_GetOutlineSizeAndOffsets.c)
 *     UIntMult @ 0x1C01DCF90 (UIntMult.c)
 */

__int64 __fastcall fsg_PrivateFontSpaceSize(_DWORD *a1, unsigned __int16 *a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // r10d
  int v9; // r11d
  int v10; // eax
  UINT v11; // edx
  int v12; // r10d
  UINT v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  UINT v28; // edx
  UINT v29; // ecx
  unsigned int v30; // eax
  UINT puResult; // [rsp+50h] [rbp+8h] BYREF
  char v33; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0;
  v6 = 4 * a2[9];
  a3[1] = v6;
  v9 = v6 + 8 * a2[10];
  a3[2] = v9;
  v10 = a2[11];
  v11 = 256;
  a3[3] = v9 + 8 * v10;
  if ( a1[15] >> 1 > 0x100u )
    v11 = a1[15] >> 1;
  if ( UIntMult(4u, v11, &puResult) >= 0 )
  {
    v13 = puResult;
    v14 = v12 + puResult;
    if ( v12 + puResult < puResult )
    {
      a3[4] = -1;
    }
    else
    {
      a3[4] = v14;
      v15 = (v14 + 7) & 0xFFFFFFF8;
      a3[4] = v15;
      if ( v15 >= v14 )
      {
        v16 = v15 + 480;
        a3[21] = v15 + 480;
        if ( v15 + 480 >= v15 )
        {
          v17 = v16 + 4 * a2[9];
          a3[22] = v17;
          if ( v17 >= v16 )
          {
            v18 = v17 + 8 * a2[10];
            a3[23] = v18;
            if ( v18 >= a3[22] )
            {
              v19 = v18 + 8 * a2[11];
              a3[24] = v19;
              if ( v19 >= a3[23] )
              {
                v20 = v13 + v19;
                a3[25] = v20;
                if ( v20 >= a3[24] )
                {
                  v21 = (v20 + 7) & 0xFFFFFFF8;
                  a3[25] = v21;
                  if ( v21 >= v20 )
                  {
                    v22 = v21 + 480;
                    a3[5] = v21 + 480;
                    if ( v21 + 480 >= v21 )
                    {
                      v23 = v22 + a1[25];
                      a3[6] = v23;
                      if ( v23 >= v22 )
                      {
                        v24 = v23 + a1[17];
                        a3[7] = v24;
                        if ( v24 >= v23 )
                        {
                          v25 = (v24 + 7) & 0xFFFFFFF8;
                          a3[7] = v25;
                          if ( v25 >= v24 )
                          {
                            v26 = (v25 + 119) & 0xFFFFFFF8;
                            a3[26] = v26;
                            if ( v26 >= a3[7] )
                            {
                              v27 = (v26 + 115) & 0xFFFFFFFC;
                              a3[8] = v27;
                              if ( v27 >= a3[26] )
                              {
                                fsg_GetOutlineSizeAndOffsets(
                                  a2[8],
                                  1,
                                  (_DWORD)a3 + 36,
                                  (unsigned int)&puResult,
                                  (__int64)&v33);
                                v28 = puResult;
                                v29 = puResult + a3[8];
                                a3[27] = v29;
                                if ( v29 >= a3[8] )
                                {
                                  v30 = (v29 + 3) & 0xFFFFFFFC;
                                  a3[27] = v30;
                                  if ( v30 >= v29 )
                                  {
                                    *a4 = v28 + v30 - *a3;
                                    return 0LL;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 5120LL;
}
