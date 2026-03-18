/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C013B4E4
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012EA44 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000CFA8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C014DEF0 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 *i; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  const struct _WNF_STATE_NAME *v9; // rdx
  unsigned int v10; // r9d
  DXGPROCESS *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 1326LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v14, *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  for ( i = (__int64 *)*((_QWORD *)this + 38); i != (__int64 *)((char *)this + 304) && i; i = (__int64 *)*i )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(i[2] + 16) + 16LL)) )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v6 + 24) = 217LL;
      WdLogEvent5_WdAssertion(v6);
    }
    *((_DWORD *)i + 8) = -1;
    *((_DWORD *)i + 7) = 2;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)this + 68);
  *((_DWORD *)this + 88) = 2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v7 + 400) + 8LL) + 488LL))(v8) )
    *((_DWORD *)this + 88) = 3;
  v11 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v15 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v11, v9, &v15, v10) < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 1371LL;
    WdLogEvent5_WdError(v13);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
}
