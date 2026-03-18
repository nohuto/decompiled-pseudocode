/*
 * XREFs of ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C027A70C
 * Callers:
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0277900 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C014CB60 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C026C200 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026F2F0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0273B50 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpWriteToExMirror(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rsi
  struct _CLIPOBJ *v9; // rbp
  int v10; // eax
  BOOL (__stdcall *v11)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v12; // rcx
  struct _SURFOBJ *v13; // rcx
  REGION *v14[11]; // [rsp+50h] [rbp-F8h] BYREF
  int v15; // [rsp+A8h] [rbp-A0h]
  int v16; // [rsp+D0h] [rbp-78h]
  __int64 v17; // [rsp+E0h] [rbp-68h]
  int v18; // [rsp+E8h] [rbp-60h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v14[10] = 0LL;
  v15 = 0;
  v17 = 0LL;
  v14[7] = 0LL;
  v16 = 1;
  v18 = 0;
  v9 = 0LL;
  if ( !v4 )
  {
LABEL_4:
    a3->iUniq = 0;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0 || !a3->hdev )
    {
      v12 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
      if ( v12->iType != 1
        || !bAllowShareAccess(v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v13 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
        if ( (v13->iType != 1
           || !bAllowShareAccess(v13)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0 )
        {
          v11 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 169) + 24LL) + 1352LL);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
    }
    else
    {
      if ( a3->iType != 1 )
      {
LABEL_19:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
        {
          v11 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev + 169);
LABEL_38:
          OffCopyBits(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v11,
            (LONG *)&gptlZero,
            *((_QWORD *)a1 + 169),
            (int *)a2,
            (__int64)a3,
            v9,
            0LL,
            a4,
            a4);
          goto LABEL_39;
        }
LABEL_37:
        v11 = EngCopyBits;
        goto LABEL_38;
      }
      if ( !bAllowShareAccess(a3)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( a3->iType == 1
          && bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_37;
        }
        goto LABEL_19;
      }
    }
    v11 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                               + 80LL);
    goto LABEL_38;
  }
  v10 = bConcurrent(a1);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v14, v10, v4, (struct ERECTL *)a4, 0);
  if ( !ERECTL::bEmpty((ERECTL *)((char *)v14 + 4)) )
  {
    v9 = (struct _CLIPOBJ *)v14;
    goto LABEL_4;
  }
LABEL_39:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v14);
}
