/*
 * XREFs of ?GetDisplayInformation@MouseProcessor@@AEAAJXZ @ 0x180059AB8
 * Callers:
 *     ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180058E80 (-OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z @ 0x18005A018 (-BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::GetDisplayInformation(MouseProcessor *this)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  struct IInputDisplay *v7; // rbx
  struct IInputDisplay *v8; // rcx
  struct IInputDisplay *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IInputDisplay **))(*(_QWORD *)v2 + 80LL))(
         v2,
         *((_QWORD *)this + 4),
         &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_23;
    v6 = 716;
    goto LABEL_22;
  }
  v7 = v10;
  if ( v10 != *((struct IInputDisplay **)this + 5) )
  {
    if ( v10 )
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v10 + 8LL))(v10);
    v4 = *((_QWORD *)this + 5);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 5) = v7;
    if ( *((_BYTE *)this + 568) )
    {
      v3 = MouseAccelerator::BuildAccelerationCurve((MouseProcessor *)((char *)this + 288), v7);
      v5 = v3;
      if ( v3 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_23;
        v6 = 726;
        goto LABEL_22;
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 64LL))(*((_QWORD *)this + 31));
    v3 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 5) + 32LL))(
           *((_QWORD *)this + 5),
           (char *)this + 200,
           (char *)this + 204);
    v5 = v3;
    if ( v3 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_23;
      v6 = 738;
      goto LABEL_22;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           (char *)this + 208,
           (char *)this + 212);
    v5 = v3;
    if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 739;
LABEL_22:
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v6, v3);
    }
  }
  else
  {
    v5 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 733, 3);
  }
LABEL_23:
  v8 = v10;
  v10 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v8 + 16LL))(v8);
  return v5;
}
