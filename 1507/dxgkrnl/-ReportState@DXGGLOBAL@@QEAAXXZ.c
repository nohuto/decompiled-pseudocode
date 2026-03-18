/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0140238
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C013F1CC (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C0127FA4 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C014D208 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportState(DXGGLOBAL **this)
{
  DXGGLOBAL *v2; // rdi
  DXGGLOBAL *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *i; // r14
  _QWORD **v6; // r15
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v13[16]; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v15[16]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v16[16]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v17[8]; // [rsp+68h] [rbp+7h] BYREF

  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v15, (struct DXGGLOBAL *const)this);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v15);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(this + 32));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v2 = this[37];
  while ( v2 != (DXGGLOBAL *)(this + 37) && v2 )
  {
    v3 = v2;
    v2 = *(DXGGLOBAL **)v2;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)v3 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    if ( (*((_DWORD *)v3 + 33) & 4) != 0 )
    {
      v4 = (_QWORD *)((char *)v3 + 216);
      for ( i = (_QWORD *)*((_QWORD *)v3 + 27); i != v4; i = (_QWORD *)*i )
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v4 - 40LL), v3);
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v3 + 216), v3);
    }
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  if ( v15[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v15);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(this + 47));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v6 = (_QWORD **)(this + 52);
  v7 = *v6;
  while ( v7 != v6 && v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    _m_prefetchw(v8 + 3);
    v9 = v8[3];
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(v8 + 3, v9 + 1, v9);
      if ( v10 == v9 )
      {
        LOBYTE(v9) = 1;
        break;
      }
    }
    if ( (_BYTE)v9 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, (struct DXGADAPTER *const)v8, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(v17) >= 0 )
      {
        v11 = v8[248];
        if ( v11 )
          ADAPTER_RENDER::FlushScheduler(v11, 6, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState((DXGADAPTER *)v8);
        v12 = v8[248];
        if ( v12 )
          ADAPTER_RENDER::FlushScheduler(v12, 7, 0xFFFFFFFF, 0);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
    }
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
