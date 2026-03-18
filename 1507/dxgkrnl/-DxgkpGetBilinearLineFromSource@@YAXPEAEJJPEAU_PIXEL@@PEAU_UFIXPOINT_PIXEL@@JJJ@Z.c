/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C01326C4
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00D16FC (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkpGetBilinearLineFromSource(
        unsigned __int8 *a1,
        int a2,
        int a3,
        struct _PIXEL *a4,
        struct _UFIXPOINT_PIXEL *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // esi
  __int64 v11; // r12
  unsigned __int8 *v12; // r10
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  struct _UFIXPOINT_PIXEL *v15; // rdi
  int v16; // ebx
  int v17; // r14d
  unsigned __int8 *v18; // rdx
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  unsigned __int8 *v23; // rdx
  int v24; // ebp
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edi
  int v30; // ebp
  int v31; // r14d
  int v32; // r15d
  int v33; // ecx
  int v34; // edx
  int v35; // ebx
  int v36; // eax
  int v37; // edx
  int v38; // r12d
  struct _UFIXPOINT_PIXEL *v39; // r8
  int v40; // esi
  int v41; // ecx
  int v42; // edx
  __int64 v43; // [rsp+0h] [rbp-48h]
  __int64 v44; // [rsp+50h] [rbp+8h]
  int v45; // [rsp+58h] [rbp+10h]
  int v46; // [rsp+78h] [rbp+30h]
  int v47; // [rsp+80h] [rbp+38h]

  v8 = a7;
  v11 = a2;
  v12 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v13 = (_DWORD *)((char *)a5 + 8);
      v14 = (unsigned int)(a8 - a7);
      do
      {
        if ( a4 )
        {
          *(_DWORD *)a4 = *(_DWORD *)v12;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v13[1] = v12[3] << 16;
          *v13 = v12[2] << 16;
          *(v13 - 1) = v12[1] << 16;
          *(v13 - 2) = *v12 << 16;
          v13 += 4;
        }
        v12 += v11;
        --v14;
      }
      while ( v14 );
    }
    return;
  }
  if ( a6 > a3 )
  {
    v15 = a5;
    v16 = a7 * a6 % a3;
    while ( 1 )
    {
      if ( v8 >= a8 )
      {
        if ( v16 )
        {
          v22 = (unsigned __int16)((v16 << 16) / a3);
          v23 = &v12[-v11];
          v24 = 0x10000 - v22;
          v25 = (0x10000 - v22) * v12[3];
          v26 = v22 * v12[-v11 + 3];
          if ( a4 )
          {
            *((_BYTE *)a4 + 3) = (unsigned int)(v25 + 0x8000 + v26) >> 16;
            *((_BYTE *)a4 + 2) = (v24 * v12[2] + 0x8000 + v22 * (unsigned int)v23[2]) >> 16;
            *((_BYTE *)a4 + 1) = (v24 * v12[1] + 0x8000 + v22 * (unsigned int)v23[1]) >> 16;
            v27 = v24 * *v12;
            v28 = v22 * *v23 + 0x8000;
            goto LABEL_47;
          }
          *((_DWORD *)v15 + 3) = v25 + v26;
          *((_DWORD *)v15 + 2) = v24 * v12[2] + v22 * v23[2];
          *((_DWORD *)v15 + 1) = v24 * v12[1] + v22 * v23[1];
          *(_DWORD *)v15 = v24 * *v12 + v22 * *v23;
        }
        return;
      }
      if ( v16 && v16 < a3 )
      {
        v17 = (unsigned __int16)((v16 << 16) / (unsigned int)a3);
        v18 = &v12[-v11];
        v19 = 0x10000 - v17;
        v20 = (0x10000 - v17) * v12[3];
        v21 = v17 * v12[-v11 + 3];
        if ( !a4 )
        {
          *((_DWORD *)v15 + 3) = v20 + v21;
          *((_DWORD *)v15 + 2) = v19 * v12[2] + v17 * v18[2];
          *((_DWORD *)v15 + 1) = v19 * v12[1] + v17 * v18[1];
          *(_DWORD *)v15 = v19 * *v12 + v17 * *v18;
LABEL_21:
          v15 = (struct _UFIXPOINT_PIXEL *)((char *)v15 + 16);
          goto LABEL_22;
        }
        *((_BYTE *)a4 + 3) = (unsigned int)(v20 + 0x8000 + v21) >> 16;
        *((_BYTE *)a4 + 2) = (v19 * v12[2] + 0x8000 + v17 * (unsigned int)v18[2]) >> 16;
        *((_BYTE *)a4 + 1) = (v19 * v12[1] + 0x8000 + v17 * (unsigned int)v18[1]) >> 16;
        *(_BYTE *)a4 = (v19 * *v12 + v17 * (unsigned int)*v18 + 0x8000) >> 16;
      }
      else
      {
        if ( !a4 )
        {
          *((_DWORD *)v15 + 3) = v12[3] << 16;
          *((_DWORD *)v15 + 2) = v12[2] << 16;
          *((_DWORD *)v15 + 1) = v12[1] << 16;
          *(_DWORD *)v15 = *v12 << 16;
          goto LABEL_21;
        }
        *(_DWORD *)a4 = *(_DWORD *)v12;
      }
      a4 = (struct _PIXEL *)((char *)a4 + 4);
LABEL_22:
      if ( v16 < a3 )
        v16 += a6 - a3;
      else
        v16 -= a3;
      if ( v16 < a3 )
      {
        v12 += v11;
        ++v8;
      }
    }
  }
  v29 = 0;
  v46 = a6 << 16;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = (unsigned __int16)((a6 << 16) / a3);
  v47 = v33;
  v34 = v8 * a6 % a3;
  v35 = v34;
  if ( v34 > 0 )
  {
    v36 = (v34 << 16) / a3;
    v33 = (unsigned __int16)((a6 << 16) / a3);
    v32 = (unsigned __int16)v36 * v12[-v11 + 3];
    v31 = (unsigned __int16)v36 * v12[-v11 + 2];
    v30 = (unsigned __int16)v36 * v12[-v11 + 1];
    v29 = (unsigned __int16)v36 * v12[-v11];
  }
  if ( v8 >= a8 )
  {
    v39 = a5;
  }
  else
  {
    v43 = v11;
    v37 = a3 << 16;
    v38 = v35 << 16;
    v45 = a3 << 16;
    v44 = (unsigned int)(a8 - v8);
    v39 = a5;
    do
    {
      v38 += v46;
      v35 += a6;
      if ( v35 >= a3 )
      {
        v38 -= v37;
        v35 -= a3;
        v40 = (unsigned __int16)(v38 / a3);
        if ( a4 )
        {
          *((_BYTE *)a4 + 3) = (v32 + (v33 - v40) * (unsigned int)v12[3] + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v31 + (v33 - v40) * (unsigned int)v12[2] + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (v30 + (v33 - v40) * (unsigned int)v12[1] + 0x8000) >> 16;
          *(_BYTE *)a4 = ((v33 - v40) * (unsigned int)*v12 + v29 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v41 = v33 - v40;
          *((_DWORD *)v39 + 3) = v32 + v41 * v12[3];
          *((_DWORD *)v39 + 2) = v31 + v41 * v12[2];
          *((_DWORD *)v39 + 1) = v30 + v41 * v12[1];
          *(_DWORD *)v39 = v29 + v41 * *v12;
          v39 = (struct _UFIXPOINT_PIXEL *)((char *)v39 + 16);
        }
        v33 = v47;
        v37 = v45;
        v32 = v40 * v12[3];
        v31 = v40 * v12[2];
        v30 = v40 * v12[1];
        v29 = v40 * *v12;
      }
      else
      {
        v32 += v33 * v12[3];
        v31 += v33 * v12[2];
        v30 += v33 * v12[1];
        v29 += v33 * *v12;
      }
      v12 += v43;
      --v44;
    }
    while ( v44 );
  }
  if ( v35 )
  {
    v42 = (unsigned __int16)(((a3 - v35) << 16) / a3);
    if ( a4 )
    {
      *((_BYTE *)a4 + 3) = (v32 + v42 * (unsigned int)v12[3] + 0x8000) >> 16;
      *((_BYTE *)a4 + 2) = (v31 + v42 * (unsigned int)v12[2] + 0x8000) >> 16;
      *((_BYTE *)a4 + 1) = (v30 + v42 * (unsigned int)v12[1] + 0x8000) >> 16;
      v28 = v29 + 0x8000;
      v27 = v42 * *v12;
LABEL_47:
      *(_BYTE *)a4 = (unsigned int)(v27 + v28) >> 16;
    }
    else
    {
      *((_DWORD *)v39 + 3) = v32 + v42 * v12[3];
      *((_DWORD *)v39 + 2) = v31 + v42 * v12[2];
      *((_DWORD *)v39 + 1) = v30 + v42 * v12[1];
      *(_DWORD *)v39 = v29 + v42 * *v12;
    }
  }
}
