/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180005DF8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Create@GestureTargetingComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x18000D858 (-Create@GestureTargetingComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002FF30 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x180058C14 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x1800686A0 (-RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1.c)
 *     ?Create@MagnifierComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x180080FC8 (-Create@MagnifierComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18000984C (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegistryWatcher::Create(
        __int64 a1,
        const unsigned __int16 *a2,
        void *a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  signed int v8; // ebx
  int v9; // r9d
  char *v10; // rax
  char *v11; // rdi
  int v12; // eax
  void *v13; // rcx
  int v14; // r9d
  LSTATUS v15; // eax
  __int64 v16; // rcx
  HANDLE EventA; // rax
  __int64 v18; // rcx
  HKEY v19; // rcx

  if ( a5 )
  {
    v10 = (char *)malloc(0x38uLL);
    v11 = v10;
    if ( v10 )
      memset(v10, 0, 0x38uLL);
    if ( !v11 )
    {
      v8 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v8;
      v9 = 114;
      goto LABEL_4;
    }
    *(_QWORD *)v11 = &RefCountedObject::`vftable';
    *(_QWORD *)v11 = &RegistryWatcher::`vftable';
    *((_DWORD *)v11 + 2) = 1;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 5) = a3;
    *((_QWORD *)v11 + 6) = a4;
    v12 = CoreUICreate(v11 + 16);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v15 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a2, 0, 0x20019u, (PHKEY)v11 + 3);
      v8 = (unsigned __int16)v15 | 0x80070000;
      if ( v15 <= 0 )
        v8 = v15;
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v16, &MinInput_Warning_CheckResult, 0, 61, v8);
        goto LABEL_33;
      }
      EventA = CreateEventA(0LL, 0, 0, 0LL);
      *((_QWORD *)v11 + 4) = EventA;
      if ( !EventA )
      {
        v8 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 66, v8);
          goto LABEL_33;
        }
      }
      v12 = RegistryWatcher::OnKeyChange((RegistryWatcher *)v11);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), char *))(**((_QWORD **)v11 + 2) + 272LL))(
                *((_QWORD *)v11 + 2),
                1LL,
                *((_QWORD *)v11 + 4),
                RegistryWatcher::OnChangeCallbackStatic,
                v11);
        v8 = v12;
        if ( v12 >= 0 )
        {
LABEL_37:
          if ( v8 >= 0 )
          {
            *a5 = (struct RegistryWatcher *)v11;
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq((__int64)v13, &MinInput_Warning_CheckResult, 0, 117, v8);
          }
          if ( v8 < 0 )
            (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
          return (unsigned int)v8;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v14 = 74;
          goto LABEL_32;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v14 = 68;
        goto LABEL_32;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v14 = 53;
LABEL_32:
      Template_qqq((__int64)v13, &MinInput_Warning_CheckResult, 0, v14, v12);
    }
LABEL_33:
    v19 = (HKEY)*((_QWORD *)v11 + 3);
    if ( v19 )
    {
      RegCloseKey(v19);
      *((_QWORD *)v11 + 3) = 0LL;
    }
    v13 = (void *)*((_QWORD *)v11 + 4);
    if ( v13 )
    {
      CloseHandle(v13);
      *((_QWORD *)v11 + 4) = 0LL;
    }
    goto LABEL_37;
  }
  v8 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 107;
LABEL_4:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v9, v8);
  }
  return (unsigned int)v8;
}
