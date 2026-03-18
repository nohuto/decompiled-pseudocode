/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C003D6F0
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C003C640 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C003DE00 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     OffBitBlt @ 0x1C0102BB8 (OffBitBlt.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0102D38 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _POINTL *v11; // rbx
  unsigned int v13; // r15d
  HDEV hdev; // rax
  struct _SURFOBJ *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rsi
  USHORT *v19; // rbx
  HDEV v20; // rax
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  CLIPOBJ *v22; // r12
  LONG y; // r8d
  LONG x; // ebx
  int v25; // eax
  int v26; // ecx
  LONG v27; // edx
  LONG v28; // eax
  LONG v29; // r14d
  __int64 (__fastcall *v30)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  USHORT *p_iType; // rbx
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  _DWORD *v34; // r12
  int v35; // edx
  int v36; // r8d
  _DWORD *v37; // r15
  USHORT *v38; // rbx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v40; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct _SURFOBJ *v44; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+78h] [rbp-88h]
  LONG v46; // [rsp+7Ch] [rbp-84h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  LONG v48; // [rsp+88h] [rbp-78h]
  struct _POINTL v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  LONG v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  _DWORD v53[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v54[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h]
  _DWORD v56[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v61[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v62[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v63[912]; // [rsp+120h] [rbp+20h] BYREF

  v11 = a7;
  v59 = (__int64)a3;
  v13 = 1;
  ppco = a4;
  v52 = (__int64)a5;
  v55 = (__int64)a8;
  v44 = a1;
  v50 = (__int64)a7;
  v58 = (__int64)a9;
  v57 = (__int64)a10;
  v45 = 1;
  if ( a2 )
    hdev = a2->hdev;
  else
    hdev = 0LL;
  if ( !hdev || a2 != *((struct _SURFOBJ **)hdev + 17) )
  {
    *(struct _RECTL *)v60 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v63, a1, a4, a6);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v63, &v44, &v49, &ppco) )
          return v13;
        v15 = v44;
        v16 = 0LL;
        if ( v44
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v44) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x200) == 0 )
        {
          v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
          GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
        }
        v17 = 0LL;
        if ( a2
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
        {
          v17 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
          GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
        }
        if ( !v16 || *(_WORD *)(v16 + 100) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(v16 + 24), &ppco) )
          break;
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        if ( v16 )
          GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
      }
      if ( a11 == 52428 )
        break;
      if ( (unsigned __int8)a11 == a11 >> 8 )
      {
        p_iType = &v15->iType;
        if ( v15->iType != 1 )
          goto LABEL_51;
        if ( (unsigned int)bAllowShareAccess(v15) )
        {
          if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) == 0 )
          {
            v15 = v44;
            goto LABEL_62;
          }
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          LODWORD(v15) = (_DWORD)v44;
          v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
          goto LABEL_53;
        }
LABEL_62:
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v15) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
          {
            LODWORD(v15) = (_DWORD)v44;
LABEL_124:
            v33 = EngBitBlt;
            goto LABEL_53;
          }
          v15 = v44;
        }
LABEL_51:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 1) == 0 )
          goto LABEL_124;
        v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v15->hdev + 168);
LABEL_53:
        v11 = (struct _POINTL *)v50;
        v13 &= OffBitBlt(
                 (int)v33,
                 (int)&v49,
                 (int)v15,
                 (int)&gptlZero,
                 (__int64)a2,
                 v59,
                 ppco,
                 v52,
                 (__int64)v60,
                 v50,
                 v55,
                 v58,
                 v57,
                 a11);
        goto LABEL_31;
      }
      *(_OWORD *)v62 = *(_OWORD *)v60;
      if ( !ppco || bIntersect(&ppco->rclBounds, (const struct _RECTL *)v60, (struct _RECTL *)v62) )
      {
        v34 = 0LL;
        v35 = LODWORD(v62[0]) - LODWORD(v60[0]);
        v36 = HIDWORD(v62[0]) - HIDWORD(v60[0]);
        if ( v11 )
        {
          v34 = v54;
          v54[0] = v35 + v11->x;
          v54[1] = v36 + v11->y;
        }
        v37 = 0LL;
        if ( v55 )
        {
          v37 = v56;
          v56[0] = v35 + *(_DWORD *)v55;
          v56[1] = v36 + *(_DWORD *)(v55 + 4);
        }
        v38 = &v15->iType;
        if ( v15->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(v15) )
          {
            if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
              || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) == 0 )
            {
              v15 = v44;
              goto LABEL_73;
            }
            v43 = W32GetThreadWin32Thread(KeGetCurrentThread());
            LODWORD(v15) = (_DWORD)v44;
            v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v43 + 280) + 72LL);
          }
          else
          {
LABEL_73:
            if ( *v38 != 1 || !(unsigned int)bAllowShareAccess(v15) )
              goto LABEL_75;
            if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
            {
              v15 = v44;
              goto LABEL_75;
            }
            LODWORD(v15) = (_DWORD)v44;
LABEL_138:
            v39 = EngBitBlt;
          }
        }
        else
        {
LABEL_75:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 1) == 0 )
            goto LABEL_138;
          v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v15->hdev + 168);
        }
        v40 = OffBitBlt(
                (int)v39,
                (int)&v49,
                (int)v15,
                (int)&gptlZero,
                (__int64)a2,
                v59,
                ppco,
                v52,
                (__int64)v62,
                (__int64)v34,
                (__int64)v37,
                v58,
                v57,
                a11);
        v13 = v40 & v45;
LABEL_30:
        v11 = (struct _POINTL *)v50;
LABEL_31:
        v45 = v13;
      }
      if ( v17 )
        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
      if ( v16 )
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x400) == 0 && a2->hdev )
    {
      if ( a2->iType != 1 )
        goto LABEL_47;
      if ( !(unsigned int)bAllowShareAccess(a2) )
        goto LABEL_95;
      if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v15 = v44;
LABEL_95:
        if ( a2->iType != 1 || !(unsigned int)bAllowShareAccess(a2) )
        {
LABEL_47:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
          {
            v20 = a2->hdev;
            goto LABEL_22;
          }
          goto LABEL_114;
        }
        if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
        {
          v15 = v44;
          goto LABEL_47;
        }
LABEL_113:
        v15 = v44;
        goto LABEL_114;
      }
LABEL_107:
      v42 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v15 = v44;
      v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v42 + 280)
                                                                                                 + 80LL);
      goto LABEL_23;
    }
    v19 = &v15->iType;
    if ( v15->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v15) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
        {
          goto LABEL_107;
        }
        v15 = v44;
      }
      if ( *v19 == 1 && (unsigned int)bAllowShareAccess(v15) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_113;
        }
        v15 = v44;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x400) != 0 )
    {
      v20 = v15->hdev;
LABEL_22:
      v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v20 + 169);
LABEL_23:
      v22 = ppco;
      y = v49.y;
      x = v49.x;
      v51 = gptlZero.x;
      v46 = gptlZero.y;
      v48 = v49.y;
      if ( ppco )
      {
        CLIPOBJ_vOffset(ppco, v49.x, v49.y);
        y = v48;
      }
      v61[0] = x + LODWORD(v60[0]);
      v25 = *(_DWORD *)(v50 + 4);
      v61[2] = x + LODWORD(v60[1]);
      v61[1] = y + HIDWORD(v60[0]);
      v61[3] = y + HIDWORD(v60[1]);
      v26 = *(_DWORD *)v50 + v51;
      v27 = v46;
      v46 = 0;
      v53[0] = v26;
      v53[1] = v25 + v27;
      if ( v21 )
      {
        v28 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))v21)(
                v15,
                a2,
                v22,
                v52,
                v61,
                v53);
        y = v48;
        v29 = v28;
      }
      else
      {
        v29 = v46;
      }
      if ( v22 )
        CLIPOBJ_vOffset(v22, -x, -y);
      v13 = v29 & v45;
      goto LABEL_30;
    }
LABEL_114:
    v21 = EngCopyBits;
    goto LABEL_23;
  }
  v30 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  if ( a1 == a2 )
    v30 = bSpBltScreenToScreen;
  return (unsigned int)v30(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
