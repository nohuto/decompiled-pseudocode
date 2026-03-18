/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026C270
 * Callers:
 *     <none>
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEAAHXZ @ 0x1C001554C (-bPreComputedFill@EPATHOBJ@@QEAAHXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C003DE00 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0102D38 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0102D58 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0149374 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0149E08 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0149E24 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     OffStrokeAndFillPath @ 0x1C02C3908 (OffStrokeAndFillPath.c)
 */

__int64 __fastcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v11; // r13d
  struct _PATHOBJ *v12; // r15
  struct _SURFOBJ *v13; // rsi
  SURFACE *v14; // r12
  LONG x; // ebx
  LONG y; // edi
  LONG v17; // edi
  LONG v18; // ebx
  __int64 v19; // rbx
  USHORT *p_iType; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v37)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _CLIPOBJ *v51; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v54; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v55; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v56; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v58; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v59; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v60; // [rsp+A8h] [rbp-58h]
  _QWORD v61[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct _PATHOBJ v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int64 *v64[9]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v65; // [rsp+3F8h] [rbp+2F8h]

  v60 = a5;
  v55 = a6;
  v11 = 1;
  v59 = a7;
  v56 = a4;
  v52 = a1;
  v58 = a8;
  v51 = a3;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v64, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v64, &v52, &v54, &v51) )
  {
    v12 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v62);
    memset(v61, 0, 0x28uLL);
    v13 = v52;
    v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v52);
    if ( v65 == 1
      && (*(_QWORD *)&this[5] || (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this))
      && !(unsigned int)SURFACE::bRedirectionBitmap(v14) )
    {
      if ( !v63 )
        goto LABEL_45;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v62, (struct EPATHOBJ *)this) )
        goto LABEL_45;
      x = v54.x;
      y = v54.y;
      CLIPOBJ_vOffset(v51, v54.x, v54.y);
      PATHOBJ_vOffset(&v62, x, y);
      hdev = v13->hdev;
      PRECOMPUTE::vInit((__int64)v61, v14, (PDEVOBJ *)&hdev, (__int64)&v62, (__int64)v51, v56, v55, a9, a10, 2);
      v17 = -y;
      v18 = -x;
      CLIPOBJ_vOffset(v51, v18, v17);
      PATHOBJ_vOffset(&v62, v18, v17);
      if ( !v61[4] )
        goto LABEL_45;
      v12 = this;
      this = &v62;
    }
    PATHOBJ_vEnumStart(this);
    v19 = 0LL;
    v53 = 0LL;
    if ( v13
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
    {
      v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
      v53 = v19;
      GreLockDisplayDevice(*(_QWORD *)(v19 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v53, &v51) )
    {
      if ( v12 )
        this = v12;
      if ( v19 )
        GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
      goto LABEL_45;
    }
    p_iType = &v13->iType;
    if ( v13->iType != 1 )
      goto LABEL_49;
    if ( !bAllowShareAccess(v13) )
      goto LABEL_31;
    if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23)
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 108)
      || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 280) + 20LL) & 0x80u) == 0 )
    {
      v19 = v53;
      v13 = v52;
LABEL_31:
      if ( *p_iType == 1 && bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 108)) )
        {
          v19 = v53;
          v13 = v52;
LABEL_38:
          v37 = EngStrokeAndFillPath;
          goto LABEL_39;
        }
        v19 = v53;
        v13 = v52;
      }
LABEL_49:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x80u) != 0 )
      {
        v37 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v13->hdev + 164);
        goto LABEL_39;
      }
      goto LABEL_38;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35);
    v19 = v53;
    v13 = v52;
    v37 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
LABEL_39:
    if ( !(unsigned int)OffStrokeAndFillPath(v37, &v54, v13, this, v51, v56, v60, v55, v59, v58, a9, a10) )
      v11 = -1;
    if ( v12 )
      this = v12;
    if ( v19 )
      GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
LABEL_45:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v61);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v62);
  }
  return v11;
}
