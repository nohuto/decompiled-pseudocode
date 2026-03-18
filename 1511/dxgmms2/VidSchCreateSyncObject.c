/*
 * XREFs of VidSchCreateSyncObject @ 0x1C003B730
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C003AEC0 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0067A28 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0020CE0 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C003B918 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *Object,
        __int64 a7)
{
  __int64 *v7; // r15
  SIZE_T v12; // r14
  PVOID PoolWithTag; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // al
  int FenceStorageSlot; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  NTSTATUS v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax

  v7 = Object;
  *Object = 0LL;
  v12 = (*(_BYTE *)(a3 + 4) & 4) != 0 ? 184 : 120;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x68536956u);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v25 = WdLogNewEntry5_WdWarning(v14);
    WdLogEvent5_WdWarning(v25);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, (unsigned int)v12);
  *(_DWORD *)v15 = 1853444950;
  *(_QWORD *)(v15 + 8) = a1;
  *(_QWORD *)(v15 + 16) = a2;
  *(_QWORD *)(v15 + 32) = 1LL;
  *(_BYTE *)(v15 + 24) = *(_BYTE *)(a3 + 4) & 1;
  *(_BYTE *)(v15 + 26) = *(int *)(a3 + 4) < 0;
  *(_BYTE *)(v15 + 27) = (*(_BYTE *)(a3 + 4) & 4) != 0;
  if ( *(_DWORD *)a3 == 1 )
  {
    *(_DWORD *)(v15 + 40) = 0;
    *(_BYTE *)(v15 + 25) = 0;
    if ( *(_DWORD *)(a3 + 8) )
    {
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_QWORD *)(v15 + 56) = 0LL;
      goto LABEL_6;
    }
    v18 = -1LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( *(_DWORD *)a3 == 3 )
    {
      *(_DWORD *)(v15 + 40) = 2;
      *(_BYTE *)(v15 + 25) = 1;
      v18 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(v15 + 64) = v18;
LABEL_5:
      *(_QWORD *)(v15 + 56) = v18;
      *(_QWORD *)(v15 + 48) = v18;
      goto LABEL_6;
    }
    v20 = (unsigned int)(*(_DWORD *)a3 - 4);
    if ( *(_DWORD *)a3 == 4 )
    {
      if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v20, 1LL, v16, v17);
        LODWORD(v24) = -1073741811;
        *(_QWORD *)(v27 + 24) = -1073741811LL;
        WdLogEvent5_WdAssertion(v27);
      }
      else
      {
        *(_DWORD *)(v15 + 40) = 3;
        *(_BYTE *)(v15 + 25) = 0;
        v28 = ObReferenceObjectByHandle(
                *(HANDLE *)(a3 + 8),
                0x1F0003u,
                (POBJECT_TYPE)ExEventObjectType,
                1,
                (PVOID *)&Object,
                0LL);
        v29 = Object;
        *(_QWORD *)(v15 + 48) = Object;
        v24 = v28;
        if ( v28 >= 0 )
          goto LABEL_6;
        v30 = WdLogNewEntry5_WdWarning(v29);
        *(_QWORD *)(v30 + 24) = v24;
        WdLogEvent5_WdWarning(v30);
      }
    }
    else if ( *(_DWORD *)a3 == 5 )
    {
      v21 = a7;
      *(_DWORD *)(v15 + 40) = 4;
      *(_BYTE *)(v15 + 25) = 1;
      if ( v21 )
      {
        *(_OWORD *)(v15 + 48) = *(_OWORD *)v21;
        *(_OWORD *)(v15 + 64) = *(_OWORD *)(v21 + 16);
        *(_QWORD *)(v15 + 80) = *(_QWORD *)(v21 + 32);
        v22 = *(_BYTE *)(a2 + 232);
LABEL_15:
        *(_BYTE *)(v15 + 29) = v22;
        goto LABEL_6;
      }
      FenceStorageSlot = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                           (struct VIDMM_MONITORED_FENCE_STORAGE *)(v15 + 48),
                           *(_BYTE *)(v15 + 24) != 0,
                           a2 == 0,
                           *(_QWORD *)(a3 + 8),
                           *(_BYTE *)(a1 + 48) != 0);
      if ( FenceStorageSlot >= 0 )
      {
        *(_QWORD *)(v15 + 72) = a5;
        v22 = *(_BYTE *)(a1 + 48);
        goto LABEL_15;
      }
      LODWORD(v24) = FenceStorageSlot;
    }
    else
    {
      v26 = WdLogNewEntry5_WdAssertion(v20, 1LL, v16, v17);
      WdLogEvent5_WdAssertion(v26);
      LODWORD(v24) = -1073741811;
    }
    ExFreePoolWithTag((PVOID)v15, 0);
    return (unsigned int)v24;
  }
  if ( *(_DWORD *)(a3 + 12) > *(_DWORD *)(a3 + 8) )
  {
    v31 = WdLogNewEntry5_WdAssertion((unsigned int)(*(_DWORD *)a3 - 2), 1LL, v16, v17);
    WdLogEvent5_WdAssertion(v31);
    ExFreePoolWithTag((PVOID)v15, 0);
    return -1073741811LL;
  }
  *(_DWORD *)(v15 + 40) = 1;
  *(_BYTE *)(v15 + 25) = 0;
  *(_DWORD *)(v15 + 48) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v15 + 56) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v15 + 52) = *(_DWORD *)(a3 + 8);
LABEL_6:
  *(_QWORD *)(v15 + 96) = v15 + 88;
  *(_QWORD *)(v15 + 88) = v15 + 88;
  *(_QWORD *)(v15 + 112) = v15 + 104;
  *(_QWORD *)(v15 + 104) = v15 + 104;
  if ( *(_BYTE *)(v15 + 27) )
  {
    *(_QWORD *)(v15 + 168) = a4;
    *(_QWORD *)(v15 + 176) = VidSchPostSignalCrossAdapter;
    VidSchiAddSyncObjectToCrossAdapterInfo(v15);
  }
  *v7 = v15;
  return 0LL;
}
