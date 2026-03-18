/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0080E38
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0004D74 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005108 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( !*(_QWORD *)(v1 + 40) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v3 = *(_QWORD *)(v1 + 40);
  if ( !*(_QWORD *)(v3 + 72) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 48LL);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
  if ( !v5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( g_Win32kSupportsPathIndependentRotation )
  {
    v6 = *(_QWORD *)(v5 + 2128);
    if ( *(_BYTE *)(v6 + 133) )
    {
      if ( *(_BYTE *)(v6 + 134) )
        return 1;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u )
      return 1;
  }
  return v2;
}
