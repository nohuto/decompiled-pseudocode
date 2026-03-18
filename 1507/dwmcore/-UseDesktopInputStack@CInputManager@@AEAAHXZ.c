/*
 * XREFs of ?UseDesktopInputStack@CInputManager@@AEAAHXZ @ 0x18008A750
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18000A1B0 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180069430 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?s_InputThreadMain@CInputManager@@CAKPEAX@Z @ 0x1800921E0 (-s_InputThreadMain@CInputManager@@CAKPEAX@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180092CBC (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x180129228 (--1CInputManager@@MEAA@XZ.c)
 *     ?ShutDownInputThread@CInputManager@@IEAAXXZ @ 0x1801293BC (-ShutDownInputThread@CInputManager@@IEAAXXZ.c)
 * Callees:
 *     IsCreateSystemInputHostPresent @ 0x1800997F0 (IsCreateSystemInputHostPresent.c)
 */

_BOOL8 __fastcall CInputManager::UseDesktopInputStack(CInputManager *this)
{
  return (unsigned __int8)IsCreateSystemInputHostPresent(this) == 0;
}
