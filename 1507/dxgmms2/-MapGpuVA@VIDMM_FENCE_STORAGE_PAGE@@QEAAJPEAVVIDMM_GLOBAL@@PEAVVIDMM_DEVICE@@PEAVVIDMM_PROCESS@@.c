/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C00319FC
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C00316B8 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00317CC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00364D8 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004BFD8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005AE84 (-AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005AFE4 (-RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C005FE14 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062E54 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00633C4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
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
  char v9; // si
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // rax
  char *v16; // r14
  char *v17; // rdi
  char *v18; // r12
  char *i; // rcx
  __int64 v20; // r10
  VIDMM_FENCE_STORAGE_PAGE *v21; // r11
  struct CVirtualAddressAllocator *v22; // rcx
  int v23; // r15d
  char *PoolWithTag; // rax
  int v25; // r12d
  VIDMM_PROCESS *v26; // rax
  __int64 v27; // rax
  char v28; // bp
  __int64 v29; // rax
  int v30; // eax
  VIDMM_PROCESS *v31; // rcx
  char **v32; // rcx
  char *v33; // rax
  int v34; // eax
  unsigned int v35; // ebp
  unsigned int v36; // r15d
  VIDMM_MAPPED_VA_RANGE *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  CVirtualAddressAllocator *v45; // rax
  char *v46; // rax
  __int64 v47; // rdx
  char **v48; // rcx
  int v49; // [rsp+68h] [rbp-60h]
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+70h] [rbp-58h]
  VIDMM_MAPPED_VA_RANGE *v52; // [rsp+D8h] [rbp+10h] BYREF
  struct VIDMM_DEVICE *v53; // [rsp+E0h] [rbp+18h]
  VIDMM_PROCESS *v54; // [rsp+E8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v9 = 1;
  *a7 = 0LL;
  if ( (*((_BYTE *)a2 + 40552) & 1) == 0 )
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
        v14 = WdLogNewEntry5_WdWarning(v12, this, a3);
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
  LODWORD(a6) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v16, 0LL);
  v17 = 0LL;
  *((_QWORD *)v16 + 1) = KeGetCurrentThread();
  v18 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v18; i = *(char **)i )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)i - 4) && a2 == *((struct VIDMM_GLOBAL **)i - 3) )
    {
      ++*((_DWORD *)i + 4);
      v17 = i - 64;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a4,
                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 184LL),
                              0xFFFFFFFF);
  v22 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (LOBYTE(v52) = 1, *(_BYTE *)(v20 + 1939)) )
    LOBYTE(v52) = 0;
  v23 = 0;
  if ( v17 )
  {
    v23 = *((_DWORD *)v17 + 21);
    v34 = v13 | v23;
    v28 = (char)v52;
    *((_DWORD *)v17 + 21) = v34;
LABEL_28:
    if ( v28 )
    {
      v35 = 0;
      v36 = *((_DWORD *)v17 + 21) & ~v23;
      if ( v36 )
      {
        while ( 1 )
        {
          if ( (v36 & 1) != 0 )
          {
            LOBYTE(v49) = 1;
            v37 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                             v22,
                                             v21,
                                             0LL,
                                             2LL,
                                             4096LL,
                                             *(_QWORD *)v17,
                                             0LL,
                                             0LL,
                                             4096,
                                             17LL,
                                             0LL,
                                             v35,
                                             0LL,
                                             v49);
            v52 = v37;
            if ( !v37 )
            {
              v44 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              WdLogEvent5_WdWarning(v44);
              v25 = (int)a6;
              goto LABEL_38;
            }
            v25 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                    a2,
                    VirtualAddressAllocator,
                    (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)v53 + 8) + 152LL * v35),
                    v37,
                    0,
                    *((struct _MDL **)this + 11),
                    0LL,
                    0LL);
            LODWORD(a6) = v25;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v52, VirtualAddressAllocator);
            if ( v25 < 0 )
            {
              v43 = WdLogNewEntry5_WdWarning(v42, v41, 0LL);
              WdLogEvent5_WdWarning(v43);
              goto LABEL_38;
            }
          }
          ++v35;
          v36 >>= 1;
          if ( !v36 )
            break;
          v21 = this;
          v22 = VirtualAddressAllocator;
        }
      }
    }
    *a7 = *(_QWORD *)v17 + *((unsigned int *)a5 + 4);
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x68536956u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x58uLL);
    v21 = this;
    v26 = v54;
    *((_DWORD *)v17 + 20) = 1;
    *((_QWORD *)v17 + 4) = v26;
    *((_QWORD *)v17 + 5) = a2;
    v27 = *((_QWORD *)this + 11);
    *((_DWORD *)v17 + 21) = v13;
    v28 = (char)v52;
    *((_QWORD *)v17 + 1) = v27;
    *((_QWORD *)v17 + 3) = this;
    if ( v28 )
    {
      v29 = *((_QWORD *)a2 + 3);
      v52 = 0LL;
      v30 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              0LL,
              *(_QWORD *)(v29 + 1864),
              *(_QWORD *)(v29 + 1872),
              0x1000u,
              (unsigned __int64 *)&v52);
      if ( v30 < 0 )
      {
        v25 = v30;
LABEL_38:
        if ( *((_DWORD *)v17 + 20) == 1 )
          goto LABEL_40;
        goto LABEL_39;
      }
      v31 = v54;
      *(_QWORD *)v17 = v52;
      v17[16] = 1;
      LODWORD(a6) = VIDMM_PROCESS::OpenAdapter(v31, a2);
      VIDMM_GLOBAL::AddMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v17 + 3);
      v21 = this;
    }
    else
    {
      *(_QWORD *)v17 = *(_QWORD *)(*((_QWORD *)this + 11) + 48LL) << 12;
      v17[16] = 0;
    }
    v32 = (char **)*((_QWORD *)this + 5);
    v33 = v17 + 64;
    *((_QWORD *)v17 + 8) = v18;
    *((_QWORD *)v17 + 9) = v32;
    if ( *v32 != v18 )
      __fastfail(3u);
    *v32 = v33;
    v22 = VirtualAddressAllocator;
    *((_QWORD *)this + 5) = v33;
    goto LABEL_28;
  }
  v25 = -1073741801;
LABEL_39:
  v9 = 0;
LABEL_40:
  *((_QWORD *)v16 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v16, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    if ( v17[16] )
    {
      VIDMM_GLOBAL::RemoveMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v17 + 3);
      v45 = VIDMM_PROCESS::GetVirtualAddressAllocator(v54, *(_DWORD *)(*((_QWORD *)a2 + 3) + 184LL), 0xFFFFFFFF);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v45, *(_QWORD *)v17);
      VIDMM_PROCESS::CloseAdapter(v54, a2);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    *((_QWORD *)v16 + 1) = KeGetCurrentThread();
    v46 = v17 + 64;
    if ( *((_QWORD *)v17 + 8) )
    {
      v47 = *(_QWORD *)v46;
      v48 = (char **)*((_QWORD *)v17 + 9);
      if ( *(char **)(*(_QWORD *)v46 + 8LL) != v46 || *v48 != v46 )
        __fastfail(3u);
      *v48 = (char *)v47;
      *(_QWORD *)(v47 + 8) = v48;
    }
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v17, 0);
  }
  return (unsigned int)v25;
}
