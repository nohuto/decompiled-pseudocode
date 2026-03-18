/*
 * XREFs of ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0279A7C
 * Callers:
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026FC1C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02771F0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0277848 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C026AD70 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026E32C (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0272B44 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpWriteToScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  __int64 v5; // rdi
  struct _CLIPOBJ *v10; // r15
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rbp
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v15; // rcx
  struct _SURFOBJ *v16; // rcx
  REGION *v17[11]; // [rsp+50h] [rbp-F8h] BYREF
  int v18; // [rsp+A8h] [rbp-A0h]
  int v19; // [rsp+D0h] [rbp-78h]
  __int64 v20; // [rsp+E0h] [rbp-68h]
  int v21; // [rsp+E8h] [rbp-60h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v5 = 0LL;
  v17[10] = 0LL;
  v18 = 0;
  v20 = 0LL;
  v17[7] = 0LL;
  v19 = 1;
  v21 = 0;
  v10 = 0LL;
  if ( v4 )
  {
    v11 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v17, v11, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v17 + 4)) )
      goto LABEL_51;
    v10 = (struct _CLIPOBJ *)v17;
  }
  a3->iUniq = 0;
  v12 = 0LL;
  if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
  {
    v12 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
  }
  v13 = *((_QWORD *)a1 + 5);
  if ( v13
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
  {
    v5 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
    GreLockDisplayDevice(*(_QWORD *)(v5 + 48));
  }
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 || !a3->hdev )
  {
    v15 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
    if ( v15->iType != 1
      || !bAllowShareAccess(v15)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
      || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
    {
      v16 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
      if ( (v16->iType != 1
         || !bAllowShareAccess(v16)
         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 )
      {
        v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL) + 1352LL);
        goto LABEL_47;
      }
LABEL_46:
      v14 = EngCopyBits;
      goto LABEL_47;
    }
    goto LABEL_37;
  }
  if ( a3->iType != 1 )
    goto LABEL_28;
  if ( bAllowShareAccess(a3)
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
  {
LABEL_37:
    v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                               + 80LL);
    goto LABEL_47;
  }
  if ( a3->iType == 1
    && bAllowShareAccess(a3)
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
  {
    goto LABEL_46;
  }
LABEL_28:
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 )
    goto LABEL_46;
  v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev + 169);
LABEL_47:
  OffCopyBits(
    (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v14,
    (LONG *)&gptlZero,
    *((_QWORD *)a1 + 5),
    (int *)a2,
    (__int64)a3,
    v10,
    0LL,
    a4,
    a4);
  if ( v5 )
    GreUnlockDisplayDevice(*(_QWORD *)(v5 + 48));
  if ( v12 )
    GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
LABEL_51:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v17);
}
