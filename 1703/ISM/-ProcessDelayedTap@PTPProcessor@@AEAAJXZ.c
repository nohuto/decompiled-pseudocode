/*
 * XREFs of ?ProcessDelayedTap@PTPProcessor@@AEAAJXZ @ 0x18005BED8
 * Callers:
 *     ?ProcessDelayedTapStatic@PTPProcessor@@SAJPEAX@Z @ 0x18005B3B0 (-ProcessDelayedTapStatic@PTPProcessor@@SAJPEAX@Z.c)
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18005BFE8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::ProcessDelayedTap(PTPProcessor *this)
{
  struct InputInfo *v2; // rsi
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rcx

  if ( !*((_BYTE *)this + 672) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 11, 632, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v2 = (PTPProcessor *)((char *)this + 680);
  v3 = PTPProcessor::DeliverMouseMessage(this, (PTPProcessor *)((char *)this + 680), 1u, 1);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v3 = PTPProcessor::DeliverMouseMessage(this, v2, 2u, 0);
    v5 = v3;
    if ( v3 >= 0 )
    {
      v7 = *((_QWORD *)this + 83);
      *((_BYTE *)this + 672) = 0;
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
      v5 = v3;
      if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 638;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 636;
      goto LABEL_16;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 635;
LABEL_16:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 11, v6, v3);
  }
  return v5;
}
