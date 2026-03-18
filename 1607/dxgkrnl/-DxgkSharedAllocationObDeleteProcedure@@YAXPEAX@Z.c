/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00D5DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000115C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006F28 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  void **v5; // rax
  DXGKEYEDMUTEX *v6; // r14
  _QWORD *v7; // rdi
  struct DXGSYNCOBJECT *v8; // rbp
  __int64 v9; // rcx
  DXGGLOBAL *Global; // rax
  _BYTE v11[80]; // [rsp+20h] [rbp-68h] BYREF

  v1 = a1[2];
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v11,
    *(struct DXGADAPTER *const *)(*(_QWORD *)(v1 + 72) + 16LL),
    0LL);
  COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11);
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
  v7 = *(_QWORD **)(v1 + 128);
  v8 = (struct DXGSYNCOBJECT *)a1[4];
  while ( v7 != (_QWORD *)(v1 + 128) )
  {
    if ( (*((_DWORD *)v7 - 11) & 0x4000) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 400LL) + 8LL) + 1128LL))(
        *(v7 - 5),
        0xFFFFFFFFLL);
    v7 = (_QWORD *)*v7;
  }
  DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v1, 0LL, 0);
  a1[2] = 0LL;
  if ( v6 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v6);
    a1[3] = 0LL;
  }
  if ( v8 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    DXGGLOBAL::DestroySyncObject(Global, v8, 0, 0);
    a1[4] = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
}
