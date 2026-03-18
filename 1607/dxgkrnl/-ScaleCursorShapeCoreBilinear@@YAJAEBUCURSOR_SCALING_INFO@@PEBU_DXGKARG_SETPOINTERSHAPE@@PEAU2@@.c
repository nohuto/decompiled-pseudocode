/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C016FAB0
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C007CA4C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
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
  __int64 v21; // r15
  float v22; // xmm5_4
  int v23; // r14d
  float v24; // xmm4_4
  int v25; // esi
  __int64 v26; // r8
  UINT Pitch; // r13d
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r9
  __int64 v31; // rdx
  char *v32; // r9
  float v33; // xmm4_4
  char *v34; // r13
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v43; // [rsp+20h] [rbp-B8h]
  int v44; // [rsp+24h] [rbp-B4h]
  unsigned int v45; // [rsp+28h] [rbp-B0h]
  __int64 v46; // [rsp+30h] [rbp-A8h]
  int v47; // [rsp+40h] [rbp-98h]
  int v48; // [rsp+48h] [rbp-90h]
  int v49; // [rsp+50h] [rbp-88h]
  __int64 v50; // [rsp+60h] [rbp-78h]
  UINT v51; // [rsp+68h] [rbp-70h]
  int v53; // [rsp+E8h] [rbp+10h]
  UINT v54; // [rsp+E8h] [rbp+10h]
  unsigned int v55; // [rsp+F0h] [rbp+18h]

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
  v51 = v9;
  v44 = 0;
  v15 = (float)(int)a2->Width / (float)(int)v10;
  v16 = (float)(int)a2->Height / (float)(int)v9;
  if ( v9 )
  {
    v17 = v53;
    v18 = 0;
    v45 = 0;
    do
    {
      v19 = 0;
      if ( v10 )
      {
        v50 = 0LL;
        v20 = (float)v11;
        v21 = v18;
        v22 = v20 * v16;
        v23 = (int)v22;
        do
        {
          v24 = (float)v19 * v15;
          v25 = (int)v24;
          v26 = (int)v24 != a2->Width - 1 ? 4 : 0;
          if ( v23 == a2->Height - 1 )
            Pitch = 0;
          else
            Pitch = a2->Pitch;
          v28 = (unsigned int)(4 * v25);
          v46 = v25 != a2->Width - 1 ? 4 : 0;
          v54 = Pitch;
          v29 = Pitch;
          v30 = v28 + v23 * a2->Pitch;
          v31 = Pitch;
          v32 = (char *)a2->pPixels + v30;
          v33 = v24 - (float)(int)v24;
          v34 = &v32[Pitch + v26];
          v35 = v22 - (float)v23;
          v36 = (float)((float)(1.0 - v35) * v33) * 256.0;
          v37 = (float)((float)(1.0 - v35) * (float)(1.0 - v33)) * 256.0;
          v38 = (float)((float)(1.0 - v33) * v35) * 256.0;
          v48 = (int)v36;
          v39 = (float)(v35 * v33) * 256.0;
          v47 = (int)v38;
          v49 = (int)v39;
          v55 = *(_DWORD *)&v32[v31];
          v43 = *(_DWORD *)&v32[v26];
          v40 = v17 & 0xFF000000 | (unsigned __int8)((unsigned __int16)(v49 * (unsigned __int8)*(_DWORD *)v34
                                                                      + v47 * (unsigned __int8)v55
                                                                      + v48 * (unsigned __int8)v43
                                                                      + (int)v37 * (unsigned __int8)*(_DWORD *)v32) >> 8) | ((unsigned __int16)(int)v37 * (unsigned __int8)v32[1] + (_WORD)v48 * (unsigned __int8)v32[v26 + 1] + (_WORD)v47 * (unsigned __int8)v32[v29 + 1] + (unsigned __int16)(int)v39 * (unsigned __int8)v34[1]) & 0xFF00 | (((int)v37 * (unsigned __int8)v32[2] + (int)v36 * (unsigned __int8)v32[v26 + 2] + v47 * (unsigned __int8)v32[v31 + 2] + v49 * (unsigned __int8)v34[2]) << 8) & 0xFF0000;
          if ( v14 )
          {
            v17 = (unsigned __int8)((unsigned __int16)(v49 * (unsigned __int8)*(_DWORD *)v34
                                                     + v47 * (unsigned __int8)v55
                                                     + v48 * (unsigned __int8)v43
                                                     + (int)v37 * (unsigned __int8)*(_DWORD *)v32) >> 8) | ((unsigned __int16)(int)v37 * (unsigned __int8)v32[1] + (_WORD)v48 * (unsigned __int8)v32[v26 + 1] + (_WORD)v47 * (unsigned __int8)v32[v29 + 1] + (unsigned __int16)(int)v39 * (unsigned __int8)v34[1]) & 0xFF00 | (((int)v37 * (unsigned __int8)v32[2] + (int)v36 * (unsigned __int8)v32[v26 + 2] + v47 * (unsigned __int8)v32[v31 + 2] + v49 * (unsigned __int8)v34[2]) << 8) & 0xFF0000 | ((unsigned __int8)-((((unsigned __int16)(int)v37 * (unsigned __int8)v32[3] + (unsigned __int16)(int)v36 * (unsigned __int8)v32[v46 + 3] + (unsigned __int16)(int)v38 * (unsigned __int8)v32[v54 + 3] + (unsigned __int16)(int)v39 * (unsigned __int8)v34[3]) & 0x8000) != 0) << 24);
            if ( (unsigned __int8)-((((unsigned __int16)(int)v37 * (unsigned __int8)v32[3]
                                    + (unsigned __int16)(int)v36 * (unsigned __int8)v32[v46 + 3]
                                    + (unsigned __int16)(int)v38 * (unsigned __int8)v32[v54 + 3]
                                    + (unsigned __int16)(int)v39 * (unsigned __int8)v34[3]) & 0x8000) != 0) << 24 )
            {
              v41 = ((unsigned __int16)v17 ^ (unsigned __int16)((unsigned __int8)-((*(_DWORD *)v32 & (*(_DWORD *)v32 >> 8) & 0xFF0000 | v43 & (v43 >> 8) & 0xFF0000 | (*(_DWORD *)v34 & (*(_DWORD *)v34 >> 8) | v55 & (v55 >> 8)) & 0xFFFF0000) != 0) << 8)) & 0xFF00 ^ v17;
              v17 = ((unsigned __int8)(v41 ^ BYTE1(v41)) ^ v41 ^ (((unsigned __int8)(v41 ^ BYTE1(v41)) ^ v41) << 16)) & 0xFF0000 ^ (unsigned __int8)(v41 ^ BYTE1(v41)) ^ v41;
            }
          }
          else if ( v12 )
          {
            v17 = (((int)v37 * (255 - (unsigned __int8)v32[3])
                  + (int)v36 * (255 - (unsigned __int8)v32[v46 + 3])
                  + (int)v38 * (255 - (unsigned __int8)v32[v54 + 3])
                  + (int)v39 * (255 - (unsigned __int8)v34[3])) << 16) ^ (v40 ^ (((int)v37
                                                                                * (255 - (unsigned __int8)v32[3])
                                                                                + (int)v36
                                                                                * (255 - (unsigned __int8)v32[v46 + 3])
                                                                                + (int)v38
                                                                                * (255 - (unsigned __int8)v32[v54 + 3])
                                                                                + (int)v39
                                                                                * (255 - (unsigned __int8)v34[3])) << 16)) & 0xFFFFFF;
          }
          else
          {
            v17 = (((int)v37 * (unsigned __int8)v32[3]
                  + (int)v36 * (unsigned __int8)v32[v46 + 3]
                  + (int)v38 * (unsigned __int8)v32[v54 + 3]
                  + (int)v39 * (unsigned __int8)v34[3]) << 16) ^ (v40 ^ (((int)v37 * (unsigned __int8)v32[3]
                                                                        + v48 * (unsigned __int8)v32[v46 + 3]
                                                                        + (int)v38 * (unsigned __int8)v32[v54 + 3]
                                                                        + (int)v39 * (unsigned __int8)v34[3]) << 16)) & 0xFFFFFF;
          }
          ++v19;
          *(_DWORD *)((char *)a3->pPixels + v21 + v50) = v17;
          v50 += 4LL;
        }
        while ( v19 < v10 );
        v9 = v51;
        v11 = v44;
        v18 = v45;
        v13 = 4 * v10;
      }
      ++v11;
      v18 += v13;
      v44 = v11;
      v45 = v18;
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
