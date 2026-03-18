/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C014CA78
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C0153824 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00838D0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // r8d
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v21; // r9
  unsigned __int8 v22; // al
  bool v23; // zf
  _BYTE v24[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 533LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 192));
  v13 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v13 < *((_DWORD *)a2 + 58)
    && (v14 = *((_QWORD *)a2 + 27),
        v15 = *(_DWORD *)(v14 + 16LL * v13 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) == 8 )
  {
    v16 = *(_DWORD **)(v14 + 16LL * v13);
  }
  else
  {
    v16 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a2 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = a2;
    *(_QWORD *)(v18 + 32) = v5;
LABEL_12:
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  if ( v16[32] != 3 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = 550LL;
    goto LABEL_12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v16 + 8));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                       (DXGSYNCOBJECT *)v16,
                       *(struct ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL));
  v22 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v21 + 8) + 760LL))(VidSchSyncObject);
  v23 = v24[8] == 0;
  *a4 = v22;
  if ( !v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return 0LL;
}
