/*
 * XREFs of ?NavigationPause@ControllerNavigationManager@@UEAAJXZ @ 0x1800311A0
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180030938 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerNavigationManager::NavigationPause(ControllerNavigationManager *this)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  int updated; // eax
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    updated = ControllerProcessor::UpdateNavigationState(i[3], 1LL, 0LL, 0LL);
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 12, 643, updated);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  result = 0LL;
  *((_BYTE *)this + 73) = 1;
  return result;
}
