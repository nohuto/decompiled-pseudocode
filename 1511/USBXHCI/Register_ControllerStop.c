/*
 * XREFs of Register_ControllerStop @ 0x1C0004D34
 * Callers:
 *     Controller_D0Exit @ 0x1C000467C (Controller_D0Exit.c)
 *     Register_BiosHandoff @ 0x1C00070E4 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebx
  _DWORD *v4; // r14
  int i; // edi
  signed __int32 v7[8]; // [rsp+0h] [rbp-58h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x36u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
  v3 = 0;
  if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v4 = *(_DWORD **)(a1 + 32);
    *v4 &= ~1u;
    _InterlockedOr(v7, 0);
    for ( i = 16; ; --i )
    {
      if ( (v4[1] & 1) != 0 )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v2,
          5,
          55,
          (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
          16 - i,
          1);
        return v3;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      v2,
      5,
      56,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
      16);
    return (unsigned int)-1073741823;
  }
  return v3;
}
