/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C00114EC (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C003D748 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C003D870 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C003D990 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003DB48 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C004A988 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C005405C (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00670E0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0079F8C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 *     ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C007F774 (-SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_GLOBAL *a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v11; // r8
  unsigned __int64 v13; // r10
  struct CVirtualAddressAllocator *v14; // rdx
  unsigned int v15; // ecx
  struct VIDMM_GLOBAL *v16; // r12
  int v17; // r13d
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rbp
  unsigned __int64 v21; // r9
  int v22; // r15d
  unsigned int v23; // r14d
  struct VIDMM_ALLOC **v24; // r11
  unsigned int v25; // r15d
  __int64 v26; // rax
  unsigned int v27; // eax
  int v29; // r13d
  unsigned int v30; // r14d
  unsigned int v31; // ebp
  int v32; // r12d
  VIDMM_GLOBAL *v33; // r14
  struct VIDMM_ALLOC *v34; // r8
  struct _VIDMM_GLOBAL_ALLOC *v35; // rcx
  enum _DXGK_PAGETABLEUPDATEMODE v36; // eax
  void *v37; // r12
  __int64 v38; // rdx
  int v39; // eax
  __int64 v41; // rcx
  int v42; // r12d
  struct VIDMM_ALLOC **v43; // r12
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int updated; // r14d
  int v52; // edi
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  int v56; // r9d
  int v57; // eax
  __int64 v58; // r10
  __int64 v59; // r8
  unsigned int v60; // r11d
  __int64 v61; // rbp
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned int v64; // edx
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  int v68; // r9d
  __int64 v69; // r11
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 **v75; // rax
  __int64 *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 **v79; // rax
  _DWORD *v80; // [rsp+90h] [rbp-48h]
  void *v81; // [rsp+90h] [rbp-48h]
  void *v82; // [rsp+98h] [rbp-40h] BYREF
  void *v83; // [rsp+A0h] [rbp-38h] BYREF
  unsigned __int64 v85; // [rsp+100h] [rbp+28h]
  struct VIDMM_GLOBAL *v86; // [rsp+108h] [rbp+30h]
  struct VIDMM_GLOBAL *v87; // [rsp+108h] [rbp+30h]
  unsigned __int64 v88; // [rsp+110h] [rbp+38h]

  v11 = a9;
  v13 = a5 >> 12;
  v14 = (struct VIDMM_GLOBAL *)((char *)a6 + (a5 >> 12));
  *a9 = 0LL;
  if ( (unsigned __int64)v14 <= a5 >> 12 )
  {
    v53 = WdLogNewEntry5_WdAssertion(this, v14, v11, a4);
    *(_QWORD *)(v53 + 24) = 3848LL;
    WdLogEvent5_WdAssertion(v53);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)this;
  v88 = a7 >> 12;
  v16 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  v17 = 0;
  v18 = (unsigned __int64)v15 >> 7;
  v19 = v15 & 7;
  v86 = v16;
  v20 = (_DWORD *)(*((_QWORD *)v16 + 5006) + 456 * (v18 & 0x1F));
  v80 = v20;
  v21 = v13 & ~*(_QWORD *)&v20[12 * v19 + 26];
  v22 = v20[14];
  v23 = v22 & ((_DWORD)v14 - 1);
  v24 = (struct VIDMM_ALLOC **)(v21 & ~*(_QWORD *)&v20[12 * v19 + 22]);
  v82 = *(void **)&v20[12 * v19 + 28];
  v25 = v13 & v22;
  v26 = *((_QWORD *)this + 1);
  v85 = v21;
  a9 = v24;
  if ( !v26 || !*(_QWORD *)(v26 + 128) )
  {
    v42 = VIDMM_PAGE_TABLE::CommitPageTable(this, v16, v11);
    if ( v42 < 0 )
    {
      v54 = WdLogNewEntry5_WdWarning(v41);
      WdLogEvent5_WdWarning(v54);
      return (unsigned int)v42;
    }
    *(_DWORD *)this &= ~0x10000u;
    v21 = v85;
  }
  v27 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) == 0 )
  {
    v17 = 2;
    a8 = 1;
  }
  if ( !*((_BYTE *)a3 + 49) )
  {
    if ( *((_BYTE *)a3 + 48) )
    {
      if ( !*((_DWORD *)this + 1) )
        *(_DWORD *)this = v27 | 0x40;
    }
    else
    {
      if ( (v27 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 50) )
        {
          VIDMM_PROCESS::SuspendResumeProcess(*((VIDMM_PROCESS **)a2 + 9), *(_DWORD *)(*((_QWORD *)v86 + 3) + 184LL), 1);
          *((_BYTE *)a3 + 50) = 1;
        }
        v55 = v20[16];
        v56 = 16 * (v55 - 1);
        v57 = v55 - 1;
        v58 = v57;
        if ( v57 >= 0 )
        {
          v59 = 16LL * v57;
          do
          {
            if ( (*(_BYTE *)(v59 + *((_QWORD *)this + 3)) & 1) != 0 )
            {
              v60 = 0;
              v61 = 0LL;
              do
              {
                v62 = *((_QWORD *)this + 3);
                v63 = 2LL * (v60 + v56);
                ++v60;
                *(_OWORD *)(v62 + 8 * v63) = *(_OWORD *)(v62 + v59);
                *(_QWORD *)(v62 + 8 * v63 + 8) += v61++;
              }
              while ( v60 < 0x10 );
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              v64 = 0;
              do
              {
                v65 = 16LL * (v64 + v56);
                ++v64;
                v66 = (_QWORD *)(*((_QWORD *)this + 3) + v65);
                *v66 = 0LL;
                v66[1] = 0LL;
              }
              while ( v64 < 0x10 );
            }
            v56 -= 16;
            v59 -= 16LL;
            --v58;
          }
          while ( v58 >= 0 );
          v20 = v80;
        }
        KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)a2);
        VIDMM_PAGE_TABLE::UpdatePageTable(
          this,
          a2,
          KmdProcessHandle,
          a3,
          *((_QWORD *)a3 + 4),
          a4,
          *((_DWORD *)a3 + 10),
          v68,
          v20[15],
          v69,
          v68);
        v21 = v85;
      }
      *(_DWORD *)this &= ~0x40u;
    }
  }
  v29 = ((unsigned __int8)v17 ^ (unsigned __int8)(8 * (((*(_DWORD *)this >> 6) & 1) != 0))) & 8 ^ v17;
  if ( ((*(_DWORD *)this >> 6) & 1) != 0 )
  {
    v25 >>= 4;
    v23 >>= 4;
    v82 = (void *)(16LL * (_QWORD)v82);
    v85 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v30 = v23 + 1;
  v31 = v30 - v25;
  if ( a8 )
  {
    if ( v25 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v86, 0, v25);
      v43 = a9;
      LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                      this,
                      a2,
                      0,
                      v25,
                      (unsigned __int64)a9,
                      (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
      if ( (int)a9 < 0 )
      {
        v70 = WdLogNewEntry5_WdAssertion(v44, v14, v45, v46);
        *(_QWORD *)(v70 + 24) = 4001LL;
        WdLogEvent5_WdAssertion(v70);
        return (unsigned int)a9;
      }
    }
    else
    {
      v43 = a9;
    }
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v47 = v80[16];
    else
      v47 = v80[15];
    if ( v30 < v47 )
    {
      LODWORD(a9) = v47 - v30;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v86, v30, v47 - v30);
      updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                  this,
                  a2,
                  v30,
                  (unsigned int)a9,
                  (unsigned __int64)v43 + (_QWORD)v82 * v30,
                  (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
      if ( updated < 0 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v48, v14, v49, v50);
        *(_QWORD *)(v71 + 24) = 4018LL;
        WdLogEvent5_WdAssertion(v71);
        return (unsigned int)updated;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 11) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v14, a3, v25, v31, v88);
    if ( !*((_QWORD *)a2 + 11) )
    {
      v72 = VIDMM_GLOBAL::AdapterId(*((VIDMM_GLOBAL **)a2 + 8));
      *((_QWORD *)a2 + 11) = VIDMM_PROCESS::GetKmdProcessHandle(*((VIDMM_PROCESS **)a2 + 9), v72);
    }
    v32 = *((_DWORD *)a3 + 10);
    v33 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
    v81 = (void *)*((_QWORD *)a2 + 11);
    v87 = (struct VIDMM_GLOBAL *)*((_QWORD *)a3 + 4);
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                this,
                a2,
                (unsigned int *)&a9,
                (unsigned __int64 *)&v82,
                &v83) >= 0 )
    {
      v34 = 0LL;
      v35 = 0LL;
      if ( v32 == 1 )
      {
        v34 = v87;
        v35 = **(struct _VIDMM_GLOBAL_ALLOC ***)v87;
      }
      else if ( v32 == 3 )
      {
        v35 = v87;
      }
      if ( (*((_BYTE *)v33 + 40608) & 8) != 0 )
        v36 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v36 = (int)(*(_DWORD *)this << 16) >> 29;
      v37 = v82;
      VIDMM_GLOBAL::UpdatePageTable(
        v33,
        *(_DWORD *)this & 7,
        v81,
        *((struct VIDMM_MAPPED_VA_RANGE **)a3 + 2),
        v34,
        v35,
        a4,
        v25,
        v31,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v25),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        (unsigned int)a9,
        (unsigned __int64)v82,
        v36,
        v85,
        (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
      v38 = *((_QWORD *)a2 + 8);
      if ( (*(_BYTE *)(v38 + 40608) & 8) != 0 || (v39 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v38, v37, v83);
      }
      else if ( v39 == 1
             && *(struct CVirtualAddressAllocator **)(v38
                                                    + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                    + 40088) != a2 )
      {
        v75 = (__int64 **)(*((_QWORD *)this + 2) + 128LL);
        v76 = *v75;
        v77 = **v75;
        if ( (__int64 **)(*v75)[1] != v75 || *(__int64 **)(v77 + 8) != v76 )
          __fastfail(3u);
        *v75 = (__int64 *)v77;
        *(_QWORD *)(v77 + 8) = v75;
        v76[2] = *(_QWORD *)(v38 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4880);
        v78 = 456LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v38 + 40048) + 440LL;
        v79 = *(__int64 ***)(v78 + 8);
        *v76 = v78;
        v76[1] = (__int64)v79;
        if ( *v79 != (__int64 *)v78 )
          __fastfail(3u);
        *v79 = v76;
        *(_QWORD *)(v78 + 8) = v76;
      }
      goto LABEL_20;
    }
    v73 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v73 + 24) = 3339LL;
    WdLogEvent5_WdError(v73);
    v52 = -1073741823;
  }
  else
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v86, v25, v31);
    v52 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, a2, v25, v31, v85, (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
    if ( v52 >= 0 )
    {
LABEL_20:
      *(_DWORD *)this |= 0x10000u;
      return 0LL;
    }
  }
  v74 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v74 + 24) = 4059LL;
  WdLogEvent5_WdError(v74);
  return (unsigned int)v52;
}
