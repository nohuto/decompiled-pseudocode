/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C006F124
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001DBA4 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006A524 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006F040 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0012C00 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C001305C (VidSchSetPagingNodePageDirectory.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0047BD4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00547B0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005D8CC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C006D2A8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C0071FDC (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0072050 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C00925FC (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  VIDMM_GLOBAL *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  unsigned __int64 *v13; // r15
  unsigned int v14; // eax
  char v15; // r14
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  bool v30; // r14
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // r13d
  unsigned __int64 v41; // rdx
  int v42; // ecx
  __int64 ***v43; // rax
  __int64 **v44; // r14
  __int64 *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h]
  unsigned __int64 i; // [rsp+80h] [rbp-80h]
  unsigned __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v57; // [rsp+90h] [rbp-70h] BYREF
  struct VIDMM_ALLOC *v58; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_ALLOC *v59; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v61[36]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v62; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v63; // [rsp+158h] [rbp+58h] BYREF
  __int64 v64; // [rsp+168h] [rbp+68h]

  v3 = a2;
  v4 = this;
  v5 = a2;
  v6 = *((_QWORD *)this + 5017) + 456LL * a2;
  v64 = v6;
  LOBYTE(this) = *(_BYTE *)(v6 + 420);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v4 + 3) + 2080LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v6 + 408) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C0035310 - 1) > 0x3D )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, v6);
    *(_QWORD *)(v23 + 24) = 7498LL;
    goto LABEL_64;
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*(_QWORD *)v4 + 8LL) )
  {
    memset(v61, 0, 0x58uLL);
    v61[0] = 118;
    v61[1] = v3;
    v11 = VIDMM_GLOBAL::QueueSystemCommandAndWait(v4, (struct _VIDMM_SYSTEM_COMMAND *)v61);
    if ( v11 < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v12 + 24) = 7513LL;
      WdLogEvent5_WdAssertion(v12);
      return (unsigned int)v11;
    }
    return 0LL;
  }
  *((_BYTE *)v4 + 40872) |= 8u;
  v13 = (unsigned __int64 *)*((_QWORD *)v4 + v3 + 5044);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v4 + v3 + 5044), v3, 0);
  if ( *((_QWORD *)v4 + 5111) )
  {
LABEL_36:
    v30 = (*(_BYTE *)(v64 + 421) & 2) != 0;
    v31 = VIDMM_MAPPED_VA_RANGE::operator new((unsigned __int64)CurrentThread);
    if ( v31 )
    {
      v32 = *((_QWORD *)v4 + 5110);
      v31[13] = *((_QWORD *)v4 + 5111);
      *((_DWORD *)v31 + 16) = 0;
      v31[12] = v32;
      LODWORD(v32) = v31[8] & 0xFFFFFC00;
      *v31 = 0LL;
      *((_DWORD *)v31 + 16) = v32 | (16 * (v3 & 0x3F));
      v31[7] = 0LL;
      v31[9] = 0LL;
      v31[10] = 0LL;
      v31[11] = 0LL;
      v31[14] = 0LL;
      v31[15] = 0LL;
      *((_DWORD *)v31 + 32) = 1;
      memset(v31 + 1, 0, 0x30uLL);
    }
    else
    {
      v31 = 0LL;
    }
    v11 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            (CVirtualAddressAllocator *)v13,
            (struct VIDMM_MAPPED_VA_RANGE *)v31,
            v3,
            -1,
            0LL,
            0LL,
            0,
            &v57);
    if ( v11 >= 0 )
    {
      if ( v30
        && (v31[12] = *((_QWORD *)v4 + 5112),
            v31[13] = *((_QWORD *)v4 + 5113),
            v11 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (CVirtualAddressAllocator *)v13,
                    (struct VIDMM_MAPPED_VA_RANGE *)v31,
                    v3,
                    -3,
                    0LL,
                    0LL,
                    0,
                    &v58),
            v11 < 0) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v34 + 24) = 7676LL;
      }
      else
      {
        v11 = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                *(VIDMM_PAGE_DIRECTORY **)(32 * v5 + v13[12]),
                (struct CVirtualAddressAllocator *)v13);
        if ( v11 >= 0 )
        {
          v39 = *((unsigned int *)v4 + v5 + 29);
          v40 = 0;
          v41 = v39 >> 12;
          for ( i = v41; ; v41 = i )
          {
            v42 = 0;
            v43 = (__int64 ***)(*((_QWORD *)v4 + v3 + 79) + 96LL);
            v44 = *v43;
            while ( v44 != (__int64 **)v43 )
            {
              if ( v40 == v42 )
                goto LABEL_52;
              v44 = (__int64 **)*v44;
              ++v42;
            }
            v44 = 0LL;
LABEL_52:
            v45 = v44[8];
            if ( !v44[12] )
            {
              LOBYTE(v54) = 0;
              LOBYTE(v53) = 0;
              v46 = CVirtualAddressAllocator::MapVirtualAddressRange(
                      v13,
                      v44,
                      0LL,
                      4LL,
                      v41 << 12,
                      0LL,
                      *((_QWORD *)v4 + 5110),
                      *((_QWORD *)v4 + 5111),
                      4096,
                      (*((_DWORD *)v4 + 8) < 0x6000u) | 2LL,
                      0LL,
                      v3,
                      0LL,
                      v53,
                      v54);
              if ( !v46 )
              {
                v11 = -1073741823;
                v34 = WdLogNewEntry5_WdAssertion(v48, v47);
                *(_QWORD *)(v34 + 24) = 7736LL;
                goto LABEL_61;
              }
              v44[12] = *(__int64 **)(v46 + 96);
            }
            v49 = v45[16];
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v44[7], 0LL);
            v11 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (CVirtualAddressAllocator *)v13,
                    (struct VIDMM_MAPPED_VA_RANGE *)(v49 - 24),
                    v3,
                    0,
                    0LL,
                    FullMDL,
                    0,
                    &v59);
            if ( v11 < 0 )
              break;
            if ( (unsigned int)++v40 >= 2 )
            {
              CVirtualAddressAllocator::GetPageDirectoryData(
                (CVirtualAddressAllocator *)v13,
                v3,
                &v60,
                &v62,
                &v63,
                &v56);
              VidSchSetPagingNodePageDirectory(*(_QWORD **)(*((_QWORD *)v4 + 2) + 384LL), v3, v62, v63, v56);
              *(_BYTE *)(v64 + 420) &= 0x9Fu;
              goto LABEL_62;
            }
          }
          v34 = WdLogNewEntry5_WdAssertion(v52, v51);
          *(_QWORD *)(v34 + 24) = 7756LL;
        }
        else
        {
          v34 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v34 + 24) = 7686LL;
        }
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdAssertion(0LL, v33);
      *(_QWORD *)(v34 + 24) = 7656LL;
    }
LABEL_61:
    WdLogEvent5_WdAssertion(v34);
LABEL_62:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v31);
    *((_BYTE *)v4 + 40872) &= ~8u;
    return (unsigned int)v11;
  }
  v14 = *((_DWORD *)v4 + 926);
  v15 = 0;
  v16 = 1LL << dword_1C0035310;
  v17 = 0LL;
  if ( v14 )
  {
    v6 = *((_QWORD *)v4 + 464);
    v18 = v14;
    do
    {
      a3 = *(_QWORD *)v6;
      if ( (*(_DWORD *)(*(_QWORD *)v6 + 56LL) & 0x1001) == 0 )
      {
        if ( *(_QWORD *)(a3 + 40) > v17 )
          v17 = *(_QWORD *)(a3 + 40);
        if ( *(_DWORD *)(a3 + 368) == 0x10000 )
          v15 = 1;
      }
      v6 += 8LL;
      --v18;
    }
    while ( v18 );
  }
  v19 = v17 >> 2;
  if ( v16 >= v19 )
    v16 = v19;
  v20 = v16;
  if ( v15 )
  {
    v21 = (*(_QWORD *)(*((_QWORD *)v4 + 5017) + 160LL) << 12) - 1LL;
    v22 = v21 + v16;
    v19 = ~v21;
    v16 = v19 & v22;
    v20 = 2 * v16;
  }
  if ( v20 <= *v13 )
  {
    v24 = (unsigned __int64 *)((char *)v4 + 40880);
    v27 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
            (struct _KTHREAD **)v13,
            v20,
            a3,
            0LL,
            0LL,
            v15 != 0 ? 0x10000 : 4096,
            (unsigned __int64 *)v4 + 5110);
    if ( v27 < 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v28 + 24) = v16;
      WdLogEvent5_WdAssertion(v28);
      *((_BYTE *)v4 + 40872) &= ~8u;
      return (unsigned int)v27;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v13, *v24);
    CurrentThread = (struct _KTHREAD *)(v16 + *v24);
    *((_QWORD *)v4 + 5111) = CurrentThread;
    if ( v15 )
    {
      *((_QWORD *)v4 + 5112) = CurrentThread;
      *((_QWORD *)v4 + 5113) = (char *)CurrentThread + v16;
    }
    v29 = v16 >> 2;
    v5 = v3;
    if ( v29 > 0xFFFEFFFF )
      LODWORD(v29) = -65537;
    *((_DWORD *)v4 + 10228) = (v29 + 0xFFFF) & 0xFFFF0000;
    goto LABEL_36;
  }
  *((_BYTE *)v4 + 40872) &= ~8u;
  v23 = WdLogNewEntry5_WdAssertion(v19, v6);
  *(_QWORD *)(v23 + 24) = v20;
  *(_QWORD *)(v23 + 32) = 7589LL;
LABEL_64:
  WdLogEvent5_WdAssertion(v23);
  return 3221225485LL;
}
