/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00BF0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00017FC (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  void **v5; // rax
  DXGKEYEDMUTEX *v6; // rsi
  struct DXGSYNCOBJECT *v7; // rdi
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  _BYTE v10[64]; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1[2];
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v10,
    *(struct DXGADAPTER *const *)(*(_QWORD *)(v1 + 72) + 16LL),
    0LL);
  COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 56));
  v3 = *(_QWORD *)(v1 + 72);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3 + 216, 0LL);
  *(_QWORD *)(v3 + 224) = KeGetCurrentThread();
  v4 = (_QWORD *)*a1;
  v5 = (void **)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *(_QWORD *)(v3 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 216, 0LL);
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
    Global = DXGGLOBAL::GetGlobal(v8);
    DXGGLOBAL::DestroySyncObject(Global, v7, 0);
    a1[4] = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
}
