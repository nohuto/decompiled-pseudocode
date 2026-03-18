/*
 * XREFs of DxgkAddAdapter @ 0x1C00D4230
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 */

__int64 __fastcall DxgkAddAdapter(struct _DEVICE_OBJECT *a1, struct _DXGK_ADAPTER_CAPS *a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v6; // rax
  struct DXGADAPTER *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 120LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  return DXGGLOBAL::CreateAdapter(Global, a1, &v7, a2);
}
