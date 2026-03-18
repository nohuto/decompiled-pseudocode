/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0153F7C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01584B0 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C011E4C4 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0134FD8 (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C015270C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01541C0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0154328 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  void *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  PERESOURCE *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // rax
  _BYTE v45[8]; // [rsp+30h] [rbp-18h] BYREF
  char v46; // [rsp+38h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 385LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_QWORD *)this + 2) )
  {
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v9);
    return 3221227288LL;
  }
  *((_QWORD *)this + 2) = a2;
  v13 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v13 < 0
    || (v13 = DXGDEVICE::ConfigureSharedResourceWithSharedHandle(
                (PERESOURCE *)a2,
                v11,
                v14,
                *((unsigned int *)this + 1)),
        v13 < 0)
    || (v13 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v13 < 0) )
  {
    v15 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = PsGetCurrentProcess(v16);
    WdLogEvent5_WdError(v15);
LABEL_12:
    v31 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v32);
    WdLogEvent5_WdError(v31);
    DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDEVICE **)this, v33, v34, v35);
    return (unsigned int)v13;
  }
  Global = DXGGLOBAL::GetGlobal(v12, v18, v19, v20);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v45, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v45);
  v26 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v23, v22, v24, v25);
  v13 = DXGGLOBAL::OpenSyncObject(
          v26,
          *((unsigned int *)this + 2),
          (struct DXGSYNCOBJECT **)this + 14,
          (unsigned int *)this + 26);
  if ( v13 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v29 = *((unsigned int *)this + 2);
    v30 = v28;
    v28[3] = v29;
    v28[4] = a2;
    v28[5] = PsGetCurrentProcess(v29);
    WdLogEvent5_WdError(v30);
    if ( v46 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
    goto LABEL_12;
  }
  v36 = *((unsigned int *)this + 26);
  Current = DXGPROCESS::GetCurrent(v27);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
  v38 = ((unsigned int)v36 >> 6) & 0xFFFFFF;
  if ( v38 < *((_DWORD *)Current + 58) )
  {
    v39 = *((_QWORD *)Current + 27);
    v40 = v38;
    v41 = ((unsigned int)v36 >> 26) & 0x30;
    v42 = *(unsigned int *)(v39 + 16 * v40 + 8);
    if ( (((unsigned int)v36 >> 26) & 0x30) == (*(_BYTE *)(v39 + 16 * v40 + 8) & 0x30) && (v42 & 0xF) != 0 )
    {
      v43 = 2 * ((v36 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v39 + 8 * v43 + 8) & 0x1000) == 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v41, v42, v39, 0xFFFFFFLL);
        *(_QWORD *)(v44 + 24) = 194LL;
        WdLogEvent5_WdAssertion(v44);
      }
      *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v43 + 8) &= ~0x1000u;
    }
  }
  *((_QWORD *)Current + 25) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v46 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
  return 0LL;
}
