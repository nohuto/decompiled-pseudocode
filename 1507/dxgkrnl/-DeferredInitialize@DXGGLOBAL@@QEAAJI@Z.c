/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00C3C00
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00094EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00857B8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C00DC2E4 (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  DXGMMS_EXPORT *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  DXGPROCESS *i; // rbx
  int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v4 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
  v6 = (DXGMMS_EXPORT *)v4;
  if ( v4 )
  {
    v4[8] = 0LL;
    v4[9] = 0LL;
    *(_BYTE *)v4 = 0;
    memset(v4 + 1, 0, 0x38uLL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = DXGMMS_EXPORT::Initialize(v6, v2);
    v9 = v7;
    if ( v7 < 0 )
    {
      v17 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v17 + 24) = v2;
      *(_QWORD *)(v17 + 32) = v9;
      WdLogEvent5_WdLowResource(v17);
      return (unsigned int)v9;
    }
    else
    {
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v6 + 9) + 8LL) + 8LL))();
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v18);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      *((_QWORD *)this + v2 + 13) = *((_QWORD *)v6 + 9);
      v12 = *((_QWORD *)v6 + 8);
      DXGGLOBAL::m_pDxgmmsExport[v2] = v6;
      *((_QWORD *)this + v2 + 15) = v12;
      for ( i = (DXGPROCESS *)*((_QWORD *)this + 30); i != (DXGGLOBAL *)((char *)this + 240) && i; i = *(DXGPROCESS **)i )
      {
        v14 = DXGPROCESS::DeferredInitialize(i, (unsigned int)v2, v10, v11);
        if ( v14 < 0 )
          goto LABEL_13;
      }
      v14 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 99), (unsigned int)v2, v10, v11);
      if ( v14 >= 0 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
LABEL_13:
      if ( v18[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
      return (unsigned int)v14;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v16 + 24) = v2;
    *(_QWORD *)(v16 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
}
