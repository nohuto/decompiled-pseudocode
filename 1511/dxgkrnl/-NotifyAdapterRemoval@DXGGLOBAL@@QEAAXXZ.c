/*
 * XREFs of ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0145C98
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C016C620 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C012F268 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::NotifyAdapterRemoval(DXGGLOBAL *this)
{
  ADAPTER_RENDER **v2; // rsi
  ADAPTER_RENDER *v3; // rdi
  ADAPTER_RENDER **v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _BYTE v7[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[64]; // [rsp+30h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 472));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v2 = (ADAPTER_RENDER **)((char *)this + 536);
  v3 = *v2;
  while ( v3 != (ADAPTER_RENDER *)v2 && v3 )
  {
    v4 = (ADAPTER_RENDER **)v3;
    v3 = *(ADAPTER_RENDER **)v3;
    _m_prefetchw(v4 + 3);
    v5 = (signed __int64)v4[3];
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 3, v5 + 1, v5);
      if ( v6 == v5 )
      {
        LOBYTE(v5) = 1;
        break;
      }
    }
    if ( (_BYTE)v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v8, (struct DXGADAPTER *const)v4, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
      if ( v4[249] )
      {
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v8) >= 0 )
          ADAPTER_RENDER::SignalCrossAdapterSyncObjects(v4[249]);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v8);
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
