/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093500 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093730 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093948 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0046974 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0046AA0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0046BC0 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0046DC8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C004B6A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C004D610 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C006D478 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0087D3C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C0090AF0 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00934B0 (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char *a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v10; // rdi
  unsigned __int64 v13; // r10
  char *v14; // rdx
  __int64 v15; // rax
  struct VIDMM_GLOBAL *v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // r12
  void *v22; // rax
  unsigned int v23; // r15d
  unsigned int v24; // r14d
  struct CVirtualAddressAllocator *v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // r9
  __int64 v37; // rsi
  unsigned int v38; // r10d
  __int64 v39; // r11
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // edx
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  int v52; // edi
  __int64 v53; // rdx
  __int64 v54; // rcx
  int updated; // esi
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // edi
  __int64 v59; // rax
  unsigned int v60; // r15d
  unsigned int v61; // esi
  __int64 v62; // rcx
  int v63; // edi
  __int64 v64; // rax
  unsigned int v65; // edi
  unsigned int v66; // edi
  struct _DXGK_UPDATEPAGETABLEFLAGS v67; // r12d
  __int64 v68; // rcx
  int v69; // edi
  __int64 v70; // rax
  int v71; // r15d
  struct _VIDMM_GLOBAL_ALLOC ***v72; // rdi
  VIDMM_GLOBAL *v73; // r12
  VIDMM_PAGE_TABLE_BASE *v74; // rcx
  __int64 v75; // rax
  int v76; // edi
  struct VIDMM_ALLOC *v77; // r11
  struct _VIDMM_GLOBAL_ALLOC *v78; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v79; // ecx
  void *v80; // rdi
  __int64 v81; // r10
  int v82; // ecx
  __int64 **v83; // rax
  __int64 *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 **v87; // rax
  __int64 v88; // rax
  struct VIDMM_GLOBAL *v89; // [rsp+90h] [rbp-48h]
  unsigned __int64 v90; // [rsp+98h] [rbp-40h]
  void *v91; // [rsp+A0h] [rbp-38h] BYREF
  struct _DXGK_UPDATEPAGETABLEFLAGS v93; // [rsp+100h] [rbp+28h]
  int v94; // [rsp+100h] [rbp+28h]

  v10 = a9;
  v13 = a5 >> 12;
  v14 = &a6[a5 >> 12];
  *a9 = 0LL;
  if ( (unsigned __int64)v14 <= a5 >> 12 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, v14);
    *(_QWORD *)(v15 + 24) = 4811LL;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  v17 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  v18 = *(unsigned int *)this;
  a7 >>= 12;
  v19 = v18 & 7;
  v20 = 0;
  v89 = v17;
  v21 = *((_QWORD *)v17 + 5017) + 456 * ((v18 >> 7) & 0x1F);
  v93 = 0;
  v22 = *(void **)(v21 + 48 * v19 + 112);
  v23 = *(_DWORD *)(v21 + 56) & ((_DWORD)v14 - 1);
  v90 = v13 & ~*(_QWORD *)(v21 + 48 * v19 + 104);
  v24 = v13 & *(_DWORD *)(v21 + 56);
  a6 = (char *)(v90 & ~*(_QWORD *)(v21 + 48 * v19 + 88));
  v91 = v22;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    v28 = VIDMM_PAGE_TABLE::EnsureResident(this, a2, v26, v10);
    if ( v28 < 0 )
    {
LABEL_5:
      v29 = WdLogNewEntry5_WdWarning(v27);
      WdLogEvent5_WdWarning(v29);
      return (unsigned int)v28;
    }
  }
  else
  {
    v30 = *((_QWORD *)this + 1);
    if ( !v30 || !*(_QWORD *)(v30 + 136) )
    {
      v28 = VIDMM_PAGE_TABLE::CommitPageTable(this, a2, v10);
      if ( v28 < 0 )
        goto LABEL_5;
      *(_DWORD *)this &= ~0x10000u;
    }
  }
  v31 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) != 0 )
  {
    LOBYTE(a9) = a8;
  }
  else
  {
    v20 = 2;
    LOBYTE(a9) = 1;
    v93 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
  }
  if ( !*((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
    {
      if ( !*((_DWORD *)this + 1) )
        *(_DWORD *)this = v31 | 0x40;
    }
    else
    {
      if ( (v31 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 60) )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
            *((VIDMM_PROCESS **)a2 + 9),
            *(_DWORD *)(*((_QWORD *)v89 + 3) + 200LL),
            1);
          *((_BYTE *)a3 + 60) = 1;
        }
        v32 = *(_DWORD *)(v21 + 64);
        v33 = 16 * (v32 - 1);
        v34 = v32 - 1;
        v35 = v34;
        if ( v34 >= 0 )
        {
          v36 = 16LL * v34;
          do
          {
            if ( (*(_BYTE *)(v36 + *((_QWORD *)this + 3)) & 1) != 0 )
            {
              v37 = 4LL;
              v38 = v33 + 1;
              v39 = 2LL;
              do
              {
                v40 = *((_QWORD *)this + 3);
                v41 = 2LL * (v38 - 1);
                *(_OWORD *)(v40 + 8 * v41) = *(_OWORD *)(v36 + v40);
                *(_QWORD *)(v40 + 8 * v41 + 8) += v39 - 2;
                v42 = *((_QWORD *)this + 3);
                v43 = 2LL * (v38 + 1);
                v44 = v42 + 16LL * v38;
                *(_OWORD *)v44 = *(_OWORD *)(v36 + v42);
                *(_QWORD *)(v44 + 8) += v39 - 1;
                v45 = v39 + 1;
                v46 = *((_QWORD *)this + 3);
                *(_OWORD *)(v46 + 8 * v43) = *(_OWORD *)(v36 + v46);
                *(_QWORD *)(v46 + 8 * v43 + 8) += v39;
                v47 = *((_QWORD *)this + 3);
                v48 = 2LL * (v38 + 2);
                v38 += 4;
                v39 += 4LL;
                *(_OWORD *)(v47 + 8 * v48) = *(_OWORD *)(v36 + v47);
                *(_QWORD *)(v47 + 8 * v48 + 8) += v45;
                --v37;
              }
              while ( v37 );
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              v49 = 0;
              do
              {
                v50 = 16LL * (v49 + v33);
                ++v49;
                v51 = (_QWORD *)(*((_QWORD *)this + 3) + v50);
                *v51 = 0LL;
                v51[1] = 0LL;
              }
              while ( v49 < 0x10 );
            }
            v33 -= 16;
            v36 -= 16LL;
            --v35;
          }
          while ( v35 >= 0 );
        }
        v52 = 0;
        if ( (**(_DWORD **)(v21 + 424) & 8) != 0 )
        {
          updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                      this,
                      a2,
                      0,
                      *(_DWORD *)(v21 + 64),
                      (unsigned __int64)a6,
                      (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( updated < 0 )
          {
            v56 = WdLogNewEntry5_WdAssertion(v54, v53);
            *(_QWORD *)(v56 + 24) = 4943LL;
            WdLogEvent5_WdAssertion(v56);
            return (unsigned int)updated;
          }
          v52 = 2;
        }
        v58 = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, a3, 0LL, 0LL, 0, 0, *(_DWORD *)(v21 + 60), a6, v52);
        if ( v58 < 0 )
        {
          v59 = WdLogNewEntry5_WdAssertion(v57, v25);
          *(_QWORD *)(v59 + 24) = 4961LL;
          WdLogEvent5_WdAssertion(v59);
          return (unsigned int)v58;
        }
        v20 = (int)v93;
      }
      *(_DWORD *)this &= ~0x40u;
    }
  }
  v94 = ((unsigned __int8)v20 ^ (unsigned __int8)(8 * (((*(_DWORD *)this >> 6) & 1) != 0))) & 8 ^ v20;
  if ( ((*(_DWORD *)this >> 6) & 1) != 0 )
  {
    v90 &= 0xFFFFFFFFFFFFFFF0uLL;
    v24 >>= 4;
    v23 >>= 4;
    v91 = (void *)(16LL * (_QWORD)v91);
  }
  v60 = v23 + 1;
  v61 = v60 - v24;
  if ( !(_BYTE)a9 )
    goto LABEL_50;
  if ( v24 )
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v89, 0, v24);
    v63 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
            this,
            a2,
            0,
            v24,
            (unsigned __int64)a6,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v94);
    if ( v63 < 0 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v62, v25);
      *(_QWORD *)(v64 + 24) = 5003LL;
      WdLogEvent5_WdAssertion(v64);
      return (unsigned int)v63;
    }
  }
  v65 = (*(_DWORD *)this & 0x40) != 0 ? *(_DWORD *)(v21 + 64) : *(_DWORD *)(v21 + 60);
  if ( v60 < v65 )
  {
    v66 = v65 - v60;
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v89, v60, v66);
    v67 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v94;
    v69 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
            this,
            a2,
            v60,
            v66,
            (unsigned __int64)&a6[(_QWORD)v91 * v60],
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v94);
    if ( v69 < 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v68, v25);
      *(_QWORD *)(v70 + 24) = 5020LL;
      WdLogEvent5_WdAssertion(v70);
      return (unsigned int)v69;
    }
  }
  else
  {
LABEL_50:
    v67 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v94;
  }
  if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v25, a3, v24, v60 - v24, a7);
    v71 = *((_DWORD *)a3 + 12);
    v72 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a3 + 5);
    v73 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(v74, a2, (unsigned int *)&a9, (unsigned __int64 *)&a6, &v91) < 0 )
    {
      v75 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v75 + 24) = 4256LL;
      WdLogEvent5_WdError(v75);
      v76 = -1073741823;
LABEL_75:
      v88 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v88 + 24) = 5060LL;
      WdLogEvent5_WdError(v88);
      return (unsigned int)v76;
    }
    v77 = 0LL;
    if ( v71 == 1 )
    {
      v77 = (struct VIDMM_ALLOC *)v72;
      v78 = **v72;
    }
    else
    {
      v78 = 0LL;
      if ( v71 == 3 )
        v78 = (struct _VIDMM_GLOBAL_ALLOC *)v72;
    }
    if ( (*((_BYTE *)v73 + 40872) & 8) != 0 )
      v79 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v79 = (int)(*(_DWORD *)this << 16) >> 29;
    v80 = a6;
    VIDMM_GLOBAL::UpdatePageTable(
      v73,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)a2 + 9),
      *((_QWORD *)a3 + 2),
      v77,
      v78,
      a4,
      v24,
      v61,
      (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v24),
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      (unsigned int)a9,
      (unsigned __int64)a6,
      v79,
      v90,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)v94,
      *((_QWORD *)a3 + 8));
    v81 = *((_QWORD *)a2 + 8);
    if ( (*(_BYTE *)(v81 + 40872) & 8) != 0 || (v82 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
    {
      VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, *((struct VIDMM_GLOBAL **)a2 + 8), v80, v91);
    }
    else if ( v82 == 1
           && *(struct CVirtualAddressAllocator **)(v81
                                                  + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                  + 40352) != a2 )
    {
      v83 = (__int64 **)(*((_QWORD *)this + 2) + 128LL);
      v84 = *v83;
      v85 = **v83;
      if ( (__int64 **)(*v83)[1] != v83 || *(__int64 **)(v85 + 8) != v84 )
        __fastfail(3u);
      *v83 = (__int64 *)v85;
      *(_QWORD *)(v85 + 8) = v83;
      v84[2] = *(_QWORD *)(v81 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4880);
      v86 = 456LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v81 + 40136) + 440LL;
      v87 = *(__int64 ***)(v86 + 8);
      if ( *v87 != (__int64 *)v86 )
        __fastfail(3u);
      *v84 = v86;
      v84[1] = (__int64)v87;
      *v87 = v84;
      *(_QWORD *)(v86 + 8) = v84;
    }
  }
  else
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v89, v24, v61);
    v76 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, a2, v24, v61, v90, v67);
    if ( v76 < 0 )
      goto LABEL_75;
  }
  *(_DWORD *)this |= 0x10000u;
  return 0LL;
}
