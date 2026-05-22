/*
 * XREFs of ?TransitionToDisabled@ControllerProcessor@@AEAAJXZ @ 0x180032F2C
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032A9C (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     Template_qq @ 0x18000D5D4 (Template_qq.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToDisabled(ControllerProcessor *this)
{
  bool v2; // zf

  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  v2 = *((_BYTE *)this + 1512) == 0;
  *((_BYTE *)this + 368) = 0;
  if ( !v2 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 8) != 0 )
      Template_qq((__int64)this, &MinInput_Log_ControllerNavigationDisabled, 12, *((unsigned __int8 *)this + 232));
    *((_BYTE *)this + 1512) = 0;
  }
  return 0LL;
}
