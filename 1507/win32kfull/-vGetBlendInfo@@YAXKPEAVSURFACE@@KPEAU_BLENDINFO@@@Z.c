/*
 * XREFs of ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z @ 0x1C00C11DC
 * Callers:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00C1130 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vGetBlendInfo(int a1, struct SURFACE *a2, int a3, struct _BLENDINFO *a4)
{
  __int64 v4; // rax
  int v5; // r11d
  __int64 v6; // rdx
  int v7; // r10d
  int v8; // ebx
  __int32 v10; // r9d
  __int32 v11; // edi
  __int32 v12; // esi
  int v14; // r8d
  int v15; // ecx
  __int32 v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  unsigned int v20; // eax
  unsigned __int8 *v21; // r8
  void *v22; // rax
  __int32 v23; // ecx
  __int32 *v24; // r8
  __int128 v25; // [rsp+0h] [rbp-40h]
  __m256i v26; // [rsp+10h] [rbp-30h]
  __int128 v27; // [rsp+30h] [rbp-10h]

  v4 = *((_QWORD *)a2 + 15);
  v5 = 0;
  v6 = *((_QWORD *)a2 + 6);
  v7 = 0;
  v8 = 0;
  DWORD1(v25) = 0;
  HIDWORD(v25) = 0;
  v10 = 0;
  *(_OWORD *)((char *)v26.m256i_i64 + 4) = 0uLL;
  v11 = 0;
  v12 = 0;
  if ( !v4 )
    v4 = *(_QWORD *)(v6 + 1832);
  v14 = *(_DWORD *)(v4 + 24);
  if ( (v14 & 2) != 0 )
  {
    v24 = *(__int32 **)(v4 + 128);
    v5 = v24[9] + v24[6] - 8;
    v7 = v24[10] + v24[7] - 8;
    v12 = v24[2];
    v8 = v24[11] + v24[8] - 8;
    v11 = *v24;
    v10 = v24[1];
    v26.m256i_i32[4] = v12;
  }
  else
  {
    if ( a1 == 2 )
    {
      v15 = 5;
      v16 = 31;
    }
    else
    {
      v15 = 8;
      v16 = 255;
    }
    if ( (v14 & 4) != 0 )
    {
      v26.m256i_i32[2] = v16;
      v10 = v16 << v15;
      v5 = v15 - 8;
      v7 = v15 + v15 - 8;
      v12 = v16 << v15 << v15;
      v8 = v15 + v7;
      v26.m256i_i32[4] = v12;
      v11 = v16;
      goto LABEL_10;
    }
    if ( (v14 & 8) == 0 )
      goto LABEL_11;
    v26.m256i_i32[4] = v16;
    v10 = v16 << v15;
    v8 = v15 - 8;
    v7 = v15 + v15 - 8;
    v11 = v16 << v15 << v15;
    v5 = v15 + v7;
    v12 = v16;
  }
  v26.m256i_i32[2] = v11;
LABEL_10:
  v26.m256i_i32[3] = v10;
  v26.m256i_i32[1] = v8;
  HIDWORD(v25) = v7;
  DWORD1(v25) = v5;
LABEL_11:
  LOBYTE(v17) = 0;
  LODWORD(v25) = 0;
  if ( v5 < 0 )
  {
    v17 = -v5;
    LOBYTE(v5) = 0;
    *(_QWORD *)&v25 = v17;
  }
  LOBYTE(v18) = 0;
  DWORD2(v25) = 0;
  if ( v7 < 0 )
  {
    v18 = -v7;
    LOBYTE(v7) = 0;
    *((_QWORD *)&v25 + 1) = v18;
  }
  LOBYTE(v19) = 0;
  v26.m256i_i32[0] = 0;
  if ( v8 < 0 )
  {
    v19 = -v8;
    LOBYTE(v8) = 0;
    v26.m256i_i64[0] = v19;
  }
  v20 = gulGamma;
  if ( gulGamma == 1200 )
  {
    v20 = *(_DWORD *)(v6 + 2472);
    if ( !v20 )
      v20 = 1200;
  }
  if ( v20 < 0x44C )
  {
    v21 = (unsigned __int8 *)&ajGammaCT_10;
    *((_QWORD *)&v27 + 1) = &ajGammaCT_10;
  }
  else
  {
    if ( v20 < 0x4B0 )
    {
      v21 = (unsigned __int8 *)&ajGammaCT_11;
      v22 = &ajGammaInvCT_11;
    }
    else if ( v20 >= 0x514 )
    {
      if ( v20 >= 0x578 )
      {
        if ( v20 >= 0x5DC )
        {
          if ( v20 >= 0x640 )
          {
            if ( v20 >= 0x6A4 )
            {
              if ( v20 >= 0x708 )
              {
                if ( v20 >= 0x76C )
                {
                  if ( v20 >= 0x7D0 )
                  {
                    if ( v20 >= 0x834 )
                    {
                      if ( v20 >= 0x898 )
                      {
                        v21 = (unsigned __int8 *)&ajGammaCT_22;
                        v22 = &ajGammaInvCT_22;
                      }
                      else
                      {
                        v21 = (unsigned __int8 *)&ajGammaCT_21;
                        v22 = &ajGammaInvCT_21;
                      }
                    }
                    else
                    {
                      v21 = (unsigned __int8 *)&ajGammaCT_20;
                      v22 = &ajGammaInvCT_20;
                    }
                  }
                  else
                  {
                    v21 = (unsigned __int8 *)&ajGammaCT_19;
                    v22 = &ajGammaInvCT_19;
                  }
                }
                else
                {
                  v21 = (unsigned __int8 *)&ajGammaCT_18;
                  v22 = &ajGammaInvCT_18;
                }
              }
              else
              {
                v21 = (unsigned __int8 *)&ajGammaCT_17;
                v22 = &ajGammaInvCT_17;
              }
            }
            else
            {
              v21 = (unsigned __int8 *)&ajGammaCT_16;
              v22 = &ajGammaInvCT_16;
            }
          }
          else
          {
            v21 = (unsigned __int8 *)&ajGammaCT_15;
            v22 = &ajGammaInvCT_15;
          }
        }
        else
        {
          v21 = (unsigned __int8 *)&ajGammaCT_14;
          v22 = &ajGammaInvCT_14;
        }
      }
      else
      {
        v21 = (unsigned __int8 *)&ajGammaCT_13;
        v22 = &ajGammaInvCT_13;
      }
    }
    else
    {
      v21 = (unsigned __int8 *)&ajGammaCT_12;
      v22 = &ajGammaInvCT_12;
    }
    *((_QWORD *)&v27 + 1) = v22;
  }
  *(_QWORD *)&v27 = v21;
  v26.m256i_i32[5] = v21[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v17) >> v5)];
  v26.m256i_i32[6] = v21[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v10) << v18) >> v7)];
  v23 = v21[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v12) << v19) >> v8)];
  *(_OWORD *)a4 = v25;
  v26.m256i_i32[7] = v23;
  *(__m256i *)((char *)a4 + 16) = v26;
  *((_OWORD *)a4 + 3) = v27;
}
