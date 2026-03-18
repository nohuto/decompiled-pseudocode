/*
 * XREFs of ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02741C4
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C014CDD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C014CE4C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C014CF9C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276EBC (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpBigUnderlayCopy(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int v7; // r12d
  __int64 v8; // rbx
  struct SPRITE *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbp
  struct _SURFOBJ *v12; // rcx
  struct _SURFOBJ *v13; // rcx
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct SPRITE *v15; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v16[96]; // [rsp+60h] [rbp-C8h] BYREF
  struct _RECTL v17; // [rsp+C0h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, a1, a4, 0, 0LL);
    while ( 1 )
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v15, &v17);
      if ( v15 )
        break;
      vSpReadFromScreen(a1, a2, a3, &v17);
LABEL_53:
      if ( !v7 )
      {
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
        return;
      }
    }
    v8 = 0LL;
    if ( a3
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
    {
      v8 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
      GreLockDisplayDevice(*(_QWORD *)(v8 + 48));
    }
    v9 = v15;
    v10 = 0LL;
    v11 = *((_QWORD *)v15 + 20);
    if ( v11
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v15 + 20)) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
    {
      v10 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
      GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 )
    {
      v12 = (struct _SURFOBJ *)*((_QWORD *)v9 + 20);
      if ( v12->hdev )
      {
        if ( v12->iType != 1
          || !bAllowShareAccess(v12)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
          || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
        {
          v13 = (struct _SURFOBJ *)*((_QWORD *)v9 + 20);
          if ( (v13->iType != 1
             || !bAllowShareAccess(v13)
             || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
             || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
             || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v9 + 20)) + 112) & 0x400) != 0 )
          {
            v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)v9 + 20) + 24LL) + 1352LL);
LABEL_49:
            OffCopyBits(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v14,
              (LONG *)a2,
              (__int64)a3,
              (int *)v15 + 42,
              *((_QWORD *)v9 + 20),
              0LL,
              0LL,
              &v17,
              &v17);
            if ( v10 )
              GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
            if ( v8 )
              GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
            goto LABEL_53;
          }
LABEL_48:
          v14 = EngCopyBits;
          goto LABEL_49;
        }
LABEL_39:
        v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
        goto LABEL_49;
      }
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
        goto LABEL_39;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_48;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev
                                                                                                + 169);
      goto LABEL_49;
    }
    goto LABEL_48;
  }
}
