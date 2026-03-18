/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C008AB14
 * Callers:
 *     ?DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C0004840 (-DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00854A0 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00A7870 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C00DF6C0 (-DxgkGetMaximumAdapterCount@@YAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  if ( !*((_DWORD *)this + 196) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1189LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return *((unsigned int *)this + 196);
}
