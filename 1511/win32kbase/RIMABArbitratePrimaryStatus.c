/*
 * XREFs of RIMABArbitratePrimaryStatus @ 0x1C00D3F3C
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 *     RIMABAddBoostSource @ 0x1C00D3EA8 (RIMABAddBoostSource.c)
 *     RIMABRessurectPenDevice @ 0x1C00D44EC (RIMABRessurectPenDevice.c)
 * Callees:
 *     IsIsPointerInputTypeRedirectedSupported_0 @ 0x1C0002D50 (IsIsPointerInputTypeRedirectedSupported_0.c)
 *     IsPointerInputTypeRedirected_0 @ 0x1C0002D58 (IsPointerInputTypeRedirected_0.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMGetPointerInputType @ 0x1C00C4D7C (RIMGetPointerInputType.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C4F70 (RIMIsFrameReportingPointerDevice.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00C554C (RIMUpdatePrimaryDevice.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 *     sub_1C00D3D40 @ 0x1C00D3D40 (sub_1C00D3D40.c)
 *     RIMICUpdateDeadZone @ 0x1C00D4C10 (RIMICUpdateDeadZone.c)
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
    result = *(_QWORD *)(v6 + 712);
    if ( *(_DWORD *)(result + 56) )
      return result;
  }
  RIMGetPointerInputType(v6);
  if ( (int)IsIsPointerInputTypeRedirectedSupported_0() < 0 )
    v8 = 0;
  else
    v8 = IsPointerInputTypeRedirected_0();
  v9 = *(_QWORD *)(a1 + 600);
  if ( !v9 )
  {
    result = sub_1C00D3D40(a1, a2, v4);
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
          (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
        result = RIMICUpdateDeadZone(a1, a2);
      }
    }
LABEL_23:
    if ( !v10 )
      return result;
    goto LABEL_24;
  }
  result = *(unsigned int *)(a2 + 1492);
  v11 = *(_DWORD *)(v9 + 1492);
  if ( (int)result > v11 )
  {
    v13 = *(_DWORD *)(a2 + 1492);
    v12 = *(_DWORD *)(v9 + 1492);
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      4u,
      0x16u,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids,
      v12,
      v13);
    if ( gFastSwitchingEnabled && (unsigned int)(*(_DWORD *)(a2 + 24) - 6) <= 1 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x17u,
        (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
      RIMICUpdateDeadZone(a1, a2);
    }
LABEL_24:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x18u,
      (__int64)&WPP_746cccc7ccbdb71cc07ee6fb0ef29515_Traceguids);
    return RIMUpdatePrimaryDevice(a1, a2, v4, v8);
  }
  if ( (_DWORD)result != v11 )
    return result;
  if ( !*(_DWORD *)(a1 + 612) )
  {
    result = *(_QWORD *)(a2 + 696);
    if ( (*(_DWORD *)(2400 * v4 + result + 2392) & 2) == 0 )
      goto LABEL_20;
LABEL_22:
    v10 = 1;
    goto LABEL_23;
  }
  result = *(_QWORD *)(v9 + 696);
  if ( (*(_DWORD *)(2400LL * *(unsigned int *)(a1 + 608) + result + 2392) & 0x20) != 0 )
    goto LABEL_22;
LABEL_20:
  if ( *(_DWORD *)(a1 + 616) && !v8 )
    goto LABEL_22;
  return result;
}
