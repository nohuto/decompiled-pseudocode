/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C009C820
 * Callers:
 *     EngTextOut @ 0x1C009BA80 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D1988 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015BAA0 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015BAF4 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vExpandAndCopyText(
        struct SURFACE *a1,
        struct _FONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        struct SURFACE *a8,
        struct SURFACE *a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        int a12,
        int a13,
        unsigned int a14,
        struct _RECTL *a15,
        struct _RECTL *a16,
        unsigned int a17,
        struct _BRUSHOBJ *a18,
        struct _POINTL *a19)
{
  struct SURFACE *v22; // rdi
  struct _RECTL *v23; // r12
  unsigned int v24; // eax
  GLYPHDEF **p_pgdf; // rdx
  LONG top; // edx
  int v27; // ecx
  unsigned int v28; // esi
  struct _RECTL *v29; // r10
  unsigned int v30; // r11d
  int v31; // eax
  int v32; // r11d
  __int64 (__fastcall *v33)(int, int, int, int, int, int, int, int); // r13
  LONG *i; // rdi
  LONG v35; // ebx
  LONG v36; // ecx
  LONG v37; // r15d
  LONG v38; // r12d
  LONG v39; // edx
  LONG v40; // r14d
  int v41; // r9d
  LONG v42; // r8d
  void (__fastcall *v43)(void *); // rbx
  LONG right; // ecx
  LONG left; // r8d
  signed int v46; // r8d
  LONG v47; // r10d
  signed int v48; // r10d
  LONG v49; // ecx
  LONG v50; // r9d
  int v51; // r9d
  LONG bottom; // edx
  int v53; // edx
  LONG v54; // [rsp+A0h] [rbp-378h]
  int v55; // [rsp+A8h] [rbp-370h]
  int v56; // [rsp+ACh] [rbp-36Ch]
  __int64 v57; // [rsp+B0h] [rbp-368h] BYREF
  struct _RECTL *v58; // [rsp+B8h] [rbp-360h]
  struct _POINTL v59; // [rsp+C0h] [rbp-358h] BYREF
  struct _RECTL v60; // [rsp+C8h] [rbp-350h] BYREF
  struct _POINTL *v61; // [rsp+D8h] [rbp-340h]
  struct SURFACE *v62; // [rsp+E0h] [rbp-338h]
  struct _BRUSHOBJ *v63; // [rsp+E8h] [rbp-330h]
  void * near *v64; // [rsp+F0h] [rbp-328h]
  int v65; // [rsp+F8h] [rbp-320h]
  __int64 v66; // [rsp+100h] [rbp-318h] BYREF
  int v67; // [rsp+108h] [rbp-310h]
  _QWORD v68[2]; // [rsp+110h] [rbp-308h]
  __int64 v69; // [rsp+120h] [rbp-2F8h]
  _BYTE v70[80]; // [rsp+130h] [rbp-2E8h] BYREF
  char v71[56]; // [rsp+180h] [rbp-298h] BYREF
  unsigned int v72; // [rsp+1B8h] [rbp-260h]
  int v73; // [rsp+1BCh] [rbp-25Ch]
  unsigned __int8 *v74; // [rsp+1D0h] [rbp-248h]
  unsigned int v75; // [rsp+1D8h] [rbp-240h]
  int v76; // [rsp+1E0h] [rbp-238h]
  __int16 v77; // [rsp+1E4h] [rbp-234h]

  v22 = a9;
  v58 = a15;
  v23 = a16;
  v63 = a18;
  v61 = a19;
  v24 = 0;
  v57 = 0LL;
  p_pgdf = &a3->pgdf;
  while ( v24 < a4 )
  {
    if ( !(*p_pgdf)->pgb )
      goto LABEL_48;
    ++v24;
    p_pgdf += 3;
  }
  if ( (a14 & 1) != 0 || a4 <= 1 || (unsigned int)(a3->ptl.x - a3[a4 - 1].ptl.x + 0x8000000) <= 0x10000000 )
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v70, a1, a2, 1);
    top = a10->top;
    if ( !a9 )
      v22 = a8;
    v62 = v22;
    if ( (a14 & 8) != 0 )
    {
      if ( (a14 & 0x20) != 0 )
        v27 = 3;
      else
        v27 = 7;
    }
    else
    {
      v27 = 31;
    }
    v56 = v27 & a10->left;
    v28 = a10->left - v56;
    if ( (a14 & 0x20) != 0 )
    {
      v68[0] = draw_clrt_nf_ntb_o_to_temp_start;
      v68[1] = draw_clrt_f_ntb_o_to_temp_start;
      v64 = (void * near *)v68[a14 & 1];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v64)(
        a3,
        a4,
        a5,
        v28,
        a6,
        a7,
        top);
    }
    else
    {
      v64 = (&MastertextTypeTabel)[a14 & 0xFFFFFF4F];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v64)(
        a3,
        a4,
        a5,
        v28,
        a6,
        a7,
        top);
    }
    v29 = a10;
    v30 = a6;
    if ( a16 )
    {
      if ( (a14 & 8) != 0 )
      {
        v43 = Scale_None;
        if ( (a14 & 0x20) != 0 )
          v43 = Scale_None;
      }
      else
      {
        v43 = (void (__fastcall *)(void *))vRectBlt;
      }
      while ( 1 )
      {
        right = v23->right;
        if ( v23->left == right )
          break;
        left = v29->left;
        if ( v23->left > v29->left )
          left = v23->left;
        v46 = left - v28;
        v47 = v29->right;
        if ( right < v47 )
          v47 = v23->right;
        v48 = v47 - v28;
        v49 = a10->top;
        v50 = v49;
        if ( v23->top > v49 )
          v50 = v23->top;
        v51 = v50 - v49;
        bottom = a10->bottom;
        if ( v23->bottom < bottom )
          bottom = v23->bottom;
        v53 = bottom - v49;
        if ( v46 >= v48 || v51 >= v53 )
        {
          v29 = a10;
        }
        else
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD))v43)(a5, v30);
          v29 = a10;
          v30 = a6;
        }
        ++v23;
      }
    }
    if ( *((_DWORD *)a8 + 24) > 6u )
    {
      if ( (unsigned int)bUMPDSecurityGateEx() )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:vExpandAndCopyText:Invalid pSurf->iFormat().\n",
            1835);
        goto LABEL_39;
      }
      v29 = a10;
    }
    v31 = *((_DWORD *)a8 + 24);
    v32 = a13;
    if ( a13 == -1 )
      v31 += 8;
    if ( (a14 & 0x80u) != 0 )
    {
      if ( (a14 & 0x20) != 0 )
        v33 = vSrcAlphaCopyS8D32;
      else
        v33 = vSrcAlphaCopyS4D32;
    }
    else
    {
      if ( (a14 & 8) != 0 )
      {
        v31 += 16;
        if ( (a14 & 0x20) != 0 )
          v31 += 16;
      }
      v33 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int))(&SrcCopyTextFunctionTable)[v31];
    }
    for ( i = &v58->left; ; i += 4 )
    {
      v58 = (struct _RECTL *)i;
      v35 = i[3];
      if ( !v35 )
        break;
      v36 = v29->left;
      v37 = *i;
      if ( v29->left > *i )
        v37 = v29->left;
      v38 = i[2];
      if ( v29->right < v38 )
        v38 = v29->right;
      v39 = v29->top;
      v40 = i[1];
      if ( v39 > v40 )
        v40 = v29->top;
      if ( v29->bottom < v35 )
        v35 = v29->bottom;
      v41 = v37 - v36;
      v55 = v37 - v36;
      v42 = v40 - v39;
      v54 = v40 - v39;
      if ( (a14 & 0x10) != 0 )
      {
        v37 -= v28;
        v38 -= v28;
        v40 -= v39;
        v35 -= v39;
      }
      else
      {
        v66 = *((_QWORD *)a8 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v66, (struct _SURFOBJ *)((char *)a8 + 24), 0LL, 0);
        v32 = a13;
        v42 = v54;
        v41 = v55;
        v29 = a10;
      }
      if ( v37 < v38 && v40 < v35 )
      {
        if ( a12 == -1 )
        {
          v60.left = v37;
          v60.top = v40;
          v60.right = v38;
          v60.bottom = v35;
          v76 = 1;
          v77 = 0;
          v74 = a5;
          v75 = a6;
          v72 = 8 * a6;
          v73 = v29->bottom - v29->top;
          v59.x = v41 + v56;
          v59.y = v42;
          BltLnk(a8, 0LL, (struct SURFACE *)v71, 0LL, 0LL, &v60, 0LL, &v59, v63, v61, 0xAAF0u);
        }
        else
        {
          v69 = *((_QWORD *)a8 + 10);
          v67 = *((_DWORD *)a8 + 22);
          v65 = v67;
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, __int64, LONG, LONG, int, int, int, int, struct SURFACE *))v33)(
            &a5[v42 * a6],
            (unsigned int)(v56 + v55),
            a6,
            v69 + v40 * v67,
            v37,
            v38,
            v67,
            v35 - v40,
            a12,
            v32,
            v62);
        }
        v29 = a10;
      }
      v32 = a13;
    }
LABEL_39:
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v70);
    return;
  }
LABEL_48:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v57);
}
