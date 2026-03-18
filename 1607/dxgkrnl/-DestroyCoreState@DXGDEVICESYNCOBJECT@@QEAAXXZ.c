/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C008FCC4
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C008FE30 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016E9B0 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0177BE4 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0026464 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rdx
  void *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  char v10; // r10
  bool v11; // r10
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  DXGFASTMUTEX *v23; // [rsp+30h] [rbp-18h] BYREF
  char v24; // [rsp+38h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v18 + 24) = 99LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (*((_BYTE *)this + 68) & 1) != 0 )
  {
    v5 = *((_QWORD *)this + 4);
    v24 = 0;
    v23 = (DXGFASTMUTEX *)(v5 + 32);
    if ( v5 == -32 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v19 + 24) = 428LL;
      WdLogEvent5_WdAssertion(v19);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v23 + 1) == CurrentThread )
    {
      v20 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v20 + 24) = 435LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( v24 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v2, v4);
      v21[5] = &v23;
      v21[3] = 275LL;
      v21[4] = 4LL;
      v21[6] = 0LL;
      v21[7] = 0LL;
      WdLogEvent5_WdCriticalError(v21);
    }
    DXGFASTMUTEX::Acquire(v23);
    v8 = *((_QWORD *)this + 4);
    v9 = *((_QWORD *)this + 2);
    v10 = *((_BYTE *)this + 64) >> 5;
    v24 = 1;
    v11 = (v10 & 1) == 0;
    v12 = *(_QWORD *)(v9 + 568);
    if ( (*(_DWORD *)(v8 + 132) & 4) != 0 )
      v13 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v8, *(struct ADAPTER_RENDER **)(v9 + 16))
            + 4);
    else
      v13 = *(_QWORD *)(v8 + 248);
    LOBYTE(v7) = v11;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 376LL)
                                                                          + 8LL)
                                                              + 568LL))(
      v13,
      v12,
      v7,
      *((_QWORD *)this + 3));
    v3 = (void *)*((_QWORD *)this + 3);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    *((_QWORD *)this + 3) = 0LL;
    *((_BYTE *)this + 68) &= ~1u;
    if ( v24 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v23);
  }
  if ( *((_QWORD *)this + 6) )
  {
    v14 = *((_QWORD *)this + 4);
    if ( *(_DWORD *)(v14 + 128) != 5 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v22 + 24) = 274LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v15 = *((_QWORD *)this + 2);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 64LL);
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 8);
    else
      v17 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 400LL) + 8LL)
                                                     + 952LL))(
      *(_QWORD *)(*(_QWORD *)(v15 + 16) + 408LL),
      v17,
      v14 + 88);
    *((_QWORD *)this + 6) = 0LL;
  }
}
