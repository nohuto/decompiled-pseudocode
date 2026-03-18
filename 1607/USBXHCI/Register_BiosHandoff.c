/*
 * XREFs of Register_BiosHandoff @ 0x1C0005A28
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_PrepareHardware @ 0x1C004CB40 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C00041E0 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     Etw_StartDeviceFail @ 0x1C00343FC (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_BiosHandoff(_QWORD *a1)
{
  __int64 v1; // rsi
  int v3; // edx
  int v4; // edi
  int i; // r15d
  __int64 v6; // rcx
  int v7; // r9d
  unsigned int v8; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  signed __int32 v15[8]; // [rsp+0h] [rbp-68h] BYREF
  int v16; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v1 = a1[8];
  if ( v1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 64LL),
      4u,
      5u,
      0x2Fu,
      (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
    *(_BYTE *)(v1 + 3) |= 1u;
    _InterlockedOr(v15, 0);
    v4 = 20;
    for ( i = 0; ; i += 100 )
    {
      if ( (*(_BYTE *)(v1 + 2) & 1) == 0 )
      {
        v6 = a1[1];
        v7 = 48;
        v16 = i;
        LOBYTE(v3) = 4;
LABEL_5:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 64),
          v3,
          5,
          v7,
          (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
          v16);
        goto LABEL_6;
      }
      if ( !v4 )
        break;
      --v4;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v6 = a1[1];
    v17 = *(_OWORD *)(v6 + 232);
    if ( (v17 & 4) != 0 )
    {
      v7 = 49;
      v16 = 2000;
      LOBYTE(v3) = 3;
      goto LABEL_5;
    }
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 64), v3, 5, 50, (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids, 208);
    v11 = 1LL;
    goto LABEL_19;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 64LL), 3u, 5u, 0x2Eu, (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
LABEL_6:
  if ( (*(_DWORD *)(a1[4] + 4LL) & 1) == 0 )
  {
    v12 = a1[1];
    v18 = *(_OWORD *)(v12 + 232);
    if ( (__int64)v18 < 0 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v12 + 64), 2u, 5u, 0x33u, (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
      v11 = 2LL;
LABEL_19:
      Etw_StartDeviceFail(a1[1], v10, v11);
      return (unsigned int)-1073741823;
    }
    WPP_RECORDER_SF_(*(_QWORD *)(v12 + 64), 2u, 5u, 0x34u, (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
    v13 = Register_ControllerStop((__int64)a1);
    v8 = v13;
    if ( v13 < 0 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 64LL),
        v14,
        5,
        53,
        (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
        v13);
      return v8;
    }
  }
  if ( v1 )
  {
    *(_DWORD *)(v1 + 4) &= 0x1FFFDFFFu;
    _InterlockedOr(v15, 0);
  }
  return 0;
}
