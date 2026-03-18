/*
 * XREFs of Register_BiosHandoff @ 0x1C0003A68
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_PrepareHardware @ 0x1C0049B90 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C0001F04 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Etw_StartDeviceFail @ 0x1C0032F0C (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_BiosHandoff(_QWORD *a1)
{
  __int64 v1; // rsi
  int v3; // edi
  int i; // r15d
  __int64 v5; // rcx
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  unsigned int v8; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1[8];
  if ( v1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 64LL),
      4u,
      5u,
      0x2Fu,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
    *(_BYTE *)(v1 + 3) |= 1u;
    _InterlockedOr(v16, 0);
    v3 = 20;
    for ( i = 0; ; i += 100 )
    {
      if ( (*(_BYTE *)(v1 + 2) & 1) == 0 )
      {
        v5 = a1[1];
        v6 = 48;
        LODWORD(v17) = i;
        v7 = 4;
LABEL_5:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 64),
          v7,
          5u,
          v6,
          (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
          v17);
        goto LABEL_6;
      }
      if ( !v3 )
        break;
      --v3;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v5 = a1[1];
    if ( (*(_QWORD *)(v5 + 232) & 4) != 0 )
    {
      v6 = 49;
      LODWORD(v17) = 2000;
      v7 = 3;
      goto LABEL_5;
    }
    v10 = *(_QWORD *)(v5 + 64);
    LODWORD(v17) = 2000;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x32u, (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids, v17);
    v12 = 1LL;
    goto LABEL_19;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 64LL), 3u, 5u, 0x2Eu, (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
LABEL_6:
  if ( (*(_DWORD *)(a1[4] + 4LL) & 1) == 0 )
  {
    v13 = a1[1];
    if ( *(__int64 *)(v13 + 232) < 0 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v13 + 64), 2u, 5u, 0x33u, (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
      v12 = 2LL;
LABEL_19:
      Etw_StartDeviceFail(a1[1], v11, v12);
      return (unsigned int)-1073741823;
    }
    WPP_RECORDER_SF_(*(_QWORD *)(v13 + 64), 2u, 5u, 0x34u, (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
    v14 = Register_ControllerStop((__int64)a1);
    v8 = v14;
    if ( v14 < 0 )
    {
      v15 = a1[1];
      LODWORD(v17) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v15 + 64),
        2u,
        5u,
        0x35u,
        (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
        v17);
      return v8;
    }
  }
  if ( v1 )
  {
    *(_DWORD *)(v1 + 4) &= 0x1FFFDFFFu;
    _InterlockedOr(v16, 0);
  }
  return 0;
}
