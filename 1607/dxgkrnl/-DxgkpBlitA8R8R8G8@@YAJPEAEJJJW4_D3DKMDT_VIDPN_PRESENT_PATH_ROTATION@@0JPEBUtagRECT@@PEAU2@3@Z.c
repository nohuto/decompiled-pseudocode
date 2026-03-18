/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0070A70
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C00E3080 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C015659C (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
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
  int v12; // r13d
  LONG right; // edx
  LONG left; // esi
  LONG bottom; // r10d
  LONG top; // edi
  const struct tagRECT *v18; // r9
  LONG v19; // r15d
  LONG v20; // r12d
  struct tagRECT v21; // xmm0
  int v22; // r11d
  unsigned __int8 *v23; // rdi
  LONG v24; // esi
  LONG v25; // r14d
  LONG v26; // r8d
  int v27; // r8d
  int v28; // eax
  LONG v29; // r11d
  unsigned __int64 v30; // r8
  LONG v31; // ecx
  LONG v32; // r9d
  LONG v33; // eax
  int v34; // r12d
  unsigned __int8 *v35; // r15
  int v36; // ecx
  int v37; // r9d
  unsigned __int64 v38; // rax
  struct _UFIXPOINT_PIXEL *v39; // rax
  __int64 v40; // rcx
  struct _UFIXPOINT_PIXEL *v41; // rdx
  int v42; // ecx
  __int64 v43; // rax
  struct _UFIXPOINT_PIXEL *v44; // rbp
  __int64 v45; // rax
  unsigned __int8 *v46; // rcx
  int v47; // esi
  LONG v48; // edi
  int v49; // r11d
  __int64 v50; // r10
  struct _UFIXPOINT_PIXEL *v51; // r12
  unsigned int v52; // r10d
  unsigned __int8 *v53; // r8
  unsigned int v54; // r9d
  unsigned int *v55; // rdx
  unsigned int v56; // r10d
  signed __int64 v57; // rdi
  unsigned int v58; // ecx
  unsigned int v59; // eax
  struct _UFIXPOINT_PIXEL *v60; // rcx
  int v62; // r9d
  unsigned __int8 *v63; // r8
  char *v64; // rax
  int v65; // ecx
  unsigned __int8 *v66; // rbx
  __int64 v67; // rdi
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  unsigned __int8 *v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // rax
  unsigned int v74; // r8d
  unsigned int *v75; // rdx
  unsigned int v76; // r9d
  unsigned int v77; // r8d
  signed __int64 v78; // r10
  unsigned int v79; // edi
  unsigned __int8 *v80; // r9
  unsigned int v81; // ecx
  unsigned int v82; // eax
  int v83; // ebp
  unsigned __int8 *v84; // r14
  int v85; // r13d
  int v86; // edi
  int v87; // r9d
  struct _UFIXPOINT_PIXEL *v88; // rsi
  int v89; // r8d
  char *v90; // rdx
  unsigned int v91; // eax
  int v92; // r8d
  unsigned int v93; // r11d
  int v94; // esi
  int v95; // ecx
  int v96; // r10d
  unsigned int v97; // r9d
  signed __int64 v98; // r8
  char *v99; // rdx
  unsigned int v100; // eax
  unsigned int v101; // r10d
  unsigned int v102; // edx
  unsigned __int8 *v103; // r11
  int v104; // r12d
  unsigned int v105; // edx
  int *v106; // r9
  unsigned int v107; // r10d
  signed __int64 v108; // r8
  unsigned int v109; // ecx
  int v110; // eax
  unsigned int v111; // r9d
  unsigned __int8 *v112; // r10
  signed __int64 v113; // r8
  unsigned int v114; // r9d
  int v115; // r11d
  char *v116; // rdx
  int v117; // ecx
  int v118; // [rsp+40h] [rbp-88h]
  int v119; // [rsp+40h] [rbp-88h]
  LONG v120; // [rsp+44h] [rbp-84h]
  unsigned int v121; // [rsp+44h] [rbp-84h]
  LONG v122; // [rsp+48h] [rbp-80h]
  int v123; // [rsp+48h] [rbp-80h]
  LONG v124; // [rsp+4Ch] [rbp-7Ch]
  int v125; // [rsp+4Ch] [rbp-7Ch]
  int v126; // [rsp+50h] [rbp-78h]
  int v127; // [rsp+54h] [rbp-74h]
  struct tagRECT v128; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v129; // [rsp+58h] [rbp-70h]
  struct _UFIXPOINT_PIXEL *v130; // [rsp+68h] [rbp-60h]
  struct _UFIXPOINT_PIXEL *v131; // [rsp+70h] [rbp-58h]
  struct _UFIXPOINT_PIXEL *v132; // [rsp+78h] [rbp-50h]
  unsigned __int8 *v133; // [rsp+80h] [rbp-48h]
  int v134; // [rsp+D8h] [rbp+10h]
  int v135; // [rsp+E0h] [rbp+18h]
  int v136; // [rsp+110h] [rbp+48h]

  v135 = a3;
  v134 = a2;
  v12 = a3;
  right = a9->right;
  left = a9->left;
  v120 = right;
  if ( a9->left == right || (bottom = a9->bottom, top = a9->top, top == bottom) )
  {
    v18 = a8;
LABEL_91:
    DxgkpConvertRects(a2, a3, a5, v18, 1u, a9, a10);
    return 0LL;
  }
  v18 = a8;
  v19 = a8->left;
  v122 = a8->right;
  if ( a8->left == v122 )
    goto LABEL_91;
  v20 = a8->top;
  v124 = a8->bottom;
  if ( v20 == v124 )
    goto LABEL_91;
  if ( a5 != D3DKMDT_VPPR_IDENTITY )
  {
    switch ( a5 )
    {
      case D3DKMDT_VPPR_ROTATE90:
        v69 = v134;
        v22 = a3;
        v70 = v134;
        v134 = a3;
        v135 = v69;
        v128.top = v70 - right;
        v128.left = a9->top;
        v12 = v69;
        v26 = v128.left;
        v24 = v69 - left;
        v120 = v24;
        v128.bottom = v24;
        v136 = a4;
        v23 = &a1[4 * v69 - 4];
        v126 = -4;
        v25 = v70 - right;
        goto LABEL_8;
      case D3DKMDT_VPPR_ROTATE180:
        v22 = v134;
        v136 = -4;
        v119 = a3 - bottom;
        v128.top = a3 - bottom;
        bottom = v134 - left;
        v126 = -a4;
        v26 = v134 - right;
        v128.left = v134 - right;
        v24 = v12 - top;
        v128.bottom = v12 - top;
        v25 = v119;
        v23 = &a1[4 * v134 - 4 + a4 * (v12 - 1)];
        goto LABEL_7;
      case D3DKMDT_VPPR_ROTATE270:
        v126 = 4;
        v24 = a9->right;
        v26 = a3 - bottom;
        v22 = v12;
        v128.top = a9->left;
        bottom = v12 - top;
        v128.left = v26;
        v135 = v134;
        v136 = -a4;
        v68 = a4 * (v12 - 1);
        v134 = v12;
        v12 = v135;
        *(_QWORD *)&v128.right = __PAIR64__(right, bottom);
        v23 = &a1[v68];
        v25 = v128.top;
        goto LABEL_8;
    }
  }
  v21 = *a9;
  v22 = v134;
  v23 = a1;
  v136 = 4;
  v128 = v21;
  v24 = v21.bottom;
  bottom = v21.right;
  v25 = v21.top;
  v26 = v21.left;
  v126 = a4;
LABEL_7:
  v120 = v24;
LABEL_8:
  v125 = v124 - v20;
  v123 = v122 - v19;
  v27 = v26 * v123 / v22;
  v118 = (v22 * v27 + v123 - 1) / v123;
  v28 = v22 * ((bottom * v123 - 1) / v22 + 1);
  v29 = v27 + v19;
  v30 = HIDWORD(*(_QWORD *)&v128.left);
  v127 = v28 / v123;
  a10->left = v29;
  v31 = v125 * v128.top / v12 + v20;
  a10->top = v31;
  v32 = (bottom * v123 + v134 - 1) / v134 + v19;
  a10->right = v32;
  v33 = v20 + (v12 + v125 * v128.bottom - 1) / v12;
  v34 = a7;
  a10->bottom = v33;
  v35 = &a6[4 * v29 + a7 * v31];
  v36 = v134;
  v129 = v35;
  if ( v123 == v134 && a5 == D3DKMDT_VPPR_IDENTITY )
  {
    if ( v125 == v12 )
    {
      v66 = &v23[v126 * (int)v30 + v136 * v118];
      if ( (int)v30 < v128.bottom )
      {
        v67 = (unsigned int)(v120 - v30);
        do
        {
          memmove(v35, v66, (unsigned int)(4 * (v127 - v118)));
          v35 += a7;
          v66 += v126;
          --v67;
        }
        while ( v67 );
      }
      return 0LL;
    }
  }
  else if ( v125 == v12 )
  {
    v71 = &v23[v126 * v25];
    if ( v25 < v24 )
    {
      v72 = (unsigned int)(v120 - v25);
      do
      {
        DxgkpGetBilinearLineFromSource(v71, v136, v36, (struct _PIXEL *)v35, 0LL, v123, v118, v127);
        v36 = v134;
        v35 += a7;
        v71 += v126;
        --v72;
      }
      while ( v72 );
    }
    return 0LL;
  }
  v37 = v32 - v29;
  v38 = 16LL * (2 * v37 + 2);
  if ( !is_mul_ok(2 * v37 + 2, 0x10uLL) )
    v38 = -1LL;
  v39 = (struct _UFIXPOINT_PIXEL *)operator new(v38, 0x4B677844u, PagedPool);
  v132 = v39;
  v41 = v39;
  if ( v39 )
  {
    v42 = a10->right - a10->left;
    v130 = v39;
    v43 = 2LL * v42;
    v44 = (struct _UFIXPOINT_PIXEL *)((char *)v41 + 16 * v42 + 16);
    v131 = v44;
    *((_QWORD *)v41 + v43) = 0LL;
    *((_QWORD *)v41 + v43 + 1) = 0LL;
    v45 = 2LL * (a10->right - a10->left);
    *((_QWORD *)v44 + v45) = 0LL;
    *((_QWORD *)v44 + v45 + 1) = 0LL;
    v46 = &v23[v126 * v25];
    v133 = v46;
    if ( v125 <= v12 )
    {
      v121 = (unsigned __int16)((v125 << 16) / v12);
      v83 = (v125 + v12 * (v25 * v125 / v12) - 1) / v125;
      v84 = &v23[v126 * v83];
      v85 = v12 * ((v24 * v125 - 1) / v12 + 1) / v125;
      v86 = v125 * v83 % v135;
      if ( v86 <= 0 )
      {
        v88 = v131;
        memset(v131, 0, 16LL * (a10->right - a10->left));
      }
      else
      {
        DxgkpGetBilinearLineFromSource(&v84[-v126], v136, v134, 0LL, v131, v123, v118, v127);
        v87 = 0;
        v88 = v131;
        if ( a10->right - a10->left > 0 )
        {
          v89 = (unsigned __int16)((v86 << 16) / v135) >> 8;
          v90 = (char *)v131 + 8;
          do
          {
            v91 = *((_DWORD *)v90 + 1);
            v90 += 16;
            ++v87;
            *((_DWORD *)v90 - 3) = v89 * (v91 >> 8);
            *((_DWORD *)v90 - 4) = v89 * (*((_DWORD *)v90 - 4) >> 8);
            *((_DWORD *)v90 - 5) = v89 * (*((_DWORD *)v90 - 5) >> 8);
            *((_DWORD *)v90 - 6) = v89 * (*((_DWORD *)v90 - 6) >> 8);
          }
          while ( v87 < a10->right - a10->left );
        }
      }
      DxgkpGetBilinearLineFromSource(v84, v136, v134, 0LL, v132, v123, v118, v127);
      v92 = v135;
      if ( v83 < v85 )
      {
        v93 = v121;
        v94 = v86 << 16;
        do
        {
          v95 = a10->right - a10->left;
          v86 += v125;
          v94 += v125 << 16;
          if ( v86 >= v92 )
          {
            v94 -= v135 << 16;
            v86 -= v92;
            v101 = (unsigned __int16)(v94 / v92);
            if ( v95 > 0 )
            {
              v102 = v93;
              v103 = v129 + 2;
              v104 = 0;
              v105 = (v102 - v101) >> 8;
              v106 = (int *)((char *)v131 + 12);
              v107 = v101 >> 8;
              v108 = v132 - v131;
              do
              {
                v109 = *(int *)((char *)v106 + v108);
                v103 += 4;
                v110 = *v106;
                v106 += 4;
                ++v104;
                *(v103 - 3) = (v110 + 0x8000 + v105 * (v109 >> 8)) >> 16;
                *(v103 - 4) = (*(v106 - 5) + 0x8000 + v105 * (*(unsigned int *)((char *)v106 + v108 - 20) >> 8)) >> 16;
                *(v103 - 5) = (*(v106 - 6) + 0x8000 + v105 * (*(unsigned int *)((char *)v106 + v108 - 24) >> 8)) >> 16;
                *(v103 - 6) = (*(v106 - 7) + 0x8000 + v105 * (*(unsigned int *)((char *)v106 + v108 - 28) >> 8)) >> 16;
                *(v106 - 4) = v107 * (*(unsigned int *)((char *)v106 + v108 - 16) >> 8);
                *(v106 - 5) = v107 * (*(unsigned int *)((char *)v106 + v108 - 20) >> 8);
                *(v106 - 6) = v107 * (*(unsigned int *)((char *)v106 + v108 - 24) >> 8);
                *(v106 - 7) = v107 * (*(unsigned int *)((char *)v106 + v108 - 28) >> 8);
              }
              while ( v104 < a10->right - a10->left );
              v34 = a7;
              v93 = v121;
              v92 = v135;
            }
            v129 += v34;
          }
          else
          {
            v96 = 0;
            if ( v95 > 0 )
            {
              v97 = v93 >> 8;
              v98 = v132 - v131;
              v99 = (char *)v131 + 12;
              do
              {
                v100 = *(_DWORD *)&v99[v98];
                v99 += 16;
                ++v96;
                *((_DWORD *)v99 - 4) += v97 * (v100 >> 8);
                *((_DWORD *)v99 - 5) += v97 * (*(_DWORD *)&v99[v98 - 20] >> 8);
                *((_DWORD *)v99 - 6) += v97 * (*(_DWORD *)&v99[v98 - 24] >> 8);
                *((_DWORD *)v99 - 7) += v97 * (*(_DWORD *)&v99[v98 - 28] >> 8);
              }
              while ( v96 < a10->right - a10->left );
              v92 = v135;
            }
          }
          if ( ++v83 < v85 || v86 )
          {
            v84 += v126;
            DxgkpGetBilinearLineFromSource(v84, v136, v134, 0LL, v132, v123, v118, v127);
            v93 = v121;
            v92 = v135;
          }
        }
        while ( v83 < v85 );
        v35 = v129;
        v88 = v131;
      }
      if ( v86 )
      {
        v111 = (unsigned __int16)(((v92 - v86) << 16) / v92);
        if ( a10->right - a10->left > 0 )
        {
          v112 = v35 + 2;
          v113 = v132 - v88;
          v114 = v111 >> 8;
          v115 = 0;
          v116 = (char *)v88 + 12;
          do
          {
            v112 += 4;
            v117 = *(_DWORD *)&v116[v113] >> 8;
            v116 += 16;
            ++v115;
            *(v112 - 3) = (*((_DWORD *)v116 - 4) + v114 * v117 + 0x8000) >> 16;
            *(v112 - 4) = (*((_DWORD *)v116 - 5) + v114 * (*(_DWORD *)&v116[v113 - 20] >> 8) + 0x8000) >> 16;
            *(v112 - 5) = (*((_DWORD *)v116 - 6) + v114 * (*(_DWORD *)&v116[v113 - 24] >> 8) + 0x8000) >> 16;
            *(v112 - 6) = (*((_DWORD *)v116 - 7) + v114 * (*(_DWORD *)&v116[v113 - 28] >> 8) + 0x8000) >> 16;
          }
          while ( v115 < a10->right - a10->left );
        }
      }
    }
    else
    {
      v47 = v25 * v125 % v12;
      if ( v47 )
      {
        DxgkpGetBilinearLineFromSource(&v46[-v126], v136, v134, 0LL, v44, v123, v118, v127);
        v46 = &v23[v126 * v25];
      }
      DxgkpGetBilinearLineFromSource(v46, v136, v134, 0LL, v132, v123, v118, v127);
      v48 = v120;
      v49 = 0;
      if ( v25 < v120 )
      {
        v50 = a7;
        v51 = v130;
        do
        {
          if ( v47 && v47 < v12 )
          {
            v52 = (unsigned __int16)((v47 << 16) / (unsigned int)v12);
            if ( a10->right - a10->left > 0 )
            {
              v53 = v35 + 2;
              v54 = (0x10000 - v52) >> 8;
              v55 = (unsigned int *)((char *)v44 + 12);
              v56 = v52 >> 8;
              v57 = v51 - v44;
              do
              {
                v58 = *(unsigned int *)((char *)v55 + v57);
                v53 += 4;
                v59 = *v55;
                v55 += 4;
                ++v49;
                *(v53 - 3) = (v54 * (v58 >> 8) + 0x8000 + v56 * (v59 >> 8)) >> 16;
                *(v53 - 4) = (v54 * (*(unsigned int *)((char *)v55 + v57 - 20) >> 8) + 0x8000 + v56 * (*(v55 - 5) >> 8)) >> 16;
                *(v53 - 5) = (v54 * (*(unsigned int *)((char *)v55 + v57 - 24) >> 8) + 0x8000 + v56 * (*(v55 - 6) >> 8)) >> 16;
                *(v53 - 6) = (v54 * (*(unsigned int *)((char *)v55 + v57 - 28) >> 8) + 0x8000 + v56 * (*(v55 - 7) >> 8)) >> 16;
              }
              while ( v49 < a10->right - a10->left );
              v48 = v120;
            }
            v35 += a7;
          }
          else
          {
            v62 = 0;
            if ( a10->right - a10->left > 0 )
            {
              v63 = v35 + 2;
              v64 = (char *)v51 + 8;
              do
              {
                v63 += 4;
                v65 = *((_DWORD *)v64 + 1) + 0x8000;
                v64 += 16;
                ++v62;
                *(v63 - 3) = BYTE2(v65);
                *(v63 - 4) = (unsigned int)(*((_DWORD *)v64 - 4) + 0x8000) >> 16;
                *(v63 - 5) = (unsigned int)(*((_DWORD *)v64 - 5) + 0x8000) >> 16;
                *(v63 - 6) = (unsigned int)(*((_DWORD *)v64 - 6) + 0x8000) >> 16;
              }
              while ( v62 < a10->right - a10->left );
            }
            v35 += v50;
          }
          if ( v47 >= v12 )
            v47 -= v12;
          else
            v47 += v125 - v12;
          if ( v47 < v12 )
          {
            v60 = v44;
            ++v25;
            v130 = v44;
            v44 = v51;
            if ( v25 < v48 || v47 )
            {
              v133 += v126;
              DxgkpGetBilinearLineFromSource(v133, v136, v134, 0LL, v60, v123, v118, v127);
              v51 = v130;
            }
            else
            {
              v51 = v60;
            }
          }
          v50 = a7;
          v49 = 0;
        }
        while ( v25 < v48 );
      }
      if ( v47 )
      {
        v74 = (unsigned __int16)((v47 << 16) / v12);
        if ( a10->right - a10->left > 0 )
        {
          v75 = (unsigned int *)((char *)v44 + 12);
          v76 = 0x10000 - v74;
          v77 = v74 >> 8;
          v78 = v130 - v44;
          v79 = v76 >> 8;
          v80 = v35 + 2;
          do
          {
            v81 = *(unsigned int *)((char *)v75 + v78);
            v80 += 4;
            v82 = *v75;
            v75 += 4;
            ++v49;
            *(v80 - 3) = (v79 * (v81 >> 8) + 0x8000 + v77 * (v82 >> 8)) >> 16;
            *(v80 - 4) = (v79 * (*(unsigned int *)((char *)v75 + v78 - 20) >> 8) + 0x8000 + v77 * (*(v75 - 5) >> 8)) >> 16;
            *(v80 - 5) = (v79 * (*(unsigned int *)((char *)v75 + v78 - 24) >> 8) + 0x8000 + v77 * (*(v75 - 6) >> 8)) >> 16;
            *(v80 - 6) = (v79 * (*(unsigned int *)((char *)v75 + v78 - 28) >> 8) + 0x8000 + v77 * (*(v75 - 7) >> 8)) >> 16;
          }
          while ( v49 < a10->right - a10->left );
        }
      }
    }
    operator delete(v132);
    return 0LL;
  }
  v73 = WdLogNewEntry5_WdLowResource(v40);
  *(_QWORD *)(v73 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v73);
  return 3221225626LL;
}
