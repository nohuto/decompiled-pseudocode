/*
 * XREFs of PinGoToLowPowerState @ 0x1C0014270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PinGoToLowPowerState(PKSPIN Pin, unsigned int State)
{
  _QWORD *Context; // rbp
  int v5; // ebx
  __int64 (__fastcall *v6)(PKSPIN, _QWORD); // rsi
  unsigned int v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-28h]

  Context = Pin->Context;
  v5 = 0;
  v6 = *(__int64 (__fastcall **)(PKSPIN, _QWORD))(*(_QWORD *)(Context[16] + 128LL) + 40LL);
  v7 = State - 1;
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0xAu,
    (__int64)&WPP_f607821aa81e8dd9b89bc5fa497d19ab_Traceguids,
    Pin,
    v7);
  if ( *((_BYTE *)Context + 152) )
  {
    if ( v6 )
      v5 = v6(Pin, State);
    *((_BYTE *)Context + 152) = 0;
    if ( v5 < 0 )
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0xBu,
        (__int64)&WPP_f607821aa81e8dd9b89bc5fa497d19ab_Traceguids,
        Pin,
        v8);
    }
  }
}
