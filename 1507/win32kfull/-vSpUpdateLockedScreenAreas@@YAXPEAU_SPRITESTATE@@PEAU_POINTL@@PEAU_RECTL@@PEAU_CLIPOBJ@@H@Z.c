/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02797FC
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0061784 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00F551C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014C4D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026F850 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0278854 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008A630 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008A660 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C014CDD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C014CE4C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C014CF9C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026F348 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct _CLIPOBJ *v6; // r13
  struct REGION *v8; // r12
  struct _RECTL *v9; // rdi
  int v10; // ebx
  struct RGNOBJ *p_top; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdi
  struct SPRITE *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rsi
  struct _SURFOBJ *v17; // rcx
  struct _SURFOBJ *v18; // rcx
  __int64 v19; // rax
  struct _SURFOBJ *v20; // rcx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v22; // rcx
  struct SPRITE *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  struct _SURFOBJ *v27; // rcx
  struct _SURFOBJ *v28; // rcx
  __int64 v29; // rax
  struct _SURFOBJ *v30; // rcx
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v32; // rcx
  struct SPRITE *v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  _QWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v40[96]; // [rsp+A0h] [rbp-60h] BYREF
  struct _SPRITESTATE *v41[24]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v42; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v43; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _CLIPOBJ v44; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v45; // [rsp+218h] [rbp+118h]
  __int64 v46; // [rsp+230h] [rbp+130h]
  int v47; // [rsp+238h] [rbp+138h]
  int v48; // [rsp+260h] [rbp+160h]
  __int64 v49; // [rsp+270h] [rbp+170h]

  v37 = a4;
  v46 = 0LL;
  v47 = 0;
  v6 = a4;
  v49 = 0LL;
  v45 = 0LL;
  v48 = 1;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v35);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v36);
  v39 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v41, (struct PDEVOBJ *)&v39);
  v8 = 0LL;
  if ( v35[0] )
  {
    if ( v36[0] )
    {
      v9 = (struct _RECTL *)((char *)a1 + 48);
      if ( bIntersect(a3, (const struct _RECTL *)a1 + 3, &v43) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v40, a1, &v43, 0, 0LL);
        do
        {
          v10 = ENUMAREAS::bEnum((ENUMAREAS *)v40, &v33, &v42);
          v34 = v10;
          if ( v33 )
          {
            if ( !v8 )
            {
              p_top = (struct RGNOBJ *)&v6[2].rclBounds.top;
              if ( !v6 || !v6->iDComplexity )
              {
                RGNOBJ::vSet((RGNOBJ *)v36, v9);
                p_top = (struct RGNOBJ *)v36;
              }
              v38 = *((_QWORD *)a1 + 130);
              if ( !RGNOBJ::bMerge((RGNOBJ *)v35, p_top, (struct RGNOBJ *)&v38, BYTE4(gafjRgnOp)) )
                RGNOBJ::vSet((RGNOBJ *)v35);
              v8 = (struct REGION *)v35[0];
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v44, v8, (struct ERECTL *)&v42, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v44.rclBounds) )
            {
              while ( 1 )
              {
                v12 = 0LL;
                if ( a5 )
                {
                  v13 = *((_QWORD *)a1 + 5);
                  if ( v13
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
                  {
                    v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
                    GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
                  }
                  v14 = v33;
                  v15 = 0LL;
                  v16 = *((_QWORD *)v33 + 20);
                  if ( v16
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v33 + 20)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
                  {
                    v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
                    GreLockDisplayDevice(*(_QWORD *)(v15 + 48));
                  }
                  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v14 + 20)) + 112) & 0x400) != 0
                    || (v17 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5), !v17->hdev) )
                  {
                    v20 = (struct _SURFOBJ *)*((_QWORD *)v14 + 20);
                    if ( v20->iType != 1
                      || !bAllowShareAccess(v20)
                      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                      || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
                    {
                      v22 = (struct _SURFOBJ *)*((_QWORD *)v14 + 20);
                      if ( v22->iType == 1
                        && bAllowShareAccess(v22)
                        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                        || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v14 + 20)) + 112) & 0x400) == 0 )
                      {
                        goto LABEL_59;
                      }
                      v19 = *((_QWORD *)v14 + 20);
LABEL_58:
                      v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v19 + 24) + 1352LL);
LABEL_60:
                      OffCopyBits(
                        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v21,
                        (LONG *)v33 + 42,
                        *((_QWORD *)v14 + 20),
                        (int *)&gptlZero,
                        *((_QWORD *)a1 + 5),
                        &v44,
                        0LL,
                        &v42,
                        &v42);
                      if ( v15 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
                      if ( !v12 )
                        goto LABEL_113;
                      goto LABEL_112;
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
                    v18 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                    if ( (v18->iType != 1
                       || !bAllowShareAccess(v18)
                       || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                       || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                       || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                       && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 )
                    {
                      v19 = *((_QWORD *)a1 + 5);
                      goto LABEL_58;
                    }
LABEL_59:
                    v21 = EngCopyBits;
                    goto LABEL_60;
                  }
                  v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
                  goto LABEL_60;
                }
                v23 = v33;
                v24 = *((_QWORD *)v33 + 20);
                if ( v24
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v33 + 20)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x200) == 0 )
                {
                  v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v24);
                  GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
                }
                v25 = *((_QWORD *)a1 + 5);
                v26 = 0LL;
                if ( v25
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x200) == 0 )
                {
                  v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v25);
                  GreLockDisplayDevice(*(_QWORD *)(v26 + 48));
                }
                if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0
                  || (v27 = (struct _SURFOBJ *)*((_QWORD *)v23 + 20), !v27->hdev) )
                {
                  v30 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                  if ( v30->iType == 1
                    && bAllowShareAccess(v30)
                    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
                  {
LABEL_98:
                    v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
                    goto LABEL_109;
                  }
                  v32 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                  if ( (v32->iType != 1
                     || !bAllowShareAccess(v32)
                     || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                     || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                     || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                     && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 )
                  {
                    v29 = *((_QWORD *)a1 + 5);
                    goto LABEL_107;
                  }
                }
                else
                {
                  if ( v27->iType == 1
                    && bAllowShareAccess(v27)
                    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
                  {
                    goto LABEL_98;
                  }
                  v28 = (struct _SURFOBJ *)*((_QWORD *)v23 + 20);
                  if ( (v28->iType != 1
                     || !bAllowShareAccess(v28)
                     || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                     || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                     || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                     && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v23 + 20)) + 112) & 0x400) != 0 )
                  {
                    v29 = *((_QWORD *)v23 + 20);
LABEL_107:
                    v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v29 + 24) + 1352LL);
                    goto LABEL_109;
                  }
                }
                v31 = EngCopyBits;
LABEL_109:
                OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v31,
                  (LONG *)&gptlZero,
                  *((_QWORD *)a1 + 5),
                  (int *)v33 + 42,
                  *((_QWORD *)v23 + 20),
                  &v44,
                  0LL,
                  &v42,
                  &v42);
                if ( v26 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
                if ( !v12 )
                {
LABEL_115:
                  v6 = v37;
                  v9 = (struct _RECTL *)((char *)a1 + 48);
                  v10 = v34;
                  break;
                }
LABEL_112:
                GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
LABEL_113:
                if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v40, &v33) )
                  goto LABEL_115;
              }
            }
          }
        }
        while ( v10 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v40);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v41);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v36);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v35);
}
