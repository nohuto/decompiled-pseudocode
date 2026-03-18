/*
 * XREFs of ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00B1450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkSharedSyncObjectObDeleteProcedure(struct DXGSYNCOBJECT **a1, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *Global; // rax
  __int64 v6; // r9

  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  DXGGLOBAL::DestroySyncObject(Global, *a1, 0LL, v6);
}
