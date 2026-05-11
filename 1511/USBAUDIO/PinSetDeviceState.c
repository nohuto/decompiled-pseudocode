/*
 * XREFs of PinSetDeviceState @ 0x1C0014B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qddd @ 0x1C0001CEC (WPP_RECORDER_SF_qddd.c)
 *     WmiLogStreamStateChange @ 0x1C000216C (WmiLogStreamStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     IncrementActivePinCount @ 0x1C00149BC (IncrementActivePinCount.c)
 *     DecrementActivePinCount @ 0x1C0014A94 (DecrementActivePinCount.c)
 */

__int64 __fastcall PinSetDeviceState(struct _KSPIN *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *Context; // r14
  int active; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-38h]

  Context = a1->Context;
  if ( a2 != 3 || a3 == 3 || (active = IncrementActivePinCount(a1), active >= 0) )
  {
    active = (*(__int64 (__fastcall **)(struct _KSPIN *, _QWORD, _QWORD))(*(_QWORD *)(Context[16] + 128LL) + 48LL))(
               a1,
               a3,
               a2);
    if ( active < 0 )
    {
      if ( a2 == 3 && a3 != 3 )
        goto LABEL_10;
    }
    else if ( a2 != 3 && a3 == 3 )
    {
LABEL_10:
      active = DecrementActivePinCount(a1);
    }
  }
  WmiLogStreamStateChange(a3, a2, active);
  WPP_RECORDER_SF_qddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v12);
  return (unsigned int)active;
}
