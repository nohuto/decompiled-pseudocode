/*
 * XREFs of ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275738
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0075788 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026A044 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026A628 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C026F61C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0278404 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0129E60 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01317D8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C026C8B0 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0270DD4 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0271338 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0277FCC (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02786A8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawSprite(struct SPRITE *a1)
{
  __int64 v1; // r12
  char v3; // dl
  LONG *v4; // r13
  struct _SURFOBJ *Composite; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  struct _SURFOBJ *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _SURFOBJ *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  struct SPRITE *v63; // rax
  int v64; // edi
  struct SPRITE *v65; // rbx
  struct REGION *v66; // rbx
  __int128 v67; // xmm0
  struct _SPRITESTATE *v68; // rbx
  unsigned int i; // r12d
  struct _RECTL *v70; // r9
  LONG v71; // eax
  LONG v72; // eax
  LONG v73; // eax
  ULONG StartingIndex; // [rsp+58h] [rbp-B0h] BYREF
  struct _POINTL v75; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+68h] [rbp-A0h]
  struct REGION *v77; // [rsp+70h] [rbp-98h]
  _BYTE v78[8]; // [rsp+78h] [rbp-90h] BYREF
  struct _RECTL v79; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v80[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v81; // [rsp+9Ch] [rbp-6Ch]
  char v82; // [rsp+ACh] [rbp-5Ch]
  __int64 v83; // [rsp+D0h] [rbp-38h]
  __int64 v84; // [rsp+E8h] [rbp-20h]
  int v85; // [rsp+F0h] [rbp-18h]
  int v86; // [rsp+118h] [rbp+10h]
  __int64 v87; // [rsp+128h] [rbp+20h]
  unsigned int v88; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v89[20]; // [rsp+13Ch] [rbp+34h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v76 = v1;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 56LL) & 0x400) == 0
    && (*(_DWORD *)a1 & 0x400) == 0
    && (*(_DWORD *)a1 & 0x20) != 0
    && !(unsigned int)bIgnoreMirrorUpdate(a1)
    && ((v3 & 0x40) == 0 || (v3 & 0xC0) == 0xC0) )
  {
    v4 = (LONG *)((char *)a1 + 80);
    Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, (struct _RECTL *)a1 + 5, &StartingIndex);
    if ( Composite )
    {
      v6 = 0LL;
      v7 = *((_QWORD *)a1 + 20);
      v75.x = -*v4;
      v75.y = -*((_DWORD *)a1 + 21);
      if ( v7
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) & 0x200) == 0 )
      {
        v6 = SURFOBJ_TO_SURFACE_NOT_NULL(v7);
        GreLockDisplayDevice(*(_QWORD *)(v6 + 48));
      }
      v8 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
      {
        v8 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
        GreLockDisplayDevice(*(_QWORD *)(v8 + 48));
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) == 0 )
      {
        v9 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
        if ( v9->hdev )
        {
          if ( v9->iType != 1
            || !bAllowShareAccess(v9)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 280)
                          + 20LL) & 0x400) == 0 )
          {
            v25 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
            if ( (v25->iType != 1
               || !bAllowShareAccess(v25)
               || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28)
               || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 280)
               || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 104)
               && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 108))
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 20)) + 112) & 0x400) != 0 )
            {
              v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 20) + 24LL) + 1352LL);
              goto LABEL_51;
            }
            goto LABEL_50;
          }
LABEL_41:
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 280) + 80LL);
          goto LABEL_51;
        }
      }
      if ( Composite->iType != 1 )
        goto LABEL_48;
      if ( bAllowShareAccess(Composite)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_41;
      }
      if ( Composite->iType != 1
        || !bAllowShareAccess(Composite)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 108) )
      {
LABEL_48:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) != 0 )
        {
          v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)Composite->hdev + 169);
          goto LABEL_51;
        }
      }
LABEL_50:
      v38 = EngCopyBits;
LABEL_51:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v38,
        (LONG *)&v75,
        (__int64)Composite,
        (int *)a1 + 42,
        *((_QWORD *)a1 + 20),
        0LL,
        0LL,
        (_DWORD *)a1 + 20,
        (_DWORD *)a1 + 20);
      if ( v8 )
        GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
      if ( v6 )
        GreUnlockDisplayDevice(*(_QWORD *)(v6 + 48));
      v63 = pSpFindInZ(*(struct SPRITE **)(v1 + 16), (struct _RECTL *)a1 + 5);
      v64 = 0;
      while ( 1 )
      {
        v65 = v63;
        if ( !v63 )
          break;
        if ( bIntersect((const struct _RECTL *)v63 + 5, (const struct _RECTL *)a1 + 5, &v79) )
          vSpComposite(v65, &v75, Composite, &v79);
        SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v65 + 248));
        v63 = pSpFindInZ(*((struct SPRITE **)v65 + 3), (struct _RECTL *)a1 + 5);
      }
      v66 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
      v77 = v66;
      if ( !v66 )
      {
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
          vSpWriteToScreen((struct _SPRITESTATE *)v1, &v75, Composite, (struct _RECTL *)a1 + 5);
        goto LABEL_85;
      }
      v84 = 0LL;
      v85 = 0;
      v86 = 1;
      v87 = 0LL;
      v83 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v80, v66, (struct SPRITE *)((char *)a1 + 80), 1);
      if ( v82 )
      {
        if ( v82 != 1 )
        {
          if ( v82 != 3 )
          {
LABEL_84:
            vSpAddAndCompactDirtyRegion(a1, v66);
LABEL_85:
            if ( StartingIndex == -1 )
            {
              vSpDeleteSurface(Composite);
            }
            else
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v78, (struct _EX_PUSH_LOCK *)(v1 + 696));
              RtlClearBits((PRTL_BITMAP)(v1 + 672), StartingIndex, 1u);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v78);
            }
            return;
          }
          v64 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v80, 0, 0, 4u, 0x14u);
LABEL_70:
          v68 = (struct _SPRITESTATE *)v1;
          if ( !v64 )
            goto LABEL_72;
          do
          {
            v64 = XCLIPOBJ::bEnum((XCLIPOBJ *)v80, 0x144u, (char *)&v88, 0LL);
LABEL_72:
            for ( i = 0; i < v88; ++i )
            {
              v70 = (struct _RECTL *)&v89[i];
              if ( v70->left < *v4 )
                v70->left = *v4;
              v71 = *((_DWORD *)a1 + 22);
              if ( v70->right > v71 )
                v70->right = v71;
              v72 = *((_DWORD *)a1 + 21);
              if ( v70->top < v72 )
                v70->top = v72;
              v73 = *((_DWORD *)a1 + 23);
              if ( v70->bottom > v73 )
                v70->bottom = v73;
              vSpWriteToScreen(v68, &v75, Composite, v70);
            }
          }
          while ( v64 );
          v66 = v77;
          v1 = v76;
          goto LABEL_84;
        }
        v67 = v81;
      }
      else
      {
        v67 = *(_OWORD *)v4;
      }
      v89[0] = v67;
      v88 = 1;
      goto LABEL_70;
    }
  }
}
