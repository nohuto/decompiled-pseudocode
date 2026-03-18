/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A1334
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0008EE0 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000922C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( !*(_QWORD *)(v1 + 40) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v4 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v1 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
  if ( !v5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( g_Win32kSupportsPathIndependentRotation )
  {
    v6 = *(_QWORD *)(v5 + 1984);
    if ( *(_BYTE *)(v6 + 157) )
    {
      if ( *(_BYTE *)(v6 + 158) )
        return 1;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 176) + 64LL) + 40LL) + 28LL) >= 0x4003u )
      return 1;
  }
  return v2;
}
