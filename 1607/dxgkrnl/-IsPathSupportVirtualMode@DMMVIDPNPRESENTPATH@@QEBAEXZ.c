/*
 * XREFs of ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0080DB4
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0004D74 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C007FB48 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C0081114 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  DXGADAPTER *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v4 = *(DXGADAPTER **)(*(_QWORD *)(v3 + 8) + 16LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v4) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *((_QWORD *)this + 12);
  v13 = 1;
  if ( (int)IsVirtualizationDisabledForTarget(v4, *(unsigned int *)(v6 + 24), &v13, &v14) < 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v12);
  }
  return v13 == 0;
}
