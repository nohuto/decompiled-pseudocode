/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026E2E0
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
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     OffFillPath @ 0x1C02C0F44 (OffFillPath.c)
 */

__int64 __fastcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r12d
  struct _PATHOBJ *v9; // rdi
  struct _SURFOBJ *v10; // rsi
  SURFACE *v11; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v14; // edi
  LONG v15; // ebx
  __int64 v16; // rbx
  USHORT *p_iType; // r15
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  struct _SURFOBJ *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _CLIPOBJ *v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v24; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v26; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v27; // [rsp+80h] [rbp-80h]
  _QWORD v28[5]; // [rsp+88h] [rbp-78h] BYREF
  struct _PATHOBJ v29; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 *v31[9]; // [rsp+380h] [rbp+280h] BYREF
  int v32; // [rsp+3C8h] [rbp+2C8h]

  v27 = a4;
  v21 = a1;
  v22 = a3;
  v26 = a5;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v31, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v31, &v21, &v24, &v22) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v29);
      memset(v28, 0, sizeof(v28));
      v10 = v21;
      v11 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v21);
      if ( v32 != 1
        || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v11) )
      {
        goto LABEL_9;
      }
      if ( v30 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&v29, (struct EPATHOBJ *)this) )
        {
          x = v24.x;
          y = v24.y;
          CLIPOBJ_vOffset(v22, v24.x, v24.y);
          PATHOBJ_vOffset(&v29, x, y);
          hdev = v10->hdev;
          PRECOMPUTE::vInit((__int64)v28, v11, (PDEVOBJ *)&hdev, (__int64)&v29, (__int64)v22, 0LL, 0LL, a6, a7, 1);
          v14 = -y;
          v15 = -x;
          CLIPOBJ_vOffset(v22, v15, v14);
          PATHOBJ_vOffset(&v29, v15, v14);
          if ( v28[4] )
            break;
        }
      }
LABEL_39:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v29);
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v31, &v21, &v24, &v22) )
        return v8;
    }
    v9 = this;
    this = &v29;
LABEL_9:
    PATHOBJ_vEnumStart(this);
    v16 = 0LL;
    v23 = 0LL;
    if ( v10
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
    {
      v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
      v23 = v16;
      GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v23, &v22) )
    {
LABEL_35:
      if ( v9 )
        this = v9;
      if ( v16 )
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
      goto LABEL_39;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x40) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v16 = v23;
          v10 = v21;
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
          goto LABEL_33;
        }
        v16 = v23;
        v10 = v21;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v16 = v23;
          v10 = v21;
          goto LABEL_32;
        }
        v16 = v23;
        v10 = v21;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x40) != 0 )
    {
      v19 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 166);
LABEL_33:
      if ( !(unsigned int)OffFillPath(v19, &v24, v10, this, v22, v27, v26, a6, a7) )
        v8 = -1;
      goto LABEL_35;
    }
LABEL_32:
    v19 = EngFillPath;
    goto LABEL_33;
  }
  return v8;
}
