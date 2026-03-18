/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0044B54
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0059920 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0047BD4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004CFC8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0059CA8 (-RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0059D24 (-AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C005C6D0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D0EC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D228 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0072050 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0094AA4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        void *a6,
        unsigned __int64 *a7,
        unsigned int a8)
{
  char *v8; // rdi
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  char *v16; // rbp
  char *v17; // r12
  char *i; // rcx
  __int64 v19; // r10
  VIDMM_FENCE_STORAGE_PAGE *v20; // r11
  struct CVirtualAddressAllocator *v21; // rcx
  char v22; // r13
  int v23; // r14d
  char *PoolWithTag; // rax
  int v25; // esi
  bool v26; // bl
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  char **v30; // rcx
  char *v31; // rax
  unsigned int v32; // r12d
  unsigned int v33; // r14d
  struct _MDL **v34; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v35; // rax
  __int64 v36; // rcx
  VIDMM_MAPPED_VA_RANGE *v37; // r13
  __int64 v38; // rax
  int v39; // eax
  CVirtualAddressAllocator *v40; // rax
  char *v41; // rax
  __int64 v42; // rdx
  char **v43; // rcx
  int v44; // [rsp+68h] [rbp-60h]
  int v45; // [rsp+70h] [rbp-58h]
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+D8h] [rbp+10h]

  v8 = 0LL;
  *a7 = 0LL;
  if ( (*((_BYTE *)a2 + 40872) & 1) == 0 )
    return 0LL;
  v12 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v12 <= 1 )
  {
    v13 = 1;
  }
  else
  {
    v13 = a8;
    if ( a8 )
    {
      if ( (~((1 << v12) - 1) & a8) != 0 )
      {
        v14 = WdLogNewEntry5_WdWarning(v12);
        WdLogEvent5_WdWarning(v14);
        return 3221225485LL;
      }
    }
    else
    {
      v13 = (1 << v12) - 1;
    }
  }
  v16 = (char *)this + 48;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v16, 0LL);
  *((_QWORD *)v16 + 1) = KeGetCurrentThread();
  v17 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v17; i = *(char **)i )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)i - 4) && a2 == *((struct VIDMM_GLOBAL **)i - 3) )
    {
      ++*((_DWORD *)i + 4);
      v8 = i - 64;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a4,
                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 200LL),
                              0xFFFFFFFF);
  v21 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v22 = 1, *(_BYTE *)(v19 + 2083)) )
    v22 = 0;
  v23 = 0;
  if ( v8 )
  {
    v23 = *((_DWORD *)v8 + 21);
    *((_DWORD *)v8 + 21) = v13 | v23;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x68536956u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v25 = -1073741801;
      v26 = 0;
      goto LABEL_38;
    }
    memset(PoolWithTag, 0, 0x58uLL);
    v20 = this;
    *((_DWORD *)v8 + 20) = 1;
    *((_QWORD *)v8 + 4) = a4;
    *((_QWORD *)v8 + 5) = a2;
    *((_QWORD *)v8 + 1) = *((_QWORD *)this + 11);
    *((_QWORD *)v8 + 3) = this;
    *((_DWORD *)v8 + 21) = v13;
    if ( v22 )
    {
      v27 = *((_QWORD *)a2 + 3);
      a6 = 0LL;
      v25 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              0LL,
              *(_QWORD *)(v27 + 2008),
              *(_QWORD *)(v27 + 2016),
              0x1000u,
              (unsigned __int64 *)&a6);
      if ( v25 < 0 )
      {
LABEL_23:
        v29 = WdLogNewEntry5_WdWarning(v28);
        WdLogEvent5_WdWarning(v29);
        goto LABEL_37;
      }
      *(_QWORD *)v8 = a6;
      v8[16] = 1;
      VIDMM_PROCESS::OpenAdapter(a4, a2);
      VIDMM_GLOBAL::AddMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v8 + 3);
      v20 = this;
    }
    else
    {
      *(_QWORD *)v8 = *(_QWORD *)(*((_QWORD *)this + 11) + 48LL) << 12;
      v8[16] = 0;
    }
    v30 = (char **)*((_QWORD *)this + 5);
    v31 = v8 + 64;
    if ( *v30 != v17 )
      __fastfail(3u);
    *((_QWORD *)v8 + 9) = v30;
    *(_QWORD *)v31 = v17;
    *v30 = v31;
    v21 = VirtualAddressAllocator;
    *((_QWORD *)this + 5) = v31;
  }
  if ( !v22 || (v32 = 0, (v33 = *((_DWORD *)v8 + 21) & ~v23) == 0) )
  {
LABEL_48:
    *a7 = *(_QWORD *)v8 + *((unsigned int *)a5 + 4);
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v33 & 1) == 0 )
      goto LABEL_34;
    LOBYTE(v45) = 0;
    v34 = (struct _MDL **)((char *)v20 + 88);
    LOBYTE(v44) = 1;
    v35 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v21,
                                            (char *)v20 + 88,
                                            0LL,
                                            2LL,
                                            4096LL,
                                            *(_QWORD *)v8,
                                            0LL,
                                            0LL,
                                            4096,
                                            17LL,
                                            0LL,
                                            v32,
                                            0LL,
                                            v44,
                                            v45);
    v37 = v35;
    if ( !v35 )
      break;
    v25 = VIDMM_GLOBAL::CommitVirtualAddressRange(
            a2,
            VirtualAddressAllocator,
            (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 9) + 168LL * v32),
            v35,
            0,
            *v34,
            0LL,
            0LL);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v37, VirtualAddressAllocator);
    if ( v25 < 0 )
      goto LABEL_23;
LABEL_34:
    ++v32;
    v33 >>= 1;
    if ( !v33 )
      goto LABEL_48;
    v20 = this;
    v21 = VirtualAddressAllocator;
  }
  v38 = WdLogNewEntry5_WdWarning(v36);
  WdLogEvent5_WdWarning(v38);
  v25 = -1073741823;
LABEL_37:
  v39 = *((_DWORD *)v8 + 20);
  v26 = v39 == 1;
  *((_DWORD *)v8 + 20) = v39 - 1;
LABEL_38:
  *((_QWORD *)v16 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v16, 0LL);
  KeLeaveCriticalRegion();
  if ( v26 )
  {
    if ( v8[16] )
    {
      VIDMM_GLOBAL::RemoveMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v8 + 3);
      v40 = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 200LL), 0xFFFFFFFF);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v40, *(_QWORD *)v8);
      VIDMM_PROCESS::CloseAdapter(a4, a2);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    *((_QWORD *)v16 + 1) = KeGetCurrentThread();
    v41 = v8 + 64;
    if ( *((_QWORD *)v8 + 8) )
    {
      v42 = *(_QWORD *)v41;
      v43 = (char **)*((_QWORD *)v8 + 9);
      if ( *(char **)(*(_QWORD *)v41 + 8LL) != v41 || *v43 != v41 )
        __fastfail(3u);
      *v43 = (char *)v42;
      *(_QWORD *)(v42 + 8) = v43;
    }
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v25;
}
