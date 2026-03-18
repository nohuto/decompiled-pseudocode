/*
 * XREFs of ?ControlVSyncForLogging@DXGGLOBAL@@QEAAXE@Z @ 0x1C013EEA4
 * Callers:
 *     ?DxgkControlVSyncForLogging@@YAXE@Z @ 0x1C013F148 (-DxgkControlVSyncForLogging@@YAXE@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01201F0 (-ControlVSyncForLogging@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGGLOBAL::ControlVSyncForLogging(DXGGLOBAL *this, unsigned __int8 a2)
{
  int v2; // ebp
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _BYTE v9[16]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v4 = (_QWORD **)((char *)this + 416);
  v5 = *v4;
  if ( g_bVSyncEnabledForLogging != v2 )
  {
    g_bVSyncEnabledForLogging = v2;
    while ( v5 != v4 && v5 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
      _m_prefetchw(v6 + 3);
      v7 = v6[3];
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
      if ( (_BYTE)v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v6, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        if ( v6[248] && v6[247] && (int)COREADAPTERACCESS::AcquireExclusive(v10) >= 0 )
          ADAPTER_RENDER::ControlVSyncForLogging((PERESOURCE **)v6[248], v2);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
      }
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
