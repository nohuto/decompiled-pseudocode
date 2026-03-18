/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C017CE7C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C018209C (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0143E0C (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C015D02C (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B4D0 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017D0C0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C017D228 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  void *v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rcx
  PERESOURCE *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+30h] [rbp-18h] BYREF
  char v36; // [rsp+38h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 407LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 2) )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v6);
    return 3221227288LL;
  }
  *((_QWORD *)this + 2) = a2;
  v10 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v10 < 0
    || (v10 = DXGDEVICE::ConfigureSharedResourceWithSharedHandle((PERESOURCE *)a2, v8, v11, *((unsigned int *)this + 1)),
        v10 < 0)
    || (v10 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v10 < 0) )
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v13);
    WdLogEvent5_WdError(v12);
LABEL_12:
    v22 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = PsGetCurrentProcess(v23);
    WdLogEvent5_WdError(v22);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v24, v25, v26);
    return (unsigned int)v10;
  }
  Global = DXGGLOBAL::GetGlobal(v9);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v35);
  v17 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v16);
  v10 = DXGGLOBAL::OpenSyncObject(
          v17,
          *((_DWORD *)this + 2),
          (struct DXGSYNCOBJECT **)this + 14,
          (unsigned int *)this + 26);
  if ( v10 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v20 = *((unsigned int *)this + 2);
    v21 = v19;
    v19[3] = v20;
    v19[4] = a2;
    v19[5] = PsGetCurrentProcess(v20);
    WdLogEvent5_WdError(v21);
    if ( v36 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v35);
    goto LABEL_12;
  }
  v27 = *((unsigned int *)this + 26);
  Current = DXGPROCESS::GetCurrent(v18);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
  v29 = ((unsigned int)v27 >> 6) & 0xFFFFFF;
  if ( v29 < *((_DWORD *)Current + 56) )
  {
    v30 = *((_QWORD *)Current + 26);
    v31 = v29;
    v32 = ((unsigned int)v27 >> 26) & 0x30;
    if ( (((unsigned int)v27 >> 26) & 0x30) == (*(_BYTE *)(v30 + 16 * v31 + 8) & 0x30)
      && (*(_DWORD *)(v30 + 16 * v31 + 8) & 0xF) != 0 )
    {
      v33 = 2 * ((v27 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v30 + 8 * v33 + 8) & 0x1000) == 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v34 + 24) = 193LL;
        WdLogEvent5_WdAssertion(v34);
      }
      *(_DWORD *)(*((_QWORD *)Current + 26) + 8 * v33 + 8) &= ~0x1000u;
    }
  }
  *((_QWORD *)Current + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v36 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v35);
  return 0LL;
}
