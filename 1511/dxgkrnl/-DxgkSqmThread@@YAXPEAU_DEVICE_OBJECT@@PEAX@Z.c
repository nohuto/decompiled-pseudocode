/*
 * XREFs of ?DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0150040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SqmUpdate@DXGGLOBAL@@QEAAXXZ @ 0x1C01504D8 (-SqmUpdate@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateSQMDataForAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015AD74 (-UpdateSQMDataForAllSessions@DXGSESSIONMGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSqmThread(__int64 DeviceObject, PVOID Context)
{
  __int64 v2; // rax
  DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  struct DXGGLOBAL *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( !pDxgkSqmControl )
  {
    v2 = WdLogNewEntry5_WdAssertion(DeviceObject);
    *(_QWORD *)(v2 + 24) = 1147LL;
    WdLogEvent5_WdAssertion(v2);
  }
  Global = DXGGLOBAL::GetGlobal(DeviceObject);
  DXGGLOBAL::SqmUpdate(Global);
  v5 = DXGGLOBAL::GetGlobal(v4);
  DXGSESSIONMGR::UpdateSQMDataForAllSessions(*((DXGSESSIONMGR **)v5 + 88));
  if ( _InterlockedExchange((volatile __int32 *)pDxgkSqmControl + 40, 0) != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 1154LL;
    WdLogEvent5_WdAssertion(v7);
  }
  KeSetEvent((PRKEVENT)pDxgkSqmControl + 3, 0, 0);
}
