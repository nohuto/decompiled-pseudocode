/*
 * XREFs of ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180172690
 * Callers:
 *     <none>
 * Callees:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180009E90 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 */

bool __fastcall CInputProxy::HitTestRequest(CInputProxy *this, struct tagDITCALLBACKSTRUCT *a2)
{
  return (unsigned int)CInputManager::s_HitTestRequest(a2, (int)a2) != 0;
}
