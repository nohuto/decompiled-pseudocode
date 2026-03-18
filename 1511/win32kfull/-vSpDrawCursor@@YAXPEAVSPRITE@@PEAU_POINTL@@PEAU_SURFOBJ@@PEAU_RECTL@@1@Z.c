/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0275740
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02736E8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     OffBitBlt @ 0x1C00E9B20 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbx
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r12
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL *v16; // r14
  POINTL *v17; // r13
  __int64 v18; // rbp
  int y; // eax
  __int64 v20; // r14
  __int64 v21; // rbx
  struct _RECTL *v22; // [rsp+40h] [rbp-78h]
  __int64 v23; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+78h] [rbp-40h]
  LONG x; // [rsp+C0h] [rbp+8h] BYREF
  int v26; // [rsp+C4h] [rbp+Ch]
  int *v27; // [rsp+C8h] [rbp+10h]
  __int64 v28; // [rsp+D8h] [rbp+20h]

  v28 = (__int64)a4;
  v27 = (int *)a2;
  if ( *((_QWORD *)a1 + 15) )
  {
    v8 = *((_QWORD *)a1 + 2);
    v23 = 0LL;
    v9 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v8 + 40));
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v23,
                          0LL,
                          0,
                          (__int64)ppalMono,
                          *(_QWORD *)(v9 + 120),
                          (__int64)ppalDefault,
                          (__int64)ppalDefault,
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_60:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23, v10);
      return;
    }
    v11 = 0LL;
    if ( a3
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
    {
      v11 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
      GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
    }
    v12 = *((_QWORD *)a1 + 15);
    v13 = 0LL;
    if ( v12
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 15)) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x200) == 0 )
    {
      v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
      GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
    v14 = EngBitBlt;
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
        goto LABEL_30;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_29;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
LABEL_29:
      v15 = EngBitBlt;
    else
      v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 168);
LABEL_30:
    v16 = a5;
    v22 = a4;
    v17 = &gptlZero;
    v24 = v23;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v15,
      v27,
      (__int64)a3,
      &gptlZero,
      *((_QWORD *)a1 + 15),
      0LL,
      0LL,
      v23,
      v22,
      a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v13 )
      GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    v18 = *((_QWORD *)a1 + 16);
    x = v16->x;
    if ( v18 )
    {
      y = v16->y;
      v17 = (POINTL *)((char *)a1 + 136);
      v20 = 0LL;
    }
    else
    {
      v18 = *((_QWORD *)a1 + 15);
      y = v16->y + (*(int *)(v18 + 36) >> 1);
      v20 = v24;
    }
    v26 = y;
    v21 = 0LL;
    if ( v18
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0 )
    {
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
      GreLockDisplayDevice(*(_QWORD *)(v21 + 48));
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_56:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v14,
          v27,
          (__int64)a3,
          v17,
          v18,
          0LL,
          0LL,
          v20,
          (_DWORD *)v28,
          &x,
          0LL,
          0LL,
          0LL,
          26214);
        if ( v21 )
          GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
        if ( v11 )
          GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
        goto LABEL_60;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_56;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) != 0 )
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 168);
    goto LABEL_56;
  }
}
