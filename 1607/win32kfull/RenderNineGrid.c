/*
 * XREFs of RenderNineGrid @ 0x1C00D3D6C
 * Callers:
 *     xxEngNineGrid @ 0x1C00D38DC (xxEngNineGrid.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00D4030 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01033E8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        int a11)
{
  BOOL v12; // edx
  int v13; // r9d
  int v14; // r10d
  int v15; // r8d
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
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
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
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  _DWORD v92[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v93; // [rsp+68h] [rbp-C0h]
  int v94; // [rsp+6Ch] [rbp-BCh]
  __int64 v95; // [rsp+70h] [rbp-B8h]
  __int64 v96; // [rsp+78h] [rbp-B0h]
  __int64 v97; // [rsp+80h] [rbp-A8h]
  struct _SURFOBJ *v98; // [rsp+88h] [rbp-A0h]
  __int64 v99; // [rsp+90h] [rbp-98h]
  __int64 v100; // [rsp+98h] [rbp-90h]
  _DWORD *v101; // [rsp+A0h] [rbp-88h]
  _DWORD *v102; // [rsp+A8h] [rbp-80h]
  _QWORD *v103; // [rsp+B0h] [rbp-78h]
  int v104; // [rsp+B8h] [rbp-70h]
  __int64 v105; // [rsp+C0h] [rbp-68h]
  __int64 v106; // [rsp+C8h] [rbp-60h]
  __int64 v107; // [rsp+D0h] [rbp-58h]
  __int64 v108; // [rsp+D8h] [rbp-50h]
  int v109; // [rsp+E0h] [rbp-48h]
  int v110; // [rsp+E4h] [rbp-44h]

  v97 = a3;
  v96 = a2;
  v98 = a1;
  v99 = a3;
  v100 = a4;
  v101 = a5;
  v95 = a8;
  v102 = a9;
  v103 = a10;
  SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v12 = a11 && (*a9 & 0x10) != 0;
  v13 = *a5;
  v92[0] = *a5;
  v92[1] = a5[1];
  v14 = a5[2];
  v93 = v14;
  v94 = a5[3];
  if ( v12 )
  {
    v15 = *a7;
    v93 = a7[2] + *a7 - v13;
    v92[0] = a7[2] + v15 - v14;
  }
  RenderNineGridInternal(v97, v96, (unsigned int)v92, (_DWORD)a7, v95, (__int64)a9);
  v108 = 0LL;
  v109 = a5[2] - *a5;
  v110 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v104 = 33488896;
    v107 = a10[6];
    v106 = a10[5];
    v105 = a10[4];
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 280) + 20LL) & 0x10000) != 0 )
      {
        goto LABEL_35;
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 108)) )
      {
        return _guard_dispatch_icall_fptr();
      }
    }
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( (*a9 & 8) != 0 )
  {
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 280) + 20LL) & 0x8000) != 0 )
      {
LABEL_35:
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30);
        return _guard_dispatch_icall_fptr();
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 108)) )
      {
        return _guard_dispatch_icall_fptr();
      }
    }
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( a1->iType != 1 )
  {
LABEL_8:
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( (unsigned int)bAllowShareAccess(a1)
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73) + 280)
    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v74, v75, v76) + 104)
     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 108))
    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77, v78, v79) + 280) + 20LL) & 0x400) != 0 )
  {
    goto LABEL_35;
  }
  if ( a1->iType != 1
    || !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v80, v81, v82)
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 108) )
  {
    goto LABEL_8;
  }
  return _guard_dispatch_icall_fptr();
}
