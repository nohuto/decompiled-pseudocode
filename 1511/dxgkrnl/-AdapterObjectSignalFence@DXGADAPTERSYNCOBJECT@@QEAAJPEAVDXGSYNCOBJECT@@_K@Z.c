/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_K@Z @ 0x1C0093C38
 * Callers:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00C6030 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+20h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v18,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL),
    0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18) < 0 )
  {
    v15 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v15 + 24) = 736LL;
    WdLogEvent5_WdEvent(v15);
    LODWORD(v13) = 0;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGSYNCOBJECT *)((char *)a2 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v20 = *((_QWORD *)this + 4);
    v10 = *((_QWORD *)this + 2);
    v19 = a3;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v10 + 400) + 8LL)
                                                                                           + 544LL))(
            0LL,
            0LL,
            1LL,
            &v20,
            0,
            &v19);
    v13 = v11;
    if ( v11 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v16 + 24) = v13;
      WdLogEvent5_WdError(v16);
    }
    else
    {
      LODWORD(v13) = 0;
    }
    if ( v17[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  return (unsigned int)v13;
}
