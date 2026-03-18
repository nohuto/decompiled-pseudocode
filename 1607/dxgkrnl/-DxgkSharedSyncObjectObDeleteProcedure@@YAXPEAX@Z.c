/*
 * XREFs of ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C00DAEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkSharedSyncObjectObDeleteProcedure(struct DXGSYNCOBJECT **a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::DestroySyncObject(Global, *a1, 0, 0);
}
