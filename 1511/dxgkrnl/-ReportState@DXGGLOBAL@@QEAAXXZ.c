/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0146794
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C0145644 (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C012E49C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C015154C (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(this + 38));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v2 = this[46];
  while ( v2 != (DXGGLOBAL *)(this + 46) && v2 )
  {
    v3 = v2;
    v2 = *(DXGGLOBAL **)v2;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)v3 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    if ( (*((_DWORD *)v3 + 39) & 4) != 0 )
    {
      v4 = (_QWORD *)((char *)v3 + 240);
      for ( i = (_QWORD *)*((_QWORD *)v3 + 30); i != v4; i = (_QWORD *)*i )
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v4 - 40LL), v3);
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v3 + 240), v3);
    }
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  if ( v15[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v15);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(this + 59));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v6 = (_QWORD **)(this + 67);
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
        v11 = v8[249];
        if ( v11 )
          ADAPTER_RENDER::FlushScheduler(v11, 6, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState((DXGADAPTER *)v8);
        v12 = v8[249];
        if ( v12 )
          ADAPTER_RENDER::FlushScheduler(v12, 7, 0xFFFFFFFF, 0);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
    }
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
