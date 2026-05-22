/*
 * XREFs of ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035284
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034910 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034DF8 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x180034FE8 (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::TestButtonAndSetVirtualKeyState(__int64 a1, __int64 a2, int a3, __int16 a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d

  if ( (a3 & *(_DWORD *)(a2 + 712)) != 0 )
  {
    v4 = ControllerProcessor::SetVirtualKeyState(a1, (struct InputInfo *)a2, a4, 1);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_9;
      v7 = 2021;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = ControllerProcessor::SetVirtualKeyState(a1, (struct InputInfo *)a2, a4, 0);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_9;
      v7 = 2028;
LABEL_8:
      Template_qqq(v5, &MinInput_Warning_CheckResult, 12, v7, v4);
LABEL_9:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return v6;
}
