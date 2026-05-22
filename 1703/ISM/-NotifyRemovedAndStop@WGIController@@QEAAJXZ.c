/*
 * XREFs of ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x18006260C
 * Callers:
 *     ?OnUINavigationControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z @ 0x180061130 (-OnUINavigationControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationCo.c)
 *     ??1WGIController@@UEAA@XZ @ 0x180061EF8 (--1WGIController@@UEAA@XZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIController::NotifyRemovedAndStop(WGIController *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  int v8; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 15) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 152LL))(
           *((_QWORD *)this + 8),
           this);
    if ( v3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 139, v3);
      goto LABEL_5;
    }
    v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      *v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 11);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 11));
      if ( *v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
      *v6 = v7;
      v6[1] = *((_QWORD *)this + 15);
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**((_QWORD **)this + 12)
                                                                                                + 128LL))(
             *((_QWORD *)this + 12),
             WGIController::NotifyDeviceRemovalCallback,
             v6,
             4LL);
      v2 = v8;
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 616, v8);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    else
    {
      v2 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 608, 14);
    }
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 140, v2);
LABEL_5:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  return (unsigned int)v2;
}
