/*
 * XREFs of ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FDF4
 * Callers:
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E330 (-CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C2EC (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FEA8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPnFromActive(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v14);
  }
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(v8 + 16);
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v15);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 72) + 32LL));
  v9 = *(_QWORD *)(a1 + 72);
  v17 = 0LL;
  v18 = v9;
  v10 = VIDPN_MGR::CreateVidPnCopyForClient(a1, v9, &v17);
  v12 = v10;
  if ( v10 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v16 + 24) = v9;
    *(_QWORD *)(v16 + 32) = v12;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    auto_rc<DMMVIDPN>::operator=(a2, &v17);
    LODWORD(v12) = 0;
  }
  auto_rc<DMMVIDPN>::reset(&v17, 0LL);
  auto_rc<DMMVIDPN const>::reset(&v18, 0LL);
  return (unsigned int)v12;
}
