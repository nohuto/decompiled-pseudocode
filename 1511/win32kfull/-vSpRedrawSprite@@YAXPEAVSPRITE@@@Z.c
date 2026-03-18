/*
 * XREFs of ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02771F0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026BB8C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026C170 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0271124 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0279EB4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0108890 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0111638 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C026E3F0 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C027287C (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0272DE0 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02736E8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0279A7C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027A158 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
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
  struct _SURFOBJ *v10; // rcx
  BOOL (__stdcall *v11)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct SPRITE *v12; // rax
  int v13; // edi
  struct SPRITE *v14; // rbx
  struct REGION *v15; // rbx
  __int128 v16; // xmm0
  struct _SPRITESTATE *v17; // rbx
  unsigned int i; // r12d
  struct _RECTL *v19; // r9
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  struct _POINTL v23; // [rsp+58h] [rbp-B0h] BYREF
  ULONG StartingIndex[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h]
  struct REGION *v26; // [rsp+70h] [rbp-98h]
  _BYTE v27[8]; // [rsp+78h] [rbp-90h] BYREF
  struct _RECTL v28; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v29[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v30; // [rsp+9Ch] [rbp-6Ch]
  char v31; // [rsp+ACh] [rbp-5Ch]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  __int64 v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+F0h] [rbp-18h]
  int v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+128h] [rbp+20h]
  unsigned int v37; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v38[20]; // [rsp+13Ch] [rbp+34h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v25 = v1;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 56LL) & 0x400) == 0
    && (*(_DWORD *)a1 & 0x400) == 0
    && (*(_DWORD *)a1 & 0x20) != 0
    && !(unsigned int)bIgnoreMirrorUpdate(a1)
    && ((v3 & 0x40) == 0 || (v3 & 0xC0) == 0xC0) )
  {
    v4 = (LONG *)((char *)a1 + 80);
    Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, (struct _RECTL *)a1 + 5, StartingIndex);
    if ( Composite )
    {
      v6 = 0LL;
      v7 = *((_QWORD *)a1 + 20);
      v23.x = -*v4;
      v23.y = -*((_DWORD *)a1 + 21);
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
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
          {
            v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
            if ( (v10->iType != 1
               || !bAllowShareAccess(v10)
               || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
               || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
               || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 20)) + 112) & 0x400) != 0 )
            {
              v11 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 20) + 24LL) + 1352LL);
              goto LABEL_51;
            }
            goto LABEL_50;
          }
LABEL_41:
          v11 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
          goto LABEL_51;
        }
      }
      if ( Composite->iType != 1 )
        goto LABEL_48;
      if ( bAllowShareAccess(Composite)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_41;
      }
      if ( Composite->iType != 1
        || !bAllowShareAccess(Composite)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
      {
LABEL_48:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) != 0 )
        {
          v11 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)Composite->hdev + 169);
          goto LABEL_51;
        }
      }
LABEL_50:
      v11 = EngCopyBits;
LABEL_51:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v11,
        (LONG *)&v23,
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
      v12 = pSpFindInZ(*(struct SPRITE **)(v1 + 16), (struct _RECTL *)a1 + 5);
      v13 = 0;
      while ( 1 )
      {
        v14 = v12;
        if ( !v12 )
          break;
        if ( bIntersect((const struct _RECTL *)v12 + 5, (const struct _RECTL *)a1 + 5, &v28) )
          vSpComposite(v14, &v23, Composite, &v28);
        SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v14 + 248));
        v12 = pSpFindInZ(*((struct SPRITE **)v14 + 3), (struct _RECTL *)a1 + 5);
      }
      v15 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
      v26 = v15;
      if ( !v15 )
      {
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
          vSpWriteToScreen((struct _SPRITESTATE *)v1, &v23, Composite, (struct _RECTL *)a1 + 5);
        goto LABEL_85;
      }
      v33 = 0LL;
      v34 = 0;
      v35 = 1;
      v36 = 0LL;
      v32 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v29, v15, (struct SPRITE *)((char *)a1 + 80), 1);
      if ( v31 )
      {
        if ( v31 != 1 )
        {
          if ( v31 != 3 )
          {
LABEL_84:
            vSpAddAndCompactDirtyRegion(a1, v15);
LABEL_85:
            if ( StartingIndex[0] == -1 )
            {
              vSpDeleteSurface(Composite);
            }
            else
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v27, (struct _EX_PUSH_LOCK *)(v1 + 696));
              RtlClearBits((PRTL_BITMAP)(v1 + 672), StartingIndex[0], 1u);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v27);
            }
            return;
          }
          v13 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v29, 0, 0, 4u, 0x14u);
LABEL_70:
          v17 = (struct _SPRITESTATE *)v1;
          if ( !v13 )
            goto LABEL_72;
          do
          {
            v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v29, 0x144u, (char *)&v37, 0LL);
LABEL_72:
            for ( i = 0; i < v37; ++i )
            {
              v19 = (struct _RECTL *)&v38[i];
              if ( v19->left < *v4 )
                v19->left = *v4;
              v20 = *((_DWORD *)a1 + 22);
              if ( v19->right > v20 )
                v19->right = v20;
              v21 = *((_DWORD *)a1 + 21);
              if ( v19->top < v21 )
                v19->top = v21;
              v22 = *((_DWORD *)a1 + 23);
              if ( v19->bottom > v22 )
                v19->bottom = v22;
              vSpWriteToScreen(v17, &v23, Composite, v19);
            }
          }
          while ( v13 );
          v15 = v26;
          v1 = v25;
          goto LABEL_84;
        }
        v16 = v30;
      }
      else
      {
        v16 = *(_OWORD *)v4;
      }
      v38[0] = v16;
      v37 = 1;
      goto LABEL_70;
    }
  }
}
