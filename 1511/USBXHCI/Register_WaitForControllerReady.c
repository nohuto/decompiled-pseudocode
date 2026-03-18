/*
 * XREFs of Register_WaitForControllerReady @ 0x1C0007338
 * Callers:
 *     Register_ControllerReset @ 0x1C00071C0 (Register_ControllerReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 */

__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  int v4; // esi
  int i; // ebp
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x41u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
  v2 = 0;
  if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = 100;
    for ( i = 0; ; i += 100 )
    {
      if ( (*(_DWORD *)(v3 + 4) & 0x800) == 0 )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          5u,
          0x42u,
          (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
          i);
        return v2;
      }
      if ( !v4 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v4;
    }
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      0x43u,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
      10000);
    return (unsigned int)-1073741823;
  }
  return v2;
}
