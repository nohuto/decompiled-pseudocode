/*
 * XREFs of ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800634B4
 * Callers:
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x180062810 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x180062930 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 *     ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x180062A40 (-OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatu.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x180062CC4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WGIController::NotifyInputReport(WGIController *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rdi
  unsigned int v4; // edi
  int v5; // r9d
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  _OWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx

  v2 = a2;
  if ( a2 )
  {
    v6 = operator new(0x768uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x768uLL);
      *v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v5 = 656;
      goto LABEL_4;
    }
    v8 = *((_QWORD *)this + 11);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 11));
    if ( *v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
    *v7 = v8;
    v9 = v7 + 1;
    v10 = 14LL;
    do
    {
      *v9 = *(_OWORD *)v2;
      v9[1] = *((_OWORD *)v2 + 1);
      v9[2] = *((_OWORD *)v2 + 2);
      v9[3] = *((_OWORD *)v2 + 3);
      v9[4] = *((_OWORD *)v2 + 4);
      v9[5] = *((_OWORD *)v2 + 5);
      v9[6] = *((_OWORD *)v2 + 6);
      v9 += 8;
      *(v9 - 1) = *((_OWORD *)v2 + 7);
      v2 = (struct InputInfo *)((char *)v2 + 128);
      --v10;
    }
    while ( v10 );
    *v9 = *(_OWORD *)v2;
    v9[1] = *((_OWORD *)v2 + 1);
    v9[2] = *((_OWORD *)v2 + 2);
    v9[3] = *((_OWORD *)v2 + 3);
    v9[4] = *((_OWORD *)v2 + 4);
    v9[5] = *((_OWORD *)v2 + 5);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**((_QWORD **)this + 12)
                                                                                               + 128LL))(
            *((_QWORD *)this + 12),
            WGIController::NotifyInputReportCallback,
            v7,
            4LL);
    v4 = v11;
    if ( v11 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 664, v11);
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
      v5 = 653;
LABEL_4:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return v4;
}
