/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0275EB0
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02731B8 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0277F5C (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C027AB70 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C026AD70 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026E32C (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0272B44 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  struct _SURFOBJ *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  HDEV hdev; // rax
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+68h] [rbp-98h]
  struct _CLIPOBJ *v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h]
  int v26[2]; // [rsp+88h] [rbp-78h]
  REGION *v27[11]; // [rsp+90h] [rbp-70h] BYREF
  int v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v25 = (__int64)a4;
  *(_QWORD *)v26 = a2;
  v27[10] = 0LL;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v27[7] = 0LL;
  v31 = 0;
  v23 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v27, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v27 + 4)) )
      goto LABEL_61;
    v23 = (struct _CLIPOBJ *)v27;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = 0LL;
  if ( v9
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
  {
    v10 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
    GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
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
  v12 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
  v13 = 0LL;
  v14 = SURFOBJ_TO_SURFACE(v12);
  v21 = 0LL;
  *(_QWORD *)v22 = &gptlZero;
  if ( !v14 )
    goto LABEL_57;
  v16 = *(_QWORD *)(v14 + 48);
  if ( (*(_DWORD *)(v14 + 112) & 0x80000) == 0 || (v17 = *(_QWORD *)(v16 + 40), v16 == v17) )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && v12->hdev )
    {
      if ( v12->iType != 1 )
      {
LABEL_36:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x400) != 0 )
        {
          hdev = v12->hdev;
LABEL_54:
          v19 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 169);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      if ( !bAllowShareAccess(v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v12->iType == 1
          && bAllowShareAccess(v12)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_55;
        }
        goto LABEL_36;
      }
LABEL_45:
      v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
      goto LABEL_56;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_45;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_55;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_54;
    }
LABEL_55:
    v19 = EngCopyBits;
    goto LABEL_56;
  }
  LOBYTE(v15) = 5;
  *(_QWORD *)v22 = v16 + 2608;
  v24 = HmgShareLockCheck(*(_QWORD *)(v14 + 136), v15);
  v18 = v24;
  if ( v24
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v21,
                       0LL,
                       0,
                       *(_QWORD *)(v17 + 1832),
                       *(_QWORD *)(v16 + 1832),
                       (__int64)ppalDefault,
                       (__int64)ppalDefault,
                       0,
                       0,
                       0,
                       0x2000) )
  {
    v13 = v21;
    v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2872);
    v12 = (struct _SURFOBJ *)(v18 + 24);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
LABEL_56:
    OffCopyBits(
      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v19,
      *(LONG **)v26,
      (__int64)a3,
      *(int **)v22,
      (__int64)v12,
      v23,
      v13,
      (_DWORD *)v25,
      (_DWORD *)v25);
    goto LABEL_57;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
LABEL_57:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21, v15);
  if ( v11 )
    GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
  if ( v10 )
    GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
LABEL_61:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v27);
}
