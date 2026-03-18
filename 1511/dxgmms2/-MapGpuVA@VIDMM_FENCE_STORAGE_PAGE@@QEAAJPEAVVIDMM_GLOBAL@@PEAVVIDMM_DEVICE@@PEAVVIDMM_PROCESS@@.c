/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C003BE68
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C005259C (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0041838 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0044208 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0052924 (-RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00529A0 (-AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0053EE4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0054070 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C006A268 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
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
  char *v14; // r14
  char *v15; // rdi
  char *v16; // r12
  char *i; // rcx
  __int64 v18; // r10
  VIDMM_FENCE_STORAGE_PAGE *v19; // r11
  struct CVirtualAddressAllocator *v20; // rcx
  int v21; // r15d
  int v22; // eax
  char v23; // bp
  unsigned int v24; // ebp
  unsigned int v25; // r15d
  char *PoolWithTag; // rax
  VIDMM_PROCESS *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  VIDMM_PROCESS *v32; // rcx
  char **v33; // rcx
  char *v34; // rax
  struct VIDMM_MAPPED_VA_RANGE *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // r12d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  CVirtualAddressAllocator *v42; // rax
  char *v43; // rax
  __int64 v44; // rdx
  char **v45; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+70h] [rbp-58h]
  unsigned __int64 v48; // [rsp+D8h] [rbp+10h] BYREF
  struct VIDMM_DEVICE *v49; // [rsp+E0h] [rbp+18h]
  VIDMM_PROCESS *v50; // [rsp+E8h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  v9 = 1;
  *a7 = 0LL;
  if ( (*((_BYTE *)a2 + 40608) & 1) == 0 )
    return 0LL;
  v12 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v12 > 1 )
  {
    v13 = a8;
    if ( a8 )
    {
      if ( (~((1 << v12) - 1) & a8) != 0 )
      {
        v39 = WdLogNewEntry5_WdWarning(v12);
        WdLogEvent5_WdWarning(v39);
        return 3221225485LL;
      }
    }
    else
    {
      v13 = (1 << v12) - 1;
    }
  }
  else
  {
    v13 = 1;
  }
  v14 = (char *)this + 48;
  LODWORD(a6) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v14, 0LL);
  v15 = 0LL;
  *((_QWORD *)v14 + 1) = KeGetCurrentThread();
  v16 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v16; i = *(char **)i )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)i - 4) && a2 == *((struct VIDMM_GLOBAL **)i - 3) )
    {
      ++*((_DWORD *)i + 4);
      v15 = i - 64;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a4,
                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 184LL),
                              0xFFFFFFFF);
  v20 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (LOBYTE(v48) = 1, *(_BYTE *)(v18 + 1947)) )
    LOBYTE(v48) = 0;
  v21 = 0;
  if ( v15 )
  {
    v21 = *((_DWORD *)v15 + 21);
    v22 = v13 | v21;
    v23 = v48;
    *((_DWORD *)v15 + 21) = v22;
LABEL_13:
    if ( v23 )
    {
      v24 = 0;
      v25 = *((_DWORD *)v15 + 21) & ~v21;
      if ( v25 )
      {
        while ( 1 )
        {
          if ( (v25 & 1) != 0 )
          {
            v35 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                                    v20,
                                                    v19,
                                                    0LL,
                                                    2LL,
                                                    4096LL,
                                                    *(_QWORD *)v15,
                                                    0LL,
                                                    0LL,
                                                    4096,
                                                    17LL,
                                                    0LL,
                                                    v24,
                                                    0LL);
            if ( !v35 )
            {
              v41 = WdLogNewEntry5_WdWarning(v36);
              WdLogEvent5_WdWarning(v41);
              v38 = (unsigned int)a6;
              goto LABEL_40;
            }
            LODWORD(a6) = VIDMM_GLOBAL::CommitVirtualAddressRange(
                            a2,
                            VirtualAddressAllocator,
                            (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)v49 + 8) + 160LL * v24),
                            v35,
                            0,
                            *((struct _MDL **)this + 11),
                            0LL,
                            0LL);
            v38 = (unsigned int)a6;
            if ( (int)a6 < 0 )
            {
              v40 = WdLogNewEntry5_WdWarning(v37);
              WdLogEvent5_WdWarning(v40);
              goto LABEL_40;
            }
          }
          ++v24;
          v25 >>= 1;
          if ( !v25 )
            break;
          v19 = this;
          v20 = VirtualAddressAllocator;
        }
      }
    }
    *a7 = *(_QWORD *)v15 + *((unsigned int *)a5 + 4);
    *((_QWORD *)v14 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x68536956u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x58uLL);
    v19 = this;
    v28 = v50;
    *((_DWORD *)v15 + 20) = 1;
    *((_QWORD *)v15 + 4) = v28;
    *((_QWORD *)v15 + 5) = a2;
    v29 = *((_QWORD *)this + 11);
    *((_DWORD *)v15 + 21) = v13;
    v23 = v48;
    *((_QWORD *)v15 + 1) = v29;
    *((_QWORD *)v15 + 3) = this;
    if ( !v23 )
    {
      *(_QWORD *)v15 = *(_QWORD *)(*((_QWORD *)this + 11) + 48LL) << 12;
      v15[16] = 0;
      goto LABEL_21;
    }
    v30 = *((_QWORD *)a2 + 3);
    v48 = 0LL;
    v31 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
            VirtualAddressAllocator,
            0x1000uLL,
            0LL,
            *(_QWORD *)(v30 + 1872),
            *(_QWORD *)(v30 + 1880),
            0x1000u,
            &v48);
    if ( v31 >= 0 )
    {
      v32 = v50;
      *(_QWORD *)v15 = v48;
      v15[16] = 1;
      LODWORD(a6) = VIDMM_PROCESS::OpenAdapter(v32, a2);
      VIDMM_GLOBAL::AddMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v15 + 3);
      v19 = this;
LABEL_21:
      v33 = (char **)*((_QWORD *)this + 5);
      v34 = v15 + 64;
      *((_QWORD *)v15 + 8) = v16;
      *((_QWORD *)v15 + 9) = v33;
      if ( *v33 != v16 )
        __fastfail(3u);
      *v33 = v34;
      v20 = VirtualAddressAllocator;
      *((_QWORD *)this + 5) = v34;
      goto LABEL_13;
    }
    v38 = v31;
LABEL_40:
    if ( *((_DWORD *)v15 + 20) == 1 )
      goto LABEL_42;
  }
  else
  {
    v38 = -1073741801;
  }
  v9 = 0;
LABEL_42:
  *((_QWORD *)v14 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    if ( v15[16] )
    {
      VIDMM_GLOBAL::RemoveMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v15 + 3);
      v42 = VIDMM_PROCESS::GetVirtualAddressAllocator(v50, *(_DWORD *)(*((_QWORD *)a2 + 3) + 184LL), 0xFFFFFFFF);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v42, *(_QWORD *)v15);
      VIDMM_PROCESS::CloseAdapter(v50, a2);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v14, 0LL);
    *((_QWORD *)v14 + 1) = KeGetCurrentThread();
    v43 = v15 + 64;
    if ( *((_QWORD *)v15 + 8) )
    {
      v44 = *(_QWORD *)v43;
      v45 = (char **)*((_QWORD *)v15 + 9);
      if ( *(char **)(*(_QWORD *)v43 + 8LL) != v43 || *v45 != v43 )
        __fastfail(3u);
      *v45 = (char *)v44;
      *(_QWORD *)(v44 + 8) = v45;
    }
    *((_QWORD *)v14 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v15, 0);
  }
  return v38;
}
