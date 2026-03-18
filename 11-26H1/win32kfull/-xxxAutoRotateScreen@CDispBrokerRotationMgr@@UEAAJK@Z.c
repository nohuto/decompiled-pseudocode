/*
 * XREFs of ?xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z @ 0x140299FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F9A48 (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14025A0C4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CDispBrokerRotationMgr::xxxAutoRotateScreen(CDispBrokerRotationMgr *this)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // [rsp+30h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // [rsp+38h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(v3) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x12u, 0, &v4, (unsigned __int8 *)&v3);
  CDispBrokerRotationMgr::RequestAsyncRefreshOrientation(this, v4);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v3);
  return 0LL;
}
