/*
 * XREFs of ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x180035308
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034910 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x180034FE8 (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::TestTriggerAndSetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        double a3,
        __int16 a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d

  v4 = 0;
  if ( a3 < 0.1275 )
  {
    if ( a3 <= 0.1075 )
    {
      v5 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 0);
      v4 = v5;
      if ( v5 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_10;
        v7 = 2131;
LABEL_9:
        Template_qqq(v6, &MinInput_Warning_CheckResult, 12, v7, v5);
LABEL_10:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
  }
  else
  {
    v5 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 1);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_10;
      v7 = 2106;
      goto LABEL_9;
    }
  }
  return v4;
}
