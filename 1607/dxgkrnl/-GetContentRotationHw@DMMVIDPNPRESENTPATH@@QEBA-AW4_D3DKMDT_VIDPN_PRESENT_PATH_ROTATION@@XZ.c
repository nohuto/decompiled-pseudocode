/*
 * XREFs of ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C0081114
 * Callers:
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C007FE94 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B9AE8 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00B9E40 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C01A2934 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01A4E2C (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0080DB4 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetContentRotationHw(DMMVIDPNPRESENTPATH *this)
{
  int v1; // edx
  bool v3; // zf
  __int64 result; // rax

  v1 = *((_DWORD *)this + 29);
  if ( !v1 )
    return *((unsigned int *)this + 29);
  if ( (unsigned int)(v1 - 254) <= 1 )
    return *((unsigned int *)this + 29);
  v3 = !DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(this);
  result = 1LL;
  if ( v3 )
    return *((unsigned int *)this + 29);
  return result;
}
