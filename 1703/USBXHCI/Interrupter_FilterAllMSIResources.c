/*
 * XREFs of Interrupter_FilterAllMSIResources @ 0x1C0055514
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C004DE30 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_FilterAllMSIResources(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // r13
  unsigned int v4; // edi
  __int64 v5; // r15
  int v7; // r12d
  unsigned int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v13; // [rsp+28h] [rbp-80h]
  __int64 v14; // [rsp+30h] [rbp-78h]
  _OWORD v16[2]; // [rsp+48h] [rbp-60h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = a2;
LABEL_2:
  if ( v4 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2320))(
              WdfDriverGlobals,
              v5) )
  {
    v7 = 0;
    v8 = 0;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2328))(
           WdfDriverGlobals,
           v5,
           v4);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v8 >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2384))(
                     WdfDriverGlobals,
                     v9) )
        {
          v5 = a2;
          if ( v7 )
          {
            ++v4;
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2336))(
              WdfDriverGlobals,
              a2,
              v4);
            LODWORD(v13) = v4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
              4u,
              8u,
              0x31u,
              (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
              v13);
          }
          goto LABEL_2;
        }
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2392))(
                WdfDriverGlobals,
                v9,
                v8);
        if ( *(_BYTE *)(v10 + 1) == 2 )
          break;
LABEL_6:
        ++v8;
      }
      if ( (*(_BYTE *)(v10 + 4) & 3) != 3 )
      {
        v16[0] = *(_OWORD *)v10;
        v11 = *(_OWORD *)(v10 + 16);
        LOBYTE(v16[0]) = 0;
        v16[1] = v11;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD))(WdfFunctions_01015 + 2376))(
          WdfDriverGlobals,
          v9,
          v16,
          v8);
        LODWORD(v14) = v8;
        LODWORD(v13) = v4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          8u,
          0x30u,
          (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
          v13,
          v14);
        ++v7;
        v3 = 1;
        goto LABEL_6;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2400))(
        WdfDriverGlobals,
        v9,
        v8);
      LODWORD(v14) = v8;
      LODWORD(v13) = v4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        8u,
        0x2Fu,
        (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
        v13,
        v14);
    }
  }
  if ( !v3 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      8u,
      0x32u,
      (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
    return (unsigned int)-1073741823;
  }
  return v2;
}
