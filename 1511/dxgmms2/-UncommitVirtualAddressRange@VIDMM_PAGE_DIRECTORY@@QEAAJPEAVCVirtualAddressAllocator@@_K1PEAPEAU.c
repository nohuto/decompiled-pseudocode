/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0040240 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 * Callees:
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C00114EC (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C003CD00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003D578 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C003DDD4 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003E1F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C004A988 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C005405C (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00670E0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::UncommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        struct VIDMM_ALLOC **a5,
        unsigned int a6)
{
  VIDMM_PAGE_DIRECTORY *v6; // rsi
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdi
  VIDMM_GLOBAL *v10; // r9
  __int64 v11; // rbx
  unsigned int *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  VIDMM_GLOBAL *v16; // r8
  void *v17; // rcx
  unsigned int v18; // ebx
  _QWORD *v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r10
  bool v28; // zf
  bool v29; // si
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int *v35; // rsi
  unsigned __int64 v36; // r8
  unsigned int v37; // r9d
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  unsigned int v44; // edx
  unsigned int v45; // r8d
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  struct CVirtualAddressAllocator *v53; // rdx
  VIDMM_GLOBAL *v54; // rdi
  int v55; // ebx
  enum _DXGK_PAGETABLEUPDATEMODE v56; // r8d
  struct VIDMM_ALLOC *v57; // r9
  __int64 v58; // r10
  __int64 v59; // r10
  int v60; // eax
  unsigned __int64 v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdi
  VIDMM_PAGE_TABLE *v67; // rcx
  unsigned int v68; // ecx
  struct CVirtualAddressAllocator *v69; // rbx
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // esi
  struct _DXGK_PTE *v78; // rbx
  struct _DXGK_PTE *v79; // rdi
  VIDMM_GLOBAL *v80; // rax
  unsigned __int64 v81; // r9
  unsigned int v82; // r10d
  enum _DXGK_PAGETABLEUPDATEMODE v83; // r11d
  __int64 v84; // r8
  __int64 v85; // rax
  unsigned __int64 v86; // r8
  struct VIDMM_ALLOC **v87; // rcx
  __int64 v88; // rcx
  int v89; // ebx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  unsigned int v97; // eax
  __int64 v98; // r10
  void *KmdProcessHandle; // rax
  __int64 **v100; // rax
  __int64 *v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 **v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rax
  char v108; // [rsp+90h] [rbp-80h]
  char v109; // [rsp+91h] [rbp-7Fh]
  char v111; // [rsp+A0h] [rbp-70h]
  unsigned __int64 v112; // [rsp+A8h] [rbp-68h]
  __int64 v113; // [rsp+B0h] [rbp-60h]
  unsigned int v114; // [rsp+B8h] [rbp-58h]
  unsigned int v116; // [rsp+C8h] [rbp-48h]
  __int64 v117; // [rsp+D0h] [rbp-40h]
  unsigned int v118; // [rsp+D8h] [rbp-38h]
  unsigned int v119; // [rsp+DCh] [rbp-34h]
  __int64 v120; // [rsp+E0h] [rbp-30h]
  int v121; // [rsp+E0h] [rbp-30h]
  unsigned __int64 v122; // [rsp+E0h] [rbp-30h]
  unsigned int v123; // [rsp+E8h] [rbp-28h]
  unsigned __int64 v124; // [rsp+F0h] [rbp-20h]
  VIDMM_GLOBAL *v125; // [rsp+F8h] [rbp-18h]
  __int64 v127; // [rsp+100h] [rbp-10h]
  unsigned __int64 v128; // [rsp+108h] [rbp-8h]
  unsigned int v129; // [rsp+118h] [rbp+8h]
  unsigned int v130; // [rsp+120h] [rbp+10h] BYREF
  __int64 v131; // [rsp+128h] [rbp+18h]
  unsigned __int64 v132; // [rsp+130h] [rbp+20h]
  unsigned int v133; // [rsp+138h] [rbp+28h] BYREF
  void *v134; // [rsp+140h] [rbp+30h] BYREF
  unsigned __int64 v135; // [rsp+148h] [rbp+38h]
  unsigned __int64 v136; // [rsp+150h] [rbp+40h] BYREF
  unsigned __int64 v137; // [rsp+158h] [rbp+48h]
  unsigned __int64 v138; // [rsp+160h] [rbp+50h]
  __int64 v139; // [rsp+168h] [rbp+58h]
  __int64 v140; // [rsp+170h] [rbp+60h]
  void *v141; // [rsp+178h] [rbp+68h] BYREF
  void *v142; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v143[7]; // [rsp+188h] [rbp+78h] BYREF

  v6 = a1;
  v7 = a2;
  v138 = a3;
  if ( (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  v8 = a3 >> 12;
  v135 = v8;
  v9 = a4 + (a3 >> 12);
  v137 = v9;
  if ( a4 + v8 <= v8 )
    return 3221225485LL;
  v10 = *(VIDMM_GLOBAL **)(a2 + 64);
  v125 = v10;
  v11 = *(_QWORD *)(a2 + 96) + 32LL * ((*(_DWORD *)a1 >> 7) & 0x1F);
  v12 = (unsigned int *)(*((_QWORD *)v10 + 5006)
                       + 72LL
                       + 456LL * ((*(_DWORD *)a1 >> 7) & 0x1F)
                       + 48LL * (*(_DWORD *)a1 & 7));
  v113 = *((_QWORD *)v10 + 5006) + 72LL + 456LL * ((*(_DWORD *)v6 >> 7) & 0x1F) + 48LL * (*(_DWORD *)v6 & 7);
  if ( (*(_DWORD *)v6 & 0x10) != 0 )
  {
    if ( *((_QWORD *)v10 + 5082) )
    {
      v13 = *((_QWORD *)v6 + 2);
      v14 = (_QWORD *)((char *)v10 + 40672);
      v120 = **(_QWORD **)(*(_QWORD *)(v13 + 8) + 8LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v14, 0LL);
      v14[1] = KeGetCurrentThread();
      v15 = operator new(0x18uLL, 0x32356956u, PagedPool);
      if ( v15 )
      {
        v16 = v125;
        if ( *((_DWORD *)v125 + 10166) == dword_1C002F304 )
          *((_DWORD *)v125 + 10166) = 0;
        v17 = *(void **)(*((_QWORD *)v125 + 5082) + 24LL * *((unsigned int *)v125 + 10166) + 16);
        if ( v17 )
        {
          operator delete(v17);
          v16 = v125;
        }
        *v15 = v120;
        v15[1] = v138;
        v15[2] = a4 << 12;
        *(_QWORD *)(*((_QWORD *)v16 + 5082) + 24LL * *((unsigned int *)v16 + 10166)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)v16 + 5082) + 24LL * *((unsigned int *)v16 + 10166) + 16) = v15;
        *(_DWORD *)(*((_QWORD *)v16 + 5082) + 24LL * (unsigned int)(*((_DWORD *)v16 + 10166))++ + 8) = 2;
      }
      v14[1] = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
      v8 = v135;
      v7 = a2;
      v6 = a1;
      v9 = v137;
    }
    v18 = *(_DWORD *)(v11 + 16);
    v19 = (_QWORD *)v113;
  }
  else
  {
    v18 = *v12;
    v19 = (_QWORD *)(*((_QWORD *)v10 + 5006) + 72LL + 456LL * ((*(_DWORD *)v6 >> 7) & 0x1F) + 48LL * (*(_DWORD *)v6 & 7));
  }
  v20 = v19[3];
  v21 = (v8 & v19[2]) >> v20;
  v118 = v18;
  v129 = v21;
  if ( (unsigned int)((v19[2] & (v9 - 1)) >> v20) + 1 > v18 )
    return 0LL;
  v22 = *((_QWORD *)v6 + 1);
  v116 = 0;
  v109 = 0;
  if ( !v22 || !*(_QWORD *)(v22 + 128) || !*((_DWORD *)v6 + 1) )
    return 0LL;
  v23 = v8;
  v24 = v8 & ~v19[4];
  v112 = v8;
  v111 = 0;
  v132 = v24 + v19[5];
  v25 = v132;
  v124 = v132;
  v26 = (unsigned int)v21;
  v114 = v21;
  while ( 1 )
  {
    v108 = 0;
    if ( v25 >= v9 )
    {
      v25 = v9;
      v111 = 1;
      v124 = v9;
    }
    v27 = v25 - v23;
    v121 = *(_DWORD *)v6;
    v128 = v25 - v23;
    v29 = 0;
    if ( (*(_DWORD *)v6 & 0x1020) == 0x1020 )
    {
      v28 = (*(_BYTE *)(*((_QWORD *)v6 + 3) + 16LL * (v118 + (unsigned int)v26)) & 2) == 0;
      v26 = v114;
      if ( !v28 )
        v29 = 1;
    }
    v30 = (unsigned int)v26;
    v117 = 16 * v26;
    if ( (*(_BYTE *)(16 * v26 + *((_QWORD *)a1 + 3)) & 2) != 0 || v29 )
    {
      memset(v143, 0, sizeof(v143));
      v143[0] |= 3uLL;
      LOBYTE(v143[6]) = v29;
      v6 = a1;
      BYTE1(v143[6]) = (v121 & 0x1000) != 0;
      v143[5] = 0xFFFFFFFE00000006uLL;
      if ( v24 < v112
        && (v89 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                    a1,
                    (struct CVirtualAddressAllocator *)a2,
                    (const struct COMMIT_VA_STATE *)v143,
                    0LL,
                    v24 << 12,
                    v112 - v24,
                    0LL,
                    0,
                    a5),
            v89 < 0)
        || v124 < v132
        && (v89 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                    a1,
                    (struct CVirtualAddressAllocator *)a2,
                    (const struct COMMIT_VA_STATE *)v143,
                    0LL,
                    v124 << 12,
                    v132 - v124,
                    0LL,
                    0,
                    a5),
            v89 < 0) )
      {
        v106 = WdLogNewEntry5_WdWarning(v88);
        WdLogEvent5_WdWarning(v106);
        return (unsigned int)v89;
      }
      v27 = v128;
      v19 = (_QWORD *)v113;
      v7 = a2;
    }
    else
    {
      v6 = a1;
    }
    v31 = *((_QWORD *)v6 + 3);
    v32 = v117;
    v33 = *(_QWORD *)(v31 + v117);
    if ( (v33 & 1) != 0 )
    {
      if ( (v33 & 2) != 0 )
      {
        *(_QWORD *)(v31 + v117) = v33 & 0xFFFFFFFFFFFFFFFDuLL;
        v90 = *(_QWORD *)(*((_QWORD *)v6 + 4) + 8 * v30);
        if ( !v90 || !*(_DWORD *)(v90 + 4) )
          *(_QWORD *)(v117 + *((_QWORD *)v6 + 3)) &= ~1uLL;
        v108 = 1;
      }
      v34 = *((_QWORD *)v6 + 4);
      v140 = 8 * v30;
      v35 = *(unsigned int **)(8 * v30 + v34);
      if ( !v35 || !v35[1] )
      {
        v6 = a1;
        goto LABEL_61;
      }
      if ( (*(_DWORD *)a1 & 0x20) == 0 )
      {
        v61 = v112;
        VIDMM_PAGE_DIRECTORY::UncommitVirtualAddressRange(v35, v7, v112 << 12, v27, a5, 0);
        v53 = (struct CVirtualAddressAllocator *)a2;
        goto LABEL_58;
      }
      if ( a6 > 1 )
      {
        v53 = (struct CVirtualAddressAllocator *)a2;
        v61 = v112;
        goto LABEL_60;
      }
      v122 = v112 << 12;
      v36 = (v112 & 0xFFFFFFFFFFFFFLL) + v27;
      if ( v36 <= (v112 & 0xFFFFFFFFFFFFFLL) )
      {
        v53 = (struct CVirtualAddressAllocator *)a2;
        v61 = v112;
        goto LABEL_59;
      }
      v37 = *v35;
      v38 = *(_QWORD *)(a2 + 64);
      v39 = (*v35 >> 7) & 0x1F;
      v131 = v38;
      v40 = 456 * v39;
      v41 = *((_QWORD *)v35 + 1);
      v42 = *(_QWORD *)(v38 + 40048) + v40;
      if ( v41 && *(_QWORD *)(v41 + 128) )
      {
        v43 = *(_DWORD *)(v42 + 56);
        v44 = v112 & v43;
        v119 = v112 & v43;
        v45 = v43 & (v36 - 1);
        if ( (v37 & 0x40) != 0 )
        {
          v44 >>= 4;
          v45 >>= 4;
          v119 = v44;
          v122 = (v112 << 12) & 0xFFFFFFFFFFFF0000uLL;
        }
        LODWORD(v46) = v45 - v44 + 1;
        v123 = v46;
        if ( *(_QWORD *)(v38 + 40688) && v44 < (unsigned int)v46 + v44 )
        {
          v47 = 16LL * v44;
          v48 = (unsigned int)v46;
          v127 = (unsigned int)v46;
          do
          {
            v49 = *((_QWORD *)v35 + 3);
            v50 = *(_QWORD *)(v49 + v47);
            if ( (v50 & 1) != 0 )
            {
              v71 = (v50 >> 5) & 0x1F;
              v139 = *(_QWORD *)(v49 + v47 + 8);
              if ( *(_QWORD *)(v38 + 40688) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx(v131 + 40672, 0LL);
                v72 = v131;
                v73 = v131 + 40672;
                *(_QWORD *)(v131 + 40680) = KeGetCurrentThread();
                if ( *(_DWORD *)(v72 + 40696) == dword_1C002F308 )
                  *(_DWORD *)(v72 + 40696) = 0;
                v74 = *(_QWORD *)(v72 + 40688) + 48LL * *(unsigned int *)(v72 + 40696);
                *(_QWORD *)v74 = MEMORY[0xFFFFF78000000014];
                v75 = v139;
                *(_DWORD *)(v74 + 32) = 1;
                *(_QWORD *)(v74 + 16) = 1LL;
                *(_QWORD *)(v74 + 8) = v75;
                *(_QWORD *)(v74 + 24) = 0LL;
                *(_DWORD *)(v74 + 36) = v71;
                *(_DWORD *)(v74 + 40) = *(_DWORD *)(v72 + 40664);
                ++*(_DWORD *)(v72 + 40696);
                *(_QWORD *)(v73 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v73, 0LL);
                KeLeaveCriticalRegion();
                v48 = v127;
                v38 = v131;
              }
            }
            v47 += 16LL;
            v127 = --v48;
          }
          while ( v48 );
          v44 = v119;
          LODWORD(v46) = v123;
        }
        if ( v44 < (unsigned int)v46 + v44 )
        {
          v51 = 16LL * v44;
          v46 = (unsigned int)v46;
          do
          {
            v52 = *((_QWORD *)v35 + 3);
            if ( (*(_BYTE *)(v52 + v51) & 1) != 0 )
            {
              --v35[1];
              *(_QWORD *)(v52 + v51) = 0LL;
              *(_QWORD *)(*((_QWORD *)v35 + 3) + v51 + 8) = 0LL;
            }
            v51 += 16LL;
            --v46;
          }
          while ( v46 );
        }
        v53 = (struct CVirtualAddressAllocator *)a2;
        if ( !v35[1] && (*(_DWORD *)(a2 + 120) & 4) == 0 )
          goto LABEL_57;
        v54 = *(VIDMM_GLOBAL **)(a2 + 64);
        v55 = (8 * ((*v35 & 0x40) != 0)) & 8;
        if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                    (VIDMM_PAGE_TABLE_BASE *)v35,
                    (struct CVirtualAddressAllocator *)a2,
                    &v133,
                    (unsigned __int64 *)&v134,
                    &v142) < 0 )
        {
          v91 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v91 + 24) = 3270LL;
          WdLogEvent5_WdError(v91);
          v96 = WdLogNewEntry5_WdAssertion(v93, v92, v94, v95);
          *(_QWORD *)(v96 + 24) = 4903LL;
          WdLogEvent5_WdAssertion(v96);
        }
        else
        {
          if ( (*((_BYTE *)v54 + 40608) & 8) != 0 )
          {
            v57 = 0LL;
            v56 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
          }
          else
          {
            v56 = (int)(*v35 << 16) >> 29;
            v57 = 0LL;
          }
          v58 = a2;
          if ( !*(_QWORD *)(a2 + 88) )
          {
            v97 = VIDMM_GLOBAL::AdapterId(*(VIDMM_GLOBAL **)(a2 + 64));
            KmdProcessHandle = VIDMM_PROCESS::GetKmdProcessHandle(*(VIDMM_PROCESS **)(v98 + 72), v97);
            *(_QWORD *)(v58 + 88) = KmdProcessHandle;
          }
          VIDMM_GLOBAL::UpdatePageTable(
            v54,
            *v35 & 7,
            *(void **)(v58 + 88),
            0LL,
            v57,
            v57,
            (unsigned __int64)v57,
            v119,
            v123,
            (struct _DXGK_PTE *)v57,
            (struct _DXGK_PTE *)v57,
            (*v35 >> 7) & 0x1F,
            v133,
            (unsigned __int64)v134,
            v56,
            v122 >> 12,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v55);
          v53 = (struct CVirtualAddressAllocator *)a2;
          v59 = *(_QWORD *)(a2 + 64);
          if ( (*(_BYTE *)(v59 + 40608) & 8) != 0 || (v60 = (int)(*v35 << 16) >> 29) == 0 )
          {
            VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
              (VIDMM_PAGE_TABLE_BASE *)v35,
              *(struct VIDMM_GLOBAL **)(a2 + 64),
              v134,
              v142);
          }
          else
          {
            if ( v60 != 1 )
            {
LABEL_57:
              v61 = v112;
LABEL_58:
              v19 = (_QWORD *)v113;
LABEL_59:
              v32 = v117;
LABEL_60:
              v6 = a1;
              v62 = v140;
              if ( !*(_DWORD *)(*(_QWORD *)(v140 + *((_QWORD *)a1 + 4)) + 4LL) && (*((_DWORD *)v53 + 30) & 4) == 0 )
              {
                --*((_DWORD *)a1 + 1);
                v85 = *((_QWORD *)a1 + 3);
                *(_QWORD *)(v32 + v85) = 0LL;
                *(_QWORD *)(v32 + v85 + 8) = 0LL;
                v86 = v61 & ~v19[4];
                v87 = *(struct VIDMM_ALLOC ***)(v62 + *((_QWORD *)a1 + 4));
                if ( (*(_DWORD *)a1 & 0x20) != 0 )
                  VIDMM_PAGE_TABLE::DestroyPageTable(v87, v53, v86);
                else
                  VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                    (VIDMM_PAGE_DIRECTORY *)v87,
                    v53,
                    v86,
                    (unsigned __int8)v19);
                v108 = 1;
                *(_QWORD *)(v62 + *((_QWORD *)a1 + 4)) = 0LL;
              }
              goto LABEL_61;
            }
            if ( *(_QWORD *)(v59 + 8 * (((unsigned __int64)*v35 >> 7) & 0x1F) + 40088) == a2 )
            {
              v32 = v117;
              v19 = (_QWORD *)v113;
              v61 = v112;
              goto LABEL_60;
            }
            v100 = (__int64 **)(*((_QWORD *)v35 + 2) + 128LL);
            v101 = *v100;
            v102 = **v100;
            if ( (__int64 **)(*v100)[1] != v100 || *(__int64 **)(v102 + 8) != v101 )
              __fastfail(3u);
            *v100 = (__int64 *)v102;
            *(_QWORD *)(v102 + 8) = v100;
            v101[2] = *(_QWORD *)(v59 + 8LL * ((*v35 >> 7) & 0x1F) + 4880);
            v103 = 456LL * ((*v35 >> 7) & 0x1F) + *(_QWORD *)(v59 + 40048) + 440LL;
            v104 = *(__int64 ***)(v103 + 8);
            *v101 = v103;
            v101[1] = (__int64)v104;
            if ( *v104 != (__int64 *)v103 )
              __fastfail(3u);
            *v104 = v101;
            *(_QWORD *)(v103 + 8) = v101;
          }
        }
      }
      v53 = (struct CVirtualAddressAllocator *)a2;
      goto LABEL_57;
    }
LABEL_61:
    if ( (*(_DWORD *)v6 & 0x1020) != 0x1020 )
      goto LABEL_136;
    if ( (a6 & 0xFFFFFFFD) != 0 )
      goto LABEL_136;
    v63 = *((_QWORD *)v6 + 3);
    v64 = v118 + v114;
    v65 = *(_QWORD *)(v63 + 16 * v64);
    if ( (v65 & 1) == 0 )
      goto LABEL_136;
    if ( (v65 & 2) != 0 )
    {
      *(_QWORD *)(v63 + 16LL * (v118 + v114)) = v65 & 0xFFFFFFFFFFFFFFFDuLL;
      v105 = *(_QWORD *)(*((_QWORD *)v6 + 4) + 8 * v64);
      if ( !v105 || !*(_DWORD *)(v105 + 4) )
        *(_QWORD *)(*((_QWORD *)v6 + 3) + 16LL * (v118 + v114)) &= ~1uLL;
      v108 = 1;
    }
    v66 = 8 * v64;
    v67 = *(VIDMM_PAGE_TABLE **)(8 * v64 + *((_QWORD *)v6 + 4));
    if ( v67
      && *((_DWORD *)v67 + 1)
      && (VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(v67, (struct CVirtualAddressAllocator *)a2, v112 << 12, v128),
          !*(_DWORD *)(*(_QWORD *)(v66 + *((_QWORD *)v6 + 4)) + 4LL))
      && (*(_DWORD *)(a2 + 120) & 4) == 0 )
    {
      --*((_DWORD *)v6 + 1);
      v76 = *((_QWORD *)v6 + 3);
      *(_QWORD *)(v76 + 16LL * (v118 + v114)) = 0LL;
      *(_QWORD *)(v76 + 16LL * (v118 + v114) + 8) = 0LL;
      VIDMM_PAGE_TABLE::DestroyPageTable(
        *(struct VIDMM_ALLOC ***)(v66 + *((_QWORD *)v6 + 4)),
        (struct CVirtualAddressAllocator *)a2,
        v112 & ~*(_QWORD *)(v113 + 32));
      *(_QWORD *)(v66 + *((_QWORD *)v6 + 4)) = 0LL;
    }
    else
    {
LABEL_136:
      if ( !v108 )
      {
        v68 = v114;
        goto LABEL_70;
      }
    }
    v68 = v114;
    if ( !v109 )
    {
      v109 = 1;
      v129 = v114;
    }
    if ( v114 >= v116 )
      v116 = v114 + 1;
LABEL_70:
    v26 = v68 + 1;
    v19 = (_QWORD *)v113;
    v24 = v132;
    v23 = v128 + v112;
    v25 = *(_QWORD *)(v113 + 40) + v124;
    v114 = v26;
    v112 += v128;
    v124 = v25;
    v132 += *(_QWORD *)(v113 + 40);
    if ( v111 )
      break;
    v7 = a2;
    v9 = v137;
  }
  if ( !v109 )
  {
    v69 = (struct CVirtualAddressAllocator *)a2;
    goto LABEL_73;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
              v6,
              (struct CVirtualAddressAllocator *)a2,
              &v130,
              &v136,
              &v141) < 0 )
  {
    v107 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v107 + 24) = 5232LL;
    WdLogEvent5_WdError(v107);
    return 3221225473LL;
  }
  else
  {
    v77 = (8 * ((*(_DWORD *)a1 & 0x40) != 0)) & 8;
    if ( (*(_DWORD *)a1 & 0x1020) == 0x1020 )
      v78 = (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * (v129 + v118));
    else
      v78 = 0LL;
    v79 = (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * v129);
    v80 = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)a2);
    VIDMM_GLOBAL::UpdatePageTable(
      v125,
      *(_DWORD *)a1 & 7,
      v80,
      0LL,
      0LL,
      0LL,
      0LL,
      v129,
      v116 - v129,
      v79,
      v78,
      v82,
      v130,
      v136,
      v83,
      v81,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)v77);
    v69 = (struct CVirtualAddressAllocator *)a2;
    v6 = a1;
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, v84, (void *)v136, v141);
    v19 = (_QWORD *)v113;
LABEL_73:
    if ( !*((_DWORD *)v6 + 1) )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory((struct VIDMM_ALLOC **)v6, v69, v138 & ~v19[4], 1u, 1u);
    return 0LL;
  }
}
