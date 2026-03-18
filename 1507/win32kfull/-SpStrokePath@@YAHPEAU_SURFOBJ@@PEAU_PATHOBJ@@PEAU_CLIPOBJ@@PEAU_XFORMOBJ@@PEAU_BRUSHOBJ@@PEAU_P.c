/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C011A690
 * Callers:
 *     <none>
 * Callees:
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
 *     OffStrokePath @ 0x1C011A8E4 (OffStrokePath.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall SpStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v9; // r13d
  FLOAT_LONG v10; // edi
  struct _PATHOBJ *v11; // rsi
  struct _SURFOBJ *v12; // r14
  SURFACE *v13; // r12
  __int64 v14; // rbx
  USHORT *p_iType; // r12
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  LONG x; // ebx
  LONG y; // esi
  LONG v20; // esi
  LONG v21; // ebx
  __int64 ThreadWin32Thread; // rax
  struct _CLIPOBJ *v23; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v26; // [rsp+68h] [rbp-98h] BYREF
  struct _LINEATTRS *v27; // [rsp+70h] [rbp-90h]
  struct _XFORMOBJ *v28; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v29; // [rsp+80h] [rbp-80h]
  struct _POINTL *v30; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[5]; // [rsp+98h] [rbp-68h] BYREF
  struct _PATHOBJ v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h]
  __int64 *v35[9]; // [rsp+390h] [rbp+290h] BYREF
  int v36; // [rsp+3D8h] [rbp+2D8h]

  v29 = a5;
  v30 = a6;
  v9 = 1;
  v28 = a4;
  v24 = a1;
  v23 = a3;
  LODWORD(v10.e) = a7->elStyleState;
  v27 = a7;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v35, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v35, &v24, &v26, &v23) )
  {
    v11 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v33);
    memset(v32, 0, sizeof(v32));
    v12 = v24;
    v13 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v24);
    if ( v36 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap(v13) )
    {
      if ( !v34 )
        goto LABEL_17;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v33, (struct EPATHOBJ *)this) )
        goto LABEL_17;
      x = v26.x;
      y = v26.y;
      CLIPOBJ_vOffset(v23, v26.x, v26.y);
      PATHOBJ_vOffset(&v33, x, y);
      hdev = v12->hdev;
      PRECOMPUTE::vInit((__int64)v32, v13, (PDEVOBJ *)&hdev, (__int64)&v33, (__int64)v23, v28, v27, a8, 0, 0);
      v20 = -y;
      v21 = -x;
      CLIPOBJ_vOffset(v23, v21, v20);
      PATHOBJ_vOffset(&v33, v21, v20);
      if ( !v32[4] )
        goto LABEL_17;
      v11 = this;
      this = &v33;
    }
    v27->elStyleState = v10;
    PATHOBJ_vEnumStart(this);
    v14 = 0LL;
    v25 = 0LL;
    if ( v12
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x200) == 0 )
    {
      v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
      v25 = v14;
      GreLockDisplayDevice(*(_QWORD *)(v14 + 48));
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v25, &v23) )
    {
      p_iType = &v12->iType;
      if ( v12->iType != 1 )
        goto LABEL_9;
      if ( (unsigned int)bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v14 = v25;
          v12 = v24;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
          goto LABEL_11;
        }
        v14 = v25;
        v12 = v24;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v14 = v25;
          v12 = v24;
LABEL_43:
          v16 = EngStrokePath;
LABEL_11:
          if ( !(unsigned int)OffStrokePath(v16, &v26, v12, this, v23, v28, v29, v30, v27, a8) )
            v9 = -1;
          goto LABEL_13;
        }
        v14 = v25;
        v12 = v24;
      }
LABEL_9:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x20) != 0 )
      {
        v16 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v12->hdev + 165);
        goto LABEL_11;
      }
      goto LABEL_43;
    }
LABEL_13:
    if ( v11 )
      this = v11;
    if ( v14 )
      GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
LABEL_17:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v33);
  }
  return v9;
}
