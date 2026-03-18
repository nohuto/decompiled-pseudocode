/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02768F4
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EA480 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EAD88 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00EADFC (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00EAF4C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0108890 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C026AD70 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026E27C (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026E32C (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026E384 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C027287C (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0272B44 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02736E8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0279700 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  struct _SURFOBJ *v9; // rcx
  struct _SURFOBJ *v10; // rcx
  __int64 v11; // rax
  struct _SURFOBJ *v12; // rcx
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v14; // rcx
  int v15; // r12d
  struct _SURFOBJ *Composite; // rsi
  __int64 v17; // rdi
  struct SPRITE *v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rbx
  struct _SURFOBJ *v21; // rcx
  struct _SURFOBJ *v22; // rcx
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct SPRITE *v24; // [rsp+50h] [rbp-B0h] BYREF
  ULONG StartingIndex; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v26; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[96]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v29; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ v30; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+118h] [rbp+18h]
  __int64 v32; // [rsp+130h] [rbp+30h]
  int v33; // [rsp+138h] [rbp+38h]
  int v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+170h] [rbp+70h]
  int v36; // [rsp+178h] [rbp+78h]

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x400) == 0 )
  {
    v32 = 0LL;
    v33 = 0;
    v35 = 0LL;
    v31 = 0LL;
    v34 = 1;
    v36 = 0;
    v4 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v30, v4, *((struct REGION **)a1 + 88), (struct ERECTL *)a2, 0);
    if ( ERECTL::bEmpty((ERECTL *)&v30.rclBounds) )
    {
LABEL_52:
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v28, a1, a2, 0, 0LL);
      while ( 1 )
      {
        v15 = ENUMAREAS::bEnum((ENUMAREAS *)v28, &v24, &v29);
        if ( v24 )
        {
          if ( !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v28, &v24) )
            break;
        }
LABEL_109:
        if ( !v15 )
        {
LABEL_110:
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v28);
          ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v30);
          return;
        }
      }
      Composite = psoSpGetComposite(a1, &v29, &StartingIndex);
      if ( !Composite )
        goto LABEL_110;
      v17 = 0LL;
      v18 = v24;
      v26.x = -v29.left;
      v19 = *((_QWORD *)v24 + 20);
      v26.y = -v29.top;
      if ( v19
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x200) == 0 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v19);
        GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
      }
      v20 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
      {
        v20 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
        GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) == 0 )
      {
        v21 = (struct _SURFOBJ *)*((_QWORD *)v18 + 20);
        if ( v21->hdev )
        {
          if ( v21->iType != 1
            || !bAllowShareAccess(v21)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
          {
            v22 = (struct _SURFOBJ *)*((_QWORD *)v18 + 20);
            if ( (v22->iType != 1
               || !bAllowShareAccess(v22)
               || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
               || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
               || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 20)) + 112) & 0x400) != 0 )
            {
              v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)v18 + 20) + 24LL) + 1352LL);
LABEL_99:
              OffCopyBits(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v23,
                (LONG *)&v26,
                (__int64)Composite,
                (int *)v24 + 42,
                *((_QWORD *)v18 + 20),
                0LL,
                0LL,
                &v29,
                &v29);
              if ( v20 )
                GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
              if ( v17 )
                GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
              do
              {
                if ( (*(_DWORD *)v24 & 0x100) == 0 )
                  vSpComposite(v24, &v26, Composite, &v29);
              }
              while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v28, &v24) );
              vSpWriteToExMirror(a1, &v26, Composite, &v29);
              if ( StartingIndex == -1 )
              {
                vSpDeleteSurface(Composite);
              }
              else
              {
                CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v27, (struct _SPRITESTATE *)((char *)a1 + 696));
                RtlClearBits((PRTL_BITMAP)a1 + 42, StartingIndex, 1u);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v27);
              }
              goto LABEL_109;
            }
LABEL_98:
            v23 = EngCopyBits;
            goto LABEL_99;
          }
LABEL_89:
          v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
          goto LABEL_99;
        }
      }
      if ( Composite->iType == 1 )
      {
        if ( bAllowShareAccess(Composite)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
        {
          goto LABEL_89;
        }
        if ( Composite->iType == 1
          && bAllowShareAccess(Composite)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_98;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) != 0 )
      {
        v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)Composite->hdev
                                                                                                  + 169);
        goto LABEL_99;
      }
      goto LABEL_98;
    }
    v5 = *((_QWORD *)a1 + 5);
    v6 = 0LL;
    if ( v5
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v5) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v5) + 112) & 0x200) == 0 )
    {
      v6 = SURFOBJ_TO_SURFACE_NOT_NULL(v5);
      GreLockDisplayDevice(*(_QWORD *)(v6 + 48));
    }
    v7 = *((_QWORD *)a1 + 169);
    v8 = 0LL;
    if ( v7
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) & 0x200) == 0 )
    {
      v8 = SURFOBJ_TO_SURFACE_NOT_NULL(v7);
      GreLockDisplayDevice(*(_QWORD *)(v8 + 48));
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0
      || (v9 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5), !v9->hdev) )
    {
      v12 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
      if ( v12->iType != 1
        || !bAllowShareAccess(v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v14 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
        if ( (v14->iType != 1
           || !bAllowShareAccess(v14)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0 )
        {
          v11 = *((_QWORD *)a1 + 169);
          goto LABEL_46;
        }
LABEL_47:
        v13 = EngCopyBits;
        goto LABEL_48;
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
      v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
      if ( (v10->iType != 1
         || !bAllowShareAccess(v10)
         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 )
      {
        v11 = *((_QWORD *)a1 + 5);
LABEL_46:
        v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v11 + 24) + 1352LL);
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                               + 80LL);
LABEL_48:
    OffCopyBits(
      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v13,
      (LONG *)&gptlZero,
      *((_QWORD *)a1 + 169),
      (int *)&gptlZero,
      *((_QWORD *)a1 + 5),
      &v30,
      0LL,
      (_DWORD *)a1 + 12,
      &gptlZero);
    if ( v8 )
      GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
    if ( v6 )
      GreUnlockDisplayDevice(*(_QWORD *)(v6 + 48));
    goto LABEL_52;
  }
}
