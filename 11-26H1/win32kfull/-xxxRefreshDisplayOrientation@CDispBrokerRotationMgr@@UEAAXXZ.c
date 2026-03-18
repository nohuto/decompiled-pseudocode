/*
 * XREFs of ?xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ @ 0x1400F9570
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ @ 0x1400F9598 (-xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ.c)
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F9A48 (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 */

void __fastcall CDispBrokerRotationMgr::xxxRefreshDisplayOrientation(CDispBrokerRotationMgr *this)
{
  CRotationMgr::xxxRefreshDisplayOrientation(this);
  CDispBrokerRotationMgr::RequestAsyncRefreshOrientation(this, 0LL);
}
