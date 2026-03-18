/*
 * XREFs of ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0168FE0
 * Callers:
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C01690D0 (-DxgkDisableStablePowerState@@YAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01454B0 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DisableStablePowerState(DXGGLOBAL *this)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _BYTE v7[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v8[10]; // [rsp+30h] [rbp-58h] BYREF

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
        DXGADAPTER::DisableStablePowerState((DXGADAPTER *)v4);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v8);
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
