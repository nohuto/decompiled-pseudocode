/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00D16FC
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0132564 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C01326C4 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  int v10; // r13d
  unsigned __int8 *v12; // r14
  LONG left; // r11d
  LONG right; // edi
  LONG top; // r8d
  LONG bottom; // r10d
  LONG v17; // r12d
  int v18; // r11d
  int v19; // r10d
  LONG v20; // r15d
  int v21; // eax
  int v22; // r9d
  int v23; // r8d
  LONG v24; // ecx
  int v25; // eax
  int v26; // r9d
  LONG v27; // r8d
  int v28; // eax
  unsigned __int8 *v29; // r12
  int v30; // ecx
  unsigned __int8 *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // r15
  unsigned __int8 *v35; // rsi
  __int64 v36; // r15
  int v37; // r8d
  SIZE_T v38; // rax
  struct _UFIXPOINT_PIXEL *v39; // rax
  __int64 v40; // rcx
  int v41; // r14d
  struct _UFIXPOINT_PIXEL *v42; // rdx
  __int64 v43; // rax
  int v44; // ecx
  unsigned __int8 *v45; // r9
  __int64 v46; // rax
  struct _UFIXPOINT_PIXEL *v47; // r12
  __int64 v48; // rax
  unsigned __int8 *v49; // rcx
  int v50; // r8d
  struct _UFIXPOINT_PIXEL *v51; // r9
  unsigned int v52; // r11d
  struct _UFIXPOINT_PIXEL *v53; // r8
  unsigned int v54; // edx
  _BYTE *v55; // r9
  signed __int64 v56; // r8
  unsigned int *v57; // r11
  int v58; // r10d
  unsigned int v59; // ecx
  unsigned int v60; // eax
  int *v61; // r11
  _BYTE *v62; // rdx
  int v63; // r9d
  int v64; // eax
  struct _UFIXPOINT_PIXEL *v65; // rdx
  unsigned int v66; // r9d
  unsigned int *v67; // rdx
  unsigned int v68; // r10d
  _BYTE *v69; // r11
  unsigned int v70; // r9d
  signed __int64 v71; // r8
  unsigned int v72; // ecx
  unsigned int v73; // eax
  int v74; // r15d
  int v75; // edi
  int v76; // r9d
  int v77; // r8d
  _DWORD *v78; // rdx
  unsigned int v79; // eax
  int v80; // r11d
  int v81; // eax
  int v82; // ecx
  int v83; // eax
  struct _UFIXPOINT_PIXEL *v84; // r8
  _DWORD *v85; // rdx
  unsigned int v86; // r9d
  signed __int64 v87; // r10
  int v88; // r11d
  unsigned int v89; // eax
  unsigned int v90; // edx
  int v91; // r8d
  unsigned int v92; // r9d
  _BYTE *v93; // r11
  _DWORD *v94; // rdx
  unsigned int v95; // r9d
  signed __int64 v96; // r10
  unsigned int v97; // eax
  int v98; // eax
  bool v99; // cc
  _DWORD *v100; // rdx
  _BYTE *v101; // r10
  int v102; // r9d
  signed __int64 v103; // r8
  int v104; // ecx
  LONG v105; // [rsp+48h] [rbp-69h]
  int v106; // [rsp+48h] [rbp-69h]
  int v107; // [rsp+48h] [rbp-69h]
  LONG v108; // [rsp+4Ch] [rbp-65h]
  unsigned int v109; // [rsp+4Ch] [rbp-65h]
  int v110; // [rsp+4Ch] [rbp-65h]
  LONG v111; // [rsp+50h] [rbp-61h]
  int v112; // [rsp+50h] [rbp-61h]
  int v113; // [rsp+54h] [rbp-5Dh]
  int v114; // [rsp+58h] [rbp-59h]
  int v115; // [rsp+5Ch] [rbp-55h]
  struct tagRECT v116; // [rsp+60h] [rbp-51h]
  struct _UFIXPOINT_PIXEL *v117; // [rsp+60h] [rbp-51h]
  int v118; // [rsp+70h] [rbp-41h]
  unsigned __int8 *v119; // [rsp+78h] [rbp-39h]
  unsigned __int8 *v120; // [rsp+78h] [rbp-39h]
  int v121; // [rsp+80h] [rbp-31h]
  unsigned __int8 *v122; // [rsp+88h] [rbp-29h]
  struct _UFIXPOINT_PIXEL *v123; // [rsp+90h] [rbp-21h]
  unsigned __int8 *v124; // [rsp+98h] [rbp-19h]
  unsigned __int8 *v125; // [rsp+98h] [rbp-19h]
  unsigned __int8 *v126; // [rsp+98h] [rbp-19h]
  unsigned int v127; // [rsp+A0h] [rbp-11h]
  unsigned int v128; // [rsp+A4h] [rbp-Dh]

  v10 = a2;
  v12 = a1;
  left = a9->left;
  right = a9->right;
  if ( a9->left == right
    || (top = a9->top, bottom = a9->bottom, top == bottom)
    || (v108 = a8->left, v111 = a8->right, a8->left == v111)
    || (v17 = a8->bottom, v105 = a8->top, v105 == v17) )
  {
    DxgkpConvertRects(a2, a3, a5, a8, 1u, a9, a10);
    return 0LL;
  }
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
      v18 = 4;
      v118 = a4;
      v19 = a4;
      v116 = *a9;
      right = HIDWORD(*(unsigned __int128 *)a9);
      v20 = HIDWORD(*(_QWORD *)&a9->left);
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v116.right = a9->bottom;
      v116.left = a9->top;
      v20 = a2 - right;
      v19 = -4;
      v116.top = a2 - right;
      right = a2 - left;
      v118 = -4;
      v10 = a3;
      v116.bottom = a2 - left;
      a3 = a2;
      v18 = a4;
      v12 = &a1[4 * a2 - 4];
      break;
    case D3DKMDT_VPPR_ROTATE180:
      v20 = a3 - bottom;
      v116.left = a2 - right;
      v116.top = a3 - bottom;
      right = a3 - top;
      v116.right = a2 - left;
      v116.bottom = a3 - top;
      v19 = -a4;
      v18 = -4;
      v118 = -a4;
      v12 = &a1[4 * a2 - 4 + a4 * (a3 - 1)];
      break;
    case D3DKMDT_VPPR_ROTATE270:
      v116.top = a9->left;
      v116.bottom = a9->right;
      v116.left = a3 - bottom;
      v19 = 4;
      v118 = 4;
      v20 = a9->left;
      v116.right = a3 - top;
      v18 = -a4;
      v10 = a3;
      a3 = a2;
      v12 = &a1[a4 * (v10 - 1)];
      break;
    default:
      v18 = (int)a9;
      right = v116.bottom;
      v20 = v116.top;
      v19 = (int)a9;
      v12 = (unsigned __int8 *)a9;
      v118 = (int)a9;
      goto LABEL_8;
  }
  LODWORD(a9) = v18;
LABEL_8:
  v21 = v116.left * (v111 - v108);
  v22 = v116.right * (v111 - v108);
  v112 = v111 - v108;
  v121 = v17 - v105;
  v119 = v12;
  v23 = v21 / v10;
  v114 = (v10 * (v21 / v10) + v112 - 1) / v112;
  v115 = v10 * ((v22 - 1) / v10 + 1) / v112;
  a10->left = v21 / v10 + v108;
  v124 = (unsigned __int8 *)HIDWORD(*(_QWORD *)&v116.left);
  v24 = (v17 - v105) * v116.top / a3 + v105;
  v25 = v22 - 1;
  v26 = v23 + v108;
  a10->top = v24;
  v27 = (v10 + v25) / v10 + v108;
  *(_QWORD *)&v116.left = HIDWORD(*(_QWORD *)&v116.right);
  v28 = (v17 - v105) * v116.bottom;
  v29 = &a6[4 * v26 + a7 * v24];
  v30 = v112;
  a10->right = v27;
  v122 = v29;
  a10->bottom = v105 + (a3 + v28 - 1) / a3;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v112 == v10 )
  {
    if ( v121 == a3 )
    {
      v31 = &v12[v19 * (int)v124 + v18 * v114];
      if ( (int)v124 < v116.left )
      {
        v32 = (unsigned int)(right - (_DWORD)v124);
        v33 = v19;
        do
        {
          memmove(v29, v31, (unsigned int)(4 * (v115 - v114)));
          v29 += a7;
          v31 += v33;
          --v32;
        }
        while ( v32 );
      }
      return 0LL;
    }
  }
  else if ( v121 == a3 )
  {
    v35 = &v12[v19 * v20];
    if ( v20 < right )
    {
      v36 = (unsigned int)(right - v20);
      v125 = (unsigned __int8 *)v19;
      do
      {
        DxgkpGetBilinearLineFromSource(v35, v18, v10, (struct _PIXEL *)v29, 0LL, v30, v114, v115);
        v35 = &v35[(_QWORD)v125];
        v29 += a7;
        v18 = (int)a9;
        v30 = v112;
        --v36;
      }
      while ( v36 );
    }
    return 0LL;
  }
  v37 = v27 - v26;
  v38 = 16LL * (2 * v37 + 2);
  if ( !is_mul_ok(2 * v37 + 2, 0x10uLL) )
    v38 = -1LL;
  v39 = (struct _UFIXPOINT_PIXEL *)operator new[](v38, 0x4B677844u, PagedPool);
  v41 = 0;
  v117 = v39;
  v42 = v39;
  if ( v39 )
  {
    v44 = a10->right - a10->left;
    v45 = v119;
    v123 = v39;
    v46 = 2LL * v44;
    v47 = (struct _UFIXPOINT_PIXEL *)((char *)v42 + 16 * v44 + 16);
    *((_QWORD *)v42 + v46) = 0LL;
    *((_QWORD *)v42 + v46 + 1) = 0LL;
    v48 = 2LL * (a10->right - a10->left);
    *((_QWORD *)v47 + v48) = 0LL;
    *((_QWORD *)v47 + v48 + 1) = 0LL;
    v49 = &v119[v118 * v20];
    v120 = v49;
    if ( v121 <= a3 )
    {
      v128 = (unsigned __int16)((v121 << 16) / a3);
      v107 = (v121 + a3 * (v20 * v121 / a3) - 1) / v121;
      v126 = &v45[v118 * v107];
      v110 = a3 * ((right * v121 - 1) / a3 + 1) / v121;
      v74 = v121 * v107 % a3;
      if ( v74 <= 0 )
      {
        memset(v47, 0, 16LL * (a10->right - a10->left));
        v75 = (int)a9;
      }
      else
      {
        v75 = (int)a9;
        DxgkpGetBilinearLineFromSource(&v45[v118 * v107 - v118], (int)a9, v10, 0LL, v47, v112, v114, v115);
        v76 = 0;
        if ( a10->right - a10->left > 0 )
        {
          v77 = (unsigned __int16)((v74 << 16) / a3) >> 8;
          v78 = (_DWORD *)((char *)v47 + 8);
          do
          {
            ++v76;
            v78[1] = v77 * (v78[1] >> 8);
            *v78 = v77 * (*v78 >> 8);
            v79 = *(v78 - 1);
            v78 += 4;
            *(v78 - 5) = v77 * (v79 >> 8);
            *(v78 - 6) = v77 * (*(v78 - 6) >> 8);
          }
          while ( v76 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v126, v75, v10, 0LL, v117, v112, v114, v115);
      v80 = v107;
      if ( v107 < v110 )
      {
        v81 = v74 << 16;
        v82 = a3 << 16;
        do
        {
          v83 = (v121 << 16) + v81;
          v74 += v121;
          v113 = v83;
          if ( v74 >= a3 )
          {
            v74 -= a3;
            v113 = v83 - v82;
            v90 = (unsigned __int16)((v83 - v82) / a3);
            if ( a10->right - a10->left > 0 )
            {
              v91 = 0;
              v92 = v128 - v90;
              v93 = v122 + 2;
              v127 = v90 >> 8;
              v94 = (_DWORD *)((char *)v47 + 12);
              v95 = v92 >> 8;
              v96 = v117 - v47;
              do
              {
                ++v91;
                v93[1] = (*v94 + 0x8000 + v95 * (*(_DWORD *)((char *)v94 + v96) >> 8)) >> 16;
                *v93 = (*(v94 - 1) + 0x8000 + v95 * (*(_DWORD *)((char *)v94 + v96 - 4) >> 8)) >> 16;
                v93 += 4;
                *(v93 - 5) = (*(v94 - 2) + 0x8000 + v95 * (*(_DWORD *)((char *)v94 + v96 - 8) >> 8)) >> 16;
                *(v93 - 6) = (*(v94 - 3) + 0x8000 + v95 * (*(_DWORD *)((char *)v94 + v96 - 12) >> 8)) >> 16;
                *v94 = v127 * (*(_DWORD *)((char *)v94 + v96) >> 8);
                v97 = *(_DWORD *)((char *)v94 + v96 - 4);
                v94 += 4;
                *(v94 - 5) = v127 * (v97 >> 8);
                *(v94 - 6) = v127 * (*(_DWORD *)((char *)v94 + v96 - 24) >> 8);
                *(v94 - 7) = v127 * (*(_DWORD *)((char *)v94 + v96 - 28) >> 8);
              }
              while ( v91 < a10->right - a10->left );
              v75 = (int)a9;
              v80 = v107;
            }
            v122 += a7;
            v84 = v117;
          }
          else
          {
            v84 = v117;
            if ( a10->right - a10->left > 0 )
            {
              v85 = (_DWORD *)((char *)v47 + 12);
              v86 = v128 >> 8;
              v87 = v117 - v47;
              v88 = 0;
              do
              {
                ++v88;
                *v85 += v86 * (*(_DWORD *)((char *)v85 + v87) >> 8);
                v89 = *(_DWORD *)((char *)v85 + v87 - 4);
                v85 += 4;
                *(v85 - 5) += v86 * (v89 >> 8);
                *(v85 - 6) += v86 * (*(_DWORD *)((char *)v85 + v87 - 24) >> 8);
                *(v85 - 7) += v86 * (*(_DWORD *)((char *)v85 + v87 - 28) >> 8);
              }
              while ( v88 < a10->right - a10->left );
              v80 = v107;
            }
          }
          v98 = v110;
          v107 = ++v80;
          if ( v80 < v110 || v74 )
          {
            v126 += v118;
            DxgkpGetBilinearLineFromSource(v126, v75, v10, 0LL, v84, v112, v114, v115);
            v80 = v107;
            v98 = v110;
          }
          v82 = a3 << 16;
          v99 = v80 < v98;
          v81 = v113;
        }
        while ( v99 );
      }
      if ( v74 && a10->right - a10->left > 0 )
      {
        v100 = (_DWORD *)((char *)v47 + 12);
        v101 = v122 + 2;
        v102 = (unsigned __int16)(((a3 - v74) << 16) / a3) >> 8;
        v103 = v117 - v47;
        do
        {
          ++v41;
          v104 = *v100 + v102 * (*(_DWORD *)((char *)v100 + v103) >> 8) + 0x8000;
          v100 += 4;
          v101[1] = BYTE2(v104);
          *v101 = (unsigned int)(*(v100 - 5) + v102 * (*(_DWORD *)((char *)v100 + v103 - 20) >> 8) + 0x8000) >> 16;
          v101 += 4;
          *(v101 - 5) = (unsigned int)(*(v100 - 6) + v102 * (*(_DWORD *)((char *)v100 + v103 - 24) >> 8) + 0x8000) >> 16;
          *(v101 - 6) = (unsigned int)(*(v100 - 7) + v102 * (*(_DWORD *)((char *)v100 + v103 - 28) >> 8) + 0x8000) >> 16;
        }
        while ( v41 < a10->right - a10->left );
      }
    }
    else
    {
      v106 = v20 * v121 % a3;
      if ( v106 )
      {
        DxgkpGetBilinearLineFromSource(&v49[-v118], (int)a9, v10, 0LL, v47, v112, v114, v115);
        v49 = v120;
      }
      DxgkpGetBilinearLineFromSource(v49, (int)a9, v10, 0LL, v117, v112, v114, v115);
      if ( v20 < right )
      {
        v50 = v20 * v121 % a3;
        v51 = v123;
        do
        {
          if ( v50 && v50 < a3 )
          {
            v52 = (unsigned __int16)((v50 << 16) / (unsigned int)a3);
            if ( a10->right - a10->left > 0 )
            {
              v53 = v51;
              v54 = (0x10000 - v52) >> 8;
              v55 = v122 + 2;
              v109 = v52 >> 8;
              v56 = v53 - v47;
              v57 = (unsigned int *)((char *)v47 + 12);
              v58 = 0;
              do
              {
                v59 = *(unsigned int *)((char *)v57 + v56);
                ++v58;
                v60 = *v57;
                v57 += 4;
                v55[1] = (v54 * (v59 >> 8) + 0x8000 + v109 * (v60 >> 8)) >> 16;
                *v55 = (v54 * (*(unsigned int *)((char *)v57 + v56 - 20) >> 8) + 0x8000 + v109 * (*(v57 - 5) >> 8)) >> 16;
                v55 += 4;
                *(v55 - 5) = (v54 * (*(unsigned int *)((char *)v57 + v56 - 24) >> 8) + 0x8000 + v109 * (*(v57 - 6) >> 8)) >> 16;
                *(v55 - 6) = (v54 * (*(unsigned int *)((char *)v57 + v56 - 28) >> 8) + 0x8000 + v109 * (*(v57 - 7) >> 8)) >> 16;
              }
              while ( v58 < a10->right - a10->left );
              v50 = v106;
LABEL_45:
              v51 = v123;
            }
          }
          else if ( a10->right - a10->left > 0 )
          {
            v61 = (int *)((char *)v51 + 8);
            v62 = v122 + 2;
            v63 = 0;
            do
            {
              ++v63;
              v62[1] = (unsigned int)(v61[1] + 0x8000) >> 16;
              v64 = *v61;
              v61 += 4;
              *v62 = (unsigned int)(v64 + 0x8000) >> 16;
              v62 += 4;
              *(v62 - 5) = (unsigned int)(*(v61 - 5) + 0x8000) >> 16;
              *(v62 - 6) = (unsigned int)(*(v61 - 6) + 0x8000) >> 16;
            }
            while ( v63 < a10->right - a10->left );
            goto LABEL_45;
          }
          v122 += a7;
          if ( v50 < a3 )
            v50 += v121 - a3;
          else
            v50 -= a3;
          v106 = v50;
          if ( v50 < a3 )
          {
            v65 = v47;
            ++v20;
            v123 = v47;
            v47 = v51;
            if ( v20 < right || v50 )
            {
              v120 += v118;
              DxgkpGetBilinearLineFromSource(v120, (int)a9, v10, 0LL, v65, v112, v114, v115);
              v50 = v106;
              v51 = v123;
            }
            else
            {
              v51 = v65;
            }
          }
        }
        while ( v20 < right );
      }
      if ( v106 )
      {
        v66 = (unsigned __int16)((v106 << 16) / a3);
        if ( a10->right - a10->left > 0 )
        {
          v67 = (unsigned int *)((char *)v47 + 12);
          v68 = (0x10000 - v66) >> 8;
          v69 = v122 + 2;
          v70 = v66 >> 8;
          v71 = v123 - v47;
          do
          {
            v72 = *(unsigned int *)((char *)v67 + v71);
            ++v41;
            v73 = *v67;
            v67 += 4;
            v69[1] = (v68 * (v72 >> 8) + 0x8000 + v70 * (v73 >> 8)) >> 16;
            *v69 = (v68 * (*(unsigned int *)((char *)v67 + v71 - 20) >> 8) + 0x8000 + v70 * (*(v67 - 5) >> 8)) >> 16;
            v69 += 4;
            *(v69 - 5) = (v68 * (*(unsigned int *)((char *)v67 + v71 - 24) >> 8) + 0x8000 + v70 * (*(v67 - 6) >> 8)) >> 16;
            *(v69 - 6) = (v68 * (*(unsigned int *)((char *)v67 + v71 - 28) >> 8) + 0x8000 + v70 * (*(v67 - 7) >> 8)) >> 16;
          }
          while ( v41 < a10->right - a10->left );
        }
      }
    }
    operator delete(v117);
    return 0LL;
  }
  v43 = WdLogNewEntry5_WdLowResource(v40);
  *(_QWORD *)(v43 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v43);
  return 3221225626LL;
}
