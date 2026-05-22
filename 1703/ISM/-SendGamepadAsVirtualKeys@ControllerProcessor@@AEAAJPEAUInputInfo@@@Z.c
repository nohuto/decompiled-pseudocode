/*
 * XREFs of ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034910
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800326C0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035284 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x180035308 (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z @ 0x180035394 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeys(ControllerProcessor *this, struct InputInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // r9d

  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1LL, 207LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v6 = 1762;
    goto LABEL_4;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1767;
LABEL_4:
      Template_qqq(v5, &MinInput_Warning_CheckResult, 12, v6, v4);
      goto LABEL_5;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4LL, 195LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1772;
      goto LABEL_4;
    }
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_71;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, 196LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1777;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 16LL, 197LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1782;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 32LL, 198LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1787;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 203LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1792;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 204LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1797;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 205LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1802;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 206LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1807;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1024LL, 200LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1812;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2048LL, 199LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1817;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4096LL, 209LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1822;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x2000LL, 210LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 1827;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  LODWORD(result) = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_69;
    v9 = 1832;
    goto LABEL_68;
  }
  LODWORD(result) = ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 90), 0xC9u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_69;
    v9 = 1841;
    goto LABEL_68;
  }
  LODWORD(result) = ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 91), 0xCAu);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_69;
    v9 = 1846;
    goto LABEL_68;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 93),
                      0xD3u,
                      0xD4u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_69;
    v9 = 1856;
    goto LABEL_68;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 92),
                      0xD5u,
                      0xD6u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_69;
    v9 = 1862;
    goto LABEL_68;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 95),
                      0xD7u,
                      0xD8u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_69;
    v9 = 1868;
    goto LABEL_68;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 94),
                      0xD9u,
                      0xDAu);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_69;
    v9 = 1874;
LABEL_68:
    Template_qqq(v8, &MinInput_Warning_CheckResult, 12, v9, result);
LABEL_69:
    if ( IsDebuggerPresent() )
      __debugbreak();
LABEL_71:
    __fastfail(7u);
  }
  return (unsigned int)result;
}
