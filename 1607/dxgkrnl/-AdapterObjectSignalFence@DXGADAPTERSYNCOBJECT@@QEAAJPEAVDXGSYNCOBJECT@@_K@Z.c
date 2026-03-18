/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z @ 0x1C007F7AC
 * Callers:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00DAE80 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v14[80]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+20h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v14,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL),
    0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14) < 0 )
  {
    v11 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v11 + 24) = 788LL;
    WdLogEvent5_WdEvent(v11);
    LODWORD(v9) = 0;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGSYNCOBJECT *)((char *)a2 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    v16 = *((_QWORD *)this + 4);
    v6 = *((_QWORD *)this + 2);
    v15 = a3;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v6 + 376) + 8LL)
                                                                                          + 544LL))(
           0LL,
           0LL,
           1LL,
           &v16,
           0,
           &v15);
    v9 = v7;
    if ( v7 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v12 + 24) = v9;
      WdLogEvent5_WdError(v12);
    }
    else
    {
      LODWORD(v9) = 0;
    }
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  return (unsigned int)v9;
}
