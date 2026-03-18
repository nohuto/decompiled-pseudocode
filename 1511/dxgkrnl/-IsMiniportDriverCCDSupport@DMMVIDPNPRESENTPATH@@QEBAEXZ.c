/*
 * XREFs of ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A13B8
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000913C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A13B0 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v1 + 40) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v3 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v1 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = *(_QWORD *)(v3 + 8);
  if ( !v4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v8);
  }
  return (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v4 + 16)) >= 1105;
}
