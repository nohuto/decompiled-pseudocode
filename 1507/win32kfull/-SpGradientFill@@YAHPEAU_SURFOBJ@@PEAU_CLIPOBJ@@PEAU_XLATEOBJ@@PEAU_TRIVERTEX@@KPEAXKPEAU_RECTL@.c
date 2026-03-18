/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C01161E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0020980 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E16E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     OffGradientFill @ 0x1C01163F4 (OffGradientFill.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall SpGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v10; // r14d
  struct _SURFOBJ *v11; // rdi
  __int64 v12; // rbx
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v19; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v20; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v21; // [rsp+80h] [rbp-80h]
  struct _TRIVERTEX *v22; // [rsp+88h] [rbp-78h]
  struct _RECTL *v23; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v24; // [rsp+98h] [rbp-68h]
  void *v25; // [rsp+A0h] [rbp-60h]
  __int64 *v26[114]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v24 = a3;
  v21 = a9;
  v25 = a6;
  v19 = a2;
  v22 = a4;
  v17 = a1;
  v23 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v26, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v26, &v17, &v20, &v19) )
  {
    v11 = v17;
    v12 = 0LL;
    v18 = 0LL;
    if ( v17
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
    {
      v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
      v18 = v12;
      GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v18, &v19) )
      goto LABEL_10;
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v12 = v18;
          v11 = v17;
          v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_9;
        }
        v12 = v18;
        v11 = v17;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v12 = v18;
          v11 = v17;
LABEL_31:
          v14 = EngGradientFill;
          goto LABEL_9;
        }
        v12 = v18;
        v11 = v17;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x20000) == 0 )
      goto LABEL_31;
    v14 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 176);
LABEL_9:
    v10 &= OffGradientFill(v14, &v20, v11, v19, v24, v22, a5, v25, a7, v23, v21, a10);
LABEL_10:
    if ( v12 )
      GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
  }
  return v10;
}
