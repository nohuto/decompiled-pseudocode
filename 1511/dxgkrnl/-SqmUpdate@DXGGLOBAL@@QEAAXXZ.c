/*
 * XREFs of ?SqmUpdate@DXGGLOBAL@@QEAAXXZ @ 0x1C01504D8
 * Callers:
 *     ?DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0150040 (-DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000B0D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00B3E28 (-UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?Sqm@DXGKSQM_ADAPTER@@QEAAXXZ @ 0x1C01500CC (-Sqm@DXGKSQM_ADAPTER@@QEAAXXZ.c)
 *     ?Sqm@DXGKSQM_GLOBAL@@QEAAXXZ @ 0x1C01503BC (-Sqm@DXGKSQM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::SqmUpdate(DXGGLOBAL *this)
{
  DXGGLOBAL *v2; // rbx
  DXGKSQM_ADAPTER **v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  DXGGLOBAL *v6; // rbx
  struct DXGPROCESS *v7; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 472));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v2 = (DXGGLOBAL *)*((_QWORD *)this + 67);
  while ( v2 != (DXGGLOBAL *)((char *)this + 536) && v2 )
  {
    v3 = (DXGKSQM_ADAPTER **)v2;
    v2 = *(DXGGLOBAL **)v2;
    _m_prefetchw(v3 + 3);
    v4 = (signed __int64)v3[3];
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 3, v4 + 1, v4);
      if ( v5 == v4 )
      {
        LOBYTE(v4) = 1;
        break;
      }
    }
    if ( (_BYTE)v4 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(v10) >= 0 )
        DXGKSQM_ADAPTER::Sqm(v3[394]);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = (DXGGLOBAL *)*((_QWORD *)this + 36);
  while ( v6 != (DXGGLOBAL *)((char *)this + 288) && v6 )
  {
    v7 = v6;
    v6 = *(DXGGLOBAL **)v6;
    DXGKSQM_GLOBAL::UpdateProcessSqm(*((DXGKSQM_GLOBAL **)this + 87), v7);
  }
  DXGKSQM_GLOBAL::Sqm(*((DXGKSQM_GLOBAL **)this + 87));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
