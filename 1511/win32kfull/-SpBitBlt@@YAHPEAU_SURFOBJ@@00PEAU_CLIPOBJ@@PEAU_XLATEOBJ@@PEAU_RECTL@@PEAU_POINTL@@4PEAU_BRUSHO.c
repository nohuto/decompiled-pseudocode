/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0031F00
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00342A0 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00305D0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0030880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     OffBitBlt @ 0x1C00E9B20 (OffBitBlt.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00EA440 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
  struct _POINTL *v12; // r13
  unsigned int v13; // r12d
  struct _SURFOBJ *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rsi
  USHORT *p_iType; // rdi
  __int64 (__fastcall *v18)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, struct _POINTL *, unsigned int); // r10
  __int64 v19; // r8
  struct _POINTL *v20; // rdx
  struct _POINTL *v21; // r11
  struct _POINTL v22; // rdi
  struct _POINTL *v23; // r9
  LONG y; // r13d
  int v25; // eax
  __int64 v26; // rcx
  LONG v27; // r13d
  LONG v28; // edi
  int v29; // r14d
  HDEV hdev; // rax
  __int64 (__fastcall *v32)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  USHORT *v33; // rdi
  __int64 (__fastcall *v34)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *); // r10
  CLIPOBJ *v35; // r13
  LONG v36; // r8d
  LONG x; // edi
  LONG v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // r8d
  int v43; // ecx
  USHORT *v44; // r13
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 ThreadWin32Thread; // rax
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax
  struct _SURFOBJ *v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h]
  struct _POINTL v54; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v55; // [rsp+98h] [rbp-68h]
  struct _POINTL *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  struct _POINTL *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  _DWORD v60[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h]
  _DWORD v63[2]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v64[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v65[2]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v66[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL *v67; // [rsp+F8h] [rbp-8h]
  struct _POINTL v68; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v69; // [rsp+108h] [rbp+8h] BYREF
  struct _RECTL v70; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v71[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v72[2]; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v73[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v74[114]; // [rsp+150h] [rbp+50h] BYREF

  v12 = a10;
  v13 = 1;
  v62 = (__int64)a3;
  ppco = a4;
  v59 = (__int64)a5;
  v56 = a7;
  v50 = a1;
  v67 = a8;
  v61 = (__int64)a9;
  v57 = (__int64)a10;
  if ( !a2 || (hdev = a2->hdev) == 0LL || a2 != *((struct _SURFOBJ **)hdev + 17) )
  {
    v70 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v74, a1, a4, a6);
    if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v74, &v50, &v54, &ppco) )
      return v13;
    while ( 1 )
    {
      v14 = v50;
      v15 = 0LL;
      if ( v50
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v50) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 0x200) == 0 )
      {
        v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v14);
        GreLockDisplayDevice(*(_QWORD *)(v15 + 48));
      }
      v16 = 0LL;
      if ( a2
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v16 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
      }
      if ( !v15 || *(_WORD *)(v15 + 100) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(v15 + 24), &ppco) )
        break;
      if ( v16 )
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
LABEL_60:
      GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
LABEL_28:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v74, &v50, &v54, &ppco) )
        return v13;
    }
    if ( a11 != 52428 )
    {
      if ( (unsigned __int8)a11 == a11 >> 8 )
      {
        p_iType = &v14->iType;
        if ( v14->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(v14) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v14 = v50;
              v18 = *(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, struct _POINTL *, unsigned int))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
              goto LABEL_14;
            }
            v14 = v50;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v14) )
          {
            if ( W32GetThreadWin32Thread(KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
            {
              v14 = v50;
              goto LABEL_125;
            }
            v14 = v50;
          }
        }
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 1) != 0 )
        {
          v18 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, struct _POINTL *, unsigned int))*((_QWORD *)v14->hdev + 168);
LABEL_14:
          v19 = (__int64)ppco;
          v20 = v12;
          v21 = v56;
          v22 = v54;
          v23 = v56;
          y = v54.y;
          v51 = (__int64)v18;
          v55 = v20;
          v58 = v56;
          v53 = (__int64)ppco;
          if ( ppco && (v54.x || v54.y) )
          {
            ppco->rclBounds.left += v54.x;
            *(_DWORD *)(v19 + 12) += v22.x;
            *(_DWORD *)(v19 + 8) += y;
            *(_DWORD *)(v19 + 16) += y;
            if ( *(_BYTE *)(v19 + 20) )
            {
              v69 = v22;
              RGNOBJ::bOffset((RGNOBJ *)(v19 + 56), &v69);
              v23 = v58;
              v20 = v55;
              v21 = v58;
              v19 = v53;
              v18 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, struct _POINTL *, unsigned int))v51;
            }
          }
          v71[0] = v22.x + v70.left;
          v71[2] = v22.x + v70.right;
          v71[1] = y + v70.top;
          v71[3] = y + v70.bottom;
          if ( v21 )
          {
            v23 = (struct _POINTL *)v66;
            v66[0] = gptlZero.x + v21->x;
            v66[1] = gptlZero.y + v21->y;
          }
          if ( v57 )
          {
            v20 = (struct _POINTL *)v60;
            v60[0] = v22.x + *(_DWORD *)v57;
            v60[1] = y + *(_DWORD *)(v57 + 4);
          }
          v25 = v18(v14, a2, v62, v19, v59, v71, v23, v67, v61, v20, a11);
          v26 = v53;
          v27 = -y;
          v28 = -v22.x;
          v29 = v25;
          if ( v53 && (v28 || v27) )
          {
            *(_DWORD *)(v53 + 4) += v28;
            *(_DWORD *)(v26 + 12) += v28;
            *(_DWORD *)(v26 + 8) += v27;
            *(_DWORD *)(v26 + 16) += v27;
            if ( *(_BYTE *)(v26 + 20) )
            {
              v68.x = v28;
              v68.y = v27;
              RGNOBJ::bOffset((RGNOBJ *)(v26 + 56), &v68);
            }
          }
          v12 = (struct _POINTL *)v57;
          v13 &= v29;
LABEL_25:
          if ( v16 )
            GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
          if ( !v15 )
            goto LABEL_28;
          goto LABEL_60;
        }
LABEL_125:
        v18 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, struct _POINTL *, unsigned int))EngBitBlt;
        goto LABEL_14;
      }
      *(struct _RECTL *)v72 = v70;
      if ( ppco && !bIntersect(&ppco->rclBounds, &v70, (struct _RECTL *)v72) )
        goto LABEL_25;
      v41 = LODWORD(v72[0]) - v70.left;
      v42 = HIDWORD(v72[0]) - v70.top;
      v53 = 0LL;
      if ( v56 )
      {
        v43 = v41 + v56->x;
        v53 = (__int64)v65;
        v65[0] = v43;
        v65[1] = v42 + v56->y;
      }
      v51 = 0LL;
      if ( v67 )
      {
        v47 = v41 + v67->x;
        v51 = (__int64)v64;
        v64[0] = v47;
        v64[1] = v42 + v67->y;
      }
      v44 = &v14->iType;
      if ( v14->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v14) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v49 = W32GetThreadWin32Thread(KeGetCurrentThread());
            LODWORD(v14) = (_DWORD)v50;
            v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v49 + 280) + 72LL);
            goto LABEL_81;
          }
          v14 = v50;
        }
        if ( *v44 == 1 && (unsigned int)bAllowShareAccess(v14) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
          {
            LODWORD(v14) = (_DWORD)v50;
            goto LABEL_143;
          }
          v14 = v50;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 1) != 0 )
      {
        v45 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v14->hdev + 168);
LABEL_81:
        v12 = (struct _POINTL *)v57;
        v40 = OffBitBlt(
                (int)v45,
                (int)&v54,
                (int)v14,
                (int)&gptlZero,
                (__int64)a2,
                v62,
                ppco,
                v59,
                (__int64)v72,
                v53,
                v51,
                v61,
                v57,
                a11);
LABEL_50:
        v13 &= v40;
        goto LABEL_25;
      }
LABEL_143:
      v45 = EngBitBlt;
      goto LABEL_81;
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 0x400) == 0 && a2->hdev )
    {
      if ( a2->iType != 1 )
        goto LABEL_55;
      if ( (unsigned int)bAllowShareAccess(a2) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
        {
LABEL_96:
          v48 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v14 = v50;
          v34 = *(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)(v48 + 280) + 80LL);
          goto LABEL_43;
        }
        v14 = v50;
      }
      if ( a2->iType != 1 || !(unsigned int)bAllowShareAccess(a2) )
      {
LABEL_55:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
        {
          v34 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))*((_QWORD *)a2->hdev + 169);
          goto LABEL_43;
        }
        goto LABEL_117;
      }
      if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
      {
        v14 = v50;
        goto LABEL_55;
      }
LABEL_116:
      v14 = v50;
      goto LABEL_117;
    }
    v33 = &v14->iType;
    if ( v14->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v14) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
        {
          goto LABEL_96;
        }
        v14 = v50;
      }
      if ( *v33 == 1 && (unsigned int)bAllowShareAccess(v14) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_116;
        }
        v14 = v50;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 0x400) != 0 )
    {
      v34 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))*((_QWORD *)v14->hdev + 169);
LABEL_43:
      v35 = ppco;
      v36 = v54.y;
      x = v54.x;
      LODWORD(v55) = gptlZero.x;
      LODWORD(v53) = gptlZero.y;
      v51 = (__int64)v34;
      LODWORD(v58) = v54.y;
      if ( ppco )
      {
        CLIPOBJ_vOffset(ppco, v54.x, v54.y);
        v34 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))v51;
        v36 = (int)v58;
      }
      v73[0] = x + v70.left;
      v38 = v56->y;
      v73[2] = x + v70.right;
      v73[1] = v36 + v70.top;
      v73[3] = v36 + v70.bottom;
      v39 = v38 + v53;
      v63[0] = v56->x + (_DWORD)v55;
      v40 = 0;
      v63[1] = v39;
      LODWORD(v55) = 0;
      if ( v34 )
      {
        v40 = v34(v14, a2, v35, v59, v73, v63);
        v36 = (int)v58;
        LODWORD(v55) = v40;
      }
      if ( v35 )
      {
        CLIPOBJ_vOffset(v35, -x, -v36);
        v40 = (int)v55;
      }
      v12 = (struct _POINTL *)v57;
      goto LABEL_50;
    }
LABEL_117:
    v34 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, __int64, _DWORD *, _DWORD *))EngCopyBits;
    goto LABEL_43;
  }
  v32 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  if ( a1 == a2 )
    v32 = bSpBltScreenToScreen;
  return v32(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
