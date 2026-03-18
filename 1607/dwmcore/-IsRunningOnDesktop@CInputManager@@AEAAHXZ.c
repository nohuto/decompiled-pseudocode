/*
 * XREFs of ?IsRunningOnDesktop@CInputManager@@AEAAHXZ @ 0x1800A81FC
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180009E90 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A8230 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     IsCreateSystemInputHostPresent @ 0x1800BF14C (IsCreateSystemInputHostPresent.c)
 */

__int64 __fastcall CInputManager::IsRunningOnDesktop(CInputManager *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !(unsigned __int8)IsCreateSystemInputHostPresent(this) )
    return 1LL;
  LOBYTE(v1) = (unsigned int)IsSystemInputHostStandalone() == 0;
  return v1;
}
