/*
 * XREFs of ?OnDeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x180083770
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::OnDeliverInput(
        InputRedirectionTarget *this,
        struct InputInfo *a2,
        enum InputBufferingDecision *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r9d

  if ( a2 )
  {
    if ( !a3 )
    {
      LOBYTE(v3) = 87;
      v4 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v5 = 159;
      goto LABEL_4;
    }
    if ( !*((_BYTE *)this + 40) )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 168, 255);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    *(_DWORD *)a3 = 2;
    v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 24LL))((char *)this - 8);
    v4 = v3;
    if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 164;
      goto LABEL_4;
    }
  }
  else
  {
    LOBYTE(v3) = 87;
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 158;
LABEL_4:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, v3);
    }
  }
  return v4;
}
