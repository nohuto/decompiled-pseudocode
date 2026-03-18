/*
 * XREFs of ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C54C
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008E6C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C009148C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00BE454 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00C2644 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0178F54 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C017B8A0 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017F650 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall auto_ptr<DMMVIDPNPRESENTPATH>::reset(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( a2 != v4 && v4 )
    result = (**v4)(v4, 1LL);
  *a1 = a2;
  return result;
}
