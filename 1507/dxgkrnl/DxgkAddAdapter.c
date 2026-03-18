/*
 * XREFs of DxgkAddAdapter @ 0x1C00C3DC0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 */

__int64 __fastcall DxgkAddAdapter(struct _DEVICE_OBJECT *a1, struct _DXGK_ADAPTER_CAPS *a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v8; // rax
  struct DXGADAPTER *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 120LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, a3, a4);
  return DXGGLOBAL::CreateAdapter(Global, a1, &v9, a2);
}
