/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C008FE30 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A32F0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00CCEC0 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkShareObjects @ 0x1C00D0730 (DxgkShareObjects.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D2AA0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00D5DF0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00DAEF0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148C38 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01497D4 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B4D0 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018D8D4 (-DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C018DAD4 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0009A6C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009AB4 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0009B08 (-IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C001CFB8 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYN.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00A4670 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00A47B0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3, char a4)
{
  __int64 v8; // rax
  bool IsSyncObjectLockExclusiveOwner; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v13; // rcx
  char *v14; // rcx
  __int64 v15; // rcx
  struct DXGSYNCOBJECT *v16; // rdx
  struct DXGSYNCOBJECT **v17; // rax
  struct _VIDSCH_SYNC_OBJECT *v18; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1840LL;
    WdLogEvent5_WdAssertion(v8);
  }
  IsSyncObjectLockExclusiveOwner = DXGGLOBAL::IsSyncObjectLockExclusiveOwner(this);
  if ( a4 )
  {
    if ( !IsSyncObjectLockExclusiveOwner )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v11 + 24) = 1852LL;
LABEL_8:
      WdLogEvent5_WdAssertion(v11);
    }
  }
  else if ( IsSyncObjectLockExclusiveOwner )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 1856LL;
    goto LABEL_8;
  }
  Global = DXGGLOBAL::GetGlobal(v10);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, Global);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v20);
  if ( (*((_DWORD *)a2 + 33) & 4) != 0 && *((_DWORD *)a2 + 32) != 5 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGSYNCOBJECT *)((char *)a2 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v13 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 27);
    if ( v13 == (struct DXGSYNCOBJECT *)((char *)a2 + 216) )
      v14 = 0LL;
    else
      v14 = (char *)v13 - 40;
    if ( v14 )
    {
      v18 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v14 + 4);
      if ( v18 )
      {
        v15 = *((_QWORD *)v14 + 2);
        v21 = -1LL;
        VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(*(VIDSCH_EXPORT **)(v15 + 376), 0, 0LL, 1u, &v18, 0, &v21);
      }
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 32));
    v16 = *(struct DXGSYNCOBJECT **)a2;
    v17 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1);
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2 || *v17 != a2 )
      __fastfail(3u);
    *v17 = v16;
    *((_QWORD *)v16 + 1) = v17;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 32);
    DXGSYNCOBJECT::Destroy(a2);
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20);
}
