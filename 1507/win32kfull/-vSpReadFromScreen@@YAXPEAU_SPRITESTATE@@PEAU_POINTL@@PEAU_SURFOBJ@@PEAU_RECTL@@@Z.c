/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276EBC
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02741C4 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0278F68 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C027BB80 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C026C200 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026F2F0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0273B50 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  struct _SURFOBJ *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  HSURF v17; // rdx
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  HDEV hdev; // rax
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v21; // [rsp+68h] [rbp-98h]
  int v22[2]; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  int v24[2]; // [rsp+80h] [rbp-80h]
  _BYTE v25[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  REGION *v27[11]; // [rsp+B0h] [rbp-50h] BYREF
  int v28; // [rsp+108h] [rbp+8h]
  int v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+140h] [rbp+40h]
  int v31; // [rsp+148h] [rbp+48h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v23 = (__int64)a4;
  *(_QWORD *)v24 = a2;
  v27[10] = 0LL;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v27[7] = 0LL;
  v31 = 0;
  v21 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v27, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v27 + 4)) )
      goto LABEL_64;
    v21 = (struct _CLIPOBJ *)v27;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = 0LL;
  if ( v9
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
  {
    v10 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
    GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
  }
  v11 = 0LL;
  if ( a3
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
  {
    v11 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
  }
  v12 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
  v13 = 0LL;
  v14 = SURFOBJ_TO_SURFACE(v12);
  v20 = 0LL;
  *(_QWORD *)v22 = &gptlZero;
  if ( !v14 )
    goto LABEL_60;
  v15 = *(_QWORD *)(v14 + 48);
  if ( (*(_DWORD *)(v14 + 112) & 0x80000) == 0 || (v16 = *(_QWORD *)(v15 + 40), v15 == v16) )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && v12->hdev )
    {
      if ( v12->iType != 1 )
      {
LABEL_39:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x400) != 0 )
        {
          hdev = v12->hdev;
LABEL_57:
          v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 169);
          goto LABEL_59;
        }
        goto LABEL_58;
      }
      if ( !bAllowShareAccess(v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v12->iType == 1
          && bAllowShareAccess(v12)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_58;
        }
        goto LABEL_39;
      }
LABEL_48:
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
LABEL_59:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v18,
        *(LONG **)v24,
        (__int64)a3,
        *(int **)v22,
        (__int64)v12,
        v21,
        v13,
        (_DWORD *)v23,
        (_DWORD *)v23);
      goto LABEL_60;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_48;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_58;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_57;
    }
LABEL_58:
    v18 = EngCopyBits;
    goto LABEL_59;
  }
  v17 = *(HSURF *)(v14 + 136);
  *(_QWORD *)v22 = v15 + 2608;
  SURFREF::SURFREF((SURFREF *)v25, v17);
  if ( v26
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v20,
                       0LL,
                       0,
                       *(_QWORD *)(v16 + 1832),
                       *(_QWORD *)(v15 + 1832),
                       (__int64)ppalDefault,
                       (__int64)ppalDefault,
                       0,
                       0,
                       0,
                       0x2000) )
  {
    v13 = v20;
    if ( v26 )
      v12 = (struct _SURFOBJ *)(v26 + 24);
    else
      v12 = 0LL;
    v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v16 + 2872);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
    goto LABEL_59;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v25);
LABEL_60:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
  if ( v11 )
    GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
  if ( v10 )
    GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
LABEL_64:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v27);
}
