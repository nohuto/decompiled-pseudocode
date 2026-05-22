/*
 * XREFs of ?NotifyInputReportCallback@WGIController@@CAJPEAX@Z @ 0x1800636D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIController::NotifyInputReportCallback(char *Block)
{
  unsigned int v2; // edi
  int v3; // r9d
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !Block )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v3 = 679;
    goto LABEL_4;
  }
  v4 = *(_QWORD *)Block;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 24LL))(v4, Block + 8);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 682, v5);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v3 = 680;
LABEL_4:
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, v3, 87);
    }
  }
LABEL_14:
  if ( Block )
  {
    v7 = *(_QWORD *)Block;
    *(_QWORD *)Block = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    operator delete(Block);
  }
  return v2;
}
