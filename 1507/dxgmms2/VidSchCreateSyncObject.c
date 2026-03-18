/*
 * XREFs of VidSchCreateSyncObject @ 0x1C0032EB0
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0032DE8 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0039AFC (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0015644 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C00360B8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  int FenceStorageSlot; // eax
  char v23; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax

  v7 = Object;
  *Object = 0LL;
  v12 = (*(_BYTE *)(a3 + 4) & 4) != 0 ? 184 : 120;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12, 0x68536956u);
  v17 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v26 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    WdLogEvent5_WdWarning(v26);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, (unsigned int)v12);
  *(_DWORD *)v17 = 1853444950;
  *(_QWORD *)(v17 + 8) = a1;
  *(_QWORD *)(v17 + 16) = a2;
  *(_QWORD *)(v17 + 32) = 1LL;
  *(_BYTE *)(v17 + 24) = *(_BYTE *)(a3 + 4) & 1;
  *(_BYTE *)(v17 + 26) = *(int *)(a3 + 4) < 0;
  *(_BYTE *)(v17 + 27) = (*(_BYTE *)(a3 + 4) & 4) != 0;
  if ( *(_DWORD *)a3 == 1 )
  {
    *(_DWORD *)(v17 + 40) = 0;
    *(_BYTE *)(v17 + 25) = 0;
    if ( *(_DWORD *)(a3 + 8) )
    {
      *(_QWORD *)(v17 + 48) = 0LL;
      *(_QWORD *)(v17 + 56) = 0LL;
      goto LABEL_11;
    }
    v25 = -1LL;
    goto LABEL_16;
  }
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( *(_DWORD *)a3 != 3 )
    {
      v20 = (unsigned int)(*(_DWORD *)a3 - 4);
      if ( *(_DWORD *)a3 == 4 )
      {
        if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v20, 1LL, v18, v19);
          LODWORD(v28) = -1073741811;
          *(_QWORD *)(v29 + 24) = -1073741811LL;
          WdLogEvent5_WdAssertion(v29);
        }
        else
        {
          *(_DWORD *)(v17 + 40) = 3;
          *(_BYTE *)(v17 + 25) = 0;
          v30 = ObReferenceObjectByHandle(
                  *(HANDLE *)(a3 + 8),
                  0x1F0003u,
                  (POBJECT_TYPE)ExEventObjectType,
                  1,
                  (PVOID *)&Object,
                  0LL);
          v33 = Object;
          *(_QWORD *)(v17 + 48) = Object;
          v28 = v30;
          if ( v30 >= 0 )
            goto LABEL_11;
          v34 = WdLogNewEntry5_WdWarning(v33, v31, v32);
          *(_QWORD *)(v34 + 24) = v28;
          WdLogEvent5_WdWarning(v34);
        }
      }
      else if ( *(_DWORD *)a3 == 5 )
      {
        v21 = a7;
        *(_DWORD *)(v17 + 40) = 4;
        *(_BYTE *)(v17 + 25) = 1;
        if ( v21 )
        {
          *(_OWORD *)(v17 + 48) = *(_OWORD *)v21;
          *(_OWORD *)(v17 + 64) = *(_OWORD *)(v21 + 16);
          *(_QWORD *)(v17 + 80) = *(_QWORD *)(v21 + 32);
          v23 = *(_BYTE *)(a2 + 208);
          goto LABEL_10;
        }
        FenceStorageSlot = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                             (struct VIDMM_MONITORED_FENCE_STORAGE *)(v17 + 48),
                             *(_BYTE *)(v17 + 24) != 0,
                             a2 == 0,
                             *(_QWORD *)(a3 + 8),
                             *(_BYTE *)(a1 + 48) != 0);
        if ( FenceStorageSlot >= 0 )
        {
          *(_QWORD *)(v17 + 72) = a5;
          v23 = *(_BYTE *)(a1 + 48);
LABEL_10:
          *(_BYTE *)(v17 + 29) = v23;
          goto LABEL_11;
        }
        LODWORD(v28) = FenceStorageSlot;
      }
      else
      {
        v27 = WdLogNewEntry5_WdAssertion(v20, 1LL, v18, v19);
        WdLogEvent5_WdAssertion(v27);
        LODWORD(v28) = -1073741811;
      }
      ExFreePoolWithTag((PVOID)v17, 0);
      return (unsigned int)v28;
    }
    *(_DWORD *)(v17 + 40) = 2;
    *(_BYTE *)(v17 + 25) = 1;
    v25 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(v17 + 64) = v25;
LABEL_16:
    *(_QWORD *)(v17 + 56) = v25;
    *(_QWORD *)(v17 + 48) = v25;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(a3 + 12) > *(_DWORD *)(a3 + 8) )
  {
    v35 = WdLogNewEntry5_WdAssertion((unsigned int)(*(_DWORD *)a3 - 2), 1LL, v18, v19);
    WdLogEvent5_WdAssertion(v35);
    ExFreePoolWithTag((PVOID)v17, 0);
    return -1073741811LL;
  }
  *(_DWORD *)(v17 + 40) = 1;
  *(_BYTE *)(v17 + 25) = 0;
  *(_DWORD *)(v17 + 48) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v17 + 56) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v17 + 52) = *(_DWORD *)(a3 + 8);
LABEL_11:
  *(_QWORD *)(v17 + 96) = v17 + 88;
  *(_QWORD *)(v17 + 88) = v17 + 88;
  *(_QWORD *)(v17 + 112) = v17 + 104;
  *(_QWORD *)(v17 + 104) = v17 + 104;
  if ( *(_BYTE *)(v17 + 27) )
  {
    *(_QWORD *)(v17 + 168) = a4;
    *(_QWORD *)(v17 + 176) = VidSchPostSignalCrossAdapter;
    VidSchiAddSyncObjectToCrossAdapterInfo(v17);
  }
  *v7 = v17;
  return 0LL;
}
