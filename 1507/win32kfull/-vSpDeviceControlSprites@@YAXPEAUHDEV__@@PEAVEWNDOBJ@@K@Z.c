/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0275F78
 * Callers:
 *     EngControlSprites @ 0x1C027B1A0 (EngControlSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008A630 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008A660 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5838 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C014CDD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C014CE4C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C014CF9C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C026C124 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C026C270 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026F348 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02773F0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, int a3)
{
  HDEV v5; // rdi
  int v6; // eax
  struct SPRITE *v7; // rsi
  int v8; // r12d
  struct _SURFOBJ *v9; // rcx
  struct _SURFOBJ *v10; // rcx
  __int64 v11; // rax
  struct _SURFOBJ *v12; // rcx
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v14; // rcx
  int v15; // r12d
  struct SPRITE *v16; // rsi
  struct _SURFOBJ *v17; // rcx
  struct _SURFOBJ *v18; // rcx
  __int64 v19; // rax
  struct _SURFOBJ *v20; // rcx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v22; // rcx
  struct SPRITE *v23; // [rsp+58h] [rbp-B0h] BYREF
  HDEV v24; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v25[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v26[96]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v27[96]; // [rsp+D8h] [rbp-30h] BYREF
  struct _SPRITESTATE *v28[24]; // [rsp+138h] [rbp+30h] BYREF
  struct _RECTL v29; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _RECTL v30; // [rsp+208h] [rbp+100h] BYREF

  v24 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v28, (struct PDEVOBJ *)&v24);
  v5 = v24 + 24;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v25, a2, (struct _SPRITESTATE *)(v24 + 24));
  if ( a3 != 1 )
  {
    *((_DWORD *)a2 + 46) &= ~0x1000000u;
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) == 0
      || !bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)v5 + 3, &v30) )
    {
      goto LABEL_87;
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v26, (struct _SPRITESTATE *)v5, &v30, 0, 0LL);
    while ( 1 )
    {
      v15 = ENUMAREAS::bEnum((ENUMAREAS *)v26, &v23, &v29);
      if ( v23 )
        break;
LABEL_85:
      if ( !v15 )
      {
        vSpRedrawArea((struct _SPRITESTATE *)v5, &v30, 1);
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v26);
        goto LABEL_87;
      }
    }
    while ( 1 )
    {
      v16 = v23;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v23 + 20)) + 112) & 0x400) != 0
        || (v17 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5), !v17->hdev) )
      {
        v20 = (struct _SURFOBJ *)*((_QWORD *)v16 + 20);
        if ( v20->iType != 1
          || !bAllowShareAccess(v20)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
          || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
        {
          v22 = (struct _SURFOBJ *)*((_QWORD *)v16 + 20);
          if ( v22->iType == 1
            && bAllowShareAccess(v22)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 20)) + 112) & 0x400) == 0 )
          {
LABEL_83:
            v21 = EngCopyBits;
            goto LABEL_84;
          }
          v19 = *((_QWORD *)v16 + 20);
          goto LABEL_82;
        }
      }
      else if ( v17->iType != 1
             || !bAllowShareAccess(v17)
             || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
             || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
             || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
             || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v18 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5);
        if ( v18->iType == 1
          && bAllowShareAccess(v18)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v5 + 5)) + 112) & 0x400) == 0 )
        {
          goto LABEL_83;
        }
        v19 = *((_QWORD *)v5 + 5);
LABEL_82:
        v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v19 + 24) + 1352LL);
        goto LABEL_84;
      }
      v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
LABEL_84:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v21,
        (LONG *)v23 + 42,
        *((_QWORD *)v16 + 20),
        (int *)&gptlZero,
        *((_QWORD *)v5 + 5),
        (struct _CLIPOBJ *)a2,
        0LL,
        &v29,
        &v29);
      if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v26, &v23) )
        goto LABEL_85;
    }
  }
  *((_DWORD *)a2 + 46) |= 0x1000000u;
  if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
    && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)v5 + 3, &v30) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v27, (struct _SPRITESTATE *)v5, &v30, 0, 0LL);
    while ( 1 )
    {
      v6 = ENUMAREAS::bEnum((ENUMAREAS *)v27, &v23, &v29);
      v7 = v23;
      v8 = v6;
      if ( v23 )
        break;
LABEL_42:
      if ( !v8 )
      {
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v27);
        goto LABEL_44;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v5 + 5)) + 112) & 0x400) != 0
      || (v9 = (struct _SURFOBJ *)*((_QWORD *)v7 + 20), !v9->hdev) )
    {
      v12 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5);
      if ( v12->iType != 1
        || !bAllowShareAccess(v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v14 = (struct _SURFOBJ *)*((_QWORD *)v5 + 5);
        if ( (v14->iType != 1
           || !bAllowShareAccess(v14)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v5 + 5)) + 112) & 0x400) != 0 )
        {
          v11 = *((_QWORD *)v5 + 5);
          goto LABEL_39;
        }
LABEL_40:
        v13 = EngCopyBits;
        goto LABEL_41;
      }
    }
    else if ( v9->iType != 1
           || !bAllowShareAccess(v9)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
           || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
    {
      v10 = (struct _SURFOBJ *)*((_QWORD *)v7 + 20);
      if ( (v10->iType != 1
         || !bAllowShareAccess(v10)
         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v7 + 20)) + 112) & 0x400) != 0 )
      {
        v11 = *((_QWORD *)v7 + 20);
LABEL_39:
        v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v11 + 24) + 1352LL);
        goto LABEL_41;
      }
      goto LABEL_40;
    }
    v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                               + 80LL);
LABEL_41:
    OffCopyBits(
      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v13,
      (LONG *)&gptlZero,
      *((_QWORD *)v5 + 5),
      (int *)v23 + 42,
      *((_QWORD *)v23 + 20),
      (struct _CLIPOBJ *)a2,
      0LL,
      &v29,
      &v29);
    goto LABEL_42;
  }
LABEL_44:
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
LABEL_87:
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v25);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v28);
}
