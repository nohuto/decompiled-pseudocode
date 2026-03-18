/*
 * XREFs of ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0278F68
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0154EE8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C027281C (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276EBC (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027B164 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpSmallUnderlayCopy(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        struct _RECTL *a9)
{
  __int64 v9; // r15
  __int64 v12; // rdi
  __int64 v13; // rbx
  HDEV hdev; // rax
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _POINTL *v16; // rsi
  int v17; // ebx
  struct _RECTL *v18; // rdi
  struct SPRITE *i; // rax
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdi
  struct _SURFOBJ *v24; // rcx
  struct _SURFOBJ *v25; // rcx
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct SPRITE *v27; // r15
  int v29; // [rsp+58h] [rbp-99h]
  struct _RECTL v31; // [rsp+70h] [rbp-81h] BYREF
  _DWORD v32[4]; // [rsp+80h] [rbp-71h] BYREF
  struct _RECTL v33; // [rsp+90h] [rbp-61h] BYREF
  struct _RECTL v34[4]; // [rsp+A0h] [rbp-51h] BYREF

  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)v9 + 56LL) & 0x400) == 0 )
  {
    if ( !bIntersect(a9, a8, &v31) )
    {
      v16 = a2;
LABEL_53:
      v17 = 0;
      v29 = cSpSubtract(a8, a9, v34);
      do
        vSpReadFromScreen((struct _SPRITESTATE *)v9, v16, a3, &v34[v17++]);
      while ( v17 != v29 );
      v18 = a8;
      for ( i = pSpFindInZ(*(struct SPRITE **)(v9 + 16), a8); ; i = pSpFindInZ(*((struct SPRITE **)v27 + 3), v18) )
      {
        v27 = i;
        if ( !i )
          return;
        if ( i == a1 )
          goto LABEL_109;
        v20 = 0;
        do
        {
          if ( !bIntersect(&v34[v20], (const struct _RECTL *)v27 + 5, &v33) )
            goto LABEL_107;
          v21 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v21 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v21 + 48));
          }
          v22 = *((_QWORD *)v27 + 20);
          v23 = 0LL;
          if ( v22
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v27 + 20)) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) & 0x200) == 0 )
          {
            v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v22);
            GreLockDisplayDevice(*(_QWORD *)(v23 + 48));
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0
            || (v24 = (struct _SURFOBJ *)*((_QWORD *)v27 + 20), !v24->hdev) )
          {
            if ( a3->iType == 1 )
            {
              if ( bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
              {
LABEL_93:
                v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
                goto LABEL_103;
              }
              if ( a3->iType == 1
                && bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
              {
                goto LABEL_102;
              }
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 )
              goto LABEL_102;
            v26 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev + 169);
          }
          else
          {
            if ( v24->iType == 1
              && bAllowShareAccess(v24)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
            {
              goto LABEL_93;
            }
            v25 = (struct _SURFOBJ *)*((_QWORD *)v27 + 20);
            if ( v25->iType == 1
              && bAllowShareAccess(v25)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v27 + 20)) + 112) & 0x400) == 0 )
            {
LABEL_102:
              v26 = EngCopyBits;
              goto LABEL_103;
            }
            v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)v27 + 20) + 24LL) + 1352LL);
          }
LABEL_103:
          OffCopyBits(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v26,
            (LONG *)a2,
            (__int64)a3,
            (int *)v27 + 42,
            *((_QWORD *)v27 + 20),
            0LL,
            0LL,
            &v33,
            &v33);
          if ( v23 )
            GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
          if ( v21 )
            GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
LABEL_107:
          ++v20;
        }
        while ( v20 != v29 );
        v18 = a8;
LABEL_109:
        SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v27 + 248));
      }
    }
    v12 = 0LL;
    v32[0] = a6 + v31.left;
    v32[2] = a6 + v31.right;
    v32[1] = a7 + v31.top;
    v32[3] = a7 + v31.bottom;
    if ( a3
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
    {
      v12 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
      GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    v13 = 0LL;
    if ( a5
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x200) == 0 )
    {
      v13 = SURFOBJ_TO_SURFACE_NOT_NULL(a5);
      GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && a5->hdev )
    {
      if ( a5->iType != 1 )
      {
LABEL_28:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x400) != 0 )
        {
          hdev = a5->hdev;
LABEL_46:
          v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 169);
          goto LABEL_48;
        }
        goto LABEL_47;
      }
      if ( !bAllowShareAccess(a5)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( a5->iType == 1
          && bAllowShareAccess(a5)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_47;
        }
        goto LABEL_28;
      }
LABEL_37:
      v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
LABEL_48:
      v16 = a2;
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v15,
        (LONG *)a2,
        (__int64)a3,
        (int *)a4,
        (__int64)a5,
        0LL,
        0LL,
        &v31,
        v32);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
      goto LABEL_53;
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
        goto LABEL_37;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_47;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_46;
    }
LABEL_47:
    v15 = EngCopyBits;
    goto LABEL_48;
  }
}
