/*
 * XREFs of ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034DF8
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800326C0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035284 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(
        ControllerProcessor *this,
        struct InputInfo *a2)
{
  char v2; // r14
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // r9d

  v2 = *((_BYTE *)a2 + 768);
  v5 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, 196LL);
  if ( v5 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v7 = 1896;
    goto LABEL_4;
  }
  v5 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  if ( v5 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_5:
      if ( IsDebuggerPresent() )
        __debugbreak();
      goto LABEL_31;
    }
    v7 = 1901;
LABEL_4:
    Template_qqq(v6, &MinInput_Warning_CheckResult, 12, v7, v5);
    goto LABEL_5;
  }
  v8 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_29;
    v11 = 1906;
    goto LABEL_28;
  }
  if ( (*((_BYTE *)this + 312) & 0x40) != 0 && !v2 )
  {
    v8 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 38LL);
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_29;
      v11 = 1918;
      goto LABEL_28;
    }
    v8 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 40LL);
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_29;
      v11 = 1923;
      goto LABEL_28;
    }
    v8 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 37LL);
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_29;
      v11 = 1928;
      goto LABEL_28;
    }
    v8 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 39LL);
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_29;
      v11 = 1933;
LABEL_28:
      Template_qqq(v9, &MinInput_Warning_CheckResult, 12, v11, v8);
LABEL_29:
      if ( IsDebuggerPresent() )
        __debugbreak();
LABEL_31:
      __fastfail(7u);
    }
  }
  return v10;
}
