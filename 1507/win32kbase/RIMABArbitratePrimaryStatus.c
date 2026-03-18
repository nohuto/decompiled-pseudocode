/*
 * XREFs of RIMABArbitratePrimaryStatus @ 0x1C00D2118
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 *     RIMABAddBoostSource @ 0x1C00D2084 (RIMABAddBoostSource.c)
 *     RIMABRessurectPenDevice @ 0x1C00D26C8 (RIMABRessurectPenDevice.c)
 * Callees:
 *     IsIsPointerInputTypeRedirectedSupported_0 @ 0x1C0002D20 (IsIsPointerInputTypeRedirectedSupported_0.c)
 *     IsPointerInputTypeRedirected_0 @ 0x1C0002D28 (IsPointerInputTypeRedirected_0.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMGetPointerInputType @ 0x1C00C3EE8 (RIMGetPointerInputType.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C40DC (RIMIsFrameReportingPointerDevice.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00C46B4 (RIMUpdatePrimaryDevice.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C6E5C (WPP_RECORDER_SF_dd.c)
 *     rimCanContactBePrimary @ 0x1C00D1F1C (rimCanContactBePrimary.c)
 *     RIMICUpdateDeadZone @ 0x1C00D2DF0 (RIMICUpdateDeadZone.c)
 */

__int64 __fastcall RIMABArbitratePrimaryStatus(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // ebp
  __int64 v9; // rdx
  int v10; // esi
  int v11; // ecx
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-28h]

  v4 = a3;
  if ( (unsigned int)RIMIsFrameReportingPointerDevice(a2) )
  {
    result = *(_QWORD *)(v6 + 696);
    if ( *(_DWORD *)(result + 56) )
      return result;
  }
  RIMGetPointerInputType(v6);
  if ( (int)IsIsPointerInputTypeRedirectedSupported_0() < 0 )
    v8 = 0;
  else
    v8 = IsPointerInputTypeRedirected_0();
  v9 = *(_QWORD *)(a1 + 568);
  if ( !v9 )
  {
    result = rimCanContactBePrimary(a1, a2, v4);
    v10 = result;
    if ( !(_DWORD)result )
      return result;
    if ( gFastSwitchingEnabled )
    {
      if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 6) <= 1 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x15u,
          (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
        result = RIMICUpdateDeadZone(a1, a2);
      }
    }
LABEL_23:
    if ( !v10 )
      return result;
    goto LABEL_24;
  }
  result = *(unsigned int *)(a2 + 1476);
  v11 = *(_DWORD *)(v9 + 1476);
  if ( (int)result > v11 )
  {
    v13 = *(_DWORD *)(a2 + 1476);
    v12 = *(_DWORD *)(v9 + 1476);
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      4u,
      0x16u,
      (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids,
      v12,
      v13);
    if ( gFastSwitchingEnabled && (unsigned int)(*(_DWORD *)(a2 + 24) - 6) <= 1 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x17u,
        (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
      RIMICUpdateDeadZone(a1, a2);
    }
LABEL_24:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x18u,
      (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
    return RIMUpdatePrimaryDevice(a1, a2, v4, v8);
  }
  if ( (_DWORD)result != v11 )
    return result;
  if ( !*(_DWORD *)(a1 + 580) )
  {
    result = *(_QWORD *)(a2 + 680);
    if ( (*(_DWORD *)(2400 * v4 + result + 2392) & 2) == 0 )
      goto LABEL_20;
LABEL_22:
    v10 = 1;
    goto LABEL_23;
  }
  result = *(_QWORD *)(v9 + 680);
  if ( (*(_DWORD *)(2400LL * *(unsigned int *)(a1 + 576) + result + 2392) & 0x20) != 0 )
    goto LABEL_22;
LABEL_20:
  if ( *(_DWORD *)(a1 + 584) && !v8 )
    goto LABEL_22;
  return result;
}
