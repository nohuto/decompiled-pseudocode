/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01581E8
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C015C7C8 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0096C80 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0139BD4 (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01569AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0158378 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C015842C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
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
  _BYTE v27[8]; // [rsp+30h] [rbp-18h] BYREF
  char v28; // [rsp+38h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 387LL;
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
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v27, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v27);
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
    if ( v28 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v27);
    goto LABEL_12;
  }
  if ( v28 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v27);
  return 0LL;
}
