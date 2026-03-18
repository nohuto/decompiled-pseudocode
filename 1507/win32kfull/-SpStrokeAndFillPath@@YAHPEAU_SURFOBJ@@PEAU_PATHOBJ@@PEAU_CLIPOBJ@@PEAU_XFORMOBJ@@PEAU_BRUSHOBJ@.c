/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0005300
 * Callers:
 *     <none>
 * Callees:
 *     OffStrokeAndFillPath @ 0x1C0005560 (OffStrokeAndFillPath.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0020980 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C009CE8C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C00CB35C (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEAAHXZ @ 0x1C00CD530 (-bPreComputedFill@EPATHOBJ@@QEAAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C00D0530 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C00D0604 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00E16C8 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E16E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C00FC620 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
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
  __int64 v15; // rbx
  USHORT *p_iType; // rdi
  BOOL (__stdcall *v17)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  LONG x; // ebx
  LONG y; // edi
  int v21; // edi
  int v22; // ebx
  __int64 ThreadWin32Thread; // rax
  struct _CLIPOBJ *v24; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v27; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v28; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v29; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _BRUSHOBJ *v31; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v32; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v33; // [rsp+A8h] [rbp-58h]
  _QWORD v34[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct _PATHOBJ v35; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-18h]
  _BYTE v37[72]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v38; // [rsp+3F8h] [rbp+2F8h]

  v31 = a5;
  v28 = a6;
  v11 = 1;
  v32 = a7;
  v29 = a4;
  v25 = a1;
  v33 = a8;
  v24 = a3;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v37, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v37, &v25, &v27, &v24) )
  {
    v12 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v35);
    memset(v34, 0, 0x28uLL);
    v13 = v25;
    v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v25);
    if ( v38 == 1
      && (*(_QWORD *)&this[5] || (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this))
      && !(unsigned int)SURFACE::bRedirectionBitmap(v14) )
    {
      if ( !v36 )
        goto LABEL_17;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v35, (struct EPATHOBJ *)this) )
        goto LABEL_17;
      x = v27.x;
      y = v27.y;
      CLIPOBJ_vOffset(v24, v27.x, v27.y);
      PATHOBJ_vOffset(&v35, x, y);
      hdev = v13->hdev;
      PRECOMPUTE::vInit(v34, v14, &hdev, &v35, v24, v29, v28, a9, a10, 2);
      v21 = -y;
      v22 = -x;
      CLIPOBJ_vOffset(v24, v22, v21);
      PATHOBJ_vOffset(&v35, v22, v21);
      if ( !v34[4] )
        goto LABEL_17;
      v12 = this;
      this = &v35;
    }
    PATHOBJ_vEnumStart(this);
    v15 = 0LL;
    v26 = 0LL;
    if ( v13
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
    {
      v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
      v26 = v15;
      GreLockDisplayDevice(*(_QWORD *)(v15 + 48));
    }
    if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v26, &v24) )
    {
      p_iType = &v13->iType;
      if ( v13->iType != 1 )
        goto LABEL_9;
      if ( (unsigned int)bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x80u) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v15 = v26;
          v13 = v25;
          v17 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
          goto LABEL_11;
        }
        v15 = v26;
        v13 = v25;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          v15 = v26;
          v13 = v25;
          goto LABEL_49;
        }
        v15 = v26;
        v13 = v25;
      }
LABEL_9:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x80u) != 0 )
      {
        v17 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v13->hdev + 164);
LABEL_11:
        if ( !(unsigned int)OffStrokeAndFillPath(v17, &v27, v13, this, v24, v29, v31, v28, v32, v33, a9, a10) )
          v11 = -1;
        if ( v12 )
          this = v12;
        if ( v15 )
          GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
        goto LABEL_17;
      }
LABEL_49:
      v17 = EngStrokeAndFillPath;
      goto LABEL_11;
    }
    if ( v12 )
      this = v12;
    if ( v15 )
      GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
LABEL_17:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v35);
  }
  return v11;
}
