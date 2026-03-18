/*
 * XREFs of DmmInitializeAdapter @ 0x1C00F56D8
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C00EC0D8 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00F4784 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall DmmInitializeAdapter(PERESOURCE *this)
{
  __int64 v2; // rcx
  __int64 result; // rax
  VIDPN_MGR *v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !this )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v9);
  }
  result = (__int64)this[266];
  if ( result )
  {
    v4 = *(VIDPN_MGR **)(result + 88);
    if ( v4 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(result + 88));
      v5 = VIDPN_MGR::SaveInitialVidPnTopologyAsLkg(v4);
      v7 = v5;
      if ( v5 < 0 )
      {
        v11 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v11 + 24) = v7;
        WdLogEvent5_WdError(v11);
      }
      else
      {
        LODWORD(v7) = 0;
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 40));
      return (unsigned int)v7;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v2);
      *(_QWORD *)(v10 + 24) = this;
      WdLogEvent5_WdError(v10);
      return 3223192373LL;
    }
  }
  return result;
}
