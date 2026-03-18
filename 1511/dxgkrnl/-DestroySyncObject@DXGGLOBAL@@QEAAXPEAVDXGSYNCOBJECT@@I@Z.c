/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0061660 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0089E60 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0093D30 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0097574 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00BF0D0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00C60E0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01292F4 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C012F574 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01569AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0165C10 (-DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C0165DDC (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00946F4 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00948DC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(DXGGLOBAL *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGGLOBAL *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rax
  PERESOURCE *v17; // rbx
  int v18; // eax
  struct DXGSYNCOBJECT *v19; // rcx
  char *v20; // rcx
  __int64 v21; // rax
  struct DXGSYNCOBJECT *v22; // rcx
  struct DXGSYNCOBJECT **v23; // rax
  PERESOURCE *v24; // [rsp+40h] [rbp-20h] BYREF
  char v25; // [rsp+48h] [rbp-18h]
  _BYTE v26[16]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+80h] [rbp+20h] BYREF
  __int64 v28; // [rsp+88h] [rbp+28h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1747LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 48)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 1748LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v10 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v10);
    v9 = DXGGLOBAL::m_pGlobal;
  }
  v24 = (PERESOURCE *)v9;
  v25 = 0;
  if ( !v9 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v11);
    v9 = (struct DXGGLOBAL *)v24;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v9 + 48)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v15 + 24) = 1385LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( v25 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
    v16[5] = &v24;
    v16[3] = 275LL;
    v16[4] = 4LL;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdCriticalError(v16);
  }
  v17 = v24;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v17[48], 1u);
  v18 = *((_DWORD *)a2 + 39) >> 2;
  v25 = 1;
  if ( (v18 & 1) != 0 && *((_DWORD *)a2 + 38) != 5 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGSYNCOBJECT *)((char *)a2 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    v19 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 30);
    if ( v19 == (struct DXGSYNCOBJECT *)((char *)a2 + 240) )
      v20 = 0LL;
    else
      v20 = (char *)v19 - 40;
    if ( v20 )
    {
      v28 = *((_QWORD *)v20 + 4);
      if ( v28 )
      {
        v21 = *((_QWORD *)v20 + 2);
        v27 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v21 + 400)
                                                                                                  + 8LL)
                                                                                      + 544LL))(
          0LL,
          0LL,
          1LL,
          &v28,
          0,
          &v27);
      }
    }
    if ( v26[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)this + 38);
    v22 = *(struct DXGSYNCOBJECT **)a2;
    v23 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1);
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2 || *v23 != a2 )
      __fastfail(3u);
    *v23 = v22;
    *((_QWORD *)v22 + 1) = v23;
    DXGFASTMUTEX::Release((DXGGLOBAL *)((char *)this + 304));
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v25 )
  {
    v25 = 0;
    ExReleaseResourceLite(v24[48]);
    KeLeaveCriticalRegion();
  }
}
