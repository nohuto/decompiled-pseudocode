/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C003AEC0
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0053828 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C003B564 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     VidSchCreateSyncObject @ 0x1C003B730 (VidSchCreateSyncObject.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(_QWORD *a1, _QWORD *a2, __int64 a3, int a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  int SyncObject; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  int v21[20]; // [rsp+40h] [rbp-58h] BYREF

  v6 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1, a2, a3, *a2, a4);
  v11 = v6;
  if ( v6 < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = a2;
LABEL_7:
    *(_QWORD *)(v20 + 32) = v11;
    WdLogEvent5_WdAssertion(v20);
    return (unsigned int)v11;
  }
  memset(v21, 0, sizeof(v21));
  v12 = *a2;
  v21[0] = 5;
  v13 = *(_QWORD *)(v12 + 16);
  *(_QWORD *)&v21[2] = 4294962295LL;
  SyncObject = VidSchCreateSyncObject(*(_QWORD *)(v13 + 408), 0, (int)v21, 0, (__int64)a1, a1 + 19, 0LL);
  v11 = SyncObject;
  if ( SyncObject < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_7;
  }
  a1[11] = a1[19];
  a1[12] = 4294962295LL;
  return (unsigned int)v11;
}
