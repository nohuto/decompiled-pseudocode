/*
 * XREFs of Register_WaitForControllerReady @ 0x1C0005AFC
 * Callers:
 *     Register_ControllerReset @ 0x1C0005790 (Register_ControllerReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 */

__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebx
  __int64 v4; // r14
  int v5; // esi
  char i; // bp
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x41u,
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
  v3 = 0;
  if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = 100;
    for ( i = 0; ; i += 100 )
    {
      if ( (*(_DWORD *)(v4 + 4) & 0x800) == 0 )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v2,
          5,
          66,
          (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
          i);
        return v3;
      }
      if ( !v5 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v5;
    }
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      v2,
      5,
      67,
      (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
      16);
    return (unsigned int)-1073741823;
  }
  return v3;
}
