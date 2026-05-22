/*
 * XREFs of ?EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z @ 0x18006F510
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CreateInjectionDevices@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x18006FE7C (-CreateInjectionDevices@LegacyInjectionRawInputProvider@@AEAAJXZ.c)
 *     ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x1800700D8 (-FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::EnableInputInjection(
        LegacyInjectionRawInputProvider *this,
        char a2,
        char a3)
{
  unsigned int v3; // edi
  int InjectionDevices; // eax
  int v8; // r9d
  HANDLE v9; // rax
  void *v10; // rbx
  HANDLE v12; // rax
  void *v13; // r15
  bool v14; // zf
  HANDLE v15; // rax
  void *v16; // rsi

  v3 = 0;
  if ( (a2 & 1) != 0 )
  {
    v3 = -2147467263;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 212, 1);
    return v3;
  }
  if ( (a2 & 2) == 0 )
    goto LABEL_25;
  if ( (gdwMitConfig & 4) == 0 )
  {
    if ( a3 )
    {
      *((_BYTE *)this + 72) = 1;
      if ( !*((_QWORD *)this + 10) )
      {
        InjectionDevices = LegacyInjectionRawInputProvider::CreateInjectionDevices(this);
        v3 = InjectionDevices;
        if ( InjectionDevices < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 223;
LABEL_44:
            Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v8, InjectionDevices);
            return v3;
          }
          return v3;
        }
      }
      ++*((_BYTE *)this + 88);
    }
    else
    {
      if ( !*((_BYTE *)this + 72) )
      {
        LOBYTE(InjectionDevices) = -1;
        v3 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 260;
          goto LABEL_44;
        }
        return v3;
      }
      if ( *((_BYTE *)this + 88) == 1 )
        *((_BYTE *)this + 72) = 0;
      v12 = OpenEventW(2u, 0, L"Test_Touch_Disconnect_Sync_Event");
      v13 = v12;
      if ( v12 )
      {
        SetEvent(v12);
        CloseHandle(v13);
      }
      --*((_BYTE *)this + 88);
    }
    if ( (gdwMitConfig & 4) == 0 )
    {
LABEL_25:
      if ( (a2 & 4) == 0 )
        return v3;
      if ( !a3 )
      {
        if ( *((_BYTE *)this + 104) )
        {
          if ( *((_BYTE *)this + 120) == 1 )
            *((_BYTE *)this + 104) = 0;
          v15 = OpenEventW(2u, 0, L"Test_Keyboard_Disconnect_Sync_Event");
          v16 = v15;
          if ( v15 )
          {
            SetEvent(v15);
            CloseHandle(v16);
          }
          --*((_BYTE *)this + 120);
          return v3;
        }
        LOBYTE(InjectionDevices) = -1;
        v3 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 339;
          goto LABEL_44;
        }
        return v3;
      }
      v14 = *((_QWORD *)this + 14) == 0LL;
      *((_BYTE *)this + 104) = 1;
      if ( v14 )
      {
        InjectionDevices = LegacyInjectionRawInputProvider::CreateInjectionDevices(this);
        v3 = InjectionDevices;
        if ( InjectionDevices < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 297;
            goto LABEL_44;
          }
          return v3;
        }
        if ( *((_BYTE *)this + 89) )
        {
          InjectionDevices = LegacyInjectionRawInputProvider::FindRemoteProxy(this);
          v3 = InjectionDevices;
          if ( InjectionDevices < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v8 = 301;
              goto LABEL_44;
            }
            return v3;
          }
        }
      }
      ++*((_BYTE *)this + 120);
      return v3;
    }
  }
  if ( !a3 )
  {
    v9 = OpenEventW(2u, 0, L"Test_Touch_Disconnect_Sync_Event");
    v10 = v9;
    if ( v9 )
    {
      SetEvent(v9);
      CloseHandle(v10);
    }
  }
  return 0LL;
}
