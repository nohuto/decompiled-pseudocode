/*
 * XREFs of DmmInitializeAdapter @ 0x1C00D0CB0
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C00C4630 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00CDA50 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall DmmInitializeAdapter(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  VIDPN_MGR *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  if ( !this )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v18);
  }
  result = (__int64)this[247];
  if ( result )
  {
    v10 = *(VIDPN_MGR **)(result + 88);
    if ( v10 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, *(_QWORD *)(result + 88));
      v14 = VIDPN_MGR::SaveInitialVidPnTopologyAsLkg(v10, v11, v12, v13);
      v16 = v14;
      if ( v14 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v20 + 24) = v16;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        LODWORD(v16) = 0;
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
      return (unsigned int)v16;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v19 + 24) = this;
      WdLogEvent5_WdError(v19);
      return 3223192373LL;
    }
  }
  return result;
}
