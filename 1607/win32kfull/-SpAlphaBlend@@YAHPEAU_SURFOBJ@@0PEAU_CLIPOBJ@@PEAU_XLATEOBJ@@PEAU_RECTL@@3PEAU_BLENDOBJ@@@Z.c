/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C01023D0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C003DE00 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngAlphaBlend @ 0x1C003F5B0 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     OffAlphaBlend @ 0x1C0102670 (OffAlphaBlend.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0102D58 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v8; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  USHORT *p_iType; // r14
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _SURFOBJ *v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ *v47; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v48; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 *v52[114]; // [rsp+90h] [rbp-70h] BYREF

  v8 = 1;
  v51 = (__int64)a4;
  hdev = a2->hdev;
  v45 = a1;
  v47 = a3;
  v50 = (__int64)prclSrc;
  v49 = (__int64)pBlendObj;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 17) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v52, a1, a3, prclDest);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v52, &v45, &v48, &v47) )
        return v8;
      v10 = v45;
      v11 = 0LL;
      v46 = 0LL;
      if ( v45
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v45) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
      {
        v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        v46 = v11;
        GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
      }
      v12 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v46, &v47) )
        break;
LABEL_15:
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
      if ( v11 )
        GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 280) + 20LL) & 0x10000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33);
          v11 = v46;
          LODWORD(v10) = (_DWORD)v45;
          v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(ThreadWin32Thread + 280) + 120LL);
          goto LABEL_14;
        }
        v11 = v46;
        v10 = v45;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v10) )
      {
        v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21);
        if ( v35
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 108)) )
        {
          v11 = v46;
          LODWORD(v10) = (_DWORD)v45;
          goto LABEL_28;
        }
        v11 = v46;
        v10 = v45;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x10000) != 0 )
    {
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v10->hdev + 174);
LABEL_14:
      v8 &= OffAlphaBlend(
              (int)v14,
              (int)&v48,
              (int)v10,
              (int)&gptlZero,
              (__int64)a2,
              v47,
              v51,
              (__int64)prclDest,
              v50,
              v49);
      goto LABEL_15;
    }
LABEL_28:
    v14 = EngAlphaBlend;
    goto LABEL_14;
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
