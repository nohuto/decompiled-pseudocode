/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C005610C
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C003DE00 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055DD8 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rsi
  __int64 *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // rsi
  __int64 *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rsi
  __int64 *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // rsi
  __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 *v96; // rax
  __int64 v97; // rdi
  __int64 *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rdi
  __int64 *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  __int64 v109; // rdi
  __int64 *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  __int64 v121; // rdi
  __int64 *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  __int64 v133; // rdi
  __int64 *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rax
  __int64 v139; // rdi
  __int64 *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rax
  __int64 v145; // rdi
  __int64 *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  __int64 v151; // rdi
  __int64 *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rax
  __int64 v157; // rdi
  __int64 *v158; // rax
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rax
  __int64 v163; // rdi
  __int64 *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  __int64 v169; // rdi
  __int64 *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rax
  __int64 v175; // rdi
  __int64 *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rax
  __int64 v181; // rdi
  __int64 *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 *v186; // rax

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (_DWORD)a2 )
  {
    v7 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread, a2, a3, a4);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
    v12 = *(_QWORD *)(v7 + 280);
    v13 = 0LL;
    *(_QWORD *)(v12 + 32) = a1;
    v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v9, v10, v11);
    if ( v14 )
      v13 = *v14;
    v18 = *(_QWORD *)(v13 + 280);
    v19 = 0LL;
    *(_QWORD *)(v18 + 40) = *((_QWORD *)a1 + 152);
    v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v16, v17);
    if ( v20 )
      v19 = *v20;
    v24 = *(_QWORD *)(v19 + 280);
    v25 = 0LL;
    *(_QWORD *)(v24 + 48) = *((_QWORD *)a1 + 153);
    v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v21, v22, v23);
    if ( v26 )
      v25 = *v26;
    v30 = *(_QWORD *)(v25 + 280);
    v31 = 0LL;
    *(_QWORD *)(v30 + 56) = *((_QWORD *)a1 + 154);
    v32 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v27, v28, v29);
    if ( v32 )
      v31 = *v32;
    v36 = *(_QWORD *)(v31 + 280);
    v37 = 0LL;
    *(_QWORD *)(v36 + 72) = *((_QWORD *)a1 + 156);
    v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v33, v34, v35);
    if ( v38 )
      v37 = *v38;
    v42 = *(_QWORD *)(v37 + 280);
    v43 = 0LL;
    *(_QWORD *)(v42 + 80) = *((_QWORD *)a1 + 157);
    v44 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v39, v40, v41);
    if ( v44 )
      v43 = *v44;
    v48 = *(_QWORD *)(v43 + 280);
    v49 = 0LL;
    *(_QWORD *)(v48 + 88) = *((_QWORD *)a1 + 158);
    v50 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v45, v46, v47);
    if ( v50 )
      v49 = *v50;
    v54 = *(_QWORD *)(v49 + 280);
    v55 = 0LL;
    *(_QWORD *)(v54 + 96) = *((_QWORD *)a1 + 159);
    v56 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v51, v52, v53);
    if ( v56 )
      v55 = *v56;
    v60 = *(_QWORD *)(v55 + 280);
    v61 = 0LL;
    *(_QWORD *)(v60 + 104) = *((_QWORD *)a1 + 160);
    v62 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v57, v58, v59);
    if ( v62 )
      v61 = *v62;
    v66 = *(_QWORD *)(v61 + 280);
    v67 = 0LL;
    *(_QWORD *)(v66 + 112) = *((_QWORD *)a1 + 161);
    v68 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v63, v64, v65);
    if ( v68 )
      v67 = *v68;
    v72 = *(_QWORD *)(v67 + 280);
    v73 = 0LL;
    *(_QWORD *)(v72 + 120) = *((_QWORD *)a1 + 162);
    v74 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v69, v70, v71);
    if ( v74 )
      v73 = *v74;
    v78 = *(_QWORD *)(v73 + 280);
    v79 = 0LL;
    *(_QWORD *)(v78 + 128) = *((_QWORD *)a1 + 163);
    v80 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v75, v76, v77);
    if ( v80 )
      v79 = *v80;
    v84 = *(_QWORD *)(v79 + 280);
    v85 = 0LL;
    *(_QWORD *)(v84 + 136) = *((_QWORD *)a1 + 164);
    v86 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v81, v82, v83);
    if ( v86 )
      v85 = *v86;
    v90 = *(_QWORD *)(v85 + 280);
    v91 = 0LL;
    *(_QWORD *)(v90 + 152) = *((_QWORD *)a1 + 166);
    v92 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v87, v88, v89);
    if ( v92 )
      v91 = *v92;
    *(_QWORD *)(*(_QWORD *)(v91 + 280) + 144LL) = *((_QWORD *)a1 + 165);
    v96 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v93, v94, v95);
    if ( v96 )
      v4 = *v96;
    *(_QWORD *)(*(_QWORD *)(v4 + 280) + 160LL) = *((_QWORD *)a1 + 167);
  }
  else
  {
    v97 = 0LL;
    v98 = (__int64 *)PsGetThreadWin32Thread(CurrentThread, a2, a3, a4);
    if ( v98 )
      v97 = *v98;
    v102 = *(_QWORD *)(v97 + 280);
    v103 = 0LL;
    *(_QWORD *)(v102 + 32) = 0LL;
    v104 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v99, v100, v101);
    if ( v104 )
      v103 = *v104;
    v108 = *(_QWORD *)(v103 + 280);
    v109 = 0LL;
    *(_QWORD *)(v108 + 40) = SpStrokeAndFillPath;
    v110 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v105, v106, v107);
    if ( v110 )
      v109 = *v110;
    v114 = *(_QWORD *)(v109 + 280);
    v115 = 0LL;
    *(_QWORD *)(v114 + 48) = SpStrokePath;
    v116 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v111, v112, v113);
    if ( v116 )
      v115 = *v116;
    v120 = *(_QWORD *)(v115 + 280);
    v121 = 0LL;
    *(_QWORD *)(v120 + 56) = SpFillPath;
    v122 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v117, v118, v119);
    if ( v122 )
      v121 = *v122;
    v126 = *(_QWORD *)(v121 + 280);
    v127 = 0LL;
    *(_QWORD *)(v126 + 72) = SpBitBlt;
    v128 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v123, v124, v125);
    if ( v128 )
      v127 = *v128;
    v132 = *(_QWORD *)(v127 + 280);
    v133 = 0LL;
    *(_QWORD *)(v132 + 80) = SpCopyBits;
    v134 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v129, v130, v131);
    if ( v134 )
      v133 = *v134;
    v138 = *(_QWORD *)(v133 + 280);
    v139 = 0LL;
    *(_QWORD *)(v138 + 88) = SpStretchBlt;
    v140 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v135, v136, v137);
    if ( v140 )
      v139 = *v140;
    v144 = *(_QWORD *)(v139 + 280);
    v145 = 0LL;
    *(_QWORD *)(v144 + 96) = SpTextOut;
    v146 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v141, v142, v143);
    if ( v146 )
      v145 = *v146;
    v150 = *(_QWORD *)(v145 + 280);
    v151 = 0LL;
    *(_QWORD *)(v150 + 104) = SpLineTo;
    v152 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v147, v148, v149);
    if ( v152 )
      v151 = *v152;
    v156 = *(_QWORD *)(v151 + 280);
    v157 = 0LL;
    *(_QWORD *)(v156 + 112) = SpTransparentBlt;
    v158 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v153, v154, v155);
    if ( v158 )
      v157 = *v158;
    v162 = *(_QWORD *)(v157 + 280);
    v163 = 0LL;
    *(_QWORD *)(v162 + 120) = SpAlphaBlend;
    v164 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v159, v160, v161);
    if ( v164 )
      v163 = *v164;
    v168 = *(_QWORD *)(v163 + 280);
    v169 = 0LL;
    *(_QWORD *)(v168 + 128) = SpPlgBlt;
    v170 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v165, v166, v167);
    if ( v170 )
      v169 = *v170;
    v174 = *(_QWORD *)(v169 + 280);
    v175 = 0LL;
    *(_QWORD *)(v174 + 136) = SpGradientFill;
    v176 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v171, v172, v173);
    if ( v176 )
      v175 = *v176;
    v180 = *(_QWORD *)(v175 + 280);
    v181 = 0LL;
    *(_QWORD *)(v180 + 152) = SpStretchBltROP;
    v182 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v177, v178, v179);
    if ( v182 )
      v181 = *v182;
    *(_QWORD *)(*(_QWORD *)(v181 + 280) + 144LL) = SpSaveScreenBits;
    v186 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v183, v184, v185);
    if ( v186 )
      v4 = *v186;
    *(_QWORD *)(*(_QWORD *)(v4 + 280) + 160LL) = SpDrawStream;
  }
}
