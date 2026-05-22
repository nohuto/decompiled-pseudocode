/*
 * XREFs of ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z @ 0x180035394
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034910 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x180034FE8 (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        double a3,
        __int16 a4,
        unsigned __int16 a5)
{
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int v11; // ebx

  if ( a3 < 0.71 )
  {
    if ( a3 <= 0.6899999999999999 )
    {
      if ( a3 < -0.6899999999999999 )
      {
        if ( a3 <= -0.71 )
        {
          v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 0);
          if ( v8 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_30;
            v10 = 2296;
            goto LABEL_29;
          }
          v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 1);
          v11 = v8;
          if ( v8 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_30;
            v10 = 2301;
LABEL_29:
            Template_qqq(v9, &MinInput_Warning_CheckResult, 12, v10, v8);
LABEL_30:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
        }
        else
        {
          v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 0);
          v11 = v8;
          if ( v8 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_30;
            v10 = 2278;
            goto LABEL_29;
          }
        }
      }
      else
      {
        v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 0);
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_30;
          v10 = 2259;
          goto LABEL_29;
        }
        v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 0);
        v11 = v8;
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_30;
          v10 = 2264;
          goto LABEL_29;
        }
      }
    }
    else
    {
      v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 0);
      v11 = v8;
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_30;
        v10 = 2245;
        goto LABEL_29;
      }
    }
  }
  else
  {
    v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 0);
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v10 = 2222;
      goto LABEL_29;
    }
    v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 1);
    v11 = v8;
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v10 = 2227;
      goto LABEL_29;
    }
  }
  return v11;
}
