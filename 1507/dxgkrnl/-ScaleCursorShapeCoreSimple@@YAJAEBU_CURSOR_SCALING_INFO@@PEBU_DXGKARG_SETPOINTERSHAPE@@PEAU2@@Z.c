/*
 * XREFs of ?ScaleCursorShapeCoreSimple@@YAJAEBU_CURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C0146B9C
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@PEBU_DXGK_DRIVERCAPS@@HAEAH@Z @ 0x1C014672C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall ScaleCursorShapeCoreSimple(
        const struct _CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  UINT v3; // r15d
  UINT Width; // r11d
  UINT v7; // r14d
  UINT Height; // r13d
  UINT YHot; // r8d
  UINT v10; // r9d
  int v11; // eax
  int v12; // r11d
  int v13; // r13d
  unsigned int v14; // edi
  UINT v15; // r12d
  unsigned int v16; // ebp
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  int v23; // r14d
  int v24; // r12d
  unsigned int v25; // edi
  __int64 v26; // rdx
  unsigned int v27; // r10d
  char v28; // r15
  unsigned __int64 v29; // r13
  char v30; // r14
  unsigned int v31; // r8d
  __int64 v32; // rdi
  UINT Pitch; // eax
  __int64 v34; // rdx
  int v35; // eax
  _DWORD *pPixels; // r8
  unsigned __int64 v37; // rdx
  __int64 result; // rax
  unsigned __int64 v39; // [rsp+20h] [rbp-A8h]
  int v40; // [rsp+28h] [rbp-A0h]
  unsigned int v41; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v42; // [rsp+30h] [rbp-98h]
  unsigned int v43; // [rsp+34h] [rbp-94h]
  int v44; // [rsp+38h] [rbp-90h]
  unsigned int v45; // [rsp+3Ch] [rbp-8Ch]
  __int64 v46; // [rsp+40h] [rbp-88h]
  UINT v47; // [rsp+4Ch] [rbp-7Ch]
  UINT v48; // [rsp+54h] [rbp-74h]
  UINT v49; // [rsp+5Ch] [rbp-6Ch]
  int v50; // [rsp+60h] [rbp-68h]
  unsigned int v51; // [rsp+68h] [rbp-60h]
  UINT v52; // [rsp+74h] [rbp-54h]
  __int64 v53; // [rsp+80h] [rbp-48h]
  unsigned int v54; // [rsp+D0h] [rbp+8h]
  int v55; // [rsp+D8h] [rbp+10h]
  UINT v56; // [rsp+E8h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 4);
  Width = a2->Width;
  v52 = v3;
  if ( v3 < Width )
    return 3221225659LL;
  v7 = *((_DWORD *)a1 + 5);
  Height = a2->Height;
  v47 = v7;
  if ( v7 < Height )
    return 3221225659LL;
  YHot = a2->YHot;
  v51 = v3 / Width;
  v10 = v3 / Width * a2->XHot;
  v11 = v7 / Height;
  v12 = v3 / Width * Width;
  v13 = v7 / Height * Height;
  v45 = v11;
  v48 = (*(_DWORD *)a1 * a2->XHot + *((_DWORD *)a1 + 2) - 1) / *((_DWORD *)a1 + 2);
  v55 = v12;
  v50 = v13;
  v49 = (YHot * *((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 3) - 1) / *((_DWORD *)a1 + 3);
  v14 = v49 - v11 * YHot;
  v54 = v14;
  v56 = v48 - v10;
  if ( (a2->Flags.Value & 1) != 0 )
  {
    v15 = (v3 + 7) >> 3;
    v16 = v15 * v7;
    v40 = v15;
    memset((void *)a3->pPixels, 255, v15 * v7);
    memset((char *)a3->pPixels + v16, 0, v16);
    v12 = v55;
  }
  else
  {
    v15 = 4 * v3;
    v16 = 4 * v3 * v7;
    v40 = 4 * v3;
    if ( (a2->Flags.Value & 4) == 0 )
    {
      memset((void *)a3->pPixels, 0, v16);
      v12 = v55;
      goto LABEL_5;
    }
    pPixels = a3->pPixels;
    v37 = (unsigned __int64)v16 >> 2;
    if ( v37 )
    {
      if ( ((unsigned __int8)pPixels & 4) != 0 )
      {
        *pPixels = -16777216;
        if ( !--v37 )
          goto LABEL_5;
        ++pPixels;
      }
      memset64(pPixels, 0xFF000000FF000000uLL, v37 >> 1);
      if ( (v37 & 1) != 0 )
        pPixels[v37 - 1] = -16777216;
    }
  }
LABEL_5:
  v17 = 0;
  v41 = 0;
  if ( v7 )
  {
    v18 = 0;
    v42 = 0;
    v44 = -v14;
    do
    {
      v19 = 0;
      v43 = 0;
      if ( v3 )
      {
        v39 = 0LL;
        v20 = 0LL;
        v21 = v56;
        v22 = 0LL;
        v23 = -v56;
        v24 = v44;
        v46 = 0LL;
        do
        {
          if ( v19 >= v21 && v17 >= v14 )
          {
            if ( v19 < v21 + v12 && v17 < v14 + v13 )
            {
              v25 = (v23 + v19) / v51;
              if ( (a2->Flags.Value & 1) != 0 )
              {
                v26 = v18;
                v27 = 0;
                v28 = 7 - (v19 & 7);
                v29 = (unsigned __int64)v25 >> 3;
                v30 = 7 - (v25 & 7);
                v31 = 0;
                v53 = v26;
                do
                {
                  v32 = v26 + v31;
                  v31 += v16;
                  Pitch = a2->Pitch;
                  v34 = (v24 + v17) / v45 * Pitch;
                  v35 = v27 * Pitch;
                  ++v27;
                  *((_BYTE *)a3->pPixels + v32 + (v39 >> 3)) = *((_BYTE *)a3->pPixels + v32 + (v39 >> 3)) & ~(1 << v28) | (((*((_BYTE *)a2->pPixels + v29 + a2->Height * v35 + v34) >> v30) & 1) << v28);
                  v26 = v53;
                }
                while ( v27 < 2 );
                v3 = v52;
                v19 = v43;
                v17 = v41;
                v13 = v50;
                v12 = v55;
                v18 = v42;
                v20 = v46;
                v23 = -v56;
                v24 = v44;
              }
              else
              {
                *(_DWORD *)((char *)a3->pPixels + v18 + v46) = *(_DWORD *)((char *)a2->pPixels
                                                                         + 4 * v25
                                                                         + (unsigned __int64)(a2->Pitch
                                                                                            * ((v24 + v17)
                                                                                             / v45)));
                v20 = v46;
              }
              v21 = v56;
              v14 = v54;
            }
            v22 = v39;
          }
          ++v19;
          ++v22;
          v20 += 4LL;
          v43 = v19;
          v39 = v22;
          v46 = v20;
        }
        while ( v19 < v3 );
        v7 = v47;
        v15 = v40;
      }
      ++v17;
      v18 += v15;
      v41 = v17;
      v42 = v18;
    }
    while ( v17 < v7 );
  }
  a3->Flags.Value = a2->Flags.Value;
  a3->XHot = v48;
  a3->YHot = v49;
  result = 0LL;
  a3->Width = v3;
  a3->Height = v7;
  a3->Pitch = v15;
  return result;
}
