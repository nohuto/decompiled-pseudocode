/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00B11E0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C00CD250 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0136DA0 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
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
  LONG right; // edx
  LONG left; // esi
  LONG bottom; // ebx
  LONG top; // edi
  const struct tagRECT *v17; // r9
  LONG v18; // r12d
  LONG v19; // r13d
  struct tagRECT v20; // xmm0
  unsigned __int8 *v21; // rdi
  int v22; // r10d
  int v23; // eax
  int v24; // r9d
  LONG v25; // r11d
  unsigned __int64 v26; // r8
  LONG v27; // ecx
  LONG v28; // r9d
  LONG v29; // eax
  int v30; // r13d
  unsigned __int8 *v31; // r12
  int v32; // r9d
  SIZE_T v33; // rax
  struct _UFIXPOINT_PIXEL *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _UFIXPOINT_PIXEL *v38; // rdx
  int v39; // ecx
  LONG v40; // r15d
  __int64 v41; // rax
  struct _UFIXPOINT_PIXEL *v42; // r9
  __int64 v43; // rax
  unsigned __int8 *v44; // rcx
  int v45; // esi
  int v46; // edi
  int v47; // r11d
  __int64 v48; // r10
  struct _UFIXPOINT_PIXEL *v49; // r13
  unsigned int v50; // r10d
  unsigned __int8 *v51; // r8
  unsigned int v52; // r9d
  unsigned int v53; // r10d
  unsigned int *v54; // rdx
  signed __int64 v55; // rdi
  unsigned int v56; // ecx
  unsigned int v57; // eax
  struct _UFIXPOINT_PIXEL *v58; // rax
  int v60; // r9d
  unsigned __int8 *v61; // r8
  char *v62; // rax
  int v63; // ecx
  unsigned __int8 *v64; // rbx
  __int64 v65; // rdi
  int v66; // eax
  int v67; // eax
  __int64 v68; // rcx
  unsigned __int8 *v69; // rbx
  __int64 v70; // rdi
  __int64 v71; // rax
  unsigned int v72; // r8d
  unsigned __int8 *v73; // r9
  unsigned int v74; // edi
  unsigned int *v75; // rdx
  unsigned int v76; // r8d
  signed __int64 v77; // r10
  unsigned int v78; // ecx
  unsigned int v79; // eax
  int v80; // r14d
  unsigned __int8 *v81; // r15
  int v82; // esi
  int v83; // edi
  int v84; // r9d
  int v85; // r8d
  char *v86; // rdx
  unsigned int v87; // eax
  int v88; // r8d
  unsigned int v89; // r11d
  int v90; // esi
  int v91; // ecx
  int v92; // r10d
  unsigned int v93; // r9d
  signed __int64 v94; // r8
  char *v95; // rdx
  unsigned int v96; // eax
  unsigned int v97; // r10d
  unsigned int v98; // r8d
  unsigned __int8 *v99; // r11
  int v100; // r13d
  unsigned int v101; // r8d
  int *v102; // r9
  unsigned int v103; // r10d
  signed __int64 v104; // rdx
  unsigned int v105; // ecx
  int v106; // eax
  int v107; // eax
  unsigned __int8 *v108; // r10
  int v109; // r9d
  signed __int64 v110; // r8
  int v111; // r11d
  char *v112; // rdx
  int v113; // ecx
  int v114; // [rsp+40h] [rbp-49h]
  int v115; // [rsp+40h] [rbp-49h]
  LONG v116; // [rsp+44h] [rbp-45h]
  LONG v117; // [rsp+48h] [rbp-41h]
  int v118; // [rsp+48h] [rbp-41h]
  int v119; // [rsp+4Ch] [rbp-3Dh]
  int v120; // [rsp+50h] [rbp-39h]
  int v121; // [rsp+54h] [rbp-35h]
  LONG v122; // [rsp+58h] [rbp-31h]
  int v123; // [rsp+58h] [rbp-31h]
  struct tagRECT v124; // [rsp+60h] [rbp-29h]
  unsigned __int8 *v125; // [rsp+60h] [rbp-29h]
  struct _UFIXPOINT_PIXEL *v126; // [rsp+70h] [rbp-19h]
  struct _UFIXPOINT_PIXEL *v127; // [rsp+78h] [rbp-11h]
  struct _UFIXPOINT_PIXEL *v128; // [rsp+80h] [rbp-9h]
  unsigned __int8 *v129; // [rsp+88h] [rbp-1h]
  int v130; // [rsp+D8h] [rbp+4Fh]
  int v131; // [rsp+E0h] [rbp+57h]

  v131 = a3;
  v130 = a2;
  right = a9->right;
  left = a9->left;
  v114 = right;
  if ( a9->left == right || (bottom = a9->bottom, top = a9->top, top == bottom) )
  {
    v17 = a8;
LABEL_93:
    DxgkpConvertRects(a2, a3, a5, v17, 1u, a9, a10);
    return 0LL;
  }
  v17 = a8;
  v18 = a8->left;
  v117 = a8->right;
  if ( a8->left == v117 )
    goto LABEL_93;
  v19 = a8->top;
  v122 = a8->bottom;
  if ( v19 == v122 )
    goto LABEL_93;
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
      v20 = *a9;
      LODWORD(a9) = 4;
      v21 = a1;
      v119 = a4;
      v124 = v20;
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v22 = a3;
      v131 = v130;
      v124.left = a9->top;
      v116 = v130 - right;
      v124.top = v130 - right;
      v67 = v130 - left;
      v124.right = a9->bottom;
      left = v130 - right;
      v114 = v67;
      v124.bottom = v67;
      v68 = v130 - 1;
      v130 = a3;
      LODWORD(a9) = a4;
      v119 = -4;
      v21 = &a1[4 * v68];
      goto LABEL_9;
    case D3DKMDT_VPPR_ROTATE180:
      v22 = v130;
      LODWORD(a9) = -4;
      v124.left = v130 - right;
      v116 = a3 - bottom;
      v124.top = a3 - bottom;
      v66 = v130 - left;
      left = a3 - bottom;
      v124.right = v66;
      v114 = a3 - top;
      v124.bottom = a3 - top;
      v119 = -a4;
      v21 = &a1[4 * v130 - 4 + a4 * (a3 - 1)];
      goto LABEL_9;
    case D3DKMDT_VPPR_ROTATE270:
      v124.top = a9->left;
      v124.bottom = a9->right;
      v124.left = a3 - bottom;
      v22 = a3;
      v119 = 4;
      v124.right = a3 - top;
      v131 = v130;
      LODWORD(a9) = -a4;
      v130 = a3;
      v21 = &a1[a4 * (a3 - 1)];
      goto LABEL_8;
    default:
      v21 = (unsigned __int8 *)a9;
      v119 = (int)a9;
      break;
  }
  v22 = v130;
  left = v124.top;
  v114 = v124.bottom;
LABEL_8:
  v116 = left;
LABEL_9:
  v23 = v124.left * (v117 - v18);
  v24 = v124.right * (v117 - v18);
  v123 = v122 - v19;
  v118 = v117 - v18;
  v121 = (v22 * (v23 / v22) + v118 - 1) / v118;
  v25 = v23 / v22 + v18;
  v120 = v22 * ((v24 - 1) / v22 + 1) / v118;
  v26 = HIDWORD(*(_QWORD *)&v124.left);
  a10->left = v25;
  v27 = v123 * v124.top / v131 + v19;
  a10->top = v27;
  v28 = (v22 + v24 - 1) / v22 + v18;
  a10->right = v28;
  v29 = v19 + (v131 + v123 * v124.bottom - 1) / v131;
  v30 = a7;
  a10->bottom = v29;
  v31 = &a6[4 * v25 + a7 * v27];
  v125 = v31;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v118 == v130 )
  {
    if ( v123 == v131 )
    {
      v64 = &v21[v119 * (int)v26 + (int)a9 * v121];
      if ( (int)v26 < v124.bottom )
      {
        v65 = (unsigned int)(v114 - v26);
        do
        {
          memmove(v31, v64, (unsigned int)(4 * (v120 - v121)));
          v31 += a7;
          v64 += v119;
          --v65;
        }
        while ( v65 );
      }
      return 0LL;
    }
  }
  else if ( v123 == v131 )
  {
    v69 = &v21[v119 * left];
    if ( left < v114 )
    {
      v70 = (unsigned int)(v114 - v116);
      do
      {
        DxgkpGetBilinearLineFromSource(v69, (int)a9, v130, (struct _PIXEL *)v31, 0LL, v118, v121, v120);
        v31 += a7;
        v69 += v119;
        --v70;
      }
      while ( v70 );
    }
    return 0LL;
  }
  v32 = v28 - v25;
  v33 = 16LL * (2 * v32 + 2);
  if ( !is_mul_ok(2 * v32 + 2, 0x10uLL) )
    v33 = -1LL;
  v34 = (struct _UFIXPOINT_PIXEL *)operator new[](v33, 0x4B677844u, PagedPool);
  v128 = v34;
  v38 = v34;
  if ( v34 )
  {
    v39 = a10->right - a10->left;
    v40 = v116;
    v127 = v34;
    v41 = 2LL * v39;
    v42 = (struct _UFIXPOINT_PIXEL *)((char *)v38 + 16 * v39 + 16);
    v126 = v42;
    *((_QWORD *)v38 + v41) = 0LL;
    *((_QWORD *)v38 + v41 + 1) = 0LL;
    v43 = 2LL * (a10->right - a10->left);
    *((_QWORD *)v42 + v43) = 0LL;
    *((_QWORD *)v42 + v43 + 1) = 0LL;
    v44 = &v21[v119 * v116];
    v129 = v44;
    if ( v123 <= v131 )
    {
      v80 = (v123 + v131 * (v116 * v123 / v131) - 1) / v123;
      v81 = &v21[v119 * v80];
      v82 = v131 * ((v114 * v123 - 1) / v131 + 1) / v123;
      v115 = v82;
      v83 = v123 * v80 % v131;
      if ( v83 <= 0 )
      {
        memset(v42, 0, 16LL * (a10->right - a10->left));
      }
      else
      {
        DxgkpGetBilinearLineFromSource(&v81[-v119], (int)a9, v130, 0LL, v42, v118, v121, v120);
        v84 = 0;
        if ( a10->right - a10->left > 0 )
        {
          v85 = (unsigned __int16)((v83 << 16) / v131) >> 8;
          v86 = (char *)v126 + 8;
          do
          {
            v87 = *((_DWORD *)v86 + 1);
            v86 += 16;
            ++v84;
            *((_DWORD *)v86 - 3) = v85 * (v87 >> 8);
            *((_DWORD *)v86 - 4) = v85 * (*((_DWORD *)v86 - 4) >> 8);
            *((_DWORD *)v86 - 5) = v85 * (*((_DWORD *)v86 - 5) >> 8);
            *((_DWORD *)v86 - 6) = v85 * (*((_DWORD *)v86 - 6) >> 8);
          }
          while ( v84 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v81, (int)a9, v130, 0LL, v128, v118, v121, v120);
      v88 = v131;
      if ( v80 < v82 )
      {
        v89 = (unsigned __int16)((v123 << 16) / v131);
        v90 = v83 << 16;
        do
        {
          v91 = a10->right - a10->left;
          v83 += v123;
          v90 += v123 << 16;
          if ( v83 >= v88 )
          {
            v90 -= v131 << 16;
            v83 -= v88;
            v97 = (unsigned __int16)(v90 / v88);
            if ( v91 > 0 )
            {
              v98 = v89;
              v99 = v125 + 2;
              v100 = 0;
              v101 = (v98 - v97) >> 8;
              v102 = (int *)((char *)v126 + 12);
              v103 = v97 >> 8;
              v104 = v128 - v126;
              do
              {
                v105 = *(int *)((char *)v102 + v104);
                v99 += 4;
                v106 = *v102;
                v102 += 4;
                ++v100;
                *(v99 - 3) = (v106 + 0x8000 + v101 * (v105 >> 8)) >> 16;
                *(v99 - 4) = (*(v102 - 5) + 0x8000 + v101 * (*(unsigned int *)((char *)v102 + v104 - 20) >> 8)) >> 16;
                *(v99 - 5) = (*(v102 - 6) + 0x8000 + v101 * (*(unsigned int *)((char *)v102 + v104 - 24) >> 8)) >> 16;
                *(v99 - 6) = (*(v102 - 7) + 0x8000 + v101 * (*(unsigned int *)((char *)v102 + v104 - 28) >> 8)) >> 16;
                *(v102 - 4) = v103 * (*(unsigned int *)((char *)v102 + v104 - 16) >> 8);
                *(v102 - 5) = v103 * (*(unsigned int *)((char *)v102 + v104 - 20) >> 8);
                *(v102 - 6) = v103 * (*(unsigned int *)((char *)v102 + v104 - 24) >> 8);
                *(v102 - 7) = v103 * (*(unsigned int *)((char *)v102 + v104 - 28) >> 8);
              }
              while ( v100 < a10->right - a10->left );
              v30 = a7;
              v89 = (unsigned __int16)((v123 << 16) / v131);
              v88 = v131;
            }
            v125 += v30;
          }
          else
          {
            v92 = 0;
            if ( v91 > 0 )
            {
              v93 = v89 >> 8;
              v94 = v128 - v126;
              v95 = (char *)v126 + 12;
              do
              {
                v96 = *(_DWORD *)&v95[v94];
                v95 += 16;
                ++v92;
                *((_DWORD *)v95 - 4) += v93 * (v96 >> 8);
                *((_DWORD *)v95 - 5) += v93 * (*(_DWORD *)&v95[v94 - 20] >> 8);
                *((_DWORD *)v95 - 6) += v93 * (*(_DWORD *)&v95[v94 - 24] >> 8);
                *((_DWORD *)v95 - 7) += v93 * (*(_DWORD *)&v95[v94 - 28] >> 8);
              }
              while ( v92 < a10->right - a10->left );
              v88 = v131;
            }
          }
          v107 = v115;
          if ( ++v80 < v115 || v83 )
          {
            v81 += v119;
            DxgkpGetBilinearLineFromSource(v81, (int)a9, v130, 0LL, v128, v118, v121, v120);
            v107 = v115;
            v89 = (unsigned __int16)((v123 << 16) / v131);
            v88 = v131;
          }
        }
        while ( v80 < v107 );
        v31 = v125;
      }
      if ( v83 && a10->right - a10->left > 0 )
      {
        v108 = v31 + 2;
        v109 = (unsigned __int16)(((v88 - v83) << 16) / v88) >> 8;
        v110 = v128 - v126;
        v111 = 0;
        v112 = (char *)v126 + 12;
        do
        {
          v108 += 4;
          v113 = *(_DWORD *)&v112[v110] >> 8;
          v112 += 16;
          ++v111;
          *(v108 - 3) = (unsigned int)(*((_DWORD *)v112 - 4) + v109 * v113 + 0x8000) >> 16;
          *(v108 - 4) = (unsigned int)(*((_DWORD *)v112 - 5) + v109 * (*(_DWORD *)&v112[v110 - 20] >> 8) + 0x8000) >> 16;
          *(v108 - 5) = (unsigned int)(*((_DWORD *)v112 - 6) + v109 * (*(_DWORD *)&v112[v110 - 24] >> 8) + 0x8000) >> 16;
          *(v108 - 6) = (unsigned int)(*((_DWORD *)v112 - 7) + v109 * (*(_DWORD *)&v112[v110 - 28] >> 8) + 0x8000) >> 16;
        }
        while ( v111 < a10->right - a10->left );
      }
    }
    else
    {
      v45 = v116 * v123 % v131;
      if ( v45 )
      {
        DxgkpGetBilinearLineFromSource(&v44[-v119], (int)a9, v130, 0LL, v42, v118, v121, v120);
        v44 = &v21[v119 * v116];
      }
      DxgkpGetBilinearLineFromSource(v44, (int)a9, v130, 0LL, v128, v118, v121, v120);
      v46 = v114;
      v47 = 0;
      if ( v116 < v114 )
      {
        v48 = a7;
        v49 = v127;
        do
        {
          if ( v45 && v45 < v131 )
          {
            v50 = (unsigned __int16)((v45 << 16) / (unsigned int)v131);
            if ( a10->right - a10->left > 0 )
            {
              v51 = v31 + 2;
              v52 = (0x10000 - v50) >> 8;
              v53 = v50 >> 8;
              v54 = (unsigned int *)((char *)v126 + 12);
              v55 = v49 - v126;
              do
              {
                v56 = *(unsigned int *)((char *)v54 + v55);
                v51 += 4;
                v57 = *v54;
                v54 += 4;
                ++v47;
                *(v51 - 3) = (v52 * (v56 >> 8) + 0x8000 + v53 * (v57 >> 8)) >> 16;
                *(v51 - 4) = (v52 * (*(unsigned int *)((char *)v54 + v55 - 20) >> 8) + 0x8000 + v53 * (*(v54 - 5) >> 8)) >> 16;
                *(v51 - 5) = (v52 * (*(unsigned int *)((char *)v54 + v55 - 24) >> 8) + 0x8000 + v53 * (*(v54 - 6) >> 8)) >> 16;
                *(v51 - 6) = (v52 * (*(unsigned int *)((char *)v54 + v55 - 28) >> 8) + 0x8000 + v53 * (*(v54 - 7) >> 8)) >> 16;
              }
              while ( v47 < a10->right - a10->left );
              v46 = v114;
            }
            v31 += a7;
          }
          else
          {
            v60 = 0;
            if ( a10->right - a10->left > 0 )
            {
              v61 = v31 + 2;
              v62 = (char *)v49 + 8;
              do
              {
                v61 += 4;
                v63 = *((_DWORD *)v62 + 1) + 0x8000;
                v62 += 16;
                ++v60;
                *(v61 - 3) = BYTE2(v63);
                *(v61 - 4) = (unsigned int)(*((_DWORD *)v62 - 4) + 0x8000) >> 16;
                *(v61 - 5) = (unsigned int)(*((_DWORD *)v62 - 5) + 0x8000) >> 16;
                *(v61 - 6) = (unsigned int)(*((_DWORD *)v62 - 6) + 0x8000) >> 16;
              }
              while ( v60 < a10->right - a10->left );
            }
            v31 += v48;
          }
          if ( v45 >= v131 )
            v45 -= v131;
          else
            v45 += v123 - v131;
          if ( v45 < v131 )
          {
            v58 = v126;
            ++v40;
            v126 = v49;
            v127 = v58;
            if ( v40 < v46 || v45 )
            {
              v129 += v119;
              DxgkpGetBilinearLineFromSource(v129, (int)a9, v130, 0LL, v58, v118, v121, v120);
              v49 = v127;
            }
            else
            {
              v49 = v58;
            }
          }
          v48 = a7;
          v47 = 0;
        }
        while ( v40 < v46 );
      }
      if ( v45 )
      {
        v72 = (unsigned __int16)((v45 << 16) / v131);
        if ( a10->right - a10->left > 0 )
        {
          v73 = v31 + 2;
          v74 = (0x10000 - v72) >> 8;
          v75 = (unsigned int *)((char *)v126 + 12);
          v76 = v72 >> 8;
          v77 = v127 - v126;
          do
          {
            v78 = *(unsigned int *)((char *)v75 + v77);
            v73 += 4;
            v79 = *v75;
            v75 += 4;
            ++v47;
            *(v73 - 3) = (v74 * (v78 >> 8) + 0x8000 + v76 * (v79 >> 8)) >> 16;
            *(v73 - 4) = (v74 * (*(unsigned int *)((char *)v75 + v77 - 20) >> 8) + 0x8000 + v76 * (*(v75 - 5) >> 8)) >> 16;
            *(v73 - 5) = (v74 * (*(unsigned int *)((char *)v75 + v77 - 24) >> 8) + 0x8000 + v76 * (*(v75 - 6) >> 8)) >> 16;
            *(v73 - 6) = (v74 * (*(unsigned int *)((char *)v75 + v77 - 28) >> 8) + 0x8000 + v76 * (*(v75 - 7) >> 8)) >> 16;
          }
          while ( v47 < a10->right - a10->left );
        }
      }
    }
    operator delete(v128);
    return 0LL;
  }
  v71 = WdLogNewEntry5_WdLowResource(v35, 0LL, v36, v37);
  *(_QWORD *)(v71 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v71);
  return 3221225626LL;
}
