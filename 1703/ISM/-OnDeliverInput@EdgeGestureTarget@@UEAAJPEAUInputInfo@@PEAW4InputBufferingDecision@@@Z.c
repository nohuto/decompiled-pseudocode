/*
 * XREFs of ?OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x1800240B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x18005E99C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnDeliverInput(
        SessionBasedPointerDeviceArbitration **this,
        struct InputInfo *a2,
        enum InputBufferingDecision *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // r9d

  if ( a2 )
  {
    if ( a3 )
    {
      v5 = SessionBasedPointerDeviceArbitration::OnInputReport(this[9], a2);
      v6 = v5;
      if ( v5 >= 0 )
      {
        if ( *((_DWORD *)this + 10) == 2 )
        {
          *(_DWORD *)a3 = *((_DWORD *)this + 11) != 0 ? 3 : 0;
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[9] + 2) + 32LL))(*((_QWORD *)this[9] + 2));
          v6 = v5;
          if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v7 = 291;
            goto LABEL_19;
          }
        }
        else if ( *((_DWORD *)this + 10) )
        {
          *(_DWORD *)a3 = 0;
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[9] + 2) + 32LL))(*((_QWORD *)this[9] + 2));
          v6 = v5;
          if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v7 = 327;
            goto LABEL_19;
          }
        }
        else
        {
          *(_DWORD *)a3 = 2 - (*((_DWORD *)this + 11) != 0);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 268;
        goto LABEL_19;
      }
    }
    else
    {
      LOBYTE(v5) = 87;
      v6 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 266;
        goto LABEL_19;
      }
    }
  }
  else
  {
    LOBYTE(v5) = 87;
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 265;
LABEL_19:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v5);
    }
  }
  return v6;
}
