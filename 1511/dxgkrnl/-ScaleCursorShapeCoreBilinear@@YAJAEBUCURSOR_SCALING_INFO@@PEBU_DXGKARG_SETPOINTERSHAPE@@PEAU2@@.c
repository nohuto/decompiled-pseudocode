/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C014A71C
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C009FED0 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  const struct CURSOR_SCALING_INFO *v5; // rsi
  __int64 v6; // rax
  __int64 Value; // rcx
  __int64 v8; // rax
  UINT v9; // r14d
  UINT v10; // r10d
  int v11; // r15d
  bool v12; // r11
  UINT v13; // ecx
  bool v14; // bp
  float v15; // xmm7_4
  float v16; // xmm6_4
  int v17; // eax
  unsigned int v18; // edx
  int v19; // r12d
  float v20; // xmm5_4
  int v21; // r14d
  float v22; // xmm4_4
  int v23; // esi
  __int64 v24; // r8
  UINT Pitch; // r13d
  __int64 v26; // rdx
  __int64 v27; // rsi
  char *v28; // r9
  __int64 v29; // rdx
  float v30; // xmm4_4
  char *v31; // r13
  float v32; // xmm3_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v40; // [rsp+20h] [rbp-B8h]
  unsigned int v41; // [rsp+24h] [rbp-B4h]
  __int64 v42; // [rsp+28h] [rbp-B0h]
  int v43; // [rsp+30h] [rbp-A8h]
  int v44; // [rsp+40h] [rbp-98h]
  int v45; // [rsp+48h] [rbp-90h]
  __int64 v46; // [rsp+50h] [rbp-88h]
  UINT v47; // [rsp+60h] [rbp-78h]
  int v49; // [rsp+E8h] [rbp+10h]
  UINT v50; // [rsp+E8h] [rbp+10h]
  unsigned int v51; // [rsp+F0h] [rbp+18h]

  v5 = a1;
  if ( (a2->Flags.Value & 6) == 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 700LL;
    WdLogEvent5_WdAssertion(v6);
  }
  Value = a2->Flags.Value;
  if ( (a3->Flags.Value & 2) == 0 && (Value & 4) == 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(Value);
    *(_QWORD *)(v8 + 24) = 701LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_DWORD *)v5 + 5);
  v10 = *((_DWORD *)v5 + 4);
  v11 = 0;
  v12 = (a2->Flags.Value & 4) != 0;
  v13 = 4 * v10;
  v14 = (a3->Flags.Value & 4) != 0;
  v47 = v9;
  v15 = (float)(int)a2->Width / (float)(int)v10;
  v16 = (float)(int)a2->Height / (float)(int)v9;
  if ( v9 )
  {
    v17 = v49;
    v18 = 0;
    v40 = 0;
    do
    {
      v19 = 0;
      if ( v10 )
      {
        v46 = v18;
        v20 = (float)v11 * v16;
        v21 = (int)v20;
        do
        {
          v22 = (float)v19 * v15;
          v23 = (int)v22;
          v24 = (int)v22 != a2->Width - 1 ? 4 : 0;
          if ( v21 == a2->Height - 1 )
            Pitch = 0;
          else
            Pitch = a2->Pitch;
          v26 = (unsigned int)(4 * v23);
          v42 = v23 != a2->Width - 1 ? 4 : 0;
          v50 = Pitch;
          v27 = Pitch;
          v28 = (char *)a2->pPixels + v26 + a2->Pitch * v21;
          v29 = Pitch;
          v30 = v22 - (float)(int)v22;
          v31 = &v28[Pitch + v24];
          v32 = v20 - (float)v21;
          v33 = (float)((float)(1.0 - v32) * v30) * 256.0;
          v34 = (float)((float)(1.0 - v32) * (float)(1.0 - v30)) * 256.0;
          v35 = (float)((float)(1.0 - v30) * v32) * 256.0;
          v44 = (int)v33;
          v36 = (float)(v32 * v30) * 256.0;
          v43 = (int)v35;
          v45 = (int)v36;
          v51 = *(_DWORD *)&v28[v29];
          v41 = *(_DWORD *)&v28[v24];
          v37 = v17 & 0xFF000000 | (unsigned __int8)((unsigned __int16)(v45 * (unsigned __int8)*(_DWORD *)v31
                                                                      + v43 * (unsigned __int8)v51
                                                                      + v44 * (unsigned __int8)v41
                                                                      + (int)v34 * (unsigned __int8)*(_DWORD *)v28) >> 8) | ((unsigned __int16)(int)v34 * (unsigned __int8)v28[1] + (_WORD)v44 * (unsigned __int8)v28[v24 + 1] + (_WORD)v43 * (unsigned __int8)v28[v27 + 1] + (unsigned __int16)(int)v36 * (unsigned __int8)v31[1]) & 0xFF00 | (((int)v34 * (unsigned __int8)v28[2] + (int)v33 * (unsigned __int8)v28[v24 + 2] + v43 * (unsigned __int8)v28[v29 + 2] + v45 * (unsigned __int8)v31[2]) << 8) & 0xFF0000;
          if ( v14 )
          {
            v17 = (unsigned __int8)((unsigned __int16)(v45 * (unsigned __int8)*(_DWORD *)v31
                                                     + v43 * (unsigned __int8)v51
                                                     + v44 * (unsigned __int8)v41
                                                     + (int)v34 * (unsigned __int8)*(_DWORD *)v28) >> 8) | ((unsigned __int16)(int)v34 * (unsigned __int8)v28[1] + (_WORD)v44 * (unsigned __int8)v28[v24 + 1] + (_WORD)v43 * (unsigned __int8)v28[v27 + 1] + (unsigned __int16)(int)v36 * (unsigned __int8)v31[1]) & 0xFF00 | (((int)v34 * (unsigned __int8)v28[2] + (int)v33 * (unsigned __int8)v28[v24 + 2] + v43 * (unsigned __int8)v28[v29 + 2] + v45 * (unsigned __int8)v31[2]) << 8) & 0xFF0000 | ((unsigned __int8)-((((unsigned __int16)(int)v34 * (unsigned __int8)v28[3] + (unsigned __int16)(int)v33 * (unsigned __int8)v28[v42 + 3] + (unsigned __int16)(int)v35 * (unsigned __int8)v28[v50 + 3] + (unsigned __int16)(int)v36 * (unsigned __int8)v31[3]) & 0x8000) != 0) << 24);
            if ( (unsigned __int8)-((((unsigned __int16)(int)v34 * (unsigned __int8)v28[3]
                                    + (unsigned __int16)(int)v33 * (unsigned __int8)v28[v42 + 3]
                                    + (unsigned __int16)(int)v35 * (unsigned __int8)v28[v50 + 3]
                                    + (unsigned __int16)(int)v36 * (unsigned __int8)v31[3]) & 0x8000) != 0) << 24 )
            {
              v38 = ((unsigned __int16)v17 ^ (unsigned __int16)((unsigned __int8)-((*(_DWORD *)v28 & (*(_DWORD *)v28 >> 8) & 0xFF0000 | v41 & (v41 >> 8) & 0xFF0000 | (*(_DWORD *)v31 & (*(_DWORD *)v31 >> 8) | v51 & (v51 >> 8)) & 0xFFFF0000) != 0) << 8)) & 0xFF00 ^ v17;
              v17 = ((unsigned __int8)(v38 ^ BYTE1(v38)) ^ v38 ^ (((unsigned __int8)(v38 ^ BYTE1(v38)) ^ v38) << 16)) & 0xFF0000 ^ (unsigned __int8)(v38 ^ BYTE1(v38)) ^ v38;
            }
          }
          else if ( v12 )
          {
            v17 = (((int)v34 * (255 - (unsigned __int8)v28[3])
                  + (int)v33 * (255 - (unsigned __int8)v28[v42 + 3])
                  + (int)v35 * (255 - (unsigned __int8)v28[v50 + 3])
                  + (int)v36 * (255 - (unsigned __int8)v31[3])) << 16) ^ (v37 ^ (((int)v34
                                                                                * (255 - (unsigned __int8)v28[3])
                                                                                + (int)v33
                                                                                * (255 - (unsigned __int8)v28[v42 + 3])
                                                                                + (int)v35
                                                                                * (255 - (unsigned __int8)v28[v50 + 3])
                                                                                + (int)v36
                                                                                * (255 - (unsigned __int8)v31[3])) << 16)) & 0xFFFFFF;
          }
          else
          {
            v17 = (((int)v34 * (unsigned __int8)v28[3]
                  + (int)v33 * (unsigned __int8)v28[v42 + 3]
                  + (int)v35 * (unsigned __int8)v28[v50 + 3]
                  + (int)v36 * (unsigned __int8)v31[3]) << 16) ^ (v37 ^ (((int)v34 * (unsigned __int8)v28[3]
                                                                        + v44 * (unsigned __int8)v28[v42 + 3]
                                                                        + (int)v35 * (unsigned __int8)v28[v50 + 3]
                                                                        + (int)v36 * (unsigned __int8)v31[3]) << 16)) & 0xFFFFFF;
          }
          ++v19;
          *(_DWORD *)((char *)a3->pPixels + v46) = v17;
          v46 += 4LL;
        }
        while ( v19 < v10 );
        v9 = v47;
        v18 = v40;
        v13 = 4 * v10;
      }
      v18 += v13;
      ++v11;
      v40 = v18;
    }
    while ( v11 < v9 );
    v5 = a1;
  }
  a3->VidPnSourceId = a2->VidPnSourceId;
  a3->Width = v10;
  a3->Height = v9;
  a3->Pitch = v13;
  a3->XHot = (*((_DWORD *)v5 + 2) + *(_DWORD *)v5 * a2->XHot - 1) / *((_DWORD *)v5 + 2);
  a3->YHot = (*((_DWORD *)v5 + 3) + *((_DWORD *)v5 + 1) * a2->YHot - 1) / *((_DWORD *)v5 + 3);
  return 0LL;
}
