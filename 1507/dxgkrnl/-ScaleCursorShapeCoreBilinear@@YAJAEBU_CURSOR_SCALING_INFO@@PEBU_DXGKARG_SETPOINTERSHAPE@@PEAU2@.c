/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBU_CURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C0146834
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@PEBU_DXGK_DRIVERCAPS@@HAEAH@Z @ 0x1C014672C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct _CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4)
{
  const struct _CURSOR_SCALING_INFO *v6; // r13
  __int64 v7; // rax
  UINT v8; // ecx
  UINT v9; // r12d
  UINT v10; // r8d
  float v11; // xmm7_4
  float v12; // xmm5_4
  int v13; // r13d
  unsigned int v14; // edx
  int v15; // r9d
  float v16; // xmm4_4
  int v17; // r13d
  float v18; // xmm6_4
  int v19; // r9d
  __int64 v20; // rdx
  UINT Pitch; // r8d
  char *v22; // r14
  char *v23; // rdi
  float v24; // xmm6_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  int v27; // ebx
  float v28; // xmm2_4
  float v29; // xmm3_4
  int v30; // r10d
  unsigned int v32; // [rsp+20h] [rbp-78h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  UINT v34; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+A8h] [rbp+10h]
  UINT v37; // [rsp+B8h] [rbp+20h]

  v6 = a1;
  if ( (a2->Flags.Value & 2) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 791LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)v6 + 5);
  v9 = *((_DWORD *)v6 + 4);
  v36 = 0;
  v10 = 4 * v9;
  v34 = v8;
  v11 = (float)(int)a2->Width / (float)(int)v9;
  v12 = (float)(int)a2->Height / (float)(int)v8;
  if ( v8 )
  {
    v13 = 0;
    v14 = 0;
    v32 = 0;
    do
    {
      v15 = 0;
      v37 = 0;
      if ( v9 )
      {
        v33 = v14;
        v16 = (float)v13 * v12;
        v17 = (int)v16;
        do
        {
          v18 = (float)v15 * v11;
          v19 = (int)v18;
          v20 = (int)v18 != a2->Width - 1 ? 4 : 0;
          if ( v17 == a2->Height - 1 )
            Pitch = 0;
          else
            Pitch = a2->Pitch;
          v22 = (char *)a2->pPixels + (unsigned int)(4 * v19) + (unsigned __int64)(v17 * a2->Pitch);
          v23 = &v22[Pitch + v20];
          v24 = v18 - (float)v19;
          v25 = v16 - (float)v17;
          v26 = (float)((float)(1.0 - v25) * v24) * 256.0;
          v27 = (int)(float)((float)((float)(1.0 - v25) * (float)(1.0 - v24)) * 256.0);
          v28 = (float)((float)(1.0 - v24) * v25) * 256.0;
          v29 = (float)(v25 * v24) * 256.0;
          v30 = (int)v28;
          v15 = ++v37;
          *(_DWORD *)((char *)a3->pPixels + v33) = (unsigned __int8)((unsigned __int16)(v30
                                                                                      * (unsigned __int8)*(_DWORD *)&v22[Pitch]
                                                                                      + (int)v29
                                                                                      * (unsigned __int8)*(_DWORD *)v23
                                                                                      + v27
                                                                                      * (unsigned __int8)*(_DWORD *)v22
                                                                                      + (int)v26
                                                                                      * (unsigned __int8)*(_DWORD *)&v22[v20]) >> 8) | ((_WORD)v27 * (unsigned __int8)v22[1] + (unsigned __int16)(int)v26 * (unsigned __int8)v22[v20 + 1] + (_WORD)v30 * (unsigned __int8)v22[Pitch + 1] + (unsigned __int16)(int)v29 * (unsigned __int8)v23[1]) & 0xFF00 | ((v27 * (unsigned __int8)v22[3] + (int)v26 * (unsigned __int8)v22[v20 + 3] + v30 * (unsigned __int8)v22[Pitch + 3] + (int)v29 * (unsigned __int8)v23[3]) << 16) & 0xFF000000 | ((v27 * (unsigned __int8)v22[2] + (int)v26 * (unsigned __int8)v22[v20 + 2] + v30 * (unsigned __int8)v22[Pitch + 2] + (int)v29 * (unsigned __int8)v23[2]) << 8) & 0xFF0000;
          v33 += 4LL;
        }
        while ( v37 < v9 );
        v8 = v34;
        v13 = v36;
        v14 = v32;
        v10 = 4 * v9;
      }
      ++v13;
      v14 += v10;
      v36 = v13;
      v32 = v14;
    }
    while ( v13 < v8 );
    v6 = a1;
  }
  a3->Flags.Value = a2->Flags.Value;
  a3->Width = v9;
  a3->Height = v8;
  a3->Pitch = v10;
  a3->XHot = (*((_DWORD *)v6 + 2) + *(_DWORD *)v6 * a2->XHot - 1) / *((_DWORD *)v6 + 2);
  a3->YHot = (*((_DWORD *)v6 + 3) + *((_DWORD *)v6 + 1) * a2->YHot - 1) / *((_DWORD *)v6 + 3);
  return 0LL;
}
