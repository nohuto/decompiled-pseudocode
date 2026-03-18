/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 * Callees:
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C00114EC (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0011550 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z @ 0x1C003CAA4 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003D578 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C003DDD4 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003E1F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003E3FC (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FBF0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // r11
  char v14; // r10
  _DWORD *v15; // rbx
  void *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r10d
  unsigned int v20; // edx
  unsigned int v21; // ecx
  const struct COMMIT_VA_STATE *v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r11
  unsigned int v26; // eax
  int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // r10
  __int64 v32; // rcx
  bool v33; // r9
  const struct COMMIT_VA_STATE *v34; // r8
  __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  VIDMM_PAGE_TABLE *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  bool v41; // cl
  __int64 v42; // rdx
  unsigned int v43; // r8d
  unsigned __int64 v44; // rdx
  struct CVirtualAddressAllocator *v45; // rbx
  __int64 result; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int8 v49; // r8
  struct VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  struct _DXGK_PTE *v55; // rbp
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  void *v57; // rbx
  unsigned int v58; // r9d
  unsigned __int64 v59; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v60; // r11d
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  VIDMM_PAGE_TABLE *v69; // rcx
  struct VIDMM_GLOBAL *v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  VIDMM_PAGE_TABLE *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  void **v80; // [rsp+20h] [rbp-188h]
  struct VIDMM_GLOBAL *v81; // [rsp+28h] [rbp-180h]
  char v82; // [rsp+90h] [rbp-118h]
  char v83; // [rsp+91h] [rbp-117h]
  char v84; // [rsp+92h] [rbp-116h]
  int v85; // [rsp+98h] [rbp-110h]
  VIDMM_PAGE_TABLE **v86; // [rsp+98h] [rbp-110h]
  unsigned int v87; // [rsp+A0h] [rbp-108h]
  int v89; // [rsp+B0h] [rbp-F8h]
  int v90; // [rsp+B0h] [rbp-F8h]
  unsigned int v91; // [rsp+B4h] [rbp-F4h]
  unsigned __int64 v93; // [rsp+C0h] [rbp-E8h]
  unsigned int v94; // [rsp+C8h] [rbp-E0h]
  unsigned int v95; // [rsp+C8h] [rbp-E0h]
  int v96; // [rsp+D0h] [rbp-D8h]
  VIDMM_PAGE_TABLE *v97; // [rsp+D0h] [rbp-D8h]
  struct VIDMM_ALLOC **v98; // [rsp+D0h] [rbp-D8h]
  __int64 v99; // [rsp+D8h] [rbp-D0h]
  unsigned __int64 v100; // [rsp+D8h] [rbp-D0h]
  __int64 v101; // [rsp+E0h] [rbp-C8h]
  unsigned __int64 v102; // [rsp+E8h] [rbp-C0h]
  unsigned int NumPde; // [rsp+F8h] [rbp-B0h]
  __int64 v104; // [rsp+100h] [rbp-A8h]
  unsigned __int64 v105; // [rsp+100h] [rbp-A8h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v106[2]; // [rsp+108h] [rbp-A0h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v107; // [rsp+108h] [rbp-A0h]
  unsigned __int64 v108; // [rsp+110h] [rbp-98h]
  struct _DXGK_PTE *v109; // [rsp+118h] [rbp-90h]
  struct _DXGK_PTE *v110; // [rsp+118h] [rbp-90h]
  _QWORD *v111; // [rsp+120h] [rbp-88h]
  unsigned int v112; // [rsp+128h] [rbp-80h]
  unsigned int v113; // [rsp+12Ch] [rbp-7Ch] BYREF
  unsigned __int64 v114; // [rsp+130h] [rbp-78h] BYREF
  void *v115; // [rsp+138h] [rbp-70h] BYREF
  _QWORD v116[7]; // [rsp+140h] [rbp-68h] BYREF

  *a9 = 0LL;
  v108 = a4;
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v79 = WdLogNewEntry5_WdAssertion(a5, a2, a2, a4);
    *(_QWORD *)(v79 + 24) = 4217LL;
    WdLogEvent5_WdAssertion(v79);
    return 3221225485LL;
  }
  v10 = a5 >> 12;
  v109 = (struct _DXGK_PTE *)((a5 >> 12) + a6);
  if ( (unsigned __int64)v109 <= a5 >> 12 )
  {
    v65 = WdLogNewEntry5_WdAssertion(a5, a2, a2, a4);
    *(_QWORD *)(v65 + 24) = 4231LL;
    WdLogEvent5_WdAssertion(v65);
    return 3221225485LL;
  }
  v11 = *((_QWORD *)a2 + 8);
  v111 = (_QWORD *)(48LL * (*(_DWORD *)this & 7)
                  + 456LL * ((*(_DWORD *)this >> 7) & 0x1F)
                  + *(_QWORD *)(v11 + 40048)
                  + 72LL);
  v12 = (v10 & v111[2]) >> v111[3];
  v96 = v12;
  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  if ( (v14 & 0x10) != 0 && *(_QWORD *)(v11 + 40656) )
  {
    v99 = **((_QWORD **)a2 + 9);
    v94 = *(_DWORD *)(v13 + 40);
    *(_QWORD *)v106 = *(_QWORD *)(v13 + 32);
    v104 = *(_QWORD *)(v13 + 24);
    v89 = *(_DWORD *)(v13 + 44);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 40672, 0LL);
    *(_QWORD *)(v11 + 40680) = KeGetCurrentThread();
    v15 = operator new(0x38uLL, 0x32356956u, PagedPool);
    if ( v15 )
    {
      if ( *(_DWORD *)(v11 + 40664) == dword_1C002F304 )
        *(_DWORD *)(v11 + 40664) = 0;
      v16 = *(void **)(*(_QWORD *)(v11 + 40656) + 24LL * *(unsigned int *)(v11 + 40664) + 16);
      if ( v16 )
        operator delete(v16);
      v15[13] = v94;
      *((_QWORD *)v15 + 4) = v104;
      *((_QWORD *)v15 + 5) = *(_QWORD *)v106;
      *(_QWORD *)v15 = v99;
      v15[12] = v89;
      *((_QWORD *)v15 + 3) = a7;
      *((_QWORD *)v15 + 1) = a5;
      *((_QWORD *)v15 + 2) = a6 << 12;
      *(_QWORD *)(*(_QWORD *)(v11 + 40656) + 24LL * *(unsigned int *)(v11 + 40664)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*(_QWORD *)(v11 + 40656) + 24LL * *(unsigned int *)(v11 + 40664) + 16) = v15;
      *(_DWORD *)(*(_QWORD *)(v11 + 40656) + 24LL * (unsigned int)(*(_DWORD *)(v11 + 40664))++ + 8) = 1;
    }
    *(_QWORD *)(v11 + 40680) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 40672, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v12) = v96;
  }
  v17 = *((_QWORD *)this + 1);
  v18 = 0;
  v95 = 0;
  v91 = 0;
  v82 = 0;
  v107 = 0;
  if ( !v17 || !*(_QWORD *)(v17 + 128) )
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(this, a2, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x10000u;
    a8 = 1;
    v18 = 0;
  }
  if ( (*((_BYTE *)this + 2) & 1) == 0 )
  {
    v107 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
    goto LABEL_68;
  }
  if ( a8 )
  {
LABEL_68:
    if ( (_DWORD)v12 )
    {
      v62 = 0LL;
      v63 = (unsigned int)v12;
      do
      {
        v64 = *((_QWORD *)this + 3);
        v62 += 16LL;
        *(_QWORD *)(v62 + v64 - 16) = 0LL;
        *(_QWORD *)(v62 + v64 - 8) = 0LL;
        --v63;
      }
      while ( v63 );
    }
    v20 = NumPde;
    v91 = NumPde;
    v82 = 1;
    goto LABEL_17;
  }
  v20 = NumPde;
LABEL_17:
  v21 = 0;
  v22 = a3;
  v93 = a5 >> 12;
  v84 = 0;
  v23 = v111[5];
  v24 = v10 & ~v111[4];
  v105 = v23 + v24;
  v25 = v23 + v24;
  v102 = v23 + v24;
  if ( (*(_DWORD *)this & 0x20) != 0 && *((_BYTE *)a3 + 49) && *((_BYTE *)a3 + 48) )
    v21 = v20;
  v85 = 0;
  v87 = v21 + v96;
  v26 = 1 - v21;
  v27 = -v21;
  v112 = v26;
  v90 = v27;
  while ( 1 )
  {
    v83 = 0;
    if ( v25 >= (unsigned __int64)v109 )
    {
      v25 = (a5 >> 12) + a6;
      v102 = v25;
      v84 = 1;
    }
    v28 = v25 - v93;
    v100 = v25 - v93;
    if ( v23 > v25 - v93 || (*(_BYTE *)v22 & 2) == 0 || (*(_BYTE *)(v11 + 40608) & 0x40) == 0 )
      break;
    v66 = *((_QWORD *)this + 3);
    v67 = *(_QWORD *)(v66 + 16LL * v87);
    if ( (v67 & 1) == 0 )
    {
      *(_QWORD *)(v66 + 16LL * v87) = v67 | 2;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * v87) |= 1uLL;
      ++*((_DWORD *)this + 1);
LABEL_48:
      v43 = v87;
      if ( !v82 )
      {
        v82 = 1;
        v95 = v27 + v87;
      }
      if ( v27 + v87 >= v91 )
        v91 = v87 + v112;
      goto LABEL_38;
    }
    if ( (v67 & 2) == 0 )
    {
      v98 = *(struct VIDMM_ALLOC ***)(8LL * v87 + *((_QWORD *)this + 4));
      if ( v98 )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
          VIDMM_PAGE_TABLE::DestroyPageTable(v98, a2, v93);
        else
          VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v98, a2, v93, (unsigned __int8)v22);
        v22 = a3;
        v18 = v85;
        v25 = v102;
        *(_QWORD *)(8LL * v87 + *((_QWORD *)this + 4)) = 0LL;
        v68 = *((_QWORD *)this + 3);
        v27 = v90;
        *(_QWORD *)(v68 + 16LL * v87) = 0LL;
        *(_QWORD *)(v68 + 16LL * v87 + 8) = 0LL;
        --*((_DWORD *)this + 1);
        v28 = v100;
      }
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * v87) |= 2uLL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * v87) |= 1uLL;
      ++*((_DWORD *)this + 1);
      goto LABEL_48;
    }
LABEL_37:
    v43 = v87;
LABEL_38:
    v93 += v28;
    v24 = v25;
    v44 = v28 << 12;
    a7 += v44;
    v108 += v44;
    v87 = v43 + 1;
    v23 = v111[5];
    v25 += v23;
    v102 = v25;
    v105 = v25;
    if ( v84 )
      goto LABEL_39;
  }
  v29 = v87;
  v30 = 8LL * v87;
  v101 = v30;
  v86 = (VIDMM_PAGE_TABLE **)(v30 + *((_QWORD *)this + 4));
  if ( !*v86 )
  {
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      v49 = *((_BYTE *)v22 + 49) && *((_BYTE *)v22 + 48) || *((_DWORD *)v22 + 11) == -3;
      PageTable = CreatePageTable(a2, (*(_DWORD *)this >> 7) & 0x1F, v49);
    }
    else
    {
      PageTable = CreatePageDirectory(a2, (*(_DWORD *)this >> 7) & 0x1F, (*(_DWORD *)this & 7u) - 1);
    }
    v30 = 8LL * v87;
    v54 = *((_QWORD *)this + 4);
    *(_QWORD *)(v101 + v54) = PageTable;
    v86 = (VIDMM_PAGE_TABLE **)(v101 + *((_QWORD *)this + 4));
    if ( !*v86 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v54, v51, v52, v53);
      *(_QWORD *)(v76 + 24) = 4425LL;
      WdLogEvent5_WdAssertion(v76);
      v18 = -1073741801;
      v85 = -1073741801;
LABEL_39:
      v45 = a2;
      goto LABEL_40;
    }
    v28 = v100;
    v29 = v87;
  }
  v31 = 16 * v29;
  v97 = (VIDMM_PAGE_TABLE *)v31;
  v32 = *(_QWORD *)(v31 + *((_QWORD *)this + 3));
  v33 = (v32 & 1) == 0;
  if ( (v32 & 3) != 3 )
  {
    v34 = a3;
    v35 = v31;
    v36 = v93;
LABEL_28:
    v37 = v36;
    v38 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + v30);
    if ( (*(_DWORD *)this & 0x20) != 0 )
      v39 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              v38,
              a2,
              v34,
              v108,
              v37 << 12,
              (struct VIDMM_GLOBAL *)v28,
              a7,
              v33,
              a9);
    else
      v39 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(v38, a2, v34, v108, v37 << 12, v28, a7, v33, a9);
    v85 = v39;
    v18 = v39;
    if ( v39 < 0 )
    {
      v77 = WdLogNewEntry5_WdWarning(v40);
      WdLogEvent5_WdWarning(v77);
      v18 = v85;
      goto LABEL_39;
    }
    v22 = a3;
    v41 = (*(_DWORD *)this & 0x20) != 0
       && !*((_BYTE *)a3 + 49)
       && ((**(_DWORD **)(v101 + *((_QWORD *)this + 4)) >> 6) & 1) != ((*(_DWORD *)(v35 + *((_QWORD *)this + 3)) & 0x60000) == 0x20000LL);
    v42 = *((_QWORD *)this + 3);
    if ( (*(_BYTE *)(v42 + v35) & 1) == 0 || v41 )
    {
      *(_QWORD *)(v42 + v35) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + v35) ^= (*(_DWORD *)(*((_QWORD *)this + 3) + v35) ^ (32
                                                                                             * *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 12) + 28))) & 0x3E0;
      v47 = *((_QWORD *)this + 3);
      v48 = *(_QWORD *)(v47 + v35);
      if ( (v48 & 1) == 0 )
      {
        *(_QWORD *)(v47 + v35) = v48 | 1;
        ++*((_DWORD *)this + 1);
      }
      *(_QWORD *)(*((_QWORD *)this + 3) + v35 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4)
                                                                                       + 8LL * v87)
                                                                           + 8LL)
                                                               + 136LL) >> 12;
      *(_QWORD *)(*((_QWORD *)this + 3) + v35) = *(_QWORD *)(*((_QWORD *)this + 3) + v35) & 0xFFFFFFFFFFFE07FFuLL | (16LL * (*(_DWORD *)this & 0xF80));
      v28 = v100;
      v25 = v102;
      if ( (**(_DWORD **)(v101 + *((_QWORD *)this + 4)) & 0x40) != 0 )
        *(_QWORD *)(*((_QWORD *)this + 3) + v35) = *(_QWORD *)(*((_QWORD *)this + 3) + v35) & 0xFFFFFFFFFFF9FFFFuLL | 0x20000;
      else
        *(_QWORD *)(*((_QWORD *)this + 3) + v35) &= 0xFFFFFFFFFFF9FFFFuLL;
      v27 = v90;
      goto LABEL_48;
    }
    v27 = v90;
    v28 = v100;
    v25 = v102;
    if ( v83 )
      goto LABEL_48;
    goto LABEL_37;
  }
  memset(v116, 0, sizeof(v116));
  v34 = a3;
  v116[0] |= 3uLL;
  v36 = v93;
  v116[5] = 0xFFFFFFFE00000006uLL;
  LOWORD(v116[6]) = *((_WORD *)a3 + 24);
  if ( v24 >= v93 )
  {
    v45 = a2;
    goto LABEL_95;
  }
  v69 = *v86;
  v70 = (struct VIDMM_GLOBAL *)(v93 - v24);
  v80 = (void **)(v24 << 12);
  v45 = a2;
  if ( (*(_DWORD *)this & 0x20) != 0 )
    v71 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            v69,
            a2,
            (const struct COMMIT_VA_STATE *)v116,
            0LL,
            (unsigned __int64)v80,
            v70,
            0LL,
            0,
            a9);
  else
    v71 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
            v69,
            a2,
            (const struct COMMIT_VA_STATE *)v116,
            0LL,
            (unsigned __int64)v80,
            (unsigned __int64)v70,
            0LL,
            0,
            a9);
  v85 = v71;
  if ( v71 >= 0 )
  {
    v34 = a3;
    v36 = v93;
LABEL_95:
    if ( v102 < v105 )
    {
      v81 = (struct VIDMM_GLOBAL *)(v105 - v102);
      v73 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + 8LL * v87);
      if ( (*(_DWORD *)this & 0x20) != 0 )
      {
        v85 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                v73,
                v45,
                (const struct COMMIT_VA_STATE *)v116,
                0LL,
                v102 << 12,
                v81,
                0LL,
                0,
                a9);
        if ( v85 < 0 )
          goto LABEL_98;
      }
      else
      {
        v85 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                v73,
                v45,
                (const struct COMMIT_VA_STATE *)v116,
                0LL,
                v102 << 12,
                (unsigned __int64)v81,
                0LL,
                0,
                a9);
        if ( v85 < 0 )
          goto LABEL_98;
      }
      v36 = v93;
      v34 = a3;
    }
    --*((_DWORD *)this + 1);
    v75 = *((_QWORD *)this + 3);
    v33 = 0;
    v35 = (__int64)v97;
    v30 = 8LL * v87;
    v83 = 1;
    *(_QWORD *)((char *)v97 + v75) = 0LL;
    *(_QWORD *)((char *)v97 + v75 + 8) = 0LL;
    v28 = v100;
    goto LABEL_28;
  }
LABEL_98:
  v74 = WdLogNewEntry5_WdWarning(v72);
  WdLogEvent5_WdWarning(v74);
  v18 = v85;
LABEL_40:
  if ( !v82 )
    return v18;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, v45, &v113, &v114, &v115) >= 0 )
  {
    if ( *((_BYTE *)a3 + 49) && (*(_DWORD *)this & 0x20) != 0 )
      v55 = (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * (v95 + NumPde));
    else
      v55 = 0LL;
    v110 = (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v95);
    KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)v45);
    v57 = (void *)v114;
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v11,
      *(_DWORD *)this & 7,
      KmdProcessHandle,
      0LL,
      0LL,
      0LL,
      0LL,
      v95,
      v91 - v95,
      v110,
      v55,
      v58,
      v113,
      v114,
      v60,
      v59,
      v107);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v61, v57, v115);
    *(_DWORD *)this |= 0x10000u;
    return (unsigned int)v85;
  }
  v78 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v78 + 24) = 4647LL;
  WdLogEvent5_WdError(v78);
  return 3221225473LL;
}
