/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00D4360
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000B0D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C0068570 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C00E8654 (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGMMS_EXPORT *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rax
  DXGPROCESS *i; // rbx
  int v18; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v4 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
  v9 = (DXGMMS_EXPORT *)v4;
  if ( v4 )
  {
    v4[8] = 0LL;
    v4[9] = 0LL;
    *(_BYTE *)v4 = 0;
    memset(v4 + 1, 0, 0x38uLL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = DXGMMS_EXPORT::Initialize(v9, v2);
    v15 = v10;
    if ( v10 < 0 )
    {
      v21 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v21 + 24) = v2;
      *(_QWORD *)(v21 + 32) = v15;
      WdLogEvent5_WdLowResource(v21);
      return (unsigned int)v15;
    }
    else
    {
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v9 + 9) + 8LL) + 8LL))();
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v22);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
      *((_QWORD *)this + v2 + 13) = *((_QWORD *)v9 + 9);
      v16 = *((_QWORD *)v9 + 8);
      DXGGLOBAL::m_pDxgmmsExport[v2] = v9;
      *((_QWORD *)this + v2 + 15) = v16;
      for ( i = (DXGPROCESS *)*((_QWORD *)this + 36); i != (DXGGLOBAL *)((char *)this + 288) && i; i = *(DXGPROCESS **)i )
      {
        v18 = DXGPROCESS::DeferredInitialize(i, v2);
        if ( v18 < 0 )
          goto LABEL_14;
      }
      v18 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 117), v2);
      if ( v18 >= 0 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
LABEL_14:
      if ( v22[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
      return (unsigned int)v18;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v20 + 24) = v2;
    *(_QWORD *)(v20 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
}
