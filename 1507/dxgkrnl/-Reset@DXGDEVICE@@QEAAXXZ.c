/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C0136E04
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0128548 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 1322LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v15, *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  for ( i = (__int64 *)*((_QWORD *)this + 38); i != (__int64 *)((char *)this + 304) && i; i = (__int64 *)*i )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(i[2] + 16) + 16LL)) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = 226LL;
      WdLogEvent5_WdAssertion(v12);
    }
    *((_DWORD *)i + 8) = -1;
    *((_DWORD *)i + 7) = 2;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  v13 = *((_QWORD *)this + 2);
  v14 = *((_QWORD *)this + 68);
  *((_DWORD *)this + 88) = 2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v13 + 376) + 8LL) + 488LL))(v14) )
    *((_DWORD *)this + 88) = 3;
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
