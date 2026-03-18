/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0089C50
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0089E60 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ @ 0x1C008BB20 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0152E7C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C001FA40 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r9
  char v15; // r10
  bool v16; // r10
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  DXGFASTMUTEX *v24; // [rsp+30h] [rbp-18h] BYREF
  char v25; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v5 = *(_QWORD *)(v4 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 128)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (*((_BYTE *)this + 68) & 1) != 0 )
  {
    v7 = *((_QWORD *)this + 4);
    v25 = 0;
    v24 = (DXGFASTMUTEX *)(v7 + 32);
    if ( v7 == -32 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v8 + 24) = 451LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)v24 == CurrentThread )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v10 + 24) = 458LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( v25 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v4, a3);
      v11[5] = &v24;
      v11[3] = 275LL;
      v11[4] = 4LL;
      v11[6] = 0LL;
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)v24);
    v13 = *((_QWORD *)this + 4);
    v14 = *((_QWORD *)this + 2);
    v15 = *((_BYTE *)this + 64) >> 5;
    v25 = 1;
    v16 = (v15 & 1) == 0;
    v17 = *(_QWORD *)(v14 + 544);
    if ( (*(_DWORD *)(v13 + 156) & 4) != 0 )
      v18 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                          (DXGSYNCOBJECTCA *)v13,
                          *(struct ADAPTER_RENDER **)(v14 + 16))
            + 4);
    else
      v18 = *(_QWORD *)(v13 + 272);
    LOBYTE(v12) = v16;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 400LL)
                                                                          + 8LL)
                                                              + 568LL))(
      v18,
      v17,
      v12,
      *((_QWORD *)this + 3));
    v5 = *((_QWORD *)this + 3);
    if ( v5 )
      ExFreePoolWithTag((PVOID)v5, 0);
    *((_QWORD *)this + 3) = 0LL;
    *((_BYTE *)this + 68) &= ~1u;
    if ( v25 )
    {
      v25 = 0;
      DXGFASTMUTEX::Release(v24);
    }
  }
  if ( *((_QWORD *)this + 6) )
  {
    v19 = *((_QWORD *)this + 4);
    if ( *(_DWORD *)(v19 + 152) != 5 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v20 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = *((_QWORD *)this + 2);
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 40) + 72LL);
    if ( v22 )
      v23 = *(_QWORD *)(v22 + 8);
    else
      v23 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 424LL) + 8LL)
                                                     + 936LL))(
      *(_QWORD *)(*(_QWORD *)(v21 + 16) + 432LL),
      v23,
      v19 + 112);
    *((_QWORD *)this + 6) = 0LL;
  }
}
