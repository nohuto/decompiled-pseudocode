/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0048340 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093948 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0044424 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C004679C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0049128 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004933C (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C004AE68 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C004B120 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C004B654 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C004B6A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C004D610 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00676D0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C006D478 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093500 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093948 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C009407C (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  __int64 v9; // r10
  VIDMM_PAGE_DIRECTORY *v10; // rsi
  int v11; // r10d
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r11
  __int64 v20; // r9
  int v21; // r8d
  unsigned int v22; // eax
  VIDMM_GLOBAL *v23; // rdx
  char *v24; // rsi
  _DWORD *v25; // rbx
  VIDMM_GLOBAL *v26; // r8
  void *v27; // rcx
  _QWORD *v28; // rbx
  void *v29; // rcx
  unsigned __int64 v30; // r10
  __int64 v31; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // r11d
  char *v37; // rdx
  const struct COMMIT_VA_STATE *v38; // rbx
  unsigned __int64 v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  unsigned int v42; // ecx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  unsigned int v46; // r11d
  unsigned __int64 v47; // r10
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  bool v52; // cc
  struct CVirtualAddressAllocator *v53; // r10
  __int64 v54; // rdx
  int v55; // r8d
  unsigned __int8 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // r8d
  unsigned int v60; // edx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rbx
  char v65; // dl
  unsigned int v66; // ebx
  int v67; // r11d
  int v68; // r11d
  const struct COMMIT_VA_STATE *v69; // rax
  _DWORD *v70; // rcx
  __int64 v71; // r9
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // r8
  bool v75; // zf
  unsigned int v76; // r9d
  const struct COMMIT_VA_STATE *v77; // r8
  __int64 v78; // rsi
  unsigned __int8 v79; // r8
  char v80; // r9
  struct VIDMM_PAGE_TABLE *PageDirectory; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  unsigned __int64 v85; // rcx
  bool v86; // bl
  int v87; // ecx
  unsigned int v88; // r10d
  int v89; // eax
  unsigned int v90; // eax
  __int64 v91; // rcx
  char v92; // di
  BOOL v93; // eax
  unsigned __int64 v94; // r10
  unsigned __int64 v95; // r9
  unsigned int v96; // eax
  unsigned __int64 v97; // rcx
  int v98; // ebx
  const struct COMMIT_VA_STATE *v99; // rax
  __int64 v100; // rax
  unsigned int *v101; // rsi
  unsigned __int64 v102; // r8
  char *v103; // r9
  struct CVirtualAddressAllocator *v104; // r11
  __int64 v105; // rdi
  __int64 v106; // rax
  int v107; // eax
  unsigned int v108; // edx
  unsigned int v109; // ecx
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // rbx
  __int64 v115; // rbx
  __int64 v116; // rdx
  int v117; // eax
  __int64 v118; // r8
  _QWORD *v119; // rdx
  VIDMM_GLOBAL *v120; // rdi
  int v121; // ebx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  enum _DXGK_PAGETABLEUPDATEMODE v130; // eax
  void *v131; // rbx
  __int64 v132; // r10
  int v133; // eax
  unsigned __int64 **v134; // rax
  unsigned __int64 *v135; // rdx
  unsigned __int64 v136; // rcx
  unsigned __int64 v137; // r8
  unsigned __int64 **v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // r11
  unsigned __int64 v142; // r10
  unsigned int *v143; // rbx
  char *v144; // r8
  __int64 v145; // rdi
  __int64 v146; // rax
  int v147; // eax
  unsigned int v148; // edx
  unsigned int v149; // ecx
  int v150; // ecx
  unsigned int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rax
  unsigned __int64 v155; // rbx
  __int64 v156; // rbx
  __int64 v157; // rdx
  __int64 v158; // rax
  unsigned int v159; // eax
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // rdx
  int v163; // edi
  VIDMM_GLOBAL *v164; // rsi
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v169; // eax
  void *v170; // rdi
  __int64 v171; // r10
  int v172; // eax
  __int64 **v173; // rax
  __int64 *v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 **v177; // rax
  struct CVirtualAddressAllocator *v178; // r10
  unsigned __int64 v179; // rdi
  __int64 v180; // rax
  __int64 v181; // rcx
  BOOL v182; // eax
  unsigned __int64 v183; // r9
  unsigned __int64 v184; // rdi
  unsigned int v185; // eax
  __int64 v186; // r9
  bool v187; // dl
  unsigned __int64 v188; // r10
  __int64 v189; // r8
  __int64 v190; // rcx
  int v191; // eax
  _QWORD *v192; // rdx
  unsigned __int64 v193; // rbx
  unsigned __int64 v194; // rdi
  struct VIDMM_ALLOC **v195; // rcx
  unsigned int v196; // eax
  __int64 v197; // rdi
  _QWORD *v198; // rdx
  struct VIDMM_ALLOC **v199; // rcx
  int v200; // ecx
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v201; // rbx
  __int64 v202; // rax
  unsigned int v203; // edi
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rax
  unsigned __int64 v215; // rcx
  struct _DXGK_PTE *v216; // r9
  int v217; // ebx
  unsigned int v218; // r8d
  unsigned int v219; // edx
  unsigned __int64 v220; // rbx
  unsigned __int64 v221; // r9
  struct CVirtualAddressAllocator *v222; // rbx
  unsigned int v223; // r8d
  __int64 v224; // rax
  char *v225; // [rsp+28h] [rbp-E8h]
  struct _VIDMM_GLOBAL_ALLOC *v226; // [rsp+28h] [rbp-E8h]
  enum _DXGK_PAGETABLEUPDATEMODE v227; // [rsp+70h] [rbp-A0h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v228; // [rsp+80h] [rbp-90h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v229; // [rsp+80h] [rbp-90h]
  unsigned int v230; // [rsp+90h] [rbp-80h]
  unsigned int v231; // [rsp+90h] [rbp-80h]
  unsigned int v232; // [rsp+90h] [rbp-80h]
  unsigned __int8 v233; // [rsp+94h] [rbp-7Ch] BYREF
  char v234; // [rsp+95h] [rbp-7Bh]
  char v235; // [rsp+96h] [rbp-7Ah]
  char v236; // [rsp+97h] [rbp-79h]
  char v237; // [rsp+98h] [rbp-78h]
  char v238; // [rsp+99h] [rbp-77h]
  unsigned int v239[2]; // [rsp+A0h] [rbp-70h]
  unsigned int v240; // [rsp+A8h] [rbp-68h]
  unsigned int v241; // [rsp+ACh] [rbp-64h]
  void *v242; // [rsp+B0h] [rbp-60h]
  __int64 v243; // [rsp+B8h] [rbp-58h]
  unsigned int v244; // [rsp+C0h] [rbp-50h]
  unsigned int v245; // [rsp+C4h] [rbp-4Ch]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v246; // [rsp+C8h] [rbp-48h]
  unsigned int v247; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v248; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v249; // [rsp+E0h] [rbp-30h]
  unsigned int v250; // [rsp+E8h] [rbp-28h]
  unsigned int v251; // [rsp+ECh] [rbp-24h]
  unsigned __int64 v252; // [rsp+F0h] [rbp-20h]
  VIDMM_GLOBAL *v253; // [rsp+F8h] [rbp-18h]
  unsigned __int64 v254; // [rsp+100h] [rbp-10h]
  unsigned __int64 v255; // [rsp+108h] [rbp-8h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v256; // [rsp+110h] [rbp+0h]
  __int64 v257; // [rsp+118h] [rbp+8h]
  unsigned __int64 v258; // [rsp+120h] [rbp+10h]
  unsigned __int64 v259; // [rsp+128h] [rbp+18h]
  unsigned __int64 v260; // [rsp+130h] [rbp+20h]
  __int64 v261; // [rsp+138h] [rbp+28h]
  unsigned int v262; // [rsp+140h] [rbp+30h] BYREF
  unsigned int v263; // [rsp+144h] [rbp+34h] BYREF
  unsigned int v264; // [rsp+148h] [rbp+38h] BYREF
  unsigned __int64 v265; // [rsp+150h] [rbp+40h]
  __int64 v266; // [rsp+158h] [rbp+48h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+160h] [rbp+50h]
  struct VIDMM_ALLOC *VidMmAllocFromOwner; // [rsp+168h] [rbp+58h]
  unsigned __int64 v269; // [rsp+170h] [rbp+60h]
  void *v270; // [rsp+178h] [rbp+68h] BYREF
  void *v271; // [rsp+180h] [rbp+70h] BYREF
  void *v272; // [rsp+188h] [rbp+78h] BYREF
  void *v273; // [rsp+190h] [rbp+80h] BYREF
  __int64 v274; // [rsp+198h] [rbp+88h]
  unsigned __int64 v275; // [rsp+1A0h] [rbp+90h] BYREF
  void *v276; // [rsp+1A8h] [rbp+98h] BYREF

  v9 = *(_QWORD *)a3;
  v10 = this;
  v255 = a4;
  *a9 = 0LL;
  v11 = v9 & 1;
  if ( !v11 )
  {
    v12 = *((_QWORD *)this + 1);
    if ( !v12 || !*(_QWORD *)(v12 + 136) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v224 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v224 + 24) = 5980LL;
    WdLogEvent5_WdAssertion(v224);
    return 3221225485LL;
  }
  v265 = a5 >> 12;
  v269 = (a5 >> 12) + a6;
  if ( v265 + a6 <= v265 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v14 + 24) = 5997LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)this;
  v253 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  v16 = *((_QWORD *)v253 + 5017);
  v17 = (unsigned __int64 *)*((_QWORD *)a2 + 9);
  v18 = (v15 >> 7) & 0x1F;
  VidMmGlobalAllocFromOwner = 0LL;
  v19 = 456 * v18;
  VidMmAllocFromOwner = 0LL;
  v266 = 456 * v18 + v16;
  v20 = 48LL * (v15 & 7);
  v246 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v20 + v266 + 72);
  v252 = (v265 & *((_QWORD *)v246 + 2)) >> *((_QWORD *)v246 + 3);
  v21 = (v15 >> 4) & 1;
  if ( v21 )
  {
    v22 = *(_DWORD *)(32 * v18 + *((_QWORD *)a2 + 12) + 16);
    v23 = v253;
  }
  else
  {
    v23 = v253;
    v22 = *(_DWORD *)(v20 + *((_QWORD *)v253 + 5017) + v19 + 72);
  }
  v244 = v22;
  if ( v21 && *((_QWORD *)v23 + 5115) )
  {
    v24 = (char *)v23 + 40936;
    if ( v11 )
    {
      v259 = *v17;
      v245 = *((_DWORD *)a3 + 12);
      v260 = *((_QWORD *)a3 + 5);
      v248 = *((_QWORD *)a3 + 4);
      v251 = *((_DWORD *)a3 + 13);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v24, 0LL);
      *((_QWORD *)v24 + 1) = KeGetCurrentThread();
      v25 = operator new(0x38uLL, 0x32356956u, PagedPool);
      if ( v25 )
      {
        v26 = v253;
        if ( *((_DWORD *)v253 + 10232) == dword_1C0035314 )
          *((_DWORD *)v253 + 10232) = 0;
        v27 = *(void **)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232) + 16);
        if ( v27 )
        {
          operator delete(v27);
          v26 = v253;
        }
        v25[13] = v245;
        *((_QWORD *)v25 + 4) = v248;
        *((_QWORD *)v25 + 5) = v260;
        *(_QWORD *)v25 = v259;
        v25[12] = v251;
        *((_QWORD *)v25 + 3) = a7;
        *((_QWORD *)v25 + 1) = a5;
        *((_QWORD *)v25 + 2) = a6 << 12;
        *(_QWORD *)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232) + 16) = v25;
        *(_DWORD *)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232) + 8) = 1;
LABEL_27:
        ++*((_DWORD *)v26 + 10232);
      }
    }
    else
    {
      v248 = *v17;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v24, 0LL);
      *((_QWORD *)v24 + 1) = KeGetCurrentThread();
      v28 = operator new(0x18uLL, 0x32356956u, PagedPool);
      if ( v28 )
      {
        v26 = v253;
        if ( *((_DWORD *)v253 + 10232) == dword_1C0035314 )
          *((_DWORD *)v253 + 10232) = 0;
        v29 = *(void **)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232) + 16);
        if ( v29 )
        {
          operator delete(v29);
          v26 = v253;
        }
        *v28 = v248;
        v28[1] = a5;
        v28[2] = a6 << 12;
        *(_QWORD *)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232) + 16) = v28;
        *(_DWORD *)(*((_QWORD *)v26 + 5115) + 24LL * *((unsigned int *)v26 + 10232) + 8) = 2;
        goto LABEL_27;
      }
    }
    *((_QWORD *)v24 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v24, 0LL);
    KeLeaveCriticalRegion();
    v10 = this;
  }
  LODWORD(v30) = 0;
  v237 = 0;
  v31 = *((_QWORD *)v10 + 1);
  v250 = 0;
  v247 = 0;
  v256 = 0;
  if ( !v31 || !*(_QWORD *)(v31 + 136) )
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(v10, a2, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)v10 &= ~0x10000u;
    a8 = 1;
    LODWORD(v30) = 0;
  }
  if ( (*((_BYTE *)v10 + 2) & 1) == 0 )
  {
    v256 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
LABEL_37:
    if ( (_DWORD)v252 )
    {
      v33 = 0LL;
      v34 = (unsigned int)v252;
      do
      {
        v35 = *((_QWORD *)v10 + 3);
        v33 += 16LL;
        *(_QWORD *)(v33 + v35 - 16) = 0LL;
        *(_QWORD *)(v33 + v35 - 8) = 0LL;
        --v34;
      }
      while ( v34 );
    }
    v36 = v244;
    v247 = v244;
    v237 = 1;
    goto LABEL_42;
  }
  if ( a8 )
    goto LABEL_37;
  v36 = v244;
LABEL_42:
  v37 = (char *)v265;
  v38 = a3;
  *(_QWORD *)v239 = v265;
  v39 = *((_QWORD *)v246 + 5);
  v40 = *(_DWORD *)v10;
  v41 = v265 & ~*((_QWORD *)v246 + 4);
  v249 = v41;
  v238 = 0;
  v248 = v39 + v41;
  v254 = v39 + v41;
  v42 = 0;
  v251 = 0;
  if ( (v40 & 0x20) != 0 && *((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
      v42 = v36;
    v251 = v42;
  }
  LODWORD(v43) = v252;
  v44 = v254;
  v230 = 0;
  while ( (unsigned int)v43 < v36 )
  {
    LOBYTE(v30) = 0;
    v45 = (unsigned int)v43 + v251;
    LODWORD(v243) = v30;
    v46 = v43 + v251;
    v233 = 0;
    v236 = 0;
    v234 = 0;
    v241 = v43 + v251;
    v240 = v43 + v251;
    if ( *((_BYTE *)v38 + 58) )
    {
      if ( (*(_DWORD *)v10 & 0x20) != 0 )
      {
        if ( (_DWORD)v45 == (_DWORD)v43 )
          v46 = v45 + v244;
        else
          v46 = v43;
        v240 = v46;
        v234 = 1;
      }
      v44 = v254;
    }
    if ( v44 >= v269 )
    {
      v44 = v269;
      v254 = v269;
      v238 = 1;
    }
    v47 = v44 - (_QWORD)v37;
    v48 = *(_QWORD *)v38;
    v242 = (void *)v47;
    if ( (v48 & 1) == 0 )
    {
      v49 = *((_QWORD *)v10 + 3);
      if ( (*(_BYTE *)(v49 + 16LL * (unsigned int)v45) & 1) == 0 && (*(_BYTE *)(v49 + 16LL * v46) & 1) == 0 )
        goto LABEL_271;
    }
    if ( (v48 & 2) != 0 )
    {
      v50 = *((_QWORD *)v10 + 3);
      if ( (*(_BYTE *)(v50 + 16LL * (unsigned int)v45) & 2) != 0 )
      {
        v51 = (unsigned int)v45;
      }
      else
      {
        if ( !v234 || (*(_BYTE *)(v50 + 16LL * v46) & 2) == 0 )
          goto LABEL_69;
        v51 = v46;
      }
      if ( (_DWORD)v51 != -1 && (((unsigned __int8)v48 ^ *(_BYTE *)(v50 + 16 * v51)) & 8) == 0 )
        goto LABEL_271;
    }
LABEL_69:
    v52 = v39 <= v47;
    v53 = a2;
    if ( v52 && (*((_DWORD *)a2 + 30) & 4) == 0 )
    {
      if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
             v10,
             a2,
             *(const struct _DXGK_GPUMMUCAPS **)(v266 + 424),
             v38,
             v246,
             v45,
             v46,
             v239[0],
             a7,
             &v233) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v10 + 3) + 16LL * (unsigned int)v45) & 0x400LL) != 0 )
        {
          VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(
                                                                      *((_DWORD *)v38 + 12),
                                                                      *((_QWORD *)v38 + 5));
          VidMmAllocFromOwner = (struct VIDMM_ALLOC *)GetVidMmAllocFromOwner(v55, v54);
        }
        v56 = v233;
        goto LABEL_265;
      }
      v41 = v249;
      v53 = a2;
      LODWORD(v243) = v233;
    }
    v57 = *((_QWORD *)v10 + 3);
    v58 = (*(_DWORD *)(v57 + 16 * v45) >> 10) & 1;
    if ( ((*(_DWORD *)(v57 + 16 * v45) >> 10) & 1) != 0 )
    {
      v59 = v240;
    }
    else
    {
      if ( v234 == ((*(_DWORD *)(v57 + 16 * v45) & 0x400) != 0) )
        goto LABEL_88;
      v59 = v240;
      if ( (*(_DWORD *)(v57 + 16LL * v240) & 0x400LL) == 0 )
        goto LABEL_88;
    }
    v60 = v59;
    if ( v58 )
      v60 = v45;
    if ( *((_QWORD *)v246 + 5) <= (unsigned __int64)v242 )
    {
      v64 = v60;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v53 + 8) + 40192LL),
        *(PVOID *)(*((_QWORD *)v10 + 4) + 8LL * v60));
      *(_QWORD *)(*((_QWORD *)v10 + 4) + 8 * v64) = 0LL;
      v64 *= 2LL;
      *(_QWORD *)(*((_QWORD *)v10 + 3) + 8 * v64) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)v10 + 3) + 8 * v64) &= ~1uLL;
      --*((_DWORD *)v10 + 1);
    }
    else
    {
      v61 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(v10, v53, v246, *((_BYTE *)v38 + 57), v41 << 12, v60, a9);
      v63 = v61;
      v230 = v61;
      if ( v61 < 0 )
      {
        v202 = WdLogNewEntry5_WdWarning(v62);
        *(_QWORD *)(v202 + 24) = v63;
        WdLogEvent5_WdWarning(v202);
        v203 = v63;
        v201 = v246;
        goto LABEL_287;
      }
      EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
    }
    v38 = a3;
    v236 = 1;
LABEL_88:
    v65 = *((_BYTE *)v38 + 56);
    v66 = *(_DWORD *)v10;
    v67 = *(_DWORD *)v10 >> 5;
    v235 = v65;
    v68 = v67 & 1;
    if ( !v68 )
      goto LABEL_104;
    v69 = a3;
    if ( *((_DWORD *)a3 + 13) || !v65 )
      goto LABEL_104;
    if ( !*((_BYTE *)a3 + 57) )
    {
      v70 = *(_DWORD **)(*((_QWORD *)v10 + 4) + 8 * v45);
      if ( v70 && v70[1] && (*v70 & 0x40) == 0 )
        goto LABEL_114;
      v69 = a3;
    }
    if ( ((unsigned __int8)v242 & 0xF) == 0 )
    {
      v71 = *((_QWORD *)v69 + 4);
      v72 = a7 >> 12;
      v73 = (a7 >> 12) + (unsigned int)v242;
      v74 = (unsigned int)(a7 >> 12);
      if ( v74 >= v73 )
      {
LABEL_103:
        v65 = 1;
        v235 = 1;
LABEL_104:
        v76 = v45;
        goto LABEL_105;
      }
      while ( 1 )
      {
        v75 = (v72 & 0xF) != 0
            ? *(_QWORD *)(v71 + 8 * v74 + 48) == *(_QWORD *)(v71 + 8LL * (unsigned int)(v72 - 1) + 48) + 1LL
            : (*(_BYTE *)(v71 + 8 * v74 + 48) & 0xF) == 0;
        if ( !v75 )
          break;
        LODWORD(v72) = v72 + 1;
        v74 = (unsigned int)v72;
        if ( (unsigned int)v72 >= v73 )
          goto LABEL_103;
      }
    }
LABEL_114:
    v65 = 0;
    v76 = v252;
    v235 = 0;
    v241 = v252;
    if ( v234 )
      v240 = v244 + v252;
LABEL_105:
    v77 = a3;
    if ( (*(_BYTE *)a3 & 1) == 0 )
    {
      v78 = v76;
      if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * v76) & 2) == 0 )
        goto LABEL_122;
    }
    v78 = v76;
    if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v76) )
      goto LABEL_122;
    if ( !v68 )
    {
      PageDirectory = CreatePageDirectory(a2, (v66 >> 7) & 0x1F, (v66 & 7) - 1);
      goto LABEL_120;
    }
    if ( *((_BYTE *)a3 + 57) && v65 || *((_DWORD *)a3 + 13) == -3 )
    {
      v79 = 1;
LABEL_117:
      v80 = 0;
      goto LABEL_118;
    }
    v79 = 0;
    if ( !v65 )
      goto LABEL_117;
    v80 = 1;
LABEL_118:
    PageDirectory = CreatePageTable(a2, (v66 >> 7) & 0x1F, v79, v80);
LABEL_120:
    v83 = *((_QWORD *)this + 4);
    *(_QWORD *)(v83 + 8 * v78) = PageDirectory;
    if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v78) )
    {
      v204 = WdLogNewEntry5_WdAssertion(v83, v82);
      *(_QWORD *)(v204 + 24) = 6345LL;
      WdLogEvent5_WdAssertion(v204);
      v10 = this;
      v203 = -1073741801;
      v201 = v246;
      goto LABEL_287;
    }
    v77 = a3;
    v76 = v241;
LABEL_122:
    v84 = *((_QWORD *)this + 3);
    v261 = 16 * v78;
    v85 = *(_QWORD *)(16 * v78 + v84);
    v86 = (v85 & 1) == 0;
    v87 = (v85 >> 1) & 1;
    if ( v87 )
    {
      v88 = v240;
    }
    else
    {
      if ( !v234 )
        goto LABEL_134;
      v88 = v240;
      if ( (*(_BYTE *)(v84 + 16LL * v240) & 2) == 0 )
        goto LABEL_134;
    }
    if ( *((_QWORD *)v246 + 5) <= (unsigned __int64)v242 )
    {
      v90 = v88;
      if ( v87 )
        v90 = v76;
      v91 = 2LL * v90;
      *(_QWORD *)(v84 + 8 * v91) &= ~2uLL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v91) &= ~1uLL;
      --*((_DWORD *)this + 1);
    }
    else
    {
      v89 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
              this,
              a2,
              v77,
              v76,
              v88,
              *(unsigned __int64 *)v239,
              v254,
              v249,
              v248,
              a9);
      v230 = v89;
      if ( v89 < 0 )
      {
        v10 = this;
        v203 = v89;
        v201 = v246;
        goto LABEL_287;
      }
      v86 = 0;
    }
    v236 = 1;
LABEL_134:
    if ( (*(_DWORD *)this & 0x20) == 0 )
    {
      v182 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
      v183 = v255;
      v226 = (struct _VIDMM_GLOBAL_ALLOC *)v242;
      if ( v182 )
      {
        ++*((_DWORD *)this + 1);
        v184 = 8 * v78;
        v10 = this;
        v249 = v184;
        v185 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                 *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 4) + v184),
                 a2,
                 a3,
                 v183,
                 *(_QWORD *)v239 << 12,
                 (unsigned __int64)v226,
                 a7,
                 v86,
                 a9);
        --*((_DWORD *)this + 1);
        v98 = v185;
        v230 = v185;
LABEL_229:
        v179 = *(_QWORD *)v239;
      }
      else
      {
        v179 = *(_QWORD *)v239;
        v188 = 8 * v78;
        v10 = this;
        v249 = v188;
        v98 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 4) + v188),
                a2,
                a3,
                v255,
                *(_QWORD *)v239 << 12,
                (unsigned __int64)v242,
                a7,
                v86,
                a9);
        v230 = v98;
      }
      if ( v98 < 0 )
      {
LABEL_282:
        v203 = v230;
        goto LABEL_283;
      }
      goto LABEL_231;
    }
    if ( (*(_BYTE *)a3 & 1) != 0 )
    {
      v92 = *((_BYTE *)a3 + 56);
      *((_BYTE *)a3 + 56) = v235;
      v93 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
      v94 = 8 * v78;
      v95 = v255;
      v10 = this;
      v225 = (char *)v242;
      v249 = v94;
      if ( v93 )
      {
        ++*((_DWORD *)this + 1);
        v96 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + v94),
                a2,
                a3,
                v95,
                *(_QWORD *)v239 << 12,
                v225,
                a7,
                v86,
                a9);
        --*((_DWORD *)this + 1);
        v98 = v96;
        v230 = v96;
      }
      else
      {
        v98 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + v94),
                a2,
                a3,
                v255,
                *(_QWORD *)v239 << 12,
                (char *)v242,
                a7,
                v86,
                a9);
        v230 = v98;
      }
      v99 = a3;
      *((_BYTE *)a3 + 56) = v92;
LABEL_183:
      v103 = (char *)v242;
LABEL_184:
      v102 = *(_QWORD *)v239;
      goto LABEL_185;
    }
    v100 = *((_QWORD *)this + 4);
    v97 = 8 * v78;
    v249 = 8 * v78;
    v101 = *(unsigned int **)(8 * v78 + v100);
    if ( !v101 )
    {
      v98 = v230;
      goto LABEL_182;
    }
    v102 = *(_QWORD *)v239;
    v103 = (char *)v242;
    if ( v101[1] )
    {
      v258 = *(_QWORD *)v239 << 12;
      v97 = *(_QWORD *)v239 & 0xFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v242 + (*(_QWORD *)v239 & 0xFFFFFFFFFFFFFLL) <= (*(_QWORD *)v239 & 0xFFFFFFFFFFFFFuLL) )
      {
        v10 = this;
        v98 = -1073741811;
        v99 = a3;
        v230 = -1073741811;
        goto LABEL_184;
      }
      v104 = a2;
      v105 = *((_QWORD *)a2 + 8);
      v106 = *((_QWORD *)v101 + 1);
      if ( v106 && *(_QWORD *)(v106 + 136) )
      {
        v107 = *(_DWORD *)(*(_QWORD *)(v105 + 40136) + 456LL * ((*v101 >> 7) & 0x1F) + 56);
        v108 = v239[0] & v107;
        v109 = v107 & (v239[0] + (_DWORD)v242 - 1);
        v231 = v239[0] & v107;
        if ( (*v101 & 0x40) != 0 )
        {
          v108 >>= 4;
          v109 >>= 4;
          v231 = v108;
          v258 = (*(_QWORD *)v239 << 12) & 0xFFFFFFFFFFFF0000uLL;
        }
        v97 = v109 - v108 + 1;
        v75 = *(_QWORD *)(v105 + 40952) == 0LL;
        v245 = v97;
        if ( !v75 )
        {
          v110 = v97 + v108;
          if ( v108 < (unsigned int)v97 + v108 )
          {
            v111 = 16LL * v108;
            v243 = v111;
            v112 = v110 - v108;
            v257 = v112;
            do
            {
              v113 = *((_QWORD *)v101 + 3);
              v114 = *(_QWORD *)(v113 + v111);
              if ( (v114 & 1) != 0 )
              {
                v115 = (v114 >> 5) & 0x1F;
                v248 = *(_QWORD *)(v113 + v111 + 8);
                if ( *(_QWORD *)(v105 + 40952) )
                {
                  KeEnterCriticalRegion();
                  ExAcquirePushLockExclusiveEx(v105 + 40936, 0LL);
                  *(_QWORD *)(v105 + 40944) = KeGetCurrentThread();
                  if ( *(_DWORD *)(v105 + 40960) == dword_1C0035318 )
                    *(_DWORD *)(v105 + 40960) = 0;
                  v116 = *(_QWORD *)(v105 + 40952) + 48LL * *(unsigned int *)(v105 + 40960);
                  *(_QWORD *)v116 = MEMORY[0xFFFFF78000000014];
                  *(_QWORD *)(v116 + 8) = v248;
                  *(_DWORD *)(v116 + 32) = 1;
                  *(_DWORD *)(v116 + 36) = v115;
                  *(_QWORD *)(v116 + 16) = 1LL;
                  *(_QWORD *)(v116 + 24) = 0LL;
                  *(_DWORD *)(v116 + 40) = *(_DWORD *)(v105 + 40928);
                  ++*(_DWORD *)(v105 + 40960);
                  *(_QWORD *)(v105 + 40944) = 0LL;
                  ExReleasePushLockExclusiveEx(v105 + 40936, 0LL);
                  KeLeaveCriticalRegion();
                  v111 = v243;
                  v112 = v257;
                }
              }
              v111 += 16LL;
              --v112;
              v243 = v111;
              v257 = v112;
            }
            while ( v112 );
            v108 = v231;
            v97 = v245;
            v104 = a2;
            LODWORD(v243) = v233;
          }
        }
        v117 = v97 + v108;
        if ( v108 < (unsigned int)v97 + v108 )
        {
          v97 = 16LL * v108;
          v118 = v117 - v108;
          do
          {
            v119 = (_QWORD *)(v97 + *((_QWORD *)v101 + 3));
            if ( (*(_BYTE *)v119 & 1) != 0 )
            {
              --v101[1];
              *v119 = 0LL;
              *(_QWORD *)(*((_QWORD *)v101 + 3) + v97 + 8) = 0LL;
            }
            v97 += 16LL;
            --v118;
          }
          while ( v118 );
        }
        if ( v101[1] || (*((_DWORD *)v104 + 30) & 4) != 0 )
        {
          v120 = (VIDMM_GLOBAL *)*((_QWORD *)v104 + 8);
          v121 = (8 * ((*(_BYTE *)v101 & 0x40) != 0)) & 8;
          if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                      (VIDMM_PAGE_TABLE_BASE *)v101,
                      v104,
                      &v263,
                      (unsigned __int64 *)&v270,
                      &v271) < 0 )
          {
            v126 = WdLogNewEntry5_WdError(v123, v122, v124, v125);
            *(_QWORD *)(v126 + 24) = 4187LL;
            WdLogEvent5_WdError(v126);
            v129 = WdLogNewEntry5_WdAssertion(v128, v127);
            *(_QWORD *)(v129 + 24) = 6972LL;
            WdLogEvent5_WdAssertion(v129);
            v98 = -1073741823;
            v230 = -1073741823;
LABEL_182:
            v99 = a3;
            v10 = this;
            goto LABEL_183;
          }
          if ( (*((_BYTE *)v120 + 40872) & 8) != 0 )
            v130 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
          else
            v130 = (int)(*v101 << 16) >> 29;
          v228 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v121;
          v131 = v270;
          VIDMM_GLOBAL::UpdatePageTable(
            v120,
            *v101 & 7,
            *((struct VIDMM_PROCESS **)a2 + 9),
            0LL,
            0LL,
            0LL,
            0LL,
            v231,
            v245,
            0LL,
            0LL,
            (*v101 >> 7) & 0x1F,
            v263,
            (unsigned __int64)v270,
            v130,
            v258 >> 12,
            v228,
            0LL);
          v132 = *((_QWORD *)a2 + 8);
          if ( (*(_BYTE *)(v132 + 40872) & 8) != 0 || (v97 = *v101, (v133 = (int)(*v101 << 16) >> 29) == 0) )
          {
            VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
              (VIDMM_PAGE_TABLE_BASE *)v101,
              *((struct VIDMM_GLOBAL **)a2 + 8),
              v131,
              v271);
          }
          else if ( v133 == 1 )
          {
            v97 = (v97 >> 7) & 0x1F;
            if ( *(struct CVirtualAddressAllocator **)(v132 + 8 * v97 + 40352) != a2 )
            {
              v134 = (unsigned __int64 **)(*((_QWORD *)v101 + 2) + 128LL);
              v135 = *v134;
              v136 = **v134;
              if ( (unsigned __int64 **)(*v134)[1] != v134 || *(unsigned __int64 **)(v136 + 8) != v135 )
                __fastfail(3u);
              *v134 = (unsigned __int64 *)v136;
              *(_QWORD *)(v136 + 8) = v134;
              v135[2] = *(_QWORD *)(v132 + 8LL * ((*v101 >> 7) & 0x1F) + 4880);
              v97 = 456LL * ((*v101 >> 7) & 0x1F);
              v137 = v97 + *(_QWORD *)(v132 + 40136) + 440LL;
              v138 = *(unsigned __int64 ***)(v137 + 8);
              if ( *v138 != (unsigned __int64 *)v137 )
                __fastfail(3u);
              *v135 = v137;
              v98 = 0;
              v135[1] = (unsigned __int64)v138;
              *v138 = v135;
              *(_QWORD *)(v137 + 8) = v135;
              v230 = 0;
              goto LABEL_182;
            }
          }
        }
      }
      v98 = 0;
      v230 = 0;
      goto LABEL_182;
    }
    v10 = this;
    v98 = v230;
    v99 = a3;
LABEL_185:
    if ( !*((_BYTE *)v99 + 58) )
      goto LABEL_229;
    if ( v98 < 0 )
      goto LABEL_282;
    v139 = *((_QWORD *)v10 + 3);
    v274 = 16LL * v240;
    v97 = *(unsigned __int8 *)(v274 + v139);
    if ( (v97 & 1) == 0 )
      goto LABEL_229;
    v140 = *((_QWORD *)v10 + 4);
    v141 = 8LL * v240;
    v248 = v141;
    v142 = v102 << 12;
    v260 = v102 << 12;
    v143 = *(unsigned int **)(v141 + v140);
    v259 = (unsigned __int64)v143;
    v97 = v102 & 0xFFFFFFFFFFFFFLL;
    v144 = &v103[v102 & 0xFFFFFFFFFFFFFLL];
    if ( (unsigned __int64)v144 <= v142 >> 12 )
    {
      v203 = -1073741811;
      goto LABEL_283;
    }
    LODWORD(v103) = *v143;
    v145 = *((_QWORD *)a2 + 8);
    v146 = *((_QWORD *)v143 + 1);
    if ( v146 && *(_QWORD *)(v146 + 136) )
    {
      v147 = *(_DWORD *)(*(_QWORD *)(v145 + 40136) + 456LL * ((*v143 >> 7) & 0x1F) + 56);
      v148 = v97 & v147;
      v149 = v147 & ((_DWORD)v144 - 1);
      v232 = v148;
      if ( ((unsigned __int8)v103 & 0x40) != 0 )
      {
        v148 >>= 4;
        v149 >>= 4;
        v232 = v148;
        v260 = v142 & 0xFFFFFFFFFFFF0000uLL;
      }
      v150 = v149 - v148 + 1;
      v75 = *(_QWORD *)(v145 + 40952) == 0LL;
      v245 = v150;
      if ( !v75 )
      {
        v151 = v150 + v148;
        if ( v148 < v150 + v148 )
        {
          v152 = 16LL * v148;
          v258 = v152;
          v153 = v151 - v148;
          v257 = v153;
          do
          {
            v154 = *((_QWORD *)v143 + 3);
            v155 = *(_QWORD *)(v152 + v154);
            if ( (v155 & 1) != 0 )
            {
              v156 = (v155 >> 5) & 0x1F;
              v243 = *(_QWORD *)(v152 + v154 + 8);
              if ( *(_QWORD *)(v145 + 40952) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx(v145 + 40936, 0LL);
                *(_QWORD *)(v145 + 40944) = KeGetCurrentThread();
                if ( *(_DWORD *)(v145 + 40960) == dword_1C0035318 )
                  *(_DWORD *)(v145 + 40960) = 0;
                v157 = *(_QWORD *)(v145 + 40952) + 48LL * *(unsigned int *)(v145 + 40960);
                *(_QWORD *)v157 = MEMORY[0xFFFFF78000000014];
                v158 = v243;
                *(_QWORD *)(v157 + 24) = 0LL;
                *(_QWORD *)(v157 + 8) = v158;
                *(_DWORD *)(v157 + 32) = 1;
                *(_DWORD *)(v157 + 36) = v156;
                *(_QWORD *)(v157 + 16) = 1LL;
                *(_DWORD *)(v157 + 40) = *(_DWORD *)(v145 + 40928);
                ++*(_DWORD *)(v145 + 40960);
                *(_QWORD *)(v145 + 40944) = 0LL;
                ExReleasePushLockExclusiveEx(v145 + 40936, 0LL);
                KeLeaveCriticalRegion();
                v152 = v258;
                v153 = v257;
              }
            }
            v143 = (unsigned int *)v259;
            v152 += 16LL;
            --v153;
            v258 = v152;
            v257 = v153;
          }
          while ( v153 );
          v148 = v232;
          v150 = v245;
          LODWORD(v243) = v233;
        }
      }
      v159 = v150 + v148;
      if ( v148 < v150 + v148 )
      {
        v160 = 16LL * v148;
        v161 = v159 - v148;
        do
        {
          v162 = *((_QWORD *)v143 + 3);
          if ( (*(_BYTE *)(v162 + v160) & 1) != 0 )
          {
            --v143[1];
            LOBYTE(v103) = 0;
            *(_QWORD *)(v162 + v160) = 0LL;
            *(_QWORD *)(v160 + *((_QWORD *)v143 + 3) + 8) = 0LL;
          }
          v160 += 16LL;
          --v161;
        }
        while ( v161 );
      }
      if ( v143[1] || (*((_DWORD *)a2 + 30) & 4) != 0 )
      {
        v163 = (8 * ((*(_BYTE *)v143 & 0x40) != 0)) & 8;
        v164 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
        if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                    (VIDMM_PAGE_TABLE_BASE *)v143,
                    a2,
                    &v264,
                    (unsigned __int64 *)&v272,
                    &v273) < 0 )
        {
          v205 = WdLogNewEntry5_WdError(v166, v165, v167, v168);
          *(_QWORD *)(v205 + 24) = 4187LL;
          WdLogEvent5_WdError(v205);
          v208 = WdLogNewEntry5_WdAssertion(v207, v206);
          *(_QWORD *)(v208 + 24) = 6972LL;
          WdLogEvent5_WdAssertion(v208);
          v203 = -1073741823;
LABEL_283:
          v209 = WdLogNewEntry5_WdWarning(v97);
          WdLogEvent5_WdWarning(v209);
          v10 = this;
          v201 = v246;
          goto LABEL_287;
        }
        if ( (*((_BYTE *)v164 + 40872) & 8) != 0 )
          v169 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        else
          v169 = (int)(*v143 << 16) >> 29;
        v229 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v163;
        v170 = v272;
        VIDMM_GLOBAL::UpdatePageTable(
          v164,
          *v143 & 7,
          *((struct VIDMM_PROCESS **)a2 + 9),
          0LL,
          0LL,
          0LL,
          0LL,
          v232,
          v245,
          0LL,
          0LL,
          (*v143 >> 7) & 0x1F,
          v264,
          (unsigned __int64)v272,
          v169,
          v260 >> 12,
          v229,
          0LL);
        v171 = *((_QWORD *)a2 + 8);
        if ( (*(_BYTE *)(v171 + 40872) & 8) != 0 || (v172 = (int)(*v143 << 16) >> 29) == 0 )
        {
          VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
            (VIDMM_PAGE_TABLE_BASE *)v143,
            *((struct VIDMM_GLOBAL **)a2 + 8),
            v170,
            v273);
        }
        else if ( v172 == 1
               && *(struct CVirtualAddressAllocator **)(v171 + 8 * (((unsigned __int64)*v143 >> 7) & 0x1F) + 40352) != a2 )
        {
          v173 = (__int64 **)(*((_QWORD *)v143 + 2) + 128LL);
          v174 = *v173;
          v175 = **v173;
          if ( (__int64 **)(*v173)[1] != v173 || *(__int64 **)(v175 + 8) != v174 )
            __fastfail(3u);
          *v173 = (__int64 *)v175;
          *(_QWORD *)(v175 + 8) = v173;
          v174[2] = *(_QWORD *)(v171 + 8LL * ((*v143 >> 7) & 0x1F) + 4880);
          v176 = 456LL * ((*v143 >> 7) & 0x1F) + *(_QWORD *)(v171 + 40136) + 440LL;
          v177 = *(__int64 ***)(v176 + 8);
          if ( *v177 != (__int64 *)v176 )
            __fastfail(3u);
          *v174 = v176;
          v174[1] = (__int64)v177;
          *v177 = v174;
          *(_QWORD *)(v176 + 8) = v174;
        }
      }
      v10 = this;
      v141 = v248;
    }
    v178 = a2;
    v179 = *(_QWORD *)v239;
    v230 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(v141 + *((_QWORD *)v10 + 4)) + 4LL) || (*((_DWORD *)a2 + 30) & 4) != 0 )
      goto LABEL_232;
    --*((_DWORD *)v10 + 1);
    v180 = *((_QWORD *)v10 + 3);
    v181 = v274;
    LOBYTE(v243) = 1;
    *(_QWORD *)(v274 + v180) = 0LL;
    *(_QWORD *)(v181 + v180 + 8) = 0LL;
    VIDMM_PAGE_TABLE::DestroyPageTable(
      *(struct VIDMM_ALLOC ***)(v141 + *((_QWORD *)v10 + 4)),
      a2,
      v179 & ~*((_QWORD *)v246 + 4));
    *(_QWORD *)(v248 + *((_QWORD *)v10 + 4)) = 0LL;
LABEL_231:
    v178 = a2;
LABEL_232:
    if ( (*(_BYTE *)a3 & 1) != 0 )
    {
      v186 = v261;
      v187 = (*(_DWORD *)v10 & 0x20) != 0
          && !*((_BYTE *)a3 + 57)
          && ((**(_DWORD **)(v249 + *((_QWORD *)v10 + 4)) >> 6) & 1) != ((*(_DWORD *)(v261 + *((_QWORD *)v10 + 3)) & 0x60000) == 0x20000LL);
      v189 = *((_QWORD *)v10 + 3);
      if ( (*(_QWORD *)(v189 + v261) & 1) == 0 || v187 || v236 )
      {
        if ( (*(_QWORD *)(v189 + v261) & 1LL) == 0 )
        {
          *(_QWORD *)(v189 + v261) |= 1uLL;
          ++*((_DWORD *)v10 + 1);
        }
        *(_QWORD *)(*((_QWORD *)v10 + 3) + v186) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)v10 + 3) + v186) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)v10 + 3) + v186) &= ~8uLL;
        if ( v234 )
        {
          v190 = 2LL * v240;
          *(_QWORD *)(*((_QWORD *)v10 + 3) + 8 * v190) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)v10 + 3) + 8 * v190) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)v10 + 3) + 8 * v190) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(v10, v178, v241);
        goto LABEL_266;
      }
LABEL_264:
      v56 = v243;
      goto LABEL_265;
    }
    v191 = (unsigned __int8)v243;
    if ( v236 )
      v191 = 1;
    LODWORD(v243) = v191;
    if ( (*((_DWORD *)v178 + 30) & 4) != 0 )
      goto LABEL_264;
    v192 = (_QWORD *)(v261 + *((_QWORD *)v10 + 3));
    v193 = v179 & ~*((_QWORD *)v246 + 4);
    if ( (*(_BYTE *)v192 & 1) == 0 || (v194 = v249, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 4) + v249) + 4LL)) )
    {
      v56 = v243;
    }
    else
    {
      --*((_DWORD *)v10 + 1);
      *v192 = 0LL;
      v192[1] = 0LL;
      v195 = *(struct VIDMM_ALLOC ***)(*((_QWORD *)v10 + 4) + v194);
      if ( (*(_DWORD *)v10 & 0x20) != 0 )
        VIDMM_PAGE_TABLE::DestroyPageTable(v195, v178, v193);
      else
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v195, v178, v193, (unsigned __int8)v103);
      v56 = 1;
      v178 = a2;
      *(_QWORD *)(v194 + *((_QWORD *)v10 + 4)) = 0LL;
    }
    v196 = v240;
    if ( v240 != v241 )
    {
      v197 = v240;
      v198 = (_QWORD *)(*((_QWORD *)v10 + 3) + 16LL * v240);
      if ( (*(_BYTE *)v198 & 1) != 0 && !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 4) + 8LL * v240) + 4LL) )
      {
        --*((_DWORD *)v10 + 1);
        *v198 = 0LL;
        v198[1] = 0LL;
        v199 = *(struct VIDMM_ALLOC ***)(*((_QWORD *)v10 + 4) + 8LL * v196);
        if ( (*(_DWORD *)v10 & 0x20) != 0 )
          VIDMM_PAGE_TABLE::DestroyPageTable(v199, v178, v193);
        else
          VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v199, v178, v193, (unsigned __int8)v103);
        *(_QWORD *)(*((_QWORD *)v10 + 4) + 8 * v197) = 0LL;
        goto LABEL_266;
      }
    }
LABEL_265:
    if ( !v56 )
    {
      v47 = (unsigned __int64)v242;
LABEL_271:
      v200 = v252;
      goto LABEL_272;
    }
LABEL_266:
    v200 = v252;
    if ( !v237 )
    {
      v237 = 1;
      v250 = v252;
    }
    v47 = (unsigned __int64)v242;
    if ( (unsigned int)v252 >= v247 )
      v247 = v252 + 1;
LABEL_272:
    v43 = (unsigned int)(v200 + 1);
    v41 = v254;
    v201 = v246;
    v37 = (char *)(v47 + *(_QWORD *)v239);
    v30 = v47 << 12;
    a7 += v30;
    v255 += v30;
    v39 = *((_QWORD *)v246 + 5);
    v249 = v254;
    v44 = v39 + v254;
    v252 = v43;
    *(_QWORD *)v239 = v37;
    v254 = v44;
    v248 = v44;
    if ( v238 )
      goto LABEL_286;
    v38 = a3;
    v36 = v244;
  }
  v201 = v246;
LABEL_286:
  v203 = v230;
LABEL_287:
  if ( v237 )
  {
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(v10, a2, &v262, &v275, &v276) < 0 )
    {
      v214 = WdLogNewEntry5_WdError(v211, v210, v212, v213);
      *(_QWORD *)(v214 + 24) = 6646LL;
      WdLogEvent5_WdError(v214);
      return 3221225473LL;
    }
    v215 = *((_QWORD *)v201 + 5) * v250 + (v265 & ~(*((_QWORD *)v201 + 2) | *((_QWORD *)v201 + 4)));
    if ( *((_BYTE *)a3 + 57) && (*(_DWORD *)v10 & 0x20) != 0 )
    {
      v216 = (struct _DXGK_PTE *)(*((_QWORD *)v10 + 3) + 16LL * (v250 + v244));
      v217 = 0;
    }
    else
    {
      v217 = 0;
      v216 = 0LL;
    }
    if ( (*((_BYTE *)v253 + 40872) & 8) == 0 )
      v217 = (int)(*(_DWORD *)v10 << 16) >> 29;
    v218 = *(_DWORD *)v10;
    v219 = *(_DWORD *)v10 & 7;
    v247 -= v250;
    v227 = v217;
    v220 = v275;
    VIDMM_GLOBAL::UpdatePageTable(
      v253,
      v219,
      *((struct VIDMM_PROCESS **)a2 + 9),
      *((_QWORD *)a3 + 2),
      VidMmAllocFromOwner,
      VidMmGlobalAllocFromOwner,
      a4 + (v215 << 12) - (v265 << 12),
      v250,
      v247,
      (struct _DXGK_PTE *)(*((_QWORD *)v10 + 3) + 16LL * v250),
      v216,
      (v218 >> 7) & 0x1F,
      v262,
      v275,
      v227,
      v215,
      v256,
      *((_QWORD *)a3 + 8));
    v221 = v220;
    v222 = a2;
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(v10, a2, v223, v221, v276);
    *(_DWORD *)v10 |= 0x10000u;
  }
  else
  {
    v222 = a2;
  }
  if ( !*((_DWORD *)v10 + 1) && (*((_DWORD *)v222 + 30) & 4) == 0 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v10, v222, a5 & ~*((_QWORD *)v246 + 4), 1u, 1);
  return v203;
}
