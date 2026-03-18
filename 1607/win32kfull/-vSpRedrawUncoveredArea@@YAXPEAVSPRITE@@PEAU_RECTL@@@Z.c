/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0275D90
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0129E60 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01317D8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C026FD3C (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0270DD4 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0270FF0 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0276D38 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0277FCC (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C027855C (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02786A8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // r12
  struct _RECTL *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r15
  int v7; // esi
  struct _POINTL *v8; // rdx
  struct _SURFOBJ *Composite; // r13
  __int64 v10; // rdi
  struct _RECTL *v11; // rbx
  struct SPRITE *v12; // rcx
  struct SPRITE *v13; // rbx
  struct _RECTL *v14; // r12
  struct _RECTL *v15; // rdi
  const struct _RECTL *v16; // rcx
  __int64 v17; // r12
  struct _RECTL *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rbx
  struct _SURFOBJ *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
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
  struct _SURFOBJ *v38; // rcx
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
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  struct SPRITE *v76; // rbx
  __int64 v77; // r15
  struct _RECTL *v78; // rdi
  __int64 v79; // rsi
  struct _SURFOBJ *v80; // r8
  struct _POINTL *v81; // rdx
  unsigned int v82; // [rsp+50h] [rbp-B0h]
  ULONG StartingIndex; // [rsp+54h] [rbp-ACh] BYREF
  struct _POINTL v84; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+60h] [rbp-A0h]
  __int64 v86; // [rsp+68h] [rbp-98h]
  struct _RECTL *v87; // [rsp+70h] [rbp-90h]
  struct SPRITE *v88; // [rsp+78h] [rbp-88h]
  struct SPRITE *v89; // [rsp+80h] [rbp-80h] BYREF
  int v90; // [rsp+88h] [rbp-78h]
  struct _RECTL *v91; // [rsp+90h] [rbp-70h]
  __int64 v92; // [rsp+98h] [rbp-68h]
  _BYTE v93[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v94; // [rsp+A8h] [rbp-58h] BYREF
  struct _RECTL v95; // [rsp+C0h] [rbp-40h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v92 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 56LL) & 0x400) == 0 )
  {
    v4 = (struct _RECTL *)((char *)a1 + 80);
    v5 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v95);
    v6 = v5;
    v82 = v5;
    if ( v5 )
    {
      v7 = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1040) && (_DWORD)v6 )
        {
          v10 = (unsigned int)v6;
          v11 = &v95;
          do
          {
            vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v8, v11++, 0LL, 1);
            --v10;
          }
          while ( v10 );
          v6 = v82;
          v4 = (struct _RECTL *)((char *)a1 + 80);
        }
        v12 = *(struct SPRITE **)(v2 + 16);
        v84.x = -v4->left;
        v84.y = -*((_DWORD *)a1 + 21);
        v88 = pSpFindInZ(v12, v4);
        v13 = v88;
        if ( v88 )
        {
          v14 = (struct _RECTL *)((char *)a1 + 80);
          while ( v13 == a1 || !(_DWORD)v6 )
          {
LABEL_69:
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v13 + 248));
            v88 = pSpFindInZ(*((struct SPRITE **)v13 + 3), v14);
            v13 = v88;
            if ( !v88 )
            {
              v2 = v92;
              goto LABEL_71;
            }
          }
          v15 = &v95;
          v87 = &v95;
          v16 = (const struct _RECTL *)((char *)v13 + 80);
          v86 = (unsigned int)v6;
          v17 = (unsigned int)v6;
LABEL_14:
          if ( !bIntersect(v15, v16, &v94) )
            goto LABEL_67;
          if ( v7 )
            goto LABEL_66;
          v18 = &v95;
          v85 = v17;
          while ( 1 )
          {
            v19 = *((_QWORD *)a1 + 20);
            v20 = 0LL;
            if ( v19
              && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 20)) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x200) == 0 )
            {
              v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v19);
              GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
            }
            v21 = 0LL;
            if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
            {
              v21 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
              GreLockDisplayDevice(*(_QWORD *)(v21 + 48));
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) != 0
              || (v22 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20), !v22->hdev) )
            {
              if ( Composite->iType == 1 )
              {
                if ( bAllowShareAccess(Composite)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54)
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 108))
                  && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 280)
                                + 20LL) & 0x400) != 0 )
                {
LABEL_50:
                  v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 280) + 80LL);
                  goto LABEL_60;
                }
                if ( Composite->iType == 1
                  && bAllowShareAccess(Composite)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66)
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 108)) )
                {
                  goto LABEL_59;
                }
              }
              if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) == 0 )
                goto LABEL_59;
              v51 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)Composite->hdev + 169);
            }
            else
            {
              if ( v22->iType == 1
                && bAllowShareAccess(v22)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 280)
                              + 20LL) & 0x400) != 0 )
              {
                goto LABEL_50;
              }
              v38 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
              if ( v38->iType == 1
                && bAllowShareAccess(v38)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 108))
                || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 20)) + 112) & 0x400) == 0 )
              {
LABEL_59:
                v51 = EngCopyBits;
                goto LABEL_60;
              }
              v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 20) + 24LL) + 1352LL);
            }
LABEL_60:
            OffCopyBits(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v51,
              (LONG *)&v84,
              (__int64)Composite,
              (int *)a1 + 42,
              *((_QWORD *)a1 + 20),
              0LL,
              0LL,
              v18,
              v18);
            if ( v21 )
              GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
            if ( v20 )
              GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
            ++v18;
            if ( !--v85 )
            {
              v13 = v88;
              v7 = 1;
              v15 = v87;
              v17 = v86;
LABEL_66:
              vSpComposite(v13, &v84, Composite, &v94);
LABEL_67:
              ++v15;
              v16 = (const struct _RECTL *)((char *)v13 + 80);
              v87 = v15;
              if ( !--v6 )
              {
                v6 = v82;
                v14 = (struct _RECTL *)((char *)a1 + 80);
                goto LABEL_69;
              }
              goto LABEL_14;
            }
          }
        }
LABEL_71:
        v76 = 0LL;
        v90 = 0;
        v89 = 0LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          v90 = v6;
          v76 = a1;
          v91 = &v95;
          v89 = a1;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v89);
        }
        if ( (_DWORD)v6 )
        {
          v77 = v7;
          v78 = &v95;
          v79 = v82;
          do
          {
            if ( v77 )
            {
              v80 = Composite;
              v81 = &v84;
            }
            else
            {
              v80 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
              v81 = (struct _POINTL *)((char *)a1 + 168);
            }
            vSpWriteToScreen((struct _SPRITESTATE *)v2, v81, v80, v78++);
            --v79;
          }
          while ( v79 );
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v93, (struct _EX_PUSH_LOCK *)(v2 + 696));
          RtlClearBits((PRTL_BITMAP)(v2 + 672), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v93);
        }
        if ( v76 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v89);
      }
    }
  }
}
