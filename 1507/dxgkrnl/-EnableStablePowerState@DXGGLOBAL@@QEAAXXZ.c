/*
 * XREFs of ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C013F3AC
 * Callers:
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C013F1B4 (-DxgkEnableStablePowerState@@YAXXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01261CC (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::EnableStablePowerState(DXGGLOBAL *this)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _BYTE v7[16]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v8[8]; // [rsp+30h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v2 = (_QWORD **)((char *)this + 416);
  v3 = *v2;
  while ( v3 != v2 && v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    _m_prefetchw(v4 + 3);
    v5 = v4[3];
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v4 + 3, v5 + 1, v5);
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
      if ( (int)COREADAPTERACCESS::AcquireExclusive(v8) >= 0 )
        DXGADAPTER::EnableStablePowerState((ADAPTER_RENDER **)v4);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v8);
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
