/*
 * XREFs of ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00B9638
 * Callers:
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0179ED0 (-CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0007D94 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097120 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateClientVidPnFromActive(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  const struct DMMVIDPN *v13; // rbx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF
  const struct DMMVIDPN *v23; // [rsp+38h] [rbp+10h] BYREF

  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
    WdLogEvent5_WdAssertion(v19);
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 16);
  *(_QWORD *)(v8 + 24) = v12;
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11, v12, v9, v10);
    WdLogEvent5_WdAssertion(v20);
  }
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 72) + 32LL));
  v13 = *(const struct DMMVIDPN **)(a1 + 72);
  v22 = 0LL;
  v23 = v13;
  v15 = VIDPN_MGR::CreateVidPnCopyForClient(a1, v13, &v22, v14);
  v17 = v15;
  if ( v15 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v21 + 24) = v13;
    *(_QWORD *)(v21 + 32) = v17;
    WdLogEvent5_WdError(v21);
  }
  else
  {
    auto_rc<DMMVIDPN>::operator=(a2, &v22);
    LODWORD(v17) = 0;
  }
  auto_rc<DMMVIDPN>::reset(&v22, 0LL);
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v23, 0LL);
  return (unsigned int)v17;
}
