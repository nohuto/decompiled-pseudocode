/*
 * XREFs of ?ProcessPnpNotification@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_PnpNotification@@@Z @ 0x18000B40C
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18000C250 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x18000C9E8 (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x18000CAA0 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?RemoveKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z @ 0x18000CC88 (-RemoveKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

int __fastcall Win32kInterop::ProcessPnpNotification(_DWORD *a1, int a2, int *a3)
{
  struct Win32kInterop *v3; // rdi
  unsigned __int64 v4; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  bool v12; // zf
  _DWORD *v13; // rsi
  _DWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  v3 = Win32kInterop::s_pInterop;
  v4 = 1LL << gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    return v4;
  v15 = 0LL;
  if ( a3[1] != 2 )
  {
    if ( a3[1] != 3 )
      return v4;
    if ( !a2 )
    {
      v12 = (*((_BYTE *)Win32kInterop::s_pInterop + 88))-- == 1;
      if ( !v12 )
        return v4;
      v13 = (_DWORD *)*((_QWORD *)v3 + 10);
      goto LABEL_54;
    }
    LODWORD(v4) = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey(
                    (char *)Win32kInterop::s_pInterop + 56,
                    a3,
                    &v15);
    if ( (v4 & 0x80000000) != 0LL )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_71;
      v11 = 373;
      goto LABEL_70;
    }
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        v13 = v15;
LABEL_54:
        LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v3 + 6) + 48LL))(
                        *((_QWORD *)v3 + 6),
                        v13);
        if ( (v4 & 0x80000000) != 0LL )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_71;
          v11 = 384;
          goto LABEL_70;
        }
LABEL_58:
        if ( !a2 )
        {
          *((_QWORD *)v3 + 10) = 0LL;
          v4 = (unsigned __int64)(1LL << gdwDeviceFamily) >> 10;
          if ( ((1LL << gdwDeviceFamily) & 0x400) != 0 )
          {
            LODWORD(v4) = MITDisableMouseIntercept();
            if ( !(_DWORD)v4 )
            {
              LODWORD(v4) = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
              if ( (v4 & 0x80000000) != 0LL )
              {
                if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                  goto LABEL_71;
                v11 = 396;
                goto LABEL_70;
              }
            }
          }
          return v4;
        }
LABEL_67:
        LODWORD(v4) = DynamicSizeMap<unsigned long,DeviceInfo *,1>::RemoveKey((char *)v3 + 56, v13);
        if ( (v4 & 0x80000000) != 0LL )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_71;
          v11 = 403;
          goto LABEL_70;
        }
        return v4;
      }
      if ( a2 == 2 )
      {
        v13 = v15;
        LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v3 + 5) + 32LL))(
                        *((_QWORD *)v3 + 5),
                        v15);
        if ( (v4 & 0x80000000) != 0LL )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_71;
          v11 = 380;
          goto LABEL_70;
        }
        goto LABEL_67;
      }
    }
    v13 = v15;
    goto LABEL_58;
  }
  if ( !a2 )
  {
    ++*((_BYTE *)Win32kInterop::s_pInterop + 88);
    if ( *((_BYTE *)v3 + 88) != 1 )
      return v4;
  }
  v7 = operator new(0x38uLL);
  memset(v7, 0, 0x38uLL);
  v15 = v7;
  if ( !v7 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 301, 3);
LABEL_71:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( a2 )
    v9 = *a3;
  else
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 6) + 32LL))(*((_QWORD *)v3 + 6));
  *v7 = v9;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v7[1] = 4;
LABEL_16:
      LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, struct Win32kInterop *))(**((_QWORD **)v3 + 6) + 40LL))(
                      *((_QWORD *)v3 + 6),
                      v7,
                      v3);
      if ( (v4 & 0x80000000) != 0LL )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_71;
        v11 = 333;
LABEL_70:
        Template_qqq(v10, &MinInput_Warning_CheckResult, 0, v11, v4);
        goto LABEL_71;
      }
      goto LABEL_26;
    }
    if ( a2 == 2 )
    {
      v7[1] = 8;
      LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v3 + 5) + 24LL))(
                      *((_QWORD *)v3 + 5),
                      v7);
      if ( (v4 & 0x80000000) != 0LL )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_71;
        v11 = 329;
        goto LABEL_70;
      }
      goto LABEL_37;
    }
  }
  else
  {
    v7[1] = 2;
  }
  v12 = a2 == 0;
  if ( a2 < 0 )
    goto LABEL_27;
  if ( a2 <= 1 )
    goto LABEL_16;
LABEL_26:
  v12 = a2 == 0;
LABEL_27:
  if ( !v12 )
  {
LABEL_37:
    LODWORD(v4) = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey((char *)v3 + 56, v7, &v15);
    if ( (v4 & 0x80000000) != 0LL )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_71;
      v11 = 353;
      goto LABEL_70;
    }
    return v4;
  }
  v4 = (unsigned __int64)(1LL << gdwDeviceFamily) >> 10;
  if ( ((1LL << gdwDeviceFamily) & 0x400) != 0 )
  {
    LODWORD(v4) = MITEnableMouseIntercept(1LL);
    if ( !(_DWORD)v4 )
    {
      LODWORD(v4) = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
      if ( (v4 & 0x80000000) != 0LL )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_71;
        v11 = 343;
        goto LABEL_70;
      }
    }
  }
  *((_QWORD *)v3 + 10) = v7;
  return v4;
}
