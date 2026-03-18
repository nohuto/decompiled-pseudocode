/*
 * XREFs of ?xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z @ 0x14029A110
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F9A48 (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14025A0C4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z @ 0x14029A1CC (-xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CDispBrokerRotationMgr::xxxSetAutoRotationStateInternal(CDispBrokerRotationMgr *this, int a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // rbx
  unsigned int v5; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // [rsp+30h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // [rsp+38h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(v7) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x4Bu, 0, &v8, (unsigned __int8 *)&v7);
  v4 = v8;
  v5 = CRotationMgr::xxxSetAutoRotationStateInternal(this, a2);
  CDispBrokerRotationMgr::RequestAsyncRefreshOrientation(this, v4);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v7);
  return v5;
}
