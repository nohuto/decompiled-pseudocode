/*
 * XREFs of ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000DEB8
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000DC58 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C005FA7C (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C00DF170 (-RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I.c)
 * Callees:
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000DE90 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = v2;
    WdLogEvent5_WdError(v5);
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    v10[3] = v2;
    v10[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v10[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdWarning(v10);
    return 3223192399LL;
  }
  else if ( DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(this, a2) )
  {
    *((_DWORD *)this + 43) = v2;
    return 0LL;
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v11[3] = v2;
    v11[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v11[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdDmmEvent(v11);
    return 3223192326LL;
  }
}
