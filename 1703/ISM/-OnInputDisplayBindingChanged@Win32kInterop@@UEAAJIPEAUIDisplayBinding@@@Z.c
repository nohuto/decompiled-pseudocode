/*
 * XREFs of ?OnInputDisplayBindingChanged@Win32kInterop@@UEAAJIPEAUIDisplayBinding@@@Z @ 0x18000B1B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::OnInputDisplayBindingChanged(
        Win32kInterop *this,
        char a2,
        struct IDisplayBinding *a3)
{
  signed int v4; // ebx
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  if ( (a2 & 2) == 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(struct IDisplayBinding *))(*(_QWORD *)a3 + 32LL))(a3) == 1 )
  {
    if ( !*((_BYTE *)this + 24) )
    {
      if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
      {
        v4 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( v4 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_15;
          v6 = 157;
          goto LABEL_14;
        }
      }
      *((_BYTE *)this + 24) = 1;
    }
  }
  else
  {
    if ( *((_BYTE *)this + 24) )
    {
      if ( !(unsigned int)MITDisableMouseIntercept() )
      {
        v4 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( v4 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          {
LABEL_15:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v6 = 168;
LABEL_14:
          Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v6, v4);
          goto LABEL_15;
        }
      }
      *((_BYTE *)this + 24) = 0;
    }
    v7 = *((_QWORD *)this + 4);
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 72LL))(v7, &v19);
    v4 = v8;
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 176, v8);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v18 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 40LL))(v19, &v18) >= 0 )
    {
      v10 = *((_QWORD *)this + 4);
      v11 = *((_QWORD *)this + 9);
      v20 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 80LL))(v10, v11, &v20);
      v4 = v12;
      if ( v12 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 186, v12);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, v20);
      v14 = v20;
      v20 = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v18;
    v18 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = v19;
    v19 = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v4;
}
