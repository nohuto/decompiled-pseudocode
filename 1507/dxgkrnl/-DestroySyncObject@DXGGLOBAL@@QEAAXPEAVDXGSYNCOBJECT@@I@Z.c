/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34
 * Callers:
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0084360 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C008C6B0 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkShareObjects @ 0x1C008FB50 (DxgkShareObjects.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00903B0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00A8BC4 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00A94F0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00B1450 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0123630 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0128F10 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C015270C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01615E0 (-DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01617AC (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C9C (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C008364C (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00837A8 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGGLOBAL *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGSYNCOBJECT *v14; // rdx
  struct DXGSYNCOBJECT **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct DXGSYNCOBJECT *v22; // rcx
  char *v23; // rcx
  __int64 v24; // rax
  _BYTE v25[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+80h] [rbp+20h] BYREF
  __int64 v28; // [rsp+88h] [rbp+28h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v19 + 24) = 1740LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[39]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = 1741LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v11 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8, 0LL, v9, v10);
    *(_QWORD *)(v21 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v21);
    v11 = DXGGLOBAL::m_pGlobal;
  }
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v26, v11);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v26);
  if ( (*((_DWORD *)a2 + 33) & 4) != 0 && *((_DWORD *)a2 + 32) != 5 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGSYNCOBJECT *)((char *)a2 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    v22 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 27);
    if ( v22 == (struct DXGSYNCOBJECT *)((char *)a2 + 216) )
      v23 = 0LL;
    else
      v23 = (char *)v22 - 40;
    if ( v23 )
    {
      v28 = *((_QWORD *)v23 + 4);
      if ( v28 )
      {
        v24 = *((_QWORD *)v23 + 2);
        v27 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v24 + 376)
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
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  }
  if ( DXGSYNCOBJECT::Close(a2, v4, v12, v13) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 32));
    v14 = *(struct DXGSYNCOBJECT **)a2;
    v15 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1);
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2 || *v15 != a2 )
      __fastfail(3u);
    *v15 = v14;
    *((_QWORD *)v14 + 1) = v15;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 32);
    DXGSYNCOBJECT::Destroy(a2, v16, v17, v18);
  }
  if ( v26[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v26);
}
