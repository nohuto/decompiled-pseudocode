/*
 * XREFs of Register_PrepareHardware @ 0x1C004ED78
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004C600 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     Register_BiosHandoff @ 0x1C0006044 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0006120 (Register_ControllerReset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Register_ParseCapabilityRegister @ 0x1C004EF20 (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  unsigned __int16 v10; // r9
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]

  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2432))(
              WdfDriverGlobals,
              a2);
        ++i )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
           WdfDriverGlobals,
           a2,
           i);
    if ( *(_BYTE *)v5 == 3 )
    {
      LODWORD(v11) = i;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        5u,
        0xCu,
        (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
        v11);
      LODWORD(v14) = *(_DWORD *)(v5 + 12);
      LODWORD(v13) = *(_DWORD *)(v5 + 4);
      LODWORD(v12) = *(_DWORD *)(v5 + 8);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        5u,
        0xDu,
        (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
        v12,
        v13,
        v14);
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v6 = MmMapIoSpaceEx(*(_QWORD *)(v5 + 4), *(unsigned int *)(v5 + 12), 516LL);
        *(_QWORD *)(a1 + 24) = v6;
        if ( !v6 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            2u,
            5u,
            0xEu,
            (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids);
          v8 = -1073741670;
          goto LABEL_12;
        }
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(v5 + 12);
        *(_BYTE *)(a1 + 16) = 1;
        LODWORD(v13) = *(_DWORD *)(a1 + 20);
        WPP_RECORDER_SF_qd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          5u,
          0xFu,
          (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
          v6,
          v13);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = Register_ParseCapabilityRegister(a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      v10 = 17;
    }
    else
    {
      v7 = Register_BiosHandoff((_QWORD *)a1);
      v8 = v7;
      if ( v7 < 0 )
      {
        v10 = 18;
      }
      else
      {
        v7 = Register_ControllerReset(a1, 0);
        v8 = v7;
        if ( v7 >= 0 )
          goto LABEL_12;
        v10 = 19;
      }
    }
    LODWORD(v11) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      3u,
      5u,
      v10,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
      v11);
  }
  else
  {
    v8 = -1073741670;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      0x10u,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids);
  }
LABEL_12:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      0x14u,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids);
    return (unsigned int)-1073741823;
  }
  return v8;
}
