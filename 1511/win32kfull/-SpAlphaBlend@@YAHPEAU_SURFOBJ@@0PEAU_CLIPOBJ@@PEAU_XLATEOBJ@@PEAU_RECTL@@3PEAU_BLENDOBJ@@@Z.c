/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00EA070
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00305D0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0030880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     OffAlphaBlend @ 0x1C00EA310 (OffAlphaBlend.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00EA460 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ *v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 *v24[114]; // [rsp+90h] [rbp-70h] BYREF

  v8 = 1;
  v22 = (__int64)a4;
  hdev = a2->hdev;
  v17 = a1;
  v19 = a3;
  v21 = (__int64)prclSrc;
  v23 = (__int64)pBlendObj;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 17) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v24, a1, a3, prclDest);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v24, &v17, &v20, &v19) )
        return v8;
      v10 = v17;
      v11 = 0LL;
      v18 = 0LL;
      if ( v17
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
      {
        v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
        v18 = v11;
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
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v18, &v19) )
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
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v11 = v18;
          LODWORD(v10) = (_DWORD)v17;
          v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(ThreadWin32Thread + 280) + 120LL);
          goto LABEL_14;
        }
        v11 = v18;
        v10 = v17;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v11 = v18;
          LODWORD(v10) = (_DWORD)v17;
          goto LABEL_28;
        }
        v11 = v18;
        v10 = v17;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x10000) != 0 )
    {
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v10->hdev + 174);
LABEL_14:
      v8 &= OffAlphaBlend(
              (int)v14,
              (int)&v20,
              (int)v10,
              (int)&gptlZero,
              (__int64)a2,
              v19,
              v22,
              (__int64)prclDest,
              v21,
              v23);
      goto LABEL_15;
    }
LABEL_28:
    v14 = EngAlphaBlend;
    goto LABEL_14;
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
