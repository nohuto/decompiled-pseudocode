/*
 * XREFs of ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00337F0
 * Callers:
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0066D34 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0158BE8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C0158C3C (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v32)(int, int, int, int, int, int, int, int); // r13
  LONG *i; // rdi
  LONG v34; // ebx
  LONG v35; // ecx
  LONG v36; // r15d
  LONG v37; // r12d
  LONG v38; // edx
  LONG v39; // r14d
  int v40; // r9d
  LONG v41; // r8d
  void (*v42)(void *); // rbx
  LONG right; // ecx
  LONG left; // r8d
  signed int v45; // r8d
  LONG v46; // r10d
  signed int v47; // r10d
  LONG v48; // ecx
  LONG v49; // r9d
  int v50; // r9d
  LONG bottom; // edx
  int v52; // edx
  LONG v53; // [rsp+90h] [rbp-388h]
  int v54; // [rsp+A0h] [rbp-378h]
  int v55; // [rsp+A4h] [rbp-374h]
  __int64 v56; // [rsp+A8h] [rbp-370h] BYREF
  struct _RECTL *v57; // [rsp+B0h] [rbp-368h]
  struct _POINTL v58; // [rsp+B8h] [rbp-360h] BYREF
  struct _RECTL v59; // [rsp+C0h] [rbp-358h] BYREF
  int v60; // [rsp+D0h] [rbp-348h]
  int v61; // [rsp+D4h] [rbp-344h]
  void * near *v62; // [rsp+D8h] [rbp-340h]
  __int64 v63; // [rsp+E0h] [rbp-338h] BYREF
  struct _POINTL *v64; // [rsp+E8h] [rbp-330h]
  struct _BRUSHOBJ *v65; // [rsp+F0h] [rbp-328h]
  struct SURFACE *v66; // [rsp+F8h] [rbp-320h]
  _QWORD v67[2]; // [rsp+100h] [rbp-318h]
  __int64 v68; // [rsp+110h] [rbp-308h]
  _BYTE v69[80]; // [rsp+120h] [rbp-2F8h] BYREF
  char v70[56]; // [rsp+170h] [rbp-2A8h] BYREF
  unsigned int v71; // [rsp+1A8h] [rbp-270h]
  int v72; // [rsp+1ACh] [rbp-26Ch]
  unsigned __int8 *v73; // [rsp+1C0h] [rbp-258h]
  unsigned int v74; // [rsp+1C8h] [rbp-250h]
  int v75; // [rsp+1D0h] [rbp-248h]
  __int16 v76; // [rsp+1D4h] [rbp-244h]

  v22 = a9;
  v57 = a15;
  v23 = a16;
  v65 = a18;
  v64 = a19;
  v24 = 0;
  v56 = 0LL;
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
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v69, a1, a2, 1);
    top = a10->top;
    if ( !a9 )
      v22 = a8;
    v66 = v22;
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
    v54 = v27 & a10->left;
    v28 = a10->left - v54;
    if ( (a14 & 0x20) != 0 )
    {
      v67[0] = draw_clrt_nf_ntb_o_to_temp_start;
      v67[1] = draw_clrt_f_ntb_o_to_temp_start;
      v62 = (void * near *)v67[a14 & 1];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v62)(
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
      v62 = (&MastertextTypeTabel)[a14 & 0xFFFFFF4F];
      ((void (__fastcall *)(struct _GLYPHPOS *, _QWORD, unsigned __int8 *, _QWORD, unsigned int, unsigned int, LONG))v62)(
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
        v42 = Scale_None;
        if ( (a14 & 0x20) != 0 )
          v42 = Scale_None;
      }
      else
      {
        v42 = (void (*)(void *))vRectBlt;
      }
      while ( 1 )
      {
        right = v23->right;
        if ( v23->left == right )
          break;
        left = v29->left;
        if ( v23->left > v29->left )
          left = v23->left;
        v45 = left - v28;
        v46 = v29->right;
        if ( right < v46 )
          v46 = v23->right;
        v47 = v46 - v28;
        v48 = a10->top;
        v49 = v48;
        if ( v23->top > v48 )
          v49 = v23->top;
        v50 = v49 - v48;
        bottom = a10->bottom;
        if ( v23->bottom < bottom )
          bottom = v23->bottom;
        v52 = bottom - v48;
        if ( v45 >= v47 || v50 >= v52 )
        {
          v29 = a10;
        }
        else
        {
          ((void (__fastcall *)(unsigned __int8 *, _QWORD))v42)(a5, v30);
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
        goto LABEL_42;
      }
      v29 = a10;
    }
    v31 = *((_DWORD *)a8 + 24);
    if ( a13 == -1 )
      v31 += 8;
    if ( (a14 & 0x80u) != 0 )
    {
      if ( (a14 & 0x20) != 0 )
        v32 = vSrcAlphaCopyS8D32;
      else
        v32 = vSrcAlphaCopyS4D32;
    }
    else
    {
      if ( (a14 & 8) != 0 )
      {
        v31 += 16;
        if ( (a14 & 0x20) != 0 )
          v31 += 16;
      }
      v32 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int))(&SrcCopyTextFunctionTable)[v31];
    }
    for ( i = &v57->left; ; i += 4 )
    {
      v57 = (struct _RECTL *)i;
      v34 = i[3];
      if ( !v34 )
        break;
      v35 = v29->left;
      v36 = *i;
      if ( v29->left > *i )
        v36 = v29->left;
      v37 = i[2];
      if ( v29->right < v37 )
        v37 = v29->right;
      v38 = v29->top;
      v39 = i[1];
      if ( v38 > v39 )
        v39 = v29->top;
      if ( v29->bottom < v34 )
        v34 = v29->bottom;
      v40 = v36 - v35;
      v55 = v36 - v35;
      v41 = v39 - v38;
      v53 = v39 - v38;
      if ( (a14 & 0x10) != 0 )
      {
        v36 -= v28;
        v37 -= v28;
        v39 -= v38;
        v34 -= v38;
      }
      else
      {
        v63 = *((_QWORD *)a8 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v63, (struct _SURFOBJ *)((char *)a8 + 24), 0LL, 0);
        v41 = v53;
        v40 = v55;
        v29 = a10;
      }
      if ( v36 < v37 && v39 < v34 )
      {
        if ( a12 == -1 )
        {
          v59.left = v36;
          v59.top = v39;
          v59.right = v37;
          v59.bottom = v34;
          v75 = 1;
          v76 = 0;
          v73 = a5;
          v74 = a6;
          v71 = 8 * a6;
          v72 = v29->bottom - v29->top;
          v58.x = v40 + v54;
          v58.y = v41;
          BltLnk(a8, 0LL, (struct SURFACE *)v70, 0LL, 0LL, &v59, 0LL, &v58, v65, v64, 0xAAF0u);
        }
        else
        {
          v68 = *((_QWORD *)a8 + 10);
          v60 = *((_DWORD *)a8 + 22);
          v61 = v60;
          ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, __int64, LONG, LONG, int, int, int, int, struct SURFACE *))v32)(
            &a5[v41 * a6],
            (unsigned int)(v54 + v55),
            a6,
            v68 + v39 * v60,
            v36,
            v37,
            v60,
            v34 - v39,
            a12,
            a13,
            v66);
        }
        v29 = a10;
      }
    }
LABEL_42:
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v69);
    return;
  }
LABEL_48:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v56);
}
