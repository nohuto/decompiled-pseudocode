/*
 * XREFs of ?NotifyDeviceAttachCallback@WGIController@@CAJPEAX@Z @ 0x180063260
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WGIController::NotifyDeviceAttachCallback(__int64 Block)
{
  __int64 *v1; // rbx
  unsigned int v2; // edi
  int v3; // r9d
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = (__int64 *)Block;
  if ( !Block )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_17;
    v3 = 591;
    goto LABEL_4;
  }
  Block = *(_QWORD *)Block;
  if ( Block )
  {
    if ( v1[1] )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Block + 40LL))(Block, v1[2]);
      v2 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 597, v4);
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
        v3 = 593;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v3 = 592;
LABEL_4:
      Template_qqq(Block, &MinInput_Warning_CheckResult, 0, v3, 87);
    }
  }
LABEL_17:
  if ( v1 )
  {
    v6 = v1[1];
    v1[1] = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *v1;
    *v1 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    operator delete(v1);
  }
  return v2;
}
