/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0147400
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C003DE00 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0102D58 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffGradientFill @ 0x1C0147614 (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _SURFOBJ *v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v46; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v47; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v48; // [rsp+80h] [rbp-80h]
  struct _RECTL *v49; // [rsp+88h] [rbp-78h]
  void *v50; // [rsp+90h] [rbp-70h]
  struct _TRIVERTEX *v51; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v52; // [rsp+A0h] [rbp-60h]
  __int64 *v53[114]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v52 = a3;
  v48 = a9;
  v50 = a6;
  v46 = a2;
  v51 = a4;
  v44 = a1;
  v49 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v53, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v53, &v44, &v47, &v46) )
  {
    v11 = v44;
    v12 = 0LL;
    v45 = 0LL;
    if ( v44
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v44) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
    {
      v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
      v45 = v12;
      GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v45, &v46) )
      goto LABEL_10;
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30);
          v12 = v45;
          v11 = v44;
          v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_9;
        }
        v12 = v45;
        v11 = v44;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 108)) )
        {
          v12 = v45;
          v11 = v44;
LABEL_31:
          v14 = EngGradientFill;
          goto LABEL_9;
        }
        v12 = v45;
        v11 = v44;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x20000) == 0 )
      goto LABEL_31;
    v14 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 176);
LABEL_9:
    v10 &= OffGradientFill(v14, &v47, v11, v46, v52, v51, a5, v50, a7, v49, v48, a10);
LABEL_10:
    if ( v12 )
      GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
  }
  return v10;
}
