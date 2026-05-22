/*
 * XREFs of ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180032A40
 * Callers:
 *     ?NavigationDisable@ControllerNavigationManager@@UEAAJXZ @ 0x1800312C0 (-NavigationDisable@ControllerNavigationManager@@UEAAJXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84 (--1ControllerProcessor@@MEAA@XZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationDisable(ControllerProcessor *this)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v2, &MinInput_Warning_CheckResult, 12, 669, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
