/*
 * XREFs of VidSchCreateSyncObject @ 0x1C00444F0
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C004521C (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006D6E0 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0023D30 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C00446D8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
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
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // al
  int FenceStorageSlot; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax

  v7 = Object;
  *Object = 0LL;
  v12 = (*(_BYTE *)(a3 + 4) & 4) != 0 ? 184 : 120;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x68536956u);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v23 = WdLogNewEntry5_WdWarning(v14);
    WdLogEvent5_WdWarning(v23);
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
    v16 = -1LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( *(_DWORD *)a3 == 3 )
    {
      *(_DWORD *)(v15 + 40) = 2;
      *(_BYTE *)(v15 + 25) = 1;
      v16 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(v15 + 64) = v16;
LABEL_5:
      *(_QWORD *)(v15 + 56) = v16;
      *(_QWORD *)(v15 + 48) = v16;
      goto LABEL_6;
    }
    v18 = (unsigned int)(*(_DWORD *)a3 - 4);
    if ( *(_DWORD *)a3 == 4 )
    {
      if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v18, 1LL);
        LODWORD(v22) = -1073741811;
        *(_QWORD *)(v25 + 24) = -1073741811LL;
        WdLogEvent5_WdAssertion(v25);
      }
      else
      {
        *(_DWORD *)(v15 + 40) = 3;
        *(_BYTE *)(v15 + 25) = 0;
        v26 = ObReferenceObjectByHandle(
                *(HANDLE *)(a3 + 8),
                0x1F0003u,
                (POBJECT_TYPE)ExEventObjectType,
                1,
                (PVOID *)&Object,
                0LL);
        v27 = Object;
        *(_QWORD *)(v15 + 48) = Object;
        v22 = v26;
        if ( v26 >= 0 )
          goto LABEL_6;
        v28 = WdLogNewEntry5_WdWarning(v27);
        *(_QWORD *)(v28 + 24) = v22;
        WdLogEvent5_WdWarning(v28);
      }
    }
    else if ( *(_DWORD *)a3 == 5 )
    {
      v19 = a7;
      *(_DWORD *)(v15 + 40) = 4;
      *(_BYTE *)(v15 + 25) = 1;
      if ( v19 )
      {
        *(_OWORD *)(v15 + 48) = *(_OWORD *)v19;
        *(_OWORD *)(v15 + 64) = *(_OWORD *)(v19 + 16);
        *(_QWORD *)(v15 + 80) = *(_QWORD *)(v19 + 32);
        v20 = *(_BYTE *)(a2 + 208);
LABEL_15:
        *(_BYTE *)(v15 + 29) = v20;
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
        v20 = *(_BYTE *)(a1 + 48);
        goto LABEL_15;
      }
      LODWORD(v22) = FenceStorageSlot;
    }
    else
    {
      v24 = WdLogNewEntry5_WdAssertion(v18, 1LL);
      WdLogEvent5_WdAssertion(v24);
      LODWORD(v22) = -1073741811;
    }
    ExFreePoolWithTag((PVOID)v15, 0);
    return (unsigned int)v22;
  }
  if ( *(_DWORD *)(a3 + 12) > *(_DWORD *)(a3 + 8) )
  {
    v29 = WdLogNewEntry5_WdAssertion((unsigned int)(*(_DWORD *)a3 - 2), 1LL);
    WdLogEvent5_WdAssertion(v29);
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
