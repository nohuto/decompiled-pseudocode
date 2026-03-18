/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C01510A0
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C0157A90 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0094C04 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r9
  int v12; // r8d
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v18; // r9
  unsigned __int8 v19; // al
  bool v20; // zf
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 487LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 192));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)a2 + 58)
    && (v11 = *((_QWORD *)a2 + 27),
        v12 = *(_DWORD *)(v11 + 16LL * v10 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x30))
    && (v12 & 0x1000) == 0
    && (v12 & 0xF) != 0
    && (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0xF) == 8 )
  {
    v13 = *(_DWORD **)(v11 + 16LL * v10);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a2 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = v5;
LABEL_12:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( v13[38] != 3 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = 504LL;
    goto LABEL_12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(v13 + 8));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                       (DXGSYNCOBJECT *)v13,
                       *(struct ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL));
  v19 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v18 + 8) + 760LL))(VidSchSyncObject);
  v20 = v21[8] == 0;
  *a4 = v19;
  if ( !v20 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return 0LL;
}
