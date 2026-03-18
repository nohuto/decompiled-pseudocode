/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001CA6C (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0063030 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00697A4 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0014E18 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00151BC (VidSchSetPagingNodePageDirectory.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0041838 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0066F14 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0067AF4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C006A1F4 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C006A268 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  VIDMM_GLOBAL *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  bool v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 *v16; // r15
  unsigned int v17; // eax
  char v18; // r14
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  bool v35; // r14
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  int v55; // r12d
  unsigned __int64 v56; // rdx
  int v57; // ecx
  __int64 *v58; // rax
  __int64 v59; // r14
  __int64 v60; // rbx
  VIDMM_MAPPED_VA_RANGE *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned __int64 i; // [rsp+70h] [rbp-59h]
  unsigned __int64 v73; // [rsp+78h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v74; // [rsp+80h] [rbp-49h] BYREF
  struct VIDMM_ALLOC *v75; // [rsp+88h] [rbp-41h] BYREF
  unsigned __int64 v76; // [rsp+90h] [rbp-39h] BYREF
  struct VIDMM_ALLOC *v77; // [rsp+98h] [rbp-31h] BYREF
  _DWORD v78[32]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v79; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v80; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v81; // [rsp+148h] [rbp+7Fh]

  v4 = a2;
  v5 = this;
  v6 = a2;
  v7 = *((_QWORD *)this + 5006) + 456LL * a2;
  v81 = v7;
  LOBYTE(this) = *(_BYTE *)(v7 + 420);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v5 + 3) + 1944LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v7 + 408) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C002F300 - 1) > 0x3D )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, v7, a3, a4);
    *(_QWORD *)(v25 + 24) = 5754LL;
    goto LABEL_64;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v5 + 8LL) )
  {
    memset(v78, 0, 0x50uLL);
    v78[0] = 118;
    v78[1] = v4;
    v12 = VIDMM_GLOBAL::QueueSystemCommandAndWait(v5, (struct _VIDMM_SYSTEM_COMMAND *)v78, v9);
    if ( v12 < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
      *(_QWORD *)(v15 + 24) = 5769LL;
      WdLogEvent5_WdAssertion(v15);
      return (unsigned int)v12;
    }
    return 0LL;
  }
  *((_BYTE *)v5 + 40608) |= 8u;
  v16 = (unsigned __int64 *)*((_QWORD *)v5 + v4 + 5011);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v5 + v4 + 5011), v4, 0);
  if ( *((_QWORD *)v5 + 5078) )
  {
LABEL_36:
    v35 = (*(_BYTE *)(v81 + 421) & 2) != 0;
    v36 = operator new(0x78uLL, 0x35356956u, PagedPool);
    v37 = v36;
    if ( v36 )
    {
      v38 = *((_QWORD *)v5 + 5078);
      v39 = *((_QWORD *)v5 + 5077);
      *v36 = 0LL;
      v36[7] = 0LL;
      v40 = *((_DWORD *)v36 + 16);
      v37[9] = 0LL;
      v37[10] = 0LL;
      v37[11] = 0LL;
      v37[12] = v39;
      v37[13] = v38;
      *((_DWORD *)v37 + 16) = v40 & 0xFFFFE000 | (16 * (v4 & 0x3F));
      *((_DWORD *)v37 + 28) = 1;
      v37[1] = 0LL;
      v37[2] = 0LL;
      v37[3] = 0LL;
      v37[4] = 0LL;
      v37[5] = 0LL;
      v37[6] = 0LL;
    }
    else
    {
      v37 = 0LL;
    }
    v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            (CVirtualAddressAllocator *)v16,
            (struct VIDMM_MAPPED_VA_RANGE *)v37,
            (unsigned int)v4,
            -1,
            0LL,
            0LL,
            0,
            &v77,
            0);
    if ( v12 >= 0 )
    {
      if ( v35
        && (v37[12] = *((_QWORD *)v5 + 5079),
            v37[13] = *((_QWORD *)v5 + 5080),
            v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (CVirtualAddressAllocator *)v16,
                    (struct VIDMM_MAPPED_VA_RANGE *)v37,
                    (unsigned int)v4,
                    -3,
                    0LL,
                    0LL,
                    0,
                    &v74,
                    0),
            v12 < 0) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
        *(_QWORD *)(v45 + 24) = 5930LL;
      }
      else
      {
        v12 = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                *(VIDMM_PAGE_DIRECTORY **)(32 * v6 + v16[12]),
                (struct CVirtualAddressAllocator *)v16);
        if ( v12 >= 0 )
        {
          v54 = *((unsigned int *)v5 + v6 + 29);
          v55 = 0;
          v56 = v54 >> 12;
          for ( i = v56; ; v56 = i )
          {
            v57 = 0;
            v58 = (__int64 *)(*((_QWORD *)v5 + v4 + 79) + 96LL);
            v59 = *v58;
            while ( (__int64 *)v59 != v58 )
            {
              if ( v55 == v57 )
                goto LABEL_52;
              v59 = *(_QWORD *)v59;
              ++v57;
            }
            v59 = 0LL;
LABEL_52:
            v60 = *(_QWORD *)(v59 + 64);
            if ( !*(_QWORD *)(v59 + 96) )
            {
              v61 = CVirtualAddressAllocator::MapVirtualAddressRange(
                      (__int64)v16,
                      v59,
                      0LL,
                      4LL,
                      v56 << 12,
                      0LL,
                      *((_QWORD *)v5 + 5077),
                      *((_QWORD *)v5 + 5078),
                      0x1000u,
                      3LL,
                      0LL,
                      v4,
                      0LL);
              if ( !v61 )
              {
                v12 = -1073741823;
                v45 = WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
                *(_QWORD *)(v45 + 24) = 5984LL;
                goto LABEL_61;
              }
              *(_QWORD *)(v59 + 96) = *((_QWORD *)v61 + 12);
            }
            v66 = *(_QWORD *)(v60 + 128);
            FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v59 + 56), 0LL);
            v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (CVirtualAddressAllocator *)v16,
                    (struct VIDMM_MAPPED_VA_RANGE *)(v66 - 24),
                    (unsigned int)v4,
                    0,
                    0LL,
                    FullMDL,
                    0,
                    &v75,
                    0);
            if ( v12 < 0 )
              break;
            if ( (unsigned int)++v55 >= 2 )
            {
              CVirtualAddressAllocator::GetPageDirectoryData(
                (CVirtualAddressAllocator *)v16,
                v4,
                &v76,
                &v79,
                &v80,
                &v73);
              VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)v5 + 2) + 408LL), v4, v79, v80, v73);
              *(_BYTE *)(v81 + 420) &= 0x9Fu;
              goto LABEL_62;
            }
          }
          v45 = WdLogNewEntry5_WdAssertion(v69, v68, v70, v71);
          *(_QWORD *)(v45 + 24) = 6004LL;
        }
        else
        {
          v45 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
          *(_QWORD *)(v45 + 24) = 5940LL;
        }
      }
    }
    else
    {
      v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
      *(_QWORD *)(v45 + 24) = 5910LL;
    }
LABEL_61:
    WdLogEvent5_WdAssertion(v45);
LABEL_62:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v37);
    *((_BYTE *)v5 + 40608) &= ~8u;
    return (unsigned int)v12;
  }
  v17 = *((_DWORD *)v5 + 926);
  v18 = 0;
  v19 = 1LL << dword_1C002F300;
  v20 = 0LL;
  if ( v17 )
  {
    v7 = *((_QWORD *)v5 + 464);
    a4 = v17;
    do
    {
      a3 = *(_QWORD *)v7;
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x1001) == 0 )
      {
        if ( *(_QWORD *)(a3 + 40) > v20 )
          v20 = *(_QWORD *)(a3 + 40);
        if ( *(_DWORD *)(a3 + 368) == 0x10000 )
          v18 = 1;
      }
      v7 += 8LL;
      --a4;
    }
    while ( a4 );
  }
  v21 = v20 >> 2;
  if ( v19 >= v21 )
    v19 = v21;
  v22 = v19;
  if ( v18 )
  {
    v23 = (*(_QWORD *)(*((_QWORD *)v5 + 5006) + 160LL) << 12) - 1LL;
    v24 = v23 + v19;
    v21 = ~v23;
    v19 = v21 & v24;
    v22 = 2 * v19;
  }
  if ( v22 <= *v16 )
  {
    v26 = (unsigned __int64 *)((char *)v5 + 40616);
    v29 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
            (struct _KTHREAD **)v16,
            v22,
            a3,
            0LL,
            0LL,
            v18 != 0 ? 0x10000 : 4096,
            (unsigned __int64 *)v5 + 5077);
    if ( v29 < 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v28, v27, v30, v31);
      *(_QWORD *)(v32 + 24) = v19;
      WdLogEvent5_WdAssertion(v32);
      *((_BYTE *)v5 + 40608) &= ~8u;
      return (unsigned int)v29;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v16, *v26);
    v33 = v19 + *v26;
    *((_QWORD *)v5 + 5078) = v33;
    if ( v18 )
    {
      *((_QWORD *)v5 + 5079) = v33;
      *((_QWORD *)v5 + 5080) = v33 + v19;
    }
    v34 = v19 >> 2;
    v6 = v4;
    if ( v34 > 0xFFFEFFFF )
      LODWORD(v34) = -65537;
    *((_DWORD *)v5 + 10162) = (v34 + 0xFFFF) & 0xFFFF0000;
    goto LABEL_36;
  }
  *((_BYTE *)v5 + 40608) &= ~8u;
  v25 = WdLogNewEntry5_WdAssertion(v21, v7, a3, a4);
  *(_QWORD *)(v25 + 24) = v22;
  *(_QWORD *)(v25 + 32) = 5845LL;
LABEL_64:
  WdLogEvent5_WdAssertion(v25);
  return 3221225485LL;
}
