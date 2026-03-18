/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00950C8
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005CD0 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000604C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = *((_QWORD *)this + 11);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 40) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v4 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v8 + 8) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
  if ( !v11 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( g_Win32kSupportsPathIndependentRotation
    && (*(_BYTE *)(*(_QWORD *)(v11 + 1976) + 133LL)
     || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 176) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
  {
    return 1;
  }
  return v5;
}
