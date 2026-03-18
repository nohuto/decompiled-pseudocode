/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00903B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00053F8 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  void **v5; // rax
  DXGKEYEDMUTEX *v6; // rsi
  struct DXGSYNCOBJECT *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PERESOURCE *Global; // rax
  __int64 v13; // r9
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1[2];
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v14,
    *(struct DXGADAPTER *const *)(*(_QWORD *)(v1 + 72) + 16LL),
    0LL);
  COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 56));
  v3 = *(_QWORD *)(v1 + 72);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3 + 192, 0LL);
  *(_QWORD *)(v3 + 200) = KeGetCurrentThread();
  v4 = (_QWORD *)*a1;
  v5 = (void **)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *(_QWORD *)(v3 + 200) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 192, 0LL);
  KeLeaveCriticalRegion();
  v6 = (DXGKEYEDMUTEX *)a1[3];
  v7 = (struct DXGSYNCOBJECT *)a1[4];
  DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v1, 0LL, 0);
  a1[2] = 0LL;
  if ( v6 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v6);
    a1[3] = 0LL;
  }
  if ( v7 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
    DXGGLOBAL::DestroySyncObject(Global, v7, 0LL, v13);
    a1[4] = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
}
