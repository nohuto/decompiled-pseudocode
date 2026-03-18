/*
 * XREFs of ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0277C50
 * Callers:
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0274E3C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C0103410 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0269230 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C026C7EC (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C027109C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpWriteToExMirror(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rsi
  struct _CLIPOBJ *v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
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
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  struct _SURFOBJ *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  REGION *v65[11]; // [rsp+50h] [rbp-F8h] BYREF
  int v66; // [rsp+A8h] [rbp-A0h]
  int v67; // [rsp+D0h] [rbp-78h]
  __int64 v68; // [rsp+E0h] [rbp-68h]
  int v69; // [rsp+E8h] [rbp-60h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v65[10] = 0LL;
  v66 = 0;
  v68 = 0LL;
  v65[7] = 0LL;
  v67 = 1;
  v69 = 0;
  v9 = 0LL;
  if ( !v4 )
  {
LABEL_4:
    a3->iUniq = 0;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0 || !a3->hdev )
    {
      v39 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
      if ( v39->iType != 1
        || !bAllowShareAccess(v39)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 280) + 20LL) & 0x400) == 0 )
      {
        v52 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
        if ( (v52->iType != 1
           || !bAllowShareAccess(v52)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55)
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 108))
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0 )
        {
          v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 169) + 24LL) + 1352LL);
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
          v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev + 169);
LABEL_38:
          OffCopyBits(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v38,
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
        v38 = EngCopyBits;
        goto LABEL_38;
      }
      if ( !bAllowShareAccess(a3)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( a3->iType == 1
          && bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 108)) )
        {
          goto LABEL_37;
        }
        goto LABEL_19;
      }
    }
    v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 280)
                                                                                               + 80LL);
    goto LABEL_38;
  }
  v10 = bConcurrent(a1, (__int64)a2, (__int64)a3, (__int64)a4);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v65, v10, v4, (struct ERECTL *)a4, 0);
  if ( !ERECTL::bEmpty((ERECTL *)((char *)v65 + 4)) )
  {
    v9 = (struct _CLIPOBJ *)v65;
    goto LABEL_4;
  }
LABEL_39:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v65);
}
