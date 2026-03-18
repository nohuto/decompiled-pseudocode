/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C00CD250
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00B11E0 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
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
  int v8; // edi
  int v10; // r8d
  __int64 v12; // r12
  unsigned __int8 *v13; // r11
  struct _UFIXPOINT_PIXEL *v14; // rbx
  int v15; // ecx
  int v16; // eax
  int v17; // ebp
  unsigned __int8 *v18; // r8
  int v19; // r9d
  int v20; // eax
  int v21; // edx
  int v22; // edx
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  int v25; // edx
  int v26; // r8d
  unsigned __int8 *v27; // rdx
  int v28; // r15d
  int v29; // eax
  int v30; // ecx
  int v31; // r9d
  int v32; // esi
  int v33; // ebp
  int v34; // r15d
  int v35; // r13d
  int v36; // edx
  int v37; // ebx
  int v38; // eax
  struct _UFIXPOINT_PIXEL *v39; // r8
  int v40; // ecx
  int v41; // r12d
  int v42; // edx
  int v43; // edi
  int v44; // edx
  __int64 v45; // [rsp+40h] [rbp+8h]

  v8 = a7;
  v10 = a6;
  v12 = a2;
  v13 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v23 = (_DWORD *)((char *)a5 + 8);
      v24 = (unsigned int)(a8 - a7);
      do
      {
        if ( a4 )
        {
          *(_DWORD *)a4 = *(_DWORD *)v13;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v23[1] = v13[3] << 16;
          *v23 = v13[2] << 16;
          *(v23 - 1) = v13[1] << 16;
          *(v23 - 2) = *v13 << 16;
          v23 += 4;
        }
        v13 += v12;
        --v24;
      }
      while ( v24 );
    }
  }
  else if ( a6 <= a3 )
  {
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = (unsigned __int16)((a6 << 16) / a3);
    v36 = a7 * a6 % a3;
    v37 = v36;
    if ( v36 > 0 )
    {
      v38 = (v36 << 16) / a3;
      v34 = (unsigned __int16)v38 * v13[-v12 + 3];
      v33 = (unsigned __int16)v38 * v13[-v12 + 2];
      v32 = (unsigned __int16)v38 * v13[-v12 + 1];
      v31 = (unsigned __int16)v38 * v13[-v12];
    }
    v39 = a5;
    if ( a7 < a8 )
    {
      v40 = a3 << 16;
      v41 = v36 << 16;
      v45 = (unsigned int)(a8 - a7);
      v42 = a2;
      do
      {
        v37 += a6;
        v41 += a6 << 16;
        if ( v37 >= a3 )
        {
          v41 -= v40;
          v37 -= a3;
          v43 = (unsigned __int16)(v41 / a3);
          if ( a4 )
          {
            *((_BYTE *)a4 + 3) = (v34 + (v35 - v43) * (unsigned int)v13[3] + 0x8000) >> 16;
            *((_BYTE *)a4 + 2) = (v33 + (v35 - v43) * (unsigned int)v13[2] + 0x8000) >> 16;
            *((_BYTE *)a4 + 1) = (v32 + (v35 - v43) * (unsigned int)v13[1] + 0x8000) >> 16;
            *(_BYTE *)a4 = ((v35 - v43) * (unsigned int)*v13 + v31 + 0x8000) >> 16;
            a4 = (struct _PIXEL *)((char *)a4 + 4);
          }
          else
          {
            *((_DWORD *)v39 + 3) = v34 + (v35 - v43) * v13[3];
            *((_DWORD *)v39 + 2) = v33 + (v35 - v43) * v13[2];
            *((_DWORD *)v39 + 1) = v32 + (v35 - v43) * v13[1];
            *(_DWORD *)v39 = v31 + (v35 - v43) * *v13;
            v39 = (struct _UFIXPOINT_PIXEL *)((char *)v39 + 16);
          }
          v40 = a3 << 16;
          v42 = a2;
          v34 = v43 * v13[3];
          v33 = v43 * v13[2];
          v32 = v43 * v13[1];
          v31 = v43 * *v13;
        }
        else
        {
          v34 += v35 * v13[3];
          v33 += v35 * v13[2];
          v32 += v35 * v13[1];
          v31 += v35 * *v13;
        }
        v13 += v42;
        --v45;
      }
      while ( v45 );
    }
    if ( v37 )
    {
      v44 = (unsigned __int16)(((a3 - v37) << 16) / a3);
      if ( a4 )
      {
        *((_BYTE *)a4 + 3) = (v34 + v44 * (unsigned int)v13[3] + 0x8000) >> 16;
        *((_BYTE *)a4 + 2) = (v33 + v44 * (unsigned int)v13[2] + 0x8000) >> 16;
        *((_BYTE *)a4 + 1) = (v32 + v44 * (unsigned int)v13[1] + 0x8000) >> 16;
        *(_BYTE *)a4 = (v44 * (unsigned int)*v13 + v31 + 0x8000) >> 16;
      }
      else
      {
        *((_DWORD *)v39 + 3) = v34 + v44 * v13[3];
        *((_DWORD *)v39 + 2) = v33 + v44 * v13[2];
        *((_DWORD *)v39 + 1) = v32 + v44 * v13[1];
        *(_DWORD *)v39 = v31 + v44 * *v13;
      }
    }
  }
  else
  {
    v14 = a5;
    v15 = a7 * a6 % a3;
    if ( a7 < a8 )
    {
      do
      {
        if ( v15 && v15 < a3 )
        {
          if ( a3 == 1024 )
            LOWORD(v16) = (_WORD)v15 << 6;
          else
            v16 = (v15 << 16) / (unsigned int)a3;
          v17 = (unsigned __int16)v16;
          v18 = &v13[-v12];
          v19 = 0x10000 - (unsigned __int16)v16;
          v20 = v19 * v13[3];
          v21 = v17 * v13[-v12 + 3];
          if ( a4 )
          {
            *((_BYTE *)a4 + 3) = (unsigned int)(v20 + 0x8000 + v21) >> 16;
            *((_BYTE *)a4 + 2) = (v19 * v13[2] + 0x8000 + v17 * (unsigned int)v18[2]) >> 16;
            *((_BYTE *)a4 + 1) = (v19 * v13[1] + 0x8000 + v17 * (unsigned int)v18[1]) >> 16;
            v25 = *v18;
            v10 = a6;
            *(_BYTE *)a4 = (v19 * (unsigned int)*v13 + v17 * v25 + 0x8000) >> 16;
            a4 = (struct _PIXEL *)((char *)a4 + 4);
            goto LABEL_11;
          }
          *((_DWORD *)v14 + 3) = v20 + v21;
          *((_DWORD *)v14 + 2) = v19 * v13[2] + v17 * v18[2];
          *((_DWORD *)v14 + 1) = v19 * v13[1] + v17 * v18[1];
          v22 = *v18;
          v10 = a6;
          *(_DWORD *)v14 = v19 * *v13 + v17 * v22;
        }
        else
        {
          if ( a4 )
          {
            *(_DWORD *)a4 = *(_DWORD *)v13;
            a4 = (struct _PIXEL *)((char *)a4 + 4);
            goto LABEL_11;
          }
          *((_DWORD *)v14 + 3) = v13[3] << 16;
          *((_DWORD *)v14 + 2) = v13[2] << 16;
          *((_DWORD *)v14 + 1) = v13[1] << 16;
          *(_DWORD *)v14 = *v13 << 16;
        }
        v14 = (struct _UFIXPOINT_PIXEL *)((char *)v14 + 16);
LABEL_11:
        if ( v15 >= a3 )
          v15 -= a3;
        else
          v15 += v10 - a3;
        if ( v15 < a3 )
        {
          v13 += v12;
          ++v8;
        }
      }
      while ( v8 < a8 );
    }
    if ( v15 )
    {
      v26 = (unsigned __int16)((v15 << 16) / a3);
      v27 = &v13[-v12];
      v28 = 0x10000 - v26;
      v29 = (0x10000 - v26) * v13[3];
      v30 = v26 * v13[-v12 + 3];
      if ( a4 )
      {
        *((_BYTE *)a4 + 3) = (unsigned int)(v29 + 0x8000 + v30) >> 16;
        *((_BYTE *)a4 + 2) = (v28 * v13[2] + 0x8000 + v26 * (unsigned int)v27[2]) >> 16;
        *((_BYTE *)a4 + 1) = (v28 * v13[1] + 0x8000 + v26 * (unsigned int)v27[1]) >> 16;
        *(_BYTE *)a4 = (v28 * *v13 + v26 * (unsigned int)*v27 + 0x8000) >> 16;
      }
      else
      {
        *((_DWORD *)v14 + 3) = v29 + v30;
        *((_DWORD *)v14 + 2) = v28 * v13[2] + v26 * v27[2];
        *((_DWORD *)v14 + 1) = v28 * v13[1] + v26 * v27[1];
        *(_DWORD *)v14 = v28 * *v13 + v26 * *v27;
      }
    }
  }
}
