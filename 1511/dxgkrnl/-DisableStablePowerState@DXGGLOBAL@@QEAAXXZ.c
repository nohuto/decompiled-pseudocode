/*
 * XREFs of ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C01454F4
 * Callers:
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C01455DC (-DxgkDisableStablePowerState@@YAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C0129AD4 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DisableStablePowerState(DXGGLOBAL *this)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE v9[16]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 472));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v2 = (_QWORD **)((char *)this + 536);
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
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v4, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(v10) >= 0 )
        DXGADAPTER::DisableStablePowerState((DXGADAPTER *)v4, v7, v8);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
