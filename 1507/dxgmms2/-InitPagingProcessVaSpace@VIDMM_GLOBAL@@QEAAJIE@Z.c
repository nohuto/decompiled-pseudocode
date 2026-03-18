/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C000EE78 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C003D084 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0053334 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C000ECEC (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C001D040 (VidSchSetPagingNodePageDirectory.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C005FE14 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C0060328 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060D6C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00633C4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(
        VIDMM_GLOBAL *this,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  VIDMM_GLOBAL *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rbx
  bool v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 *v17; // r15
  bool v18; // r14
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  unsigned int v52; // r13d
  unsigned __int64 v53; // rdx
  int v54; // ecx
  __int64 ***v55; // rax
  __int64 **v56; // r14
  __int64 *v57; // rbx
  __int64 v58; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // [rsp+68h] [rbp-61h]
  unsigned __int64 v65; // [rsp+70h] [rbp-59h] BYREF
  __int64 v66; // [rsp+78h] [rbp-51h]
  struct VIDMM_ALLOC *v67; // [rsp+80h] [rbp-49h] BYREF
  struct VIDMM_ALLOC *v68; // [rsp+88h] [rbp-41h] BYREF
  unsigned __int64 v69; // [rsp+90h] [rbp-39h] BYREF
  struct VIDMM_ALLOC *v70; // [rsp+98h] [rbp-31h] BYREF
  _DWORD v71[32]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v72; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v73; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int64 v74; // [rsp+148h] [rbp+7Fh]

  v4 = (unsigned int)a2;
  v5 = this;
  v6 = (unsigned int)a2;
  v7 = *((_QWORD *)this + 4999) + 456LL * (unsigned int)a2;
  v66 = v7;
  LOBYTE(this) = *(_BYTE *)(v7 + 420);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v5 + 3) + 1936LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v7 + 408) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C00272E0 - 1) > 0x3D )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 5726LL;
    goto LABEL_59;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v5 + 8LL) )
  {
    memset(v71, 0, 0x50uLL);
    v71[0] = 118;
    v71[1] = v4;
    v12 = VIDMM_GLOBAL::QueueSystemCommandAndWait(v5, (struct _VIDMM_SYSTEM_COMMAND *)v71, v9);
    if ( v12 < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
      *(_QWORD *)(v15 + 24) = 5741LL;
      WdLogEvent5_WdAssertion(v15);
      return (unsigned int)v12;
    }
    return 0LL;
  }
  *((_BYTE *)v5 + 40552) |= 8u;
  v17 = (unsigned __int64 *)*((_QWORD *)v5 + (unsigned int)a2 + 5004);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(
      *((CVirtualAddressAllocator **)v5 + (unsigned int)a2 + 5004),
      (unsigned int)a2,
      0);
  v18 = (*(_BYTE *)(v7 + 421) & 2) != 0;
  if ( *((_QWORD *)v5 + 5071) )
  {
LABEL_37:
    v74 = 0LL;
    v34 = operator new(0x78uLL, 0x35356956u, PagedPool);
    v35 = v34;
    if ( v34 )
    {
      v36 = *((_QWORD *)v5 + 5071);
      v37 = *((_QWORD *)v5 + 5070);
      *v34 = 0LL;
      v34[7] = 0LL;
      v38 = *((_DWORD *)v34 + 16);
      v35[9] = 0LL;
      v35[10] = 0LL;
      v35[11] = 0LL;
      v35[12] = v37;
      v35[13] = v36;
      *((_DWORD *)v35 + 16) = v38 & 0xFFFFE800 | (16 * (v4 & 0x3F));
      *((_DWORD *)v35 + 28) = 1;
      v35[1] = 0LL;
      v35[2] = 0LL;
      v35[3] = 0LL;
      v35[4] = 0LL;
      v35[5] = 0LL;
      v35[6] = 0LL;
    }
    else
    {
      v35 = 0LL;
    }
    v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            (CVirtualAddressAllocator *)v17,
            (struct VIDMM_MAPPED_VA_RANGE *)v35,
            v4,
            0xFFFFFFFF,
            0LL,
            0LL,
            0,
            &v70,
            0,
            1u);
    if ( v12 >= 0 )
    {
      if ( v18
        && (v35[12] = *((_QWORD *)v5 + 5072),
            v35[13] = *((_QWORD *)v5 + 5073),
            v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (CVirtualAddressAllocator *)v17,
                    (struct VIDMM_MAPPED_VA_RANGE *)v35,
                    v4,
                    0xFFFFFFFD,
                    0LL,
                    0LL,
                    0,
                    &v67,
                    0,
                    1u),
            v12 < 0) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
        *(_QWORD *)(v16 + 24) = 5896LL;
      }
      else
      {
        v12 = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                *(VIDMM_PAGE_DIRECTORY **)(32 * v6 + v17[12]),
                (struct CVirtualAddressAllocator *)v17);
        if ( v12 >= 0 )
        {
          v51 = *((unsigned int *)v5 + v6 + 29);
          v52 = 0;
          v53 = v51 >> 12;
          v74 = v53;
          do
          {
            v54 = 0;
            v55 = (__int64 ***)(*((_QWORD *)v5 + v4 + 79) + 96LL);
            v56 = *v55;
            while ( v56 != (__int64 **)v55 )
            {
              if ( v52 == v54 )
                goto LABEL_53;
              v56 = (__int64 **)*v56;
              ++v54;
            }
            v56 = 0LL;
LABEL_53:
            v57 = v56[8];
            if ( !v56[12] )
            {
              LOBYTE(v64) = 0;
              v56[12] = *(__int64 **)(CVirtualAddressAllocator::MapVirtualAddressRange(
                                        v17,
                                        v56,
                                        0LL,
                                        4LL,
                                        v53 << 12,
                                        0LL,
                                        *((_QWORD *)v5 + 5070),
                                        *((_QWORD *)v5 + 5071),
                                        4096,
                                        3LL,
                                        0LL,
                                        v4,
                                        0LL,
                                        v64)
                                    + 96);
            }
            v58 = v57[16];
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v56[7], 0LL);
            v12 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (CVirtualAddressAllocator *)v17,
                    (struct VIDMM_MAPPED_VA_RANGE *)(v58 - 24),
                    v4,
                    0,
                    0LL,
                    FullMDL,
                    0,
                    &v68,
                    0,
                    1u);
            if ( v12 < 0 )
            {
              v16 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
              *(_QWORD *)(v16 + 24) = 5969LL;
              goto LABEL_12;
            }
            v53 = v74;
            ++v52;
          }
          while ( v52 < 2 );
          CVirtualAddressAllocator::GetPageDirectoryData((CVirtualAddressAllocator *)v17, v4, &v69, &v72, &v73, &v65);
          VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)v5 + 2) + 384LL), v4, v72, v73, v65);
          *(_BYTE *)(v66 + 420) &= 0x9Fu;
          goto LABEL_13;
        }
        v16 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
        *(_QWORD *)(v16 + 24) = 5906LL;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
      *(_QWORD *)(v16 + 24) = 5876LL;
    }
LABEL_12:
    WdLogEvent5_WdAssertion(v16);
LABEL_13:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v35);
    *((_BYTE *)v5 + 40552) &= ~8u;
    return (unsigned int)v12;
  }
  v19 = *((_DWORD *)v5 + 926);
  v20 = 1LL << dword_1C00272E0;
  v21 = 0LL;
  if ( v19 )
  {
    a2 = (__int64 *)*((_QWORD *)v5 + 464);
    a3 = v19;
    do
    {
      a4 = *a2;
      if ( (*(_DWORD *)(*a2 + 56) & 0x1001) == 0 && *(_QWORD *)(a4 + 40) > v21 )
        v21 = *(_QWORD *)(a4 + 40);
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  v22 = v21 >> 2;
  if ( v20 >= v22 )
    v20 = v22;
  v23 = v20;
  if ( v18 )
  {
    v20 = (v20 + 0xFFFF) & 0xFFFF0000;
    v23 = 2 * v20;
  }
  if ( v23 <= *v17 )
  {
    v25 = (unsigned __int64 *)((char *)v5 + 40560);
    v28 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
            (CVirtualAddressAllocator *)v17,
            v23,
            a3,
            0LL,
            0LL,
            v18 ? 0x10000 : 4096,
            (unsigned __int64 *)v5 + 5070);
    if ( v28 < 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27, v26, v29, v30);
      *(_QWORD *)(v31 + 24) = v20;
      WdLogEvent5_WdAssertion(v31);
      *((_BYTE *)v5 + 40552) &= ~8u;
      return (unsigned int)v28;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v17, *v25);
    v32 = v20 + *v25;
    *((_QWORD *)v5 + 5071) = v32;
    if ( v18 )
    {
      *((_QWORD *)v5 + 5072) = v32;
      *((_QWORD *)v5 + 5073) = v32 + v20;
    }
    v33 = v20 >> 2;
    v6 = v4;
    if ( v33 > 0xFFFEFFFF )
      LODWORD(v33) = -65537;
    *((_DWORD *)v5 + 10148) = (v33 + 0xFFFF) & 0xFFFF0000;
    goto LABEL_37;
  }
  *((_BYTE *)v5 + 40552) &= ~8u;
  v24 = WdLogNewEntry5_WdAssertion(v22, a2, a3, a4);
  *(_QWORD *)(v24 + 24) = v23;
  *(_QWORD *)(v24 + 32) = 5813LL;
LABEL_59:
  WdLogEvent5_WdAssertion(v24);
  return 3221225485LL;
}
