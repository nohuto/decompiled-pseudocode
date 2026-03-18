/*
 * XREFs of Register_WaitForControllerReady @ 0x1C0003CC0
 * Callers:
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // dl
  int v4; // ebp
  __int64 v5; // rsi
  int v6; // edi
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x41u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(*(_QWORD *)(v2 + 80) + 16LL);
  if ( !v3 || *(_BYTE *)(v2 + 285) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 64),
      2u,
      3u,
      0xD7u,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      v3,
      *(unsigned __int8 *)(v2 + 285));
    return 0LL;
  }
  else
  {
    v4 = 100;
    v5 = *(_QWORD *)(a1 + 32);
    v6 = 0;
    if ( (*(_DWORD *)(v5 + 4) & 0x800) != 0 )
    {
      while ( v4 )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        --v4;
        v6 += 100;
        if ( (*(_DWORD *)(v5 + 4) & 0x800) == 0 )
          goto LABEL_4;
      }
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        2u,
        5u,
        0x43u,
        (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
        10000);
      return 3221225473LL;
    }
    else
    {
LABEL_4:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        5u,
        0x42u,
        (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
        v6);
      return 0LL;
    }
  }
}
