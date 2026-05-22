/*
 * XREFs of ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z @ 0x180063080
 * Callers:
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x180062524 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WGIController::NotifyDeviceAttach(WGIController *this, struct IRawInputProvider *a2)
{
  unsigned int v4; // edi
  int v5; // r9d
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      *v6 = 0LL;
      v6[1] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v5 = 567;
      goto LABEL_4;
    }
    v7 = *((_QWORD *)this + 11);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 11));
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
    *v6 = v7;
    (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = v6[1];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v6[1] = a2;
    v6[2] = *((_QWORD *)this + 15);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**((_QWORD **)this + 12)
                                                                                              + 128LL))(
           *((_QWORD *)this + 12),
           WGIController::NotifyDeviceAttachCallback,
           v6,
           4LL);
    v4 = v9;
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 576, v9);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 564;
LABEL_4:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return v4;
}
