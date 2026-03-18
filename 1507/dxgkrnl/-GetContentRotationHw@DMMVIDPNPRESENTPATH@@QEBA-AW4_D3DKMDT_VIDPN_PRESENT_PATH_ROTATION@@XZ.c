/*
 * XREFs of ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00B7350
 * Callers:
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C005FA7C (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089CE8 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B6F10 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0174978 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C0177438 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetContentRotationHw(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edx
  bool v6; // zf
  __int64 result; // rax

  v4 = *((_DWORD *)this + 29);
  if ( !v4 )
    return *((unsigned int *)this + 29);
  if ( (unsigned int)(v4 - 254) <= 1 )
    return *((unsigned int *)this + 29);
  v6 = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(
         *(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL),
         *((_QWORD *)this + 12),
         a3,
         a4) == 0;
  result = 1LL;
  if ( v6 )
    return *((unsigned int *)this + 29);
  return result;
}
