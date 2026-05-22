/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800326C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_qq @ 0x18000D5D4 (Template_qq.c)
 *     ?GetDisplayInformation@ControllerProcessor@@AEAAJXZ @ 0x1800328EC (-GetDisplayInformation@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsPointerMappings@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180033534 (-SendGamepadAsPointerMappings@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003444C (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034910 (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034DF8 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::OnInputReport(ControllerProcessor *this, struct InputInfo *a2)
{
  int DisplayInformation; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int updated; // eax
  __int64 v8; // rcx
  int v9; // r9d

  DisplayInformation = ControllerProcessor::GetDisplayInformation(this);
  v6 = DisplayInformation;
  if ( DisplayInformation >= 0 )
  {
    if ( (*(_BYTE *)a2 & 0x40) != 0 )
    {
      if ( *((_DWORD *)this + 59) )
      {
        updated = ControllerProcessor::SendGamepadAsVirtualKeys(this, a2);
        v6 = updated;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_33;
          v9 = 486;
          goto LABEL_32;
        }
      }
      else
      {
        if ( !*((_BYTE *)this + 1512) )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 8) != 0 )
            Template_qq(v5, &MinInput_Log_ControllerNavigationEnabled, 12, *((unsigned __int8 *)a2 + 768));
          *((_BYTE *)this + 1512) = 1;
        }
        updated = ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(this, a2);
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_33;
          v9 = 512;
          goto LABEL_32;
        }
        updated = ControllerProcessor::SendGamepadAsPointerMappings(this, a2);
        v6 = updated;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_33;
          v9 = 516;
          goto LABEL_32;
        }
        if ( *((_DWORD *)this + 78) )
        {
          updated = ControllerProcessor::UpdatePointerTimer(this, a2);
          v6 = updated;
          if ( updated < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_33;
            v9 = 525;
            goto LABEL_32;
          }
        }
      }
      *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 44);
      *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 45);
      *(_OWORD *)((char *)this + 200) = *((_OWORD *)a2 + 46);
      *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 47);
      *((_BYTE *)this + 232) = *((_BYTE *)a2 + 768);
      return v6;
    }
    if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 30) + 48LL))(
                  *((_QWORD *)this + 30),
                  a2);
      v6 = updated;
      if ( updated >= 0 )
        return v6;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 543;
LABEL_32:
        Template_qqq(v8, &MinInput_Warning_CheckResult, 12, v9, updated);
      }
    }
    else
    {
      if ( *(char *)a2 >= 0 )
        return v6;
      updated = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 31) + 48LL))(
                  *((_QWORD *)this + 31),
                  a2);
      v6 = updated;
      if ( updated >= 0 )
        return v6;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 552;
        goto LABEL_32;
      }
    }
LABEL_33:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v5, &MinInput_Warning_CheckResult, 12, 475, DisplayInformation);
  return v6;
}
