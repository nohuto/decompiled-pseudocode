/*
 * XREFs of ?DxgkSqmThread@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C014B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SqmUpdate@DXGGLOBAL@@QEAAXXZ @ 0x1C014B788 (-SqmUpdate@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateSQMDataForAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0156A5C (-UpdateSQMDataForAllSessions@DXGSESSIONMGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSqmThread(__int64 DeviceObject, __int64 Context, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  if ( !pDxgkSqmControl )
  {
    v4 = WdLogNewEntry5_WdAssertion(DeviceObject, Context, a3, a4);
    *(_QWORD *)(v4 + 24) = 1147LL;
    WdLogEvent5_WdAssertion(v4);
  }
  Global = DXGGLOBAL::GetGlobal(DeviceObject, Context, a3, a4);
  DXGGLOBAL::SqmUpdate(Global);
  v10 = DXGGLOBAL::GetGlobal(v7, v6, v8, v9);
  DXGSESSIONMGR::UpdateSQMDataForAllSessions(*((DXGSESSIONMGR **)v10 + 70));
  if ( _InterlockedExchange((volatile __int32 *)pDxgkSqmControl + 40, 0) != 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 1154LL;
    WdLogEvent5_WdAssertion(v15);
  }
  KeSetEvent((PRKEVENT)pDxgkSqmControl + 3, 0, 0);
}
