/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055DD8
 * Callers:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C011C054 (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C011C09C (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C026F02C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005610C (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // r14d
  __int64 v7; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // rax
  int v45; // ebx
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rbp
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rbx
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rbp
  __int64 *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rbx
  __int64 *v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // rax
  int v84; // ebx
  int v85; // ebx
  __int64 v86; // [rsp+40h] [rbp+8h] BYREF

  v86 = *(_QWORD *)a1;
  v5 = 0LL;
  v6 = a2;
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  if ( v6 )
  {
    if ( v7 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v86) && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
    {
      v12 = 0LL;
      v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v9, v10, v11);
      if ( v13 )
        v12 = *v13;
      v17 = *(_QWORD *)(v12 + 280);
      v18 = 0LL;
      *(_DWORD *)(v17 + 4) = *((_DWORD *)a1 + 25);
      v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v14, v15, v16);
      if ( v19 )
        v18 = *v19;
      v23 = 0LL;
      *(_DWORD *)(*(_QWORD *)(v18 + 280) + 8LL) = *((_DWORD *)a1 + 26);
      v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v20, v21, v22);
      if ( v24 )
        v23 = *v24;
      v28 = 0LL;
      v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v25, v26, v27);
      if ( v29 )
        v28 = *v29;
      v33 = *(_QWORD *)(v23 + 280);
      v34 = 0LL;
      *(_DWORD *)(*(_QWORD *)(v28 + 280) + 20LL) = *(_DWORD *)(v33 + 4);
      v35 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v30, v31, v32);
      if ( v35 )
        v34 = *v35;
      v39 = 0LL;
      v40 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v36, v37, v38);
      if ( v40 )
        v39 = *v40;
      *(_DWORD *)(*(_QWORD *)(v39 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v34 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess(a1, v6);
      v44 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v41, v42, v43);
      if ( v44 )
        v5 = *v44;
      **(_DWORD **)(v5 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v86);
      v45 = *((_DWORD *)a1 + 25);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v45;
      v46 = *((_DWORD *)a1 + 26);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v46;
      *((_DWORD *)a1 + 24) = 1;
    }
  }
  else if ( v7 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v86) && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
  {
    v50 = 0LL;
    v51 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v47, v48, v49);
    if ( v51 )
      v50 = *v51;
    v55 = *(_QWORD *)(v50 + 280);
    v56 = 0LL;
    *(_DWORD *)(v55 + 12) = *((_DWORD *)a1 + 27);
    v57 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v52, v53, v54);
    if ( v57 )
      v56 = *v57;
    v61 = 0LL;
    *(_DWORD *)(*(_QWORD *)(v56 + 280) + 16LL) = *((_DWORD *)a1 + 28);
    v62 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v58, v59, v60);
    if ( v62 )
      v61 = *v62;
    v66 = 0LL;
    v67 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v63, v64, v65);
    if ( v67 )
      v66 = *v67;
    v71 = *(_QWORD *)(v61 + 280);
    v72 = 0LL;
    *(_DWORD *)(*(_QWORD *)(v66 + 280) + 20LL) = *(_DWORD *)(v71 + 12);
    v73 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v68, v69, v70);
    if ( v73 )
      v72 = *v73;
    v77 = 0LL;
    v78 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v74, v75, v76);
    if ( v78 )
      v77 = *v78;
    *(_DWORD *)(*(_QWORD *)(v77 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v72 + 280) + 16LL);
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    v79 = 0LL;
    v83 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v80, v81, v82);
    if ( v83 )
      v79 = *v83;
    **(_DWORD **)(v79 + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v86);
    v84 = *((_DWORD *)a1 + 27);
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v84;
    v85 = *((_DWORD *)a1 + 28);
    *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v85;
    *((_DWORD *)a1 + 24) = 0;
  }
}
